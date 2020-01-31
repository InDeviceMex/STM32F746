/*
 * I2C.c
 *
 *  Created on: 24/09/2018
 *      Author: InDev
 */



#include "I2C.h"

#define I2C2DEV 16
#define I2C2MAX 30
int32_t I2C2c=0;
int32_t I2C2dire[I2C2DEV];
int32_t I2C2cant[I2C2DEV];
int32_t* I2C2DatRX[I2C2DEV];
int32_t* I2C2DatTX[I2C2DEV];
int32_t I2C2dispA=0;
int32_t I2C2busyTx=0;
int32_t I2C2busyRx=0;
int32_t I2C2busyNack=0;


uint32_t I2C2_Init(void)
{
	uint32_t delay=0;

	RCC_AHB1ENR->GPIOBEN=1;
	RCC_APB1ENR->I2C2EN=1;
	delay=RCC_APB1ENR->I2C2EN;

	RCC_DCKCFGR2->I2C2SEL=0;




	//PB10 SCL
	GPIOB_MODER->MODER10=2;
	GPIOB_OTYPER->OTYPER10=1;
	GPIOB_OSPEEDR->OSPEEDR10=0;
	GPIOB_PUPDR->PUPDR10=1;
	GPIOB_AFRH->AFR10=4;

	//PB11 SDA
	GPIOB_MODER->MODER11=2;
	GPIOB_OTYPER->OTYPER11=1;
	GPIOB_OSPEEDR->OSPEEDR11=0;
	GPIOB_PUPDR->PUPDR11=1;
	GPIOB_AFRH->AFR11=4;

	I2C2_CR1->PE=0;
	I2C2_CR1->ANFOFF=0;


	I2C2_TIMINGR->PRESC=4; //(4+1)/50000000=0.1us
	I2C2_TIMINGR->SCLL=13;//tscll=0.1us*14=1.4us
	I2C2_TIMINGR->SCLH=6; //tsclh=0.1us*7=0.7us
	I2C2_TIMINGR->SCLDEL=1;//setup  0.1us*2= 0.2us
	I2C2_TIMINGR->SDADEL=2;//hold   0.1*2= 0.2us total= 1.4+0.7+0.2+0.2=2.5us = 400KHz


	I2C2_CR2->ADD10=0;

	I2C2_CR1->DNF=3;
	I2C2_CR1->TXDMAEN=1;
	I2C2_CR1->RXDMAEN=1;

	RCC_AHB1ENR->DMA1EN=1;
	DMA1_Stream7_CR->EN=0;
	while(DMA1_Stream7_CR->EN){} //Tx
	DMA1_Stream3_CR->EN=0;
	while(DMA1_Stream3_CR->EN){} //Rx

	DMA1_LIFCR->CDMEIF3=1;
	DMA1_LIFCR->CFEIF3=1;
	DMA1_LIFCR->CHTIF3=1;
	DMA1_LIFCR->CTCIF3=1;
	DMA1_LIFCR->CTEIF3=1;

	DMA1_HIFCR->CDMEIF7=1;
	DMA1_HIFCR->CFEIF7=1;
	DMA1_HIFCR->CHTIF7=1;
	DMA1_HIFCR->CTCIF7=1;
	DMA1_HIFCR->CTEIF7=1;

	DMA1_Stream7_PAR_R=(uint32_t)(I2C_TXDR_OFFSET+I2C2_BASE);
	DMA1_Stream7_M0AR_R=(uint32_t)I2C2DatTX[0];
	DMA1_Stream7_NDTR_R=40;
	DMA1_Stream7_CR->CHSEL=7;
	DMA1_Stream7_CR->PL=2;


	DMA1_Stream3_PAR_R=(uint32_t)(I2C_RXDR_OFFSET+I2C2_BASE);
	DMA1_Stream3_M0AR_R=(uint32_t)I2C2DatRX[0];
	DMA1_Stream3_NDTR_R=40;
	DMA1_Stream3_CR->CHSEL=7;
	DMA1_Stream3_CR->PL=2;

	DMA1_Stream7_CR->DIR=1;
	DMA1_Stream7_CR->PFCTRL=0;
	DMA1_Stream7_CR->PBURST=0;
	DMA1_Stream7_CR->MBURST=0;
	DMA1_Stream7_CR->PINCOS=0;
	DMA1_Stream7_CR->MSIZE=0;
	DMA1_Stream7_CR->PSIZE=0;
	DMA1_Stream7_CR->PINC=0;
	DMA1_Stream7_CR->MINC=1;
	DMA1_Stream7_FCR->DMDIS=0;
	DMA1_Stream7_FCR->FTH=0;

	DMA1_Stream3_CR->DIR=0;
	DMA1_Stream3_CR->PFCTRL=0;
	DMA1_Stream3_CR->PBURST=0;
	DMA1_Stream3_CR->MBURST=0;
	DMA1_Stream3_CR->PINCOS=0;
	DMA1_Stream3_CR->MSIZE=0;
	DMA1_Stream3_CR->PSIZE=0;
	DMA1_Stream3_CR->PINC=0;
	DMA1_Stream3_CR->MINC=1;
	DMA1_Stream3_FCR->DMDIS=0;
	DMA1_Stream3_FCR->FTH=0;


	DMA1_Stream3_CR->TCIE=1;
	DMA1_Stream7_CR->TCIE=1;

	NVIC_ISER0->NVIC_DMA1_Stream3=1;
	NVIC_IPR3->NVIC_DMA1_Stream3=13;

	NVIC_ISER1->NVIC_DMA1_Stream7=1;
	NVIC_IPR11->NVIC_DMA1_Stream7=13;


	I2C2_CR1->TCIE=1;
	I2C2_CR1->ERRIE=1;
	I2C2_CR1->NACKIE=1;

	NVIC_ISER1->NVIC_I2C2_ER=1;
	NVIC_ISER1->NVIC_I2C2_EV=1;
	NVIC_IPR8->NVIC_I2C2_ER=NVIC_PRIORITY_I2C2_ER;
	NVIC_IPR8->NVIC_I2C2_EV=NVIC_PRIORITY_I2C2_EV;

	I2C2_CR1->PE=1;
	return delay;
}


