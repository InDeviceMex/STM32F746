/*
 * DMA.c
 *
 *  Created on: 12 ago. 2018
 *      Author: InDev
 */

#include "DMA.h"

uint32_t DMA2Stream0busy=1;


uint32_t DMA2_Stream0_Busy(void)
{
	return DMA2Stream0busy;
}
void DMA2_u8Stream0_Init(void)
{
	  DMA2_Stream0_CR->EN=0;
	  while(DMA2_Stream0_CR->EN)
	  {};
	  DMA2_Stream0_CR->CHSEL=0;
	  DMA2_Stream0_CR->PL=2;

	  DMA2_Stream0_CR->PBURST=3;
	  DMA2_Stream0_CR->MBURST=3;
	  DMA2_Stream0_CR->PINCOS=0;
	  DMA2_Stream0_CR->MSIZE=0;
	  DMA2_Stream0_CR->PSIZE=0;
	  DMA2_Stream0_CR->PINC=1;
	  DMA2_Stream0_CR->MINC=1;
	  DMA2_Stream0_CR->PFCTRL=0;
	  DMA2_Stream0_CR->DIR=2;
	  DMA2_Stream0_FCR->DMDIS=1;
	  DMA2_Stream0_FCR->FTH=3;

	  DMA2_Stream0_CR->TCIE=1;
	  NVIC_ISER1->NVIC_DMA2_Stream0=1;
	  NVIC_IPR14->NVIC_DMA2_Stream0=NVIC_PRIORITY_DMA2_Stream0;

}

void DMA2_u16Stream0_Init(void)
{
	  DMA2_Stream0_CR->EN=0;
	  while(DMA2_Stream0_CR->EN)
	  {};
	  DMA2_Stream0_CR->CHSEL=0;
	  DMA2_Stream0_CR->PL=2;

	  DMA2_Stream0_CR->PBURST=1;
	  DMA2_Stream0_CR->MBURST=1;
	  DMA2_Stream0_CR->PINCOS=0;
	  DMA2_Stream0_CR->MSIZE=1;
	  DMA2_Stream0_CR->PSIZE=1;
	  DMA2_Stream0_CR->PINC=1;
	  DMA2_Stream0_CR->MINC=1;
	  DMA2_Stream0_CR->PFCTRL=0;
	  DMA2_Stream0_CR->DIR=2;
	  DMA2_Stream0_FCR->DMDIS=1;
	  DMA2_Stream0_FCR->FTH=3;

	  DMA2_Stream0_CR->TCIE=1;
	  NVIC_ISER1->NVIC_DMA2_Stream0=1;
	  NVIC_IPR14->NVIC_DMA2_Stream0=NVIC_PRIORITY_DMA2_Stream0;

}
void DMA2_Mem2Mem(uint32_t mem1, uint32_t mem2,uint16_t size)
{

	//CACHE_DisableICache();
	//CACHE_DisableDCache();

	DMA2Stream0busy=1;
	  DMA2_Stream0_PAR_R=(uint32_t)mem1;
	  DMA2_Stream0_M0AR_R=(uint32_t)mem2;
	DMA2_Stream0_NDTR_R=size;
	DMA2_LIFCR->CDMEIF1=1;
	DMA2_LIFCR->CFEIF1=1;
	DMA2_LIFCR->CHTIF1=1;
	DMA2_LIFCR->CTCIF1=1;
	DMA2_LIFCR->CTEIF1=1;
	DMA2_Stream0_CR->EN=1;
	while(DMA2_Stream0_Busy());


}


__attribute__((section(".itcmram")))
void DMA2_Stream0_IRQHandler(void)
{
	if(DMA2_LISR->TCIF0)
	{
		DMA2_LIFCR->CTCIF0=1;
		DMA2_LISR->TCIF0;
		DMA2Stream0busy=0;
	}

}