uint32_t I2C2_SendBytes(uint32_t address,uint32_t nBytes,uint8_t* data)
{

	while(I2C2_ISR->BUSY);
	I2C2busyTx=1;
	DMA1_Stream7_PAR_R=(uint32_t)(I2C_TXDR_OFFSET+I2C2_BASE);
	DMA1_Stream7_M0AR_R=(uint32_t)data;
	DMA1_Stream7_NDTR_R=nBytes;

	I2C2_CR2->SADD=address;
	I2C2_CR2->RD_WRN=0;
	I2C2_CR2->NBYTES=nBytes;
	I2C2_CR2->AUTOEND=1;
	DMA1_Stream7_CR->EN=1;

	I2C2_CR2->START=1;
	while(I2C2busyTx){};
	return 1;
}


uint32_t I2C2_ReadBytes(uint32_t address,uint32_t nBytes,uint8_t* data)
{
	while(I2C2_ISR->BUSY);
	I2C2busyRx=1;
	DMA1_Stream3_PAR_R=(uint32_t)(I2C_RXDR_OFFSET+I2C2_BASE);
	DMA1_Stream3_M0AR_R=(uint32_t)data;
	DMA1_Stream3_NDTR_R=nBytes;

	I2C2_CR2->SADD=address;
	I2C2_CR2->RD_WRN=1;
	I2C2_CR2->NBYTES=nBytes;
	I2C2_CR2->AUTOEND=1;
	DMA1_Stream3_CR->EN=1;

	I2C2_CR2->START=1;
	while(I2C2busyRx){};
	return 1;
}


__attribute__((section(".itcmram")))
void DMA1_Stream3_IRQHandler(void)
{
	if(DMA1_LISR->TCIF3)
	{
		DMA1_LIFCR->CTCIF3=1;
		I2C2busyRx=0;
	}

}



__attribute__((section(".itcmram")))
void DMA1_Stream7_IRQHandler(void)
{
	if(DMA1_HISR->TCIF7)
	{
		DMA1_HIFCR->CTCIF7=1;
		I2C2busyTx=0;
	}

}

__attribute__((section(".itcmram")))
void I2C2_EV_IRQHandler(void)
{
	if(I2C2_ISR->TC)
	{
		I2C2_CR2->STOP=1;
	}
	if(I2C2_ISR->NACKF)
	{
		I2C2_ICR->NACKCF=1;
		I2C2busyTx=0;
		I2C2busyRx=0;
		I2C2busyNack=1;
	}


}


__attribute__((section(".itcmram")))
void I2C2_ER_IRQHandler(void)
{

	if(I2C2_ISR->ARLO)
	{

	}
	if(I2C2_ISR->BERR)
	{

	}
	if(I2C2_ISR->OVR)
	{

	}
	if(I2C2_ISR->TIMEOUT)
	{

	}
	if(I2C2_ISR->PECERR)
	{

	}
	if(I2C2_ISR->ALERT)
	{

	}
}
