/*
 * LTDC.c
 *
 *  Created on: 24/08/2018
 *      Author: InDev
 */


#include "LTDC.h"


char string1[10];
uint8_t LTDC_LayerBGX[2]={0};
uint8_t LTDC_LayerBGY[2]={0};
uint8_t LTDC_LayerX[2]={0};
uint8_t LTDC_LayerY[2]={0};
LTDC_TFT_TypeDef* LTDC_Layer_SubLayer[10];


char string2[10];
uint32_t LTDC_LayerBG_BGX[2]={0};//{(1024-640)/2,0};
uint32_t LTDC_LayerBG_BGY[2]={0};//{(600-480)/2,0};
uint32_t LTDC_LayerBG_X[2]={0};
uint32_t LTDC_LayerBG_Y[2]={0};
LTDC_TFT_TypeDef* LTDC_LayerBG_SubLayer[10];

char string3[10];
uint32_t LTDC_LayerFG_BGX[2]={0};
uint32_t LTDC_LayerFG_BGY[2]={0};
uint32_t LTDC_LayerFG_X[2]={0};
uint32_t LTDC_LayerFG_Y[2]={0};
LTDC_TFT_TypeDef* LTDC_LayerFG_SubLayer[10];

//__attribute__((section(".bss4")))
//uint16_t LTDCLayer1[480][640] __attribute__((aligned (1024 * 1024 * 2)));

//__attribute__((section(".bss4")))
//uint16_t LTDCLayer2[480][640] __attribute__((aligned (1024 * 1024 * 2)));

LTDC_TFT_TypeDef LTDC_Layer={
		LTDC_Layer1, 			//Register
		0, 						//layerNum
		LTDC_Layer1_ADDRESS, 	//layerAddress
		0,


		0, //direccion de memoria inicial de la layer
		0, //direccion de memoria inicial de la layer
		0, //direccion de memoria inicial de la layer

		0xF800,					//layerAlphaConstant
		0x001F,					//layerAlphaConstant
		&font16x24,				//layerFont
		string1,

		1024,					//layerWidth
		600,					//layerHeight
		1024,					//layerWidthTotal
		600,					//layerHeightTotal

		2,
		0,
		(uint32_t*)LTDC_LayerBGX,						//layerBGXi
		2,
		0,
		(uint32_t*)LTDC_LayerBGY,						//layerBGYi
		2,
		0,
		(uint32_t*)LTDC_LayerX,						//layerXi
		2,
		0,
		(uint32_t*)LTDC_LayerY,						//layerYi
		0,						//SublayerCreated
		0,	//layerBG
		0,	//layerBG
		LAYER_TYPE_IMAGE_NOHEADER,
		0,
		0,
		LTDC_Layer_SubLayer,
		0,
		10,
		VARIABLETYPE_USHORT,

};

LTDC_TFT_TypeDef LTDC_LayerBG={
		LTDC_Layer1, 			//Register
		0, 						//layerNum
		LTDC_Layer1_ADDRESS, 	//layerAddress
		0,

		0, //direccion de memoria inicial de la layer
		0, //direccion de memoria inicial de la layer
		0, //direccion de memoria inicial de la layer

		0xF800,					//layerAlphaConstant
		0x001F,					//layerAlphaConstant
		&font16x24,				//layerFont
		string2,

		1024,					//layerWidth
		600,					//layerHeight
		1024,					//layerWidthTotal
		600,					//layerHeightTotal

		2,
		0,
		(uint32_t*)LTDC_LayerBG_BGX,						//layerBGXi
		2,
		0,
		(uint32_t*)LTDC_LayerBG_BGY,						//layerBGYi
		2,
		0,
		(uint32_t*)LTDC_LayerBG_X,						//layerXi
		2,
		0,
		(uint32_t*)LTDC_LayerBG_Y,						//layerYi
		0,						//SublayerCreated
		0,	//layerBG
		0,	//layerBG
		LAYER_TYPE_IMAGE_NOHEADER,
		0,
		0,
		LTDC_LayerBG_SubLayer,
		0,
		10,
		VARIABLETYPE_USHORT,

};
LTDC_TFT_TypeDef LTDC_LayerFG={
		LTDC_Layer2, 			//Register
		0, 						//layerNum
		LTDC_Layer2_ADDRESS, 	//layerAddress
		0,

		0, //direccion de memoria inicial de la layer
		0, //direccion de memoria inicial de la layer
		0, //direccion de memoria inicial de la layer

		0xF800,					//layerAlphaConstant
		0x001F,					//layerAlphaConstant
		&font16x24,				//layerFont
		string3,

		1024,					//layerWidth
		600,					//layerHeight
		1024,					//layerWidthTotal
		600,					//layerHeightTotal

		2,
		0,
		(uint32_t*)LTDC_LayerFG_BGX,						//layerBGXi
		2,
		0,
		(uint32_t*)LTDC_LayerFG_BGY,						//layerBGYi
		2,
		0,
		(uint32_t*)LTDC_LayerFG_X,						//layerXi
		2,
		0,
		(uint32_t*)LTDC_LayerFG_Y,						//layerYi
		0,						//SublayerCreated
		0,	//layerBG
		0,	//layerBG
		LAYER_TYPE_IMAGE_NOHEADER,
		0,
		0,
		LTDC_LayerFG_SubLayer,
		0,
		10,
		VARIABLETYPE_USHORT,

};

LTDC_TFT_TypeDef	*LTDC_LayerBGP=&LTDC_LayerBG;
LTDC_TFT_TypeDef	*LTDC_LayerFGP=&LTDC_LayerFG;

uint32_t BGColor=0;
uint32_t BGRedColor=0;
uint32_t BGGreenColor=0;
uint32_t BGBlueColor=0;
uint32_t BGUpdate=0;


int32_t LTDC_Init(void)
{
	uint32_t delay=0;
	RCC_AHB1ENR->GPIOAEN=1;
	RCC_AHB1ENR->GPIOBEN=1;
	RCC_AHB1ENR->GPIOCEN=1;
	RCC_AHB1ENR->GPIODEN=1;
	RCC_AHB1ENR->GPIOEEN=1;
	RCC_AHB1ENR->GPIOFEN=1;
	RCC_AHB1ENR->GPIOGEN=1;
	RCC_AHB1ENR->GPIOHEN=1;
	RCC_AHB1ENR->GPIOIEN=1;
	RCC_APB2ENR->LTDCEN=1;
	delay=RCC_APB2ENR->LTDCEN;

	//PH2 R0
	GPIOH_MODER->MODER2=2;
	GPIOH_OTYPER->OTYPER2=0;
	GPIOH_OSPEEDR->OSPEEDR2=3;
	GPIOH_PUPDR->PUPDR2=0;
	GPIOH_AFRL->AFR2=14;

	//PH3 R1
	GPIOH_MODER->MODER3=2;
	GPIOH_OTYPER->OTYPER3=0;
	GPIOH_OSPEEDR->OSPEEDR3=3;
	GPIOH_PUPDR->PUPDR3=0;
	GPIOH_AFRL->AFR3=14;

	//PH8 R2
	GPIOH_MODER->MODER8=2;
	GPIOH_OTYPER->OTYPER8=0;
	GPIOH_OSPEEDR->OSPEEDR8=3;
	GPIOH_PUPDR->PUPDR8=0;
	GPIOH_AFRH->AFR8=14;

	//PH9 R3
	GPIOH_MODER->MODER9=2;
	GPIOH_OTYPER->OTYPER9=0;
	GPIOH_OSPEEDR->OSPEEDR9=3;
	GPIOH_PUPDR->PUPDR9=0;
	GPIOH_AFRH->AFR9=14;

	//PH10 R4
	GPIOH_MODER->MODER10=2;
	GPIOH_OTYPER->OTYPER10=0;
	GPIOH_OSPEEDR->OSPEEDR10=3;
	GPIOH_PUPDR->PUPDR10=0;
	GPIOH_AFRH->AFR10=14;

	//PC0 R5
	GPIOC_MODER->MODER0=2;
	GPIOC_OTYPER->OTYPER0=0;
	GPIOC_OSPEEDR->OSPEEDR0=3;
	GPIOC_PUPDR->PUPDR0=0;
	GPIOC_AFRL->AFR0=14;

	//PB1 R6
	GPIOB_MODER->MODER1=2;
	GPIOB_OTYPER->OTYPER1=0;
	GPIOB_OSPEEDR->OSPEEDR1=3;
	GPIOB_PUPDR->PUPDR1=0;
	GPIOB_AFRL->AFR1=9;

	//PG6 R7
	GPIOG_MODER->MODER6=2;
	GPIOG_OTYPER->OTYPER6=0;
	GPIOG_OSPEEDR->OSPEEDR6=3;
	GPIOG_PUPDR->PUPDR6=0;
	GPIOG_AFRL->AFR6=14;

	//PE5 G0
	GPIOE_MODER->MODER5=2;
	GPIOE_OTYPER->OTYPER5=0;
	GPIOE_OSPEEDR->OSPEEDR5=3;
	GPIOE_PUPDR->PUPDR5=0;
	GPIOE_AFRL->AFR5=14;

	//PE6 G1
	GPIOE_MODER->MODER6=2;
	GPIOE_OTYPER->OTYPER6=0;
	GPIOE_OSPEEDR->OSPEEDR6=3;
	GPIOE_PUPDR->PUPDR6=0;
	GPIOE_AFRL->AFR6=14;

	//PH13 G2
	GPIOH_MODER->MODER13=2;
	GPIOH_OTYPER->OTYPER13=0;
	GPIOH_OSPEEDR->OSPEEDR13=3;
	GPIOH_PUPDR->PUPDR13=0;
	GPIOH_AFRH->AFR13=14;

	//PG10 G3
	GPIOG_MODER->MODER10=2;
	GPIOG_OTYPER->OTYPER10=0;
	GPIOG_OSPEEDR->OSPEEDR10=3;
	GPIOG_PUPDR->PUPDR10=0;
	GPIOG_AFRH->AFR10=9;

	//PH15 G4
	GPIOH_MODER->MODER15=2;
	GPIOH_OTYPER->OTYPER15=0;
	GPIOH_OSPEEDR->OSPEEDR15=3;
	GPIOH_PUPDR->PUPDR15=0;
	GPIOH_AFRH->AFR15=14;

	//PI0 G5
	GPIOI_MODER->MODER0=2;
	GPIOI_OTYPER->OTYPER0=0;
	GPIOI_OSPEEDR->OSPEEDR0=3;
	GPIOI_PUPDR->PUPDR0=0;
	GPIOI_AFRL->AFR0=14;

	//PI1 G6
	GPIOI_MODER->MODER1=2;
	GPIOI_OTYPER->OTYPER1=0;
	GPIOI_OSPEEDR->OSPEEDR1=3;
	GPIOI_PUPDR->PUPDR0=1;
	GPIOI_AFRL->AFR1=14;

	//PI2 G7
	GPIOI_MODER->MODER2=2;
	GPIOI_OTYPER->OTYPER2=0;
	GPIOI_OSPEEDR->OSPEEDR2=3;
	GPIOI_PUPDR->PUPDR2=0;
	GPIOI_AFRL->AFR2=14;

	//PE4 B0
	GPIOE_MODER->MODER4=2;
	GPIOE_OTYPER->OTYPER4=0;
	GPIOE_OSPEEDR->OSPEEDR4=3;
	GPIOE_PUPDR->PUPDR4=0;
	GPIOE_AFRL->AFR4=14;

	//PG12 B1
	GPIOG_MODER->MODER12=2;
	GPIOG_OTYPER->OTYPER12=0;
	GPIOG_OSPEEDR->OSPEEDR12=3;
	GPIOG_PUPDR->PUPDR12=0;
	GPIOG_AFRH->AFR12=14;

	//PD6 B2
	GPIOD_MODER->MODER6=2;
	GPIOD_OTYPER->OTYPER6=0;
	GPIOD_OSPEEDR->OSPEEDR6=3;
	GPIOD_PUPDR->PUPDR6=0;
	GPIOD_AFRL->AFR6=14;

	//PG11 B3
	GPIOG_MODER->MODER11=2;
	GPIOG_OTYPER->OTYPER11=0;
	GPIOG_OSPEEDR->OSPEEDR11=3;
	GPIOG_PUPDR->PUPDR11=0;
	GPIOG_AFRH->AFR11=14;

	//PI4 B4
	GPIOI_MODER->MODER4=2;
	GPIOI_OTYPER->OTYPER4=0;
	GPIOI_OSPEEDR->OSPEEDR4=3;
	GPIOI_PUPDR->PUPDR4=0;
	GPIOI_AFRL->AFR4=14;

	//PI5 B5
	GPIOI_MODER->MODER5=2;
	GPIOI_OTYPER->OTYPER5=0;
	GPIOI_OSPEEDR->OSPEEDR5=3;
	GPIOI_PUPDR->PUPDR5=0;
	GPIOI_AFRL->AFR5=14;

	//PI6 B6
	GPIOI_MODER->MODER6=2;
	GPIOI_OTYPER->OTYPER6=0;
	GPIOI_OSPEEDR->OSPEEDR6=3;
	GPIOI_PUPDR->PUPDR6=0;
	GPIOI_AFRL->AFR6=14;

	//PI7 B7
	GPIOI_MODER->MODER7=2;
	GPIOI_OTYPER->OTYPER7=0;
	GPIOI_OSPEEDR->OSPEEDR7=3;
	GPIOI_PUPDR->PUPDR7=0;
	GPIOI_AFRL->AFR7=14;

	//PI10 HSYNC
	GPIOI_MODER->MODER10=2;
	GPIOI_OTYPER->OTYPER10=0;
	GPIOI_OSPEEDR->OSPEEDR10=3;
	GPIOI_PUPDR->PUPDR10=0;
	GPIOI_AFRH->AFR10=14;

	//PI9 VSYNC
	GPIOI_MODER->MODER9=2;
	GPIOI_OTYPER->OTYPER9=0;
	GPIOI_OSPEEDR->OSPEEDR9=3;
	GPIOI_PUPDR->PUPDR9=1;
	GPIOI_AFRH->AFR9=14;

	//PF10 DE
	GPIOF_MODER->MODER10=2;
	GPIOF_OTYPER->OTYPER10=0;
	GPIOF_OSPEEDR->OSPEEDR10=3;
	GPIOF_PUPDR->PUPDR10=0;
	GPIOF_AFRH->AFR10=14;

	//PG7 CLK
	GPIOG_MODER->MODER7=2;
	GPIOG_OTYPER->OTYPER7=0;
	GPIOG_OSPEEDR->OSPEEDR7=3;
	GPIOG_PUPDR->PUPDR7=0;
	GPIOG_AFRL->AFR7=14;

	//PA3 PWM
	GPIOA_MODER->MODER3=1;
	GPIOA_OTYPER->OTYPER3=0;
	GPIOA_OSPEEDR->OSPEEDR3=3;
	GPIOA_PUPDR->PUPDR3=0;
	GPIOA_AFRL->AFR3=0;
	GPIOA_ODR->ODR3=0;

	LTDC_GCR->HSPOL=0;
	LTDC_GCR->VSPOL=0;
	LTDC_GCR->PCPOL=0;
	LTDC_GCR->DEPOL=0;


	LTDC_SSCR->HSW=HSWPIX;
	LTDC_SSCR->VSH=VSHPIX;

	LTDC_BPCR->AHBP=AHBPIX;
	LTDC_BPCR->AVBP=AVBPIX;

	LTDC_AWCR->AAW=AAWPIX;
	LTDC_AWCR->AAH=AAHPIX;

	LTDC_TWCR->TOTALW=TOTALWPIX;
	LTDC_TWCR->TOTALH=TOTALHPIX;

	LTDC_BCCR->BCRED=0;
	LTDC_BCCR->BCGREEN=0;
	LTDC_BCCR->BCBLUE=0;

	LTDC_LayerBG_Init();
	LTDC_LayerFG_DeInit();


	LTDC_GCR->DEN=1;

	LTDC_LIPCR->LIPOS=ROWPIX;
	LTDC_IER->LIE=0;
	LTDC_IER->FUIE=1;
	LTDC_IER->TERRIE=1;

	NVIC_ISER2->NVIC_LTDC_ER=1;
	NVIC_ISER2->NVIC_LTDC =1;
	NVIC_IPR22->NVIC_LTDC=NVIC_PRIORITY_LTDC;
	NVIC_IPR22->NVIC_LTDC_ER=NVIC_PRIORITY_LTDC_ER;
	LTDC_GCR->LTDCEN=1;


	return delay;

}

//todo register
void LTDC_LayerBG_Init(void)
{
	uint32_t CM=0;
	uint32_t Mult=0;

	CM=2;
	Mult=2;

	LTDC_Layer1_WHPCR_R=((LTDC_LayerBGP->layerWidth+LTDC_LayerBGP->layerBGX[0] + AHBPIX)<<16)+LTDC_LayerBGP->layerBGX[0]+AHBPIX+1;
	LTDC_Layer1_WVPCR_R=((LTDC_LayerBGP->layerHeight+LTDC_LayerBGP->layerBGY[0] + AVBPIX)<<16)+LTDC_LayerBGP->layerBGY[0]+AVBPIX+1;
	LTDC_Layer1_CKCR_R=(0xFF<<16)|(0xFF<<8)|(0xFF);
	LTDC_Layer1_DCCR_R=LTDC_LayerBGP->layerColorBG;
	LTDC_Layer1_PFCR->PF=CM;
	LTDC_Layer1_CACR->CONSTA=0xFF;
	LTDC_Layer1_BFCR_R=(6<<8)|5;
	LTDC_Layer1_CFBLR_R=((LTDC_LayerBGP->layerWidth * Mult)<<16)|((LTDC_LayerBGP->layerWidth * Mult) + 3);
	LTDC_Layer1_CFBAR->CFBADD=LTDC_LayerBGP->layerDataAddress;
	LTDC_Layer1_CFBLNR->CFBLNBR=LTDC_LayerBGP->layerHeight;

	LTDC_Layer1_CR->LEN=1;
	LTDC_SRCR->IMR=1;
	LTDC_Layer1_CR->COLKEN=0;
	LTDC_SRCR->IMR=1;
}

void LTDC_LayerFG_Init(void)
{
	uint32_t CM=0;
	uint32_t Mult=0;
	CM=2;
	Mult=2;


	LTDC_Layer2_WHPCR_R=((LTDC_LayerFGP->layerWidth+LTDC_LayerFGP->layerBGX[0] + AHBPIX)<<16)+LTDC_LayerFGP->layerBGX[0]+AHBPIX+1;
	LTDC_Layer2_WVPCR_R=((LTDC_LayerFGP->layerHeight+LTDC_LayerFGP->layerBGY[0] + AVBPIX)<<16)+LTDC_LayerFGP->layerBGY[0]+AVBPIX+1;
	LTDC_Layer2_CKCR_R=(0xFF<<16)|(0xFF<<8)|(0xFF);
	LTDC_Layer2_DCCR_R=0;
	LTDC_Layer2_PFCR->PF=CM;
	LTDC_Layer2_CACR->CONSTA=0xFF;
	LTDC_Layer2_BFCR_R=(6<<8)|5;
	LTDC_Layer2_CFBLR_R=((LTDC_LayerFGP->layerWidth * Mult)<<16)|((LTDC_LayerFGP->layerWidth * Mult) + 3);
	LTDC_Layer2_CFBAR->CFBADD=LTDC_LayerFGP->layerDataAddress;
	LTDC_Layer2_CFBLNR->CFBLNBR=LTDC_LayerFGP->layerHeight;

	LTDC_Layer2_CR->LEN=1;
	LTDC_SRCR->IMR=1;
	LTDC_Layer2_CR->COLKEN=0;
	LTDC_SRCR->IMR=1;
}


void LTDC_LayerBG_DeInit(void)
{
	LTDC_Layer1_CR->LEN=0;
	LTDC_SRCR->IMR=1;
}

void LTDC_LayerFG_DeInit(void)
{
	LTDC_Layer2_CR->LEN=0;
	LTDC_SRCR->IMR=1;
}


uint32_t LTDC_BackLight(uint32_t state)
{
	if(state)
	{
	GPIOA_ODR->ODR3=0;
	}
	else
	{
		GPIOA_ODR->ODR3=1;
	}
	return GPIOA_ODR->ODR3;

}


LTDC_TFT_TypeDef* LTDC_Layer_GetBG()
{
	return LTDC_LayerBGP;
}

LTDC_TFT_TypeDef* LTDC_Layer_SetBG(LTDC_TFT_TypeDef* layer)
{
	LTDC_LayerBGP=layer;
	LTDC_LayerBGP->layerTFT->CFBAR=LTDC_LayerBGP->layerDataAddress;
	return LTDC_LayerBGP;
}

LTDC_TFT_TypeDef* LTDC_Layer_GetFG()
{
	return LTDC_LayerFGP;
}

LTDC_TFT_TypeDef* LTDC_Layer_SetFG(LTDC_TFT_TypeDef* layer)
{
	LTDC_LayerFGP=layer;
	LTDC_LayerFGP->layerTFT->CFBAR=LTDC_LayerFGP->layerDataAddress;
	return LTDC_LayerFGP;
}



uint32_t SetColorRed_RGB565   (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp=color->color;

	switch(color->colorComplete)
	{
	case COMPLETE_EN:
		temp&=~0xF800;
		temp|=color->color&0xF800;
		break;
	case COMPLETE_DIS:
		temp&=~0xF800;
		temp|=(color->red&0x1F)<<11;
		break;
	default:
		return 0xFF;
		break;
	}
	color->color=temp;
	return color->color;
}

uint32_t GetColorRed_RGB565   (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp=color->color;

	temp&=0xF800;
	temp>>=11;
	color->red=temp;
	return color->red;
}

uint32_t SetColorGreen_RGB565   (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp=color->color;

	switch(color->colorComplete)
	{
	case COMPLETE_EN:
		temp&=~0x07E0;
		temp|=color->color&0x07E0;
		break;
	case COMPLETE_DIS:
		temp&=~0x07E0;
		temp|=(color->green&0x3F)<<5;
		break;
	default:
		return 0xFF;
		break;
	}
	color->color=temp;
	return color->color;
}

uint32_t GetColorGreen_RGB565   (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp=color->color;

	temp&=0x07E0;
	temp>>=5;
	color->green=temp;
	return color->green;
}

uint32_t SetColorBlue_RGB565   (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp=color->color;

	switch(color->colorComplete)
	{
	case COMPLETE_EN:
		temp&=~0x001F;
		temp|=color->color&0x001F;
		break;
	case COMPLETE_DIS:
		temp&=~0x001F;
		temp|=(color->blue&0x1F);
		break;
	default:
		return 0xFF;
		break;
	}
	color->color=temp;
	return color->color;
}

uint32_t GetColorBlue_RGB565   (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp=color->color;

	temp&=0x001F;
	color->blue=temp;
	return color->blue;
}


uint32_t SetColorSplit_RGB565 (LTDC_COLOR_TypeDef* color)
{
	uint32_t temp;

	temp=SetColorRed_RGB565(color);
	temp=SetColorGreen_RGB565(color);
	temp=SetColorBlue_RGB565(color);
	return temp;

}
uint32_t GetColorSplit_RGB565 (LTDC_COLOR_TypeDef* color)
{
	GetColorRed_RGB565(color);
	GetColorGreen_RGB565(color);
	GetColorBlue_RGB565(color);
	return color->color;
}



uint32_t Layer_GetDataAddress(LTDC_TFT_TypeDef* layer)
{
	return layer->layerDataAddress;
}

uint32_t Layer_SetDataAddress(LTDC_TFT_TypeDef* layer, uint32_t address)
{
	layer->layerDataAddress=address;
	return layer->layerDataAddress;
}


uint32_t Layer_GetHeaderAddress(LTDC_TFT_TypeDef* layer)
{
	return layer->layerHeaderAddress;
}

uint32_t Layer_SetHeaderAddress(LTDC_TFT_TypeDef* layer, uint32_t address)
{
	layer->layerHeaderAddress=address;
	return layer->layerHeaderAddress;
}

uint32_t Layer_GetCLUTAddress(LTDC_TFT_TypeDef* layer)
{
	return layer->layerCLUTAddress;
}

uint32_t Layer_SetCLUAddress(LTDC_TFT_TypeDef* layer, uint32_t address)
{
	layer->layerCLUTAddress=address;
	return layer->layerCLUTAddress;
}


uint32_t Layer_GetBGColor(LTDC_TFT_TypeDef* layer)
{
	return layer->layerColorBG;
}

uint32_t Layer_GetBGRed			(LTDC_TFT_TypeDef* layer)
{
	LTDC_COLOR_TypeDef color=
	{
			layer->layerColorBG,
			COMPLETE_EN,
			0,
			0,
			0,
	};
	return GetColorRed_RGB565(&color);
}

uint32_t Layer_GetBGGreen(LTDC_TFT_TypeDef* layer)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorBG,
		COMPLETE_EN,
		0,
		0,
		0,
	};
	return GetColorGreen_RGB565(&color);

}
uint32_t Layer_GetBGBlue		(LTDC_TFT_TypeDef* layer)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorBG,
		COMPLETE_EN,
		0,
		0,
		0,
	};
	return GetColorBlue_RGB565(&color);
}


uint32_t Layer_SetBGColor		(LTDC_TFT_TypeDef* layer, uint32_t BGcolor)
{
	layer->layerColorBG=BGcolor;
	return layer->layerColorBG;
}
uint32_t Layer_SetBGRed			(LTDC_TFT_TypeDef* layer, uint32_t BGred)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorBG,
		COMPLETE_DIS,
		BGred,
		0,
		0,
	};
	return SetColorRed_RGB565(&color);

}
uint32_t Layer_SetBGGreen		(LTDC_TFT_TypeDef* layer, uint32_t BGgreen)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorBG,
		COMPLETE_DIS,
		0,
		BGgreen,
		0,
	};
	return SetColorGreen_RGB565(&color);

}
uint32_t Layer_SetBGBlue		(LTDC_TFT_TypeDef* layer, uint32_t BGblue)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorBG,
		COMPLETE_DIS,
		0,
		0,
		BGblue,
	};
	return SetColorBlue_RGB565(&color);
}



uint32_t Layer_GetFontColor(LTDC_TFT_TypeDef* layer)
{
	return layer->layerColorFont;
}

uint32_t Layer_GetFontRed(LTDC_TFT_TypeDef* layer)
{
	LTDC_COLOR_TypeDef color=
	{
			layer->layerColorFont,
			COMPLETE_EN,
			0,
			0,
			0,
	};
	return GetColorRed_RGB565(&color);
}

uint32_t Layer_GetFontGreen(LTDC_TFT_TypeDef* layer)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorFont,
		COMPLETE_EN,
		0,
		0,
		0,
	};
	return GetColorGreen_RGB565(&color);

}
uint32_t Layer_GetFontBlue(LTDC_TFT_TypeDef* layer)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorFont,
		COMPLETE_EN,
		0,
		0,
		0,
	};
	return GetColorBlue_RGB565(&color);
}


uint32_t Layer_SetFontColor(LTDC_TFT_TypeDef* layer, uint32_t fontcolor)
{
	layer->layerColorFont=fontcolor;
	return layer->layerColorFont;
}
uint32_t Layer_SetFontRed(LTDC_TFT_TypeDef* layer, uint32_t fontred)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorFont,
		COMPLETE_DIS,
		fontred,
		0,
		0,
	};
	return SetColorRed_RGB565(&color);

}
uint32_t Layer_SetFontGreen(LTDC_TFT_TypeDef* layer, uint32_t fontgreen)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorFont,
		COMPLETE_DIS,
		0,
		fontgreen,
		0,
	};
	return SetColorGreen_RGB565(&color);

}
uint32_t Layer_SetFontBlue		(LTDC_TFT_TypeDef* layer, uint32_t fontblue)
{
	LTDC_COLOR_TypeDef color=
	{
		layer->layerColorFont,
		COMPLETE_DIS,
		0,
		0,
		fontblue,
	};
	return SetColorBlue_RGB565(&color);
}



FONT_TypeDef* Layer_GetFont	(LTDC_TFT_TypeDef* layer)
{
	return layer->layerFont;
}

FONT_TypeDef* Layer_SetFont	(LTDC_TFT_TypeDef* layer, uint32_t fontSize)
{
	switch(fontSize)
	{
	case 	FONT_SIZE_16x24:
		layer->layerFont= &font16x24;
		break;
	case FONT_SIZE_11x16:
		layer->layerFont= &font11x16;
		break;
	case FONT_SIZE_8x16:
		layer->layerFont= &font8x16;
		break;
	case FONT_SIZE_12x12:
		layer->layerFont= &font12x12;
		break;
	case FONT_SIZE_8x12:
		layer->layerFont= &font8x12;
		break;
	case FONT_SIZE_8x8:
		layer->layerFont= &font8x8;
		break;
	case FONT_SIZE_6x8:
		layer->layerFont= &font6x8;
		break;
	case FONT_SIZE_5x7:
		layer->layerFont= &font5x7;
		break;
	default:
		break;
	}
	return layer->layerFont;
}


uint32_t Layer_GetWidthTotal	(LTDC_TFT_TypeDef* layer)
{
	return layer->layerWidthTotal;
}
uint32_t Layer_SetWidthTotal	(LTDC_TFT_TypeDef* layer, uint32_t widthTotal)
{

	layer->layerWidthTotal=widthTotal;
	return layer->layerWidthTotal;
}

uint32_t Layer_GetHeightTotal	(LTDC_TFT_TypeDef* layer)
{
	return layer->layerHeightTotal;
}
uint32_t Layer_SetHeightTotal	(LTDC_TFT_TypeDef* layer, uint32_t heightTotal)
{

	layer->layerHeightTotal=heightTotal;
	return layer->layerHeightTotal;
}
uint32_t Layer_GetWidth			(LTDC_TFT_TypeDef* layer)
{

	return layer->layerWidth;
}
uint32_t Layer_SetWidth			(LTDC_TFT_TypeDef* layer, uint32_t width)
{
	layer->layerWidth=width;
	if((width+ layer->layerX[0])>layer->layerWidthTotal)
		layer->layerWidth= layer->layerWidthTotal- layer->layerX[0];

	width=layer->layerWidth;
	if(layer->layerBG!=0)
	{
		if((width+ layer->layerBGX[0])>layer->layerBG->layerWidthTotal)
			layer->layerWidth= layer->layerBG->layerWidthTotal- layer->layerBGX[0];
	}

	return layer->layerWidth;
}
uint32_t Layer_GetHeight		(LTDC_TFT_TypeDef* layer)
{

	return layer->layerHeight;
}
uint32_t Layer_SetHeight		(LTDC_TFT_TypeDef* layer, uint32_t height)
{
	layer->layerHeight=height;
	if((height+ layer->layerY[0])>layer->layerHeightTotal)
		layer->layerHeight= layer->layerHeightTotal- layer->layerY[0];

	height=layer->layerHeight;
	if(layer->layerBG!=0)
	{
		if((height+ layer->layerBGY[0])>layer->layerBG->layerHeightTotal)
			layer->layerHeight= layer->layerBG->layerHeightTotal- layer->layerBGY[0];
	}

	return layer->layerHeight;
}


uint32_t Layer_GetBGX(LTDC_TFT_TypeDef* layer, uint32_t* BGX)
{
	uint32_t index=0;
	while(index<layer->layerBGXCount)
	{
		BGX[index]=layer->layerBGX[index];
		index++;
	}
	return layer->layerBGXCount;
}

uint32_t Layer_GetBGY(LTDC_TFT_TypeDef* layer, uint32_t* BGY)
{
	uint32_t index=0;
	while(index<layer->layerBGYCount)
	{
		BGY[index]=layer->layerBGY[index];
		index++;
	}
	return layer->layerBGYCount;
}
uint32_t Layer_GetX(LTDC_TFT_TypeDef* layer, uint32_t* X)
{
	uint32_t index=0;
	while(index<layer->layerXCount)
	{
		X[index]=layer->layerX[index];
		index++;
	}
	return layer->layerXCount;
}

uint32_t Layer_GetY(LTDC_TFT_TypeDef* layer, uint32_t* Y)
{
	uint32_t index=0;
	while(index<layer->layerYCount)
	{
		Y[index]=layer->layerY[index];
		index++;
	}
	return layer->layerYCount;
}

uint32_t Layer_GetRadius(LTDC_TFT_TypeDef* layer, uint32_t* radius)
{
	uint32_t index=0;
	while(index<layer->layerRadiusCount)
	{
		radius[index]=layer->layerRadius[index];
		index++;
	}
	return layer->layerRadiusCount;
}





//todo Layer
/*////////////////////////////////////
///////////Apareance Functions///////
////////////////////////////////////*/

/*
uint32_t LTDC_LayerInit(LTDC_TFT_TypeDef* layer,)
{

}
*/


LTDC_TFT_TypeDef* Layer_GetSubLayer	(LTDC_TFT_TypeDef* layer,uint32_t number)
{
	if(layer->subLayersCreated>number)
		return 0;
	return layer->subLayers[number];
}

uint32_t Layer_AddSubLayer(LTDC_TFT_TypeDef* layerBG,LTDC_TFT_TypeDef* layer)
{

	/*Checa si puede crear SubLayer en la layer BG*/
	if(layerBG->subLayersCreated>layerBG->subLayersMaximum)
		return 0xFF;

	/*si ya tiene asignado una layerBG no puede asigarlo a otro*/
	if(layer->layerBG!=0)
		return 0xFF;
	/*asigna en la posicion correspondiente la nueva sublayer*/
	layerBG->subLayers[layerBG->subLayersCreated]=layer;
	/* a la sublayer se le indica cual es su layerBG*/
	layer->layerBG=layerBG;
	/* le indica el numero de sublayer*/
	layer->subLayerNum=layerBG->subLayersCreated;
	/*aumenta el numero de sublayer creadas*/
	layerBG->subLayersCreated++;

	return layerBG->subLayersCreated;
}

uint32_t Layer_DeleteSubLayer(LTDC_TFT_TypeDef* layer,uint32_t number)
{
	uint32_t cycle= number;
	if(layer->subLayersCreated<cycle)
		return 1;

	layer->subLayers[cycle-1]->layerBG=0;
	layer->subLayers[cycle-1]->subLayerNum=0;
	for(cycle= number-1; cycle<layer->subLayersCreated-1; cycle++)
	{
		layer->subLayers[cycle-1]=layer->subLayers[cycle];
		layer->subLayers[cycle-1]->subLayerNum--;
	}

	layer->subLayersCreated--;
	return 0;

}



//todo
uint32_t Layer_RefreshSubLayer(LTDC_TFT_TypeDef* layer,uint32_t number)
{
	LTDC_TFT_TypeDef* subLayer;
	if (number==0)
		return 0;
	if(layer->subLayersCreated<(number-1))
		return 0;
	subLayer=layer->subLayers[number-1];
	switch(subLayer->layerType)
	{
	case LAYER_TYPE_IMAGE_NOHEADER:
		Layer_ImegeNoHeaderType(subLayer,layer);
		break;
	case LAYER_TYPE_LINECOMPLETE_HORIZONTAL:
		Layer_LineCompleteHorizontalType(subLayer,layer);
		break;
	case LAYER_TYPE_LINECOMPLETE_VERTICAL:
		Layer_LineCompleteVerticalType(subLayer,layer);
		break;
	case LAYER_TYPE_RECTANGLE_FILL:
		Layer_RectangleFillType(subLayer,layer);
		break;
	case LAYER_TYPE_LINE_HORIZONTAL:
		Layer_LineHorizontalType(subLayer,layer);
		break;
	case LAYER_TYPE_LINE_VERTICAL:
		Layer_LineVerticalType(subLayer,layer);
		break;
	case LAYER_TYPE_RECTANGLE:
		Layer_RectangleType(subLayer,layer);
		break;
	case LAYER_TYPE_RECTANGLE_SEMI:
		Layer_RectangleSemiType(subLayer,layer);
		break;
	case LAYER_TYPE_PIXEL:
		Layer_PixelType(subLayer,layer);
		break;
	case LAYER_TYPE_LINEXY:
		Layer_LineXYType(subLayer,layer);
		break;
	case LAYER_TYPE_CIRCLE:
		Layer_CircleType(subLayer,layer);
		break;
	case LAYER_TYPE_CIRCLE_FILL:
		Layer_CircleFillType(subLayer,layer);
		break;
	case LAYER_TYPE_CROSS:
		Layer_CrossType(subLayer,layer);
		break;
	case LAYER_TYPE_ELLIPSE:
		Layer_EllipseType(subLayer,layer);
		break;
	case LAYER_TYPE_ELLIPSE_FILL:
		Layer_EllipseFillType(subLayer,layer);
		break;
	case LAYER_TYPE_TRIANGLE:
		Layer_TriangleType(subLayer,layer);
		break;
	case LAYER_TYPE_TRIANGLE_FILL:
		Layer_TriangleFillType(subLayer,layer);
		break;
	case LAYER_TYPE_MULTILINE:
		//Layer_MultilineType(subLayer,layer);
		break;
	case LAYER_TYPE_MULTILINECLOSE:
		//Layer_MultilineCloseType(subLayer,layer);
		break;
	case LAYER_TYPE_FONTLINECOMPLETE:
		Layer_FontLineCompleteType(subLayer,layer);
		break;
	case LAYER_TYPE_FONTLINE:
		Layer_FontLineType(subLayer,layer);
		break;
	case LAYER_TYPE_STRING_SIMPLE:
		Layer_StringSimpleType(subLayer,layer);
		break;
	case LAYER_TYPE_STRING_SIMPLE_BACKGROUND:
		Layer_StringSimpleBGType(subLayer,layer);
		break;

	default:
		break;
	}


	return 1;

}


uint32_t Layer_RefreshAllSubLayer(LTDC_TFT_TypeDef* layer)
{
	int32_t i;
	if(layer->subLayersCreated)
	{
	for (i=1; i<=layer->subLayersCreated;i++)
		Layer_RefreshSubLayer(layer,i);

	return 1;
	}
	else
		return 0;
}


uint32_t Layer_Copy	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest,LTDC_DIMENSIONS_TypeDef dim)
{

	uint32_t timeout=500000;

	uint32_t SourceAddress, DestAddress;
	uint32_t SourceWidthTotal, DestWidthTotal;
	uint32_t SourceHeightTotal, DestHeightTotal;
	SourceWidthTotal=layerSource->layerWidthTotal;
	DestWidthTotal=layerDest->layerWidthTotal;
	SourceHeightTotal=layerSource->layerHeightTotal;
	DestHeightTotal=layerDest->layerHeightTotal;

	if(dim.X[0]>SourceWidthTotal)
		return 0;
	if(dim.X[1]>DestWidthTotal)
		return 0;
	if(dim.Y[0]>SourceHeightTotal)
		return 0;
	if(dim.Y[1]>DestHeightTotal)
		return 0;

	if((dim.width+ dim.X[0])>SourceWidthTotal)
		dim.width=SourceWidthTotal- dim.X[0];
	if((dim.height+ dim.Y[0])>SourceHeightTotal)
		dim.height= SourceHeightTotal- dim.Y[0];

	if((dim.width+ dim.X[1])>DestWidthTotal)
		dim.width= DestWidthTotal- dim.X[1];
	if((dim.height+ dim.Y[1])>DestHeightTotal)
		dim.height= DestHeightTotal- dim.Y[1];

	SourceAddress=layerSource->layerDataAddress+((SourceWidthTotal*dim.Y[0]+dim.X[0])<<1);
	DestAddress=layerDest->layerDataAddress+((DestWidthTotal*dim.Y[1]+dim.X[1])<<1);

/*
  	DMA2D_SetWait();
  	DMA2D->CR_Bit.MODE=0;
  	DMA2D->CR_Bit.TCIE=1;
  	DMA2D->OPFCCR_Bit.CM=2;
  	DMA2D->FGPFCCR_Bit.CM=2;

  	DMA2D->OMAR=DestAddress;
  	DMA2D->FGMAR=SourceAddress;
  	DMA2D->OOR=DestWidthTotal-dim.width;
  	DMA2D->FGOR=SourceWidthTotal-dim.width;
  	DMA2D->NLR_Bit.NL=dim.height;
  	DMA2D->NLR_Bit.PL=dim.width;
  	DMA2D->CR_Bit.START=1;
*/

  	DMA2D_SetWait();
  	DMA2D_CR_R&=~DMA2D_CR_MODE;
  	DMA2D_CR_R|=DMA2D_CR_TCIE;
  	DMA2D_OPFCCR_R=DMA2D_OPFCCR_CM_1;
  	DMA2D_FGPFCCR_R&=~DMA2D_FGPFCCR_CM;
  	DMA2D_FGPFCCR_R|=DMA2D_FGPFCCR_CM_1;

  	DMA2D_OMAR_R=DestAddress;
  	DMA2D_FGMAR_R=SourceAddress;
  	DMA2D_OOR_R=DestWidthTotal-dim.width;
  	DMA2D_FGOR_R=SourceWidthTotal-dim.width;
  	DMA2D_NLR_R=dim.height;
  	DMA2D_NLR_R|=dim.width<<16;
  	DMA2D_CR_R|=DMA2D_CR_START;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D_CR_R|= DMA2D_CR_ABORT;
			return 0;
		}
		timeout--;
	}
	return 1;
}


uint32_t Layer_ImegeNoHeaderType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;

	dim.width=layerSource->layerWidth;
	dim.height=layerSource->layerHeight;
	dim.X[0]=layerSource->layerXInit;
	dim.Y[0]=layerSource->layerYInit;
	dim.X[1]=layerSource->layerBGXInit;
	dim.Y[1]=layerSource->layerBGYInit;

	return Layer_Copy(layerSource,layerDest,dim);
}


uint32_t Layer_Print_RectanguleFill	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	uint32_t timeout=500000;
	uint32_t CM=2;

	if(dim.XInit>layer->layerWidthTotal)
		return 0;
	if(dim.YInit>layer->layerHeightTotal)
		return 0;

	if((dim.height+ dim.YInit)>layer->layerHeightTotal)
		//dim.height= layer->layerHeightTotal- dim.YInit;
		return 0;
	if((dim.width+ dim.XInit)>layer->layerWidthTotal)
		//dim.width= layer->layerWidthTotal- dim.XInit;
		return 0;

	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((dim.YInit*layer->layerWidthTotal + dim.XInit)*2);
	DMA2D->OOR=layer->layerWidthTotal-dim.width;
	DMA2D->NLR_Bit.NL=dim.height;
	DMA2D->NLR_Bit.PL=dim.width;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D_CR_R|= DMA2D_CR_ABORT;
			return 0;
		}
		timeout--;
	}
	return 1;
}


uint32_t Layer_RectangleFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;

	dim.width=layerSource->layerWidth;
	dim.height=layerSource->layerHeight;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;

	return Layer_Print_RectanguleFill(layerDest,dim,layerSource->layerColorBG);

}


uint32_t Layer_Print_LineCompleteHorizontal	(LTDC_TFT_TypeDef* layer,uint32_t line,uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	if(line>layer->layerHeightTotal)
		return 0;

	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((line*layer->layerWidthTotal)*2);
	DMA2D->OOR=0;
	DMA2D->NLR_Bit.NL=1;
	DMA2D->NLR_Bit.PL=layer->layerWidthTotal;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D->CR_Bit.ABORT=1;
			return 0;
		}
		timeout--;
	}
	return 1;

}

uint32_t Layer_LineCompleteHorizontalType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	return Layer_Print_LineCompleteHorizontal(layerDest,layerSource->layerBGYInit,layerSource->layerColorBG);
}


uint32_t Layer_Print_LineCompleteVertical	(LTDC_TFT_TypeDef* layer,uint32_t pixel,uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	if(pixel>layer->layerWidthTotal)
		return 0;

	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((pixel)*2);
	DMA2D->OOR=layer->layerWidthTotal-1;
	DMA2D->NLR_Bit.NL=layer->layerHeightTotal;
	DMA2D->NLR_Bit.PL=1;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D->CR_Bit.ABORT=1;
			return 0;
		}
		timeout--;
	}
	return 1;

}


uint32_t Layer_LineCompleteVerticalType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	return Layer_Print_LineCompleteVertical(layerDest,layerSource->layerBGXInit,layerSource->layerColorBG);
}



uint32_t Layer_Print_FontLineComplete	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim, uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	if((dim.YInit+dim.height)>layer->layerHeightTotal)
		return 0;


	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((dim.YInit*layer->layerWidthTotal)*2);
	DMA2D->OOR=0;
	DMA2D->NLR_Bit.NL=dim.height;
	DMA2D->NLR_Bit.PL=layer->layerWidthTotal;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=9000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D->CR_Bit.ABORT=1;
			DMA2D_ClearWait();
			return 0;
		}
		timeout--;
	}
	return 1;
}

uint32_t Layer_FontLineCompleteType	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;

	if(((layerSource->layerFont->height*layerSource->layerHeight)+(layerSource->layerFont->height*layerSource->layerBGYInit+1))>layerDest->layerHeightTotal)
		return 0;
	dim.height=layerSource->layerFont->height*layerSource->layerHeight;
	dim.YInit = layerSource->layerFont->height*layerSource->layerBGYInit;

	return Layer_Print_FontLineComplete(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_FontLine	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim, uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	if((dim.YInit+dim.height)>layer->layerHeightTotal)
		return 0;
	if((dim.XInit+dim.width)>layer->layerWidthTotal)
		return 0;

	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+(((dim.YInit*layer->layerWidthTotal)+ dim.XInit)*2);
	DMA2D->OOR=layer->layerWidthTotal-dim.width;
	DMA2D->NLR_Bit.NL=dim.height;
	DMA2D->NLR_Bit.PL=dim.width;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=9000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D->CR_Bit.ABORT=1;
			DMA2D_ClearWait();
			return 0;
		}
		timeout--;
	}
	return 1;
}

uint32_t Layer_FontLineType	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;

	if(((layerSource->layerFont->height*layerSource->layerHeight)+(layerSource->layerFont->height*layerSource->layerBGYInit+1))>layerDest->layerHeightTotal)
		return 0;
	if(((layerSource->layerFont->width*layerSource->layerBGXInit)+(layerSource->layerFont->width*layerSource->layerWidth))>layerDest->layerWidthTotal)
		return 0;
	dim.height=layerSource->layerFont->height*layerSource->layerHeight;
	dim.width=layerSource->layerFont->width*layerSource->layerWidth;
	dim.YInit= layerSource->layerFont->height*layerSource->layerBGYInit;
	dim.XInit = layerSource->layerFont->width*layerSource->layerBGXInit;

	return Layer_Print_FontLine(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_LineVertical (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{


	uint32_t CM=2;
	uint32_t timeout=500000;

	if(dim.XInit>layer->layerWidthTotal)
		return 0;
	if(dim.YInit>layer->layerHeightTotal)
		return 0;
	if(dim.height==0)
		return 0;

	if((dim.height+ dim.YInit)>layer->layerHeightTotal)
		//dim.height= layer->layerHeightTotal- dim.YInit;
		return 0;
	if((1+ dim.XInit)>layer->layerWidthTotal)
		return 0;

	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((dim.YInit*layer->layerWidthTotal + dim.XInit)*2);
	DMA2D->OOR=layer->layerWidthTotal-1;
	DMA2D->NLR_Bit.NL=dim.height;
	DMA2D->NLR_Bit.PL=1;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D->CR_Bit.ABORT=1;
			return 0;
		}
		timeout--;
	}
	return 1;

}


uint32_t Layer_LineVerticalType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;

	dim.height=layerSource->layerHeight;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;

	return Layer_Print_LineVertical(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_LineHorizontal (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	if(dim.XInit>layer->layerWidthTotal)
		return 0;
	if(dim.YInit>layer->layerHeightTotal)
		return 0;
	if(dim.width==0)
		return 0;

	if((1+ dim.YInit)>layer->layerHeightTotal)
		return 0;
	if((dim.width+ dim.XInit)>layer->layerWidthTotal)
		//dim.width= layer->layerWidthTotal- dim.XInit;
		return 0;




	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((dim.YInit*layer->layerWidthTotal + dim.XInit)*2);
	DMA2D->OOR=layer->layerWidthTotal-dim.width;
	DMA2D->NLR_Bit.NL=1;
	DMA2D->NLR_Bit.PL=dim.width;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D->CR_Bit.ABORT=1;
			return 0;
		}
		timeout--;
	}
	return 1;
}
uint32_t Layer_LineHorizontalType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;

	dim.width=layerSource->layerWidth;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;

	return Layer_Print_LineHorizontal(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_Rectangle (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{

	uint32_t temp1=0;

	temp1=dim.YInit;
	Layer_Print_LineHorizontal(layer,dim,color);
	dim.YInit+=dim.height;
	Layer_Print_LineHorizontal(layer,dim,color);
	dim.YInit=temp1;

	temp1=dim.XInit;
	Layer_Print_LineVertical(layer,dim,color);
	dim.XInit+=dim.width;
    Layer_Print_LineVertical(layer,dim,color);
	dim.XInit=temp1;
	return 1;
}

uint32_t Layer_RectangleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.width=layerSource->layerWidth;
	dim.height=layerSource->layerHeight;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	return Layer_Print_Rectangle(layerDest,dim,layerSource->layerColorBG);
}

uint32_t Layer_Print_Rectangle_Semi (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{

	uint32_t temp1=0,temp2=0,temp3=0;

	temp1=dim.YInit;
	temp3=dim.height;

	if(dim.height<dim.width)
	{
		temp2=dim.height*dim.radiusInit;
		temp2/=200;
	}
	else
	{
		temp2=dim.width*dim.radiusInit;
		temp2/=200;
	}

	dim.height=temp2;
	Layer_Print_RectanguleFill(layer,dim,color);
	dim.YInit+=temp3-temp2;
	Layer_Print_RectanguleFill(layer,dim,color);

	dim.YInit=temp1;
	dim.height=temp3;

	temp1=dim.XInit;


	temp3=dim.width;
	dim.width=temp2;
	Layer_Print_RectanguleFill(layer,dim,color);
	dim.XInit+=temp3-temp2;
	Layer_Print_RectanguleFill(layer,dim,color);
	dim.XInit=temp1;
	dim.width=temp3;
	return 1;
}
uint32_t Layer_RectangleSemiType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.width=layerSource->layerWidth;
	dim.height=layerSource->layerHeight;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.radiusInit=layerSource->layerRadiusInit;
	return Layer_Print_Rectangle_Semi(layerDest,dim,layerSource->layerColorBG);
}

void Layer_Print_Pixel(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	*(uint16_t*)(layer->layerDataAddress+((dim.YInit*layer->layerWidthTotal + dim.XInit)*2))=color;
}

__inline void Layer_PixelType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	Layer_Print_Pixel(layerDest,dim,layerSource->layerColorBG);
}

uint32_t Layer_Print_LineXY(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
  int32_t deltaX = 0, deltaY = 0, xInc1 = 0, xInc2 = 0,
  yInc1 = 0, yInc2 = 0, den = 0, num = 0, numadd = 0, numpixels = 0,
  curpixel = 0;
  LTDC_DIMENSIONS_TypeDef dimensions;

  if((dim.X[0] > layer->layerWidthTotal) || (dim.X[1] > layer->layerWidthTotal) ||
		  (dim.Y[0] > layer->layerHeightTotal) || (dim.Y[1] > layer->layerHeightTotal))
	  	  return 0;

  deltaX=(int32_t)((int32_t)dim.X[1] -(int32_t)dim.X[0]);
  if(deltaX<0)
	  deltaX*=-1;
  deltaY=(int32_t)((int32_t)dim.Y[1] -(int32_t)dim.Y[0]);
  if(deltaY<0)
	  deltaY*=-1;

  dimensions.XInit = dim.X[0];
  dimensions.YInit = dim.Y[0];

  if (dim.X[1] >= dim.X[0])
  {
    xInc1 = 1;
    xInc2 = 1;
  }
  else
  {
    xInc1 = -1;
    xInc2 = -1;
  }

  if (dim.Y[1] >= dim.Y[0])
  {
    yInc1 = 1;
    yInc2 = 1;
  }
  else
  {
    yInc1 = -1;
    yInc2 = -1;
  }

  if (deltaX >= deltaY)
  {
    xInc1 = 0;
    yInc2 = 0;
    den = deltaX;
    num = deltaX >>1;
    numadd = deltaY;
    numpixels = deltaX;
  }
  else
  {
    xInc2 = 0;
    yInc1 = 0;
    den = deltaY;
    num = deltaY >>1;
    numadd = deltaX;
    numpixels = deltaY;
  }

  for (curpixel = 0; curpixel <= numpixels; curpixel++)
  {

	Layer_Print_Pixel(layer,dimensions,color);
	num += numadd;
    if (num >= den)
    {
      num -= den;
      dimensions.XInit += xInc1;
      dimensions.YInit += yInc1;
    }
    dimensions.XInit += xInc2;
    dimensions.YInit += yInc2;
  }
  return 1;
}

uint32_t Layer_LineXYType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.X[0]=layerSource->layerBGX[0];
	dim.Y[0]=layerSource->layerBGY[0];
	dim.X[1]=layerSource->layerBGX[1];
	dim.Y[1]=layerSource->layerBGY[1];
	return Layer_Print_LineXY(layerDest,dim,layerSource->layerColorBG);
}



uint32_t Layer_Print_Circle	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t radio=dim.radiusInit;
	int32_t xPos=dim.XInit;
	int32_t yPos=dim.YInit;
	int32_t x = radio;
	int32_t y = 0;
	int32_t xCambio = 1 - (radio<<1);
	int32_t yCambio = 1;
	int32_t errorRadio = 0;

    if(((xPos+radio) >( layer->layerWidthTotal)) || ((yPos+radio) >( layer->layerHeightTotal) ))
    {
    	return 0;
    }

    if(((int32_t)(xPos-radio) <0) || ((int32_t)(yPos-radio) <0 ))
    {
    	return 0;
    }

	while (x >= y) {

		dimensions.XInit = xPos-x;
		dimensions.YInit = yPos+y;
		Layer_Print_Pixel(layer,dimensions,color);
		dimensions.YInit = (yPos-y);
		Layer_Print_Pixel(layer,dimensions,color);

		dimensions.XInit = (xPos+x);
		dimensions.YInit = (yPos+y);
		Layer_Print_Pixel(layer,dimensions,color);
		dimensions.YInit = (yPos-y);
		Layer_Print_Pixel(layer,dimensions,color);


		dimensions.XInit = (xPos-y);
		dimensions.YInit = (yPos+x);
		Layer_Print_Pixel(layer,dimensions,color);
		dimensions.YInit = (yPos-x);
		Layer_Print_Pixel(layer,dimensions,color);

		dimensions.XInit = (xPos+y);
		dimensions.YInit = (yPos+x);
		Layer_Print_Pixel(layer,dimensions,color);
		dimensions.YInit = (yPos-x);
		Layer_Print_Pixel(layer,dimensions,color);

		y++;
		errorRadio += yCambio;
		yCambio += 2;
		if ((errorRadio<<1) + xCambio > 0) {
			x--;
			errorRadio += xCambio;
			xCambio += 2;
		}
	}
	return 1;
}

uint32_t Layer_CircleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.radiusInit =layerSource->layerRadiusInit;
	return Layer_Print_Circle(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_CircleFill	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t radio=dim.radiusInit;
	int32_t xPos=dim.XInit;
	int32_t yPos=dim.YInit;
	int32_t D;
	int32_t curX;
	int32_t curY;

    if(((xPos+radio) >( layer->layerWidthTotal)) || ((yPos+radio) >( layer->layerHeightTotal) ))
    {
    	return 0;
    }

    if(((int32_t)(xPos-radio) <0) || ((int32_t)(yPos-radio) <0 ))
    {
    	return 0;
    }

    D = 3 - (radio << 1);

	curX = 0;
	curY = radio;

	while (curX <= curY)
	{
	if(curY > 0)
	{


		dimensions.height=2*curY;
		dimensions.XInit=xPos - curX;
		dimensions.YInit=yPos - curY;
	    Layer_Print_LineVertical(layer,dimensions,color);
		dimensions.XInit=xPos + curX;
	    Layer_Print_LineVertical(layer,dimensions,color);
	}

	if(curX > 0)
	{
		dimensions.height=2*curX;
		dimensions.XInit=xPos - curY;
		dimensions.YInit= yPos - curX;
	    Layer_Print_LineVertical(layer,dimensions,color);
		dimensions.XInit=xPos + curY;
	    Layer_Print_LineVertical(layer,dimensions,color);
	}
	if (D < 0)
	{
	 D += (curX << 2) + 6;
	}
	else
	{
	 D += ((curX - curY) << 2) + 10;
	 curY--;
	}
	curX++;
	}
	return 1;
}

uint32_t Layer_CircleFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.radiusInit =layerSource->layerRadiusInit;
	return Layer_Print_CircleFill(layerDest,dim,layerSource->layerColorBG);
}



uint32_t Layer_Print_Cross	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{

	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t radio=dim.radiusInit;
	int32_t xPos=dim.XInit;
	int32_t yPos=dim.YInit;

    if(((xPos+radio) >( layer->layerWidthTotal)) || ((yPos+radio) >( layer->layerHeightTotal) ))
    {
    	return 0;
    }

    if(((int32_t)(xPos-radio) <0) || ((int32_t)(yPos-radio) <0 ))
    {
    	return 0;
    }

	dimensions.height=dim.height;
	dimensions.XInit=xPos;
	dimensions.YInit= yPos - radio;
	Layer_Print_LineVertical(layer,dimensions,color);
	dimensions.YInit= yPos + radio-dimensions.height;
	Layer_Print_LineVertical(layer,dimensions,color);

	dimensions.width=dim.width;
	dimensions.YInit= yPos ;
	dimensions.XInit=xPos- radio;
	Layer_Print_LineHorizontal(layer,dimensions,color);
	dimensions.XInit= xPos + radio-dimensions.width;
	Layer_Print_LineHorizontal(layer,dimensions,color);


	return 1;

}

uint32_t Layer_CrossType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.height=layerSource->layerHeight;
	dim.width=layerSource->layerWidth;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.radiusInit =layerSource->layerRadiusInit;
	return Layer_Print_Cross(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_Ellipse		    (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t radio=dim.radius[0];
	int32_t Radius2=dim.radius[1];
	int32_t xPos=dim.XInit;
	int32_t yPos=dim.YInit;
	int32_t x = -radio, y = 0, err = 2-2*radio, e2;
	float K = 0, rad1 = 0, rad2 = 0;

    if(((xPos+radio) >( layer->layerWidthTotal)) || ((yPos+Radius2) >( layer->layerHeightTotal) ))
    {
    	return 0;
    }

    if(((int32_t)(xPos-radio) <0) || ((int32_t)(yPos-Radius2) <0 ))
    {
    	return 0;
    }

	if(radio<=0 || Radius2<=0)
	{
		  return 0;
	}

	  rad1 = radio;
	  rad2 = Radius2;

	  if (radio > Radius2)
	  {
	    do {
	      K = (float)(rad1/rad2);

			dimensions.XInit = (xPos-x);
			dimensions.YInit = (yPos+(uint32_t)(y/K));
			Layer_Print_Pixel(layer,dimensions,color);
			dimensions.YInit = (yPos-(uint32_t)(y/K));
			Layer_Print_Pixel(layer,dimensions,color);
			dimensions.XInit = (xPos+x);
			dimensions.YInit = (yPos+(uint32_t)(y/K));
			Layer_Print_Pixel(layer,dimensions,color);
			dimensions.YInit = (yPos-(uint32_t)(y/K));
			Layer_Print_Pixel(layer,dimensions,color);


	      e2 = err;
	      if (e2 <= y) {
	        err += ++y*2+1;
	        if (-x == y && e2 <= x) e2 = 0;
	      }
	      if (e2 > x) err += ++x*2+1;
	    }
	    while (x <= 0);
	  }
	  else
	  {
	    y = -Radius2;
	    x = 0;
	    do {
	      K = (float)(rad2/rad1);

			dimensions.YInit = (yPos+y);
			dimensions.XInit = (xPos-(uint32_t)(x/K));
			Layer_Print_Pixel(layer,dimensions,color);
			dimensions.XInit = (xPos+(uint32_t)(x/K));
			Layer_Print_Pixel(layer,dimensions,color);

			dimensions.YInit = (yPos-y);
			dimensions.XInit = (xPos+(uint32_t)(x/K));
			Layer_Print_Pixel(layer,dimensions,color);
			dimensions.XInit = (xPos-(uint32_t)(x/K));
			Layer_Print_Pixel(layer,dimensions,color);

	      e2 = err;
	      if (e2 <= x) {
	        err += ++x*2+1;
	        if (-y == x && e2 <= y) e2 = 0;
	      }
	      if (e2 > y) err += ++y*2+1;
	    }
	    while (y <= 0);
	  }
	  return 1;
}


uint32_t Layer_EllipseType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.radius[0] =layerSource->layerRadius[0];
	dim.radius[1] =layerSource->layerRadius[1];
	return Layer_Print_Ellipse(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Print_EllipseFill		    (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t radio=dim.radius[0];
	int32_t Radius2=dim.radius[1];
	int32_t xPos=dim.XInit;
	int32_t yPos=dim.YInit;
	int32_t x = -radio, y = 0, err = 2-2*radio, e2;
	float K = 0, rad1 = 0, rad2 = 0;

    if(((xPos+radio) >( layer->layerWidthTotal)) || ((yPos+Radius2) >( layer->layerHeightTotal) ))
    {
    	return 0;
    }

    if(((int32_t)(xPos-radio) <0) || ((int32_t)(yPos-Radius2) <0 ))
    {
    	return 0;
    }

	if(radio<=0 || Radius2<=0)
	{
		  return 0;
	}

	  rad1 = radio;
	  rad2 = Radius2;

	  if (radio > Radius2)
	  {
	    do {
	      K = (float)(rad1/rad2);
	      	dimensions.height=(((uint32_t)(y/K)<<1 )+ 1);
			dimensions.XInit =	(xPos+x);
			dimensions.YInit = (yPos-(uint32_t)(y/K));
			Layer_Print_LineVertical(layer,dimensions,color);
			dimensions.XInit =	(xPos-x);
			Layer_Print_LineVertical(layer,dimensions,color);

	      e2 = err;
	      if (e2 <= y) {
	    	  err += ((++y)<<1)+1;
	        if (-x == y && e2 <= x) e2 = 0;
	      }
	      if (e2 > x) err += ((++x)<<1)+1;
	    }
	    while (x <= 0);
	  }
	  else
	  {
	    y = -Radius2;
	    x = 0;
	    do {
	      K = (float)(rad2/rad1);

	      	dimensions.width=(((uint32_t)(x/K)<<1 )+ 1);
			dimensions.XInit =(xPos-(uint32_t)(x/K));
			dimensions.YInit = (yPos+y);
			Layer_Print_LineHorizontal(layer,dimensions,color);
			dimensions.YInit = (yPos-y);
			Layer_Print_LineHorizontal(layer,dimensions,color);

	      e2 = err;
	      if (e2 <= x) {
	        err += ++x*2+1;
	        if (-y == x && e2 <= y) e2 = 0;
	      }
	      if (e2 > y) err += ++y*2+1;
	    }
	    while (y <= 0);
	  }
	  return 1;
}

uint32_t Layer_EllipseFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.radius[0] =layerSource->layerRadius[0];
	dim.radius[1] =layerSource->layerRadius[1];
	return Layer_Print_EllipseFill(layerDest,dim,layerSource->layerColorBG);
}




uint32_t Layer_Print_Triangle		    (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{

	LTDC_DIMENSIONS_TypeDef dimensions;
	dimensions.X[0]=dim.X[0];
	dimensions.Y[0]=dim.Y[0];
	dimensions.X[1]=dim.X[1];
	dimensions.Y[1]=dim.Y[1];
	if(!Layer_Print_LineXY(layer,dimensions,color))
		return 0;
	dimensions.X[0]=dim.X[1];
	dimensions.Y[0]=dim.Y[1];
	dimensions.X[1]=dim.X[2];
	dimensions.Y[1]=dim.Y[2];
	if(!Layer_Print_LineXY(layer,dimensions,color))
		return 0;
	dimensions.X[0]=dim.X[2];
	dimensions.Y[0]=dim.Y[2];
	dimensions.X[1]=dim.X[0];
	dimensions.Y[1]=dim.Y[0];
	if(!Layer_Print_LineXY(layer,dimensions,color))
		return 0;

	return 1;
}


uint32_t Layer_TriangleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.X[0]=layerSource->layerBGX[0];
	dim.X[1]=layerSource->layerBGX[1];
	dim.X[2]=layerSource->layerBGX[2];
	dim.Y[0]=layerSource->layerBGY[0];
	dim.Y[1]=layerSource->layerBGY[1];
	dim.Y[2]=layerSource->layerBGY[2];
	return Layer_Print_Triangle(layerDest,dim,layerSource->layerColorBG);
}




uint32_t Layer_Print_MultilineClose(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{

	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t position=0;
	dimensions.radiusInit= dim.radiusInit;

	if(dimensions.radiusInit<2)
		return 0;

	  while(--dimensions.radiusInit)
	  {
		dimensions.X[0]=dim.X[position];
		dimensions.Y[0]=dim.Y[position];
		dimensions.X[1]=dim.X[position+1];
		dimensions.Y[1]=dim.Y[position+1];
		position++;
		if(!Layer_Print_LineXY(layer,dimensions,color))
			return 0;
	  }

		dimensions.X[0]=dim.X[0];
		dimensions.Y[0]=dim.Y[0];
		dimensions.X[1]=dim.X[position];
		dimensions.Y[1]=dim.Y[position];
		if(!Layer_Print_LineXY(layer,dimensions,color))
			return 0;

	return 1;
}


uint32_t Layer_Print_Multiline(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{

	LTDC_DIMENSIONS_TypeDef dimensions;
	int32_t position=0;
	dimensions.radiusInit= dim.radiusInit;

	if(dimensions.radiusInit<2)
		return 0;

	  while(--dimensions.radiusInit)
	  {
		dimensions.X[0]=dim.X[position];
		dimensions.Y[0]=dim.Y[position];
		dimensions.X[1]=dim.X[position+1];
		dimensions.Y[1]=dim.Y[position+1];
		position++;
		if(!Layer_Print_LineXY(layer,dimensions,color))
			return 0;
	  }
	return 1;
}

uint32_t Layer_MultilineType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	int32_t counter=0;
	while(layerSource->layerXCount>4)
	{
		layerSource->layerXCount-=4;
		dim.radiusInit=4;
		dim.X[0]=layerSource->layerBGX[0+counter];
		dim.X[1]=layerSource->layerBGX[1+counter];
		dim.X[2]=layerSource->layerBGX[2+counter];
		dim.X[3]=layerSource->layerBGX[3+counter];
		dim.Y[0]=layerSource->layerBGY[0+counter];
		dim.Y[1]=layerSource->layerBGY[1+counter];
		dim.Y[2]=layerSource->layerBGY[2+counter];
		dim.Y[3]=layerSource->layerBGY[3+counter];
		counter+=4;
		Layer_Print_Multiline(layerDest,dim,layerSource->layerColorBG);
	}
	dim.radiusInit=layerSource->layerXCount;
	dim.X[0]=layerSource->layerBGX[0+counter];
	dim.X[1]=layerSource->layerBGX[1+counter];
	dim.X[2]=layerSource->layerBGX[2+counter];
	dim.X[3]=layerSource->layerBGX[3+counter];
	dim.Y[0]=layerSource->layerBGY[0+counter];
	dim.Y[1]=layerSource->layerBGY[1+counter];
	dim.Y[2]=layerSource->layerBGY[2+counter];
	dim.Y[3]=layerSource->layerBGY[3+counter];
	Layer_Print_Multiline(layerDest,dim,layerSource->layerColorBG);

	return 1;
}

uint32_t Layer_MultilineCloseType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	int32_t counter=0;
	while(layerSource->layerRadiusInit>4)
	{
		layerSource->layerRadiusInit-=4;
		dim.radiusInit=4;
		dim.X[0]=layerSource->layerBGX[0+counter];
		dim.X[1]=layerSource->layerBGX[1+counter];
		dim.X[2]=layerSource->layerBGX[2+counter];
		dim.X[3]=layerSource->layerBGX[3+counter];
		dim.Y[0]=layerSource->layerBGY[0+counter];
		dim.Y[1]=layerSource->layerBGY[1+counter];
		dim.Y[2]=layerSource->layerBGY[2+counter];
		dim.Y[3]=layerSource->layerBGY[3+counter];
		counter+=4;
		Layer_Print_Multiline(layerDest,dim,layerSource->layerColorBG);
	}
	dim.radiusInit=layerSource->layerRadiusInit;
	dim.X[0]=layerSource->layerBGX[0+counter];
	dim.X[1]=layerSource->layerBGX[1+counter];
	dim.X[2]=layerSource->layerBGX[2+counter];
	dim.X[3]=layerSource->layerBGX[3+counter];
	dim.Y[0]=layerSource->layerBGY[0+counter];
	dim.Y[1]=layerSource->layerBGY[1+counter];
	dim.Y[2]=layerSource->layerBGY[2+counter];
	dim.Y[3]=layerSource->layerBGY[3+counter];
	Layer_Print_MultilineClose(layerDest,dim,layerSource->layerColorBG);

	return 1;
}

uint32_t Layer_Print_TriangleFill(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
  int32_t x1,y1,x2,y2,x3,y3,temp;
  float deltax1,deltax2,deltax3;
  float x,difer;
  LTDC_DIMENSIONS_TypeDef dimensions;




  x1= dim.X[0];
  x2= dim.X[1];
  x3= dim.X[2];


  y1= dim.Y[0];
  y2= dim.Y[1];
  y3= dim.Y[2];

  if((x1> layer->layerWidthTotal) || (x2 > layer->layerWidthTotal) || (x3 > layer->layerWidthTotal) ||
		  (y1> layer->layerHeightTotal) || (y2> layer->layerHeightTotal)||(y3> layer->layerHeightTotal))
	  	  return 0;

  if(y1>y2)
  {
	  temp=y2;
	  y2=y1;
	  y1=temp;

	  temp=x2;
	  x2=x1;
	  x1=temp;
  }

  if(y2>y3)
  {
	  temp=y3;
	  y3=y2;
	  y2=temp;

	  temp=x3;
	  x3=x2;
	  x2=temp;
  }

  if(y1>y2)
  {
	  temp=y2;
	  y2=y1;
	  y1=temp;

	  temp=x2;
	  x2=x1;
	  x1=temp;
  }


  if((y2-y1)>0)
	  deltax1= (float)(((float)x2-(float)x1)/((float)y2-(float)y1));
  else
	  deltax1=0;

  if((y3-y1)>0)
	  deltax2= (float)(((float)x3-(float)x1)/((float)y3-(float)y1));
  else
	  deltax2=0;

  if((y3-y2)>0)
	  deltax3= (float)(((float)x3-(float)x2)/((float)y3-(float)y2));
  else
	  deltax3=0;

  x = x1;
  dimensions.YInit = y1;
  difer = x1;

  if(deltax1>deltax2)
  {
	  for(;dimensions.YInit<=y2;dimensions.YInit++,x+=deltax2,difer+=deltax1)
	  {
		  dimensions.width=(int32_t)(x-difer);
		  if(x<difer)
		  {

			  dimensions.width=(int32_t)(difer-x);
			  dimensions.XInit=(int32_t)x;
		  }
		  else
		  {

			  dimensions.width=(int32_t)(x-difer);
			  dimensions.XInit=(int32_t)difer;
		  }
		  Layer_Print_LineHorizontal(layer,dimensions,color);
	  }
	  difer=x2;
	  for(;dimensions.YInit<=y3;dimensions.YInit++,x+=deltax2,difer+=deltax3)
	  {
		  if(x<difer)
		  {

			  dimensions.width=(int32_t)(difer-x);
			  dimensions.XInit=(int32_t)x;
		  }
		  else
		  {

			  dimensions.width=(int32_t)(x-difer);
			  dimensions.XInit=(int32_t)difer;
		  }
		  Layer_Print_LineHorizontal(layer,dimensions,color);

	  }
  }
  else
  {
	  for(;dimensions.YInit<=y2;dimensions.YInit++,x+=deltax1,difer+=deltax2)
	  {
		  if(x<difer)
		  {

			  dimensions.width=(int32_t)(difer-x);
			  dimensions.XInit=(int32_t)x;
		  }
		  else
		  {

			  dimensions.width=(int32_t)(x-difer);
			  dimensions.XInit=(int32_t)difer;
		  }
		  Layer_Print_LineHorizontal(layer,dimensions,color);
	  }
	  x = x2;
	  dimensions.YInit = y2;
	  for(;dimensions.YInit<=y3;dimensions.YInit++,x+=deltax3,difer+=deltax2)
	  {
		  if(x<difer)
		  {

			  dimensions.width=(int32_t)(difer-x);
			  dimensions.XInit=(int32_t)x;
		  }
		  else
		  {

			  dimensions.width=(int32_t)(x-difer);
			  dimensions.XInit=(int32_t)difer;
		  }
	  	  Layer_Print_LineHorizontal(layer,dimensions,color);

	  }
  }
  return 1;
}



uint32_t Layer_TriangleFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	dim.X[0]=layerSource->layerBGX[0];
	dim.X[1]=layerSource->layerBGX[1];
	dim.X[2]=layerSource->layerBGX[2];
	dim.Y[0]=layerSource->layerBGY[0];
	dim.Y[1]=layerSource->layerBGY[1];
	dim.Y[2]=layerSource->layerBGY[2];
	return Layer_Print_TriangleFill(layerDest,dim,layerSource->layerColorBG);
}


uint32_t Layer_Clear(LTDC_TFT_TypeDef* layer, uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress;
	DMA2D->OOR=0;
	DMA2D->NLR_Bit.NL=layer->layerHeightTotal;
	DMA2D->NLR_Bit.PL=layer->layerWidthTotal;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D->CR_Bit.ABORT=1;
			return 0;
		}
		timeout--;
	}
	return 1;


}


uint32_t Layer_ClearSection	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color)
{
	uint32_t CM=2;
	uint32_t timeout=500000;

	if(dim.X[0]>layer->layerWidthTotal)
		return 0;
	if(dim.Y[0]>layer->layerHeightTotal)
		return 0;

	if((dim.height+ dim.YInit)>layer->layerHeightTotal)
		//dim.height= layer->layerHeightTotal- dim.Y[0];
		return 0;
	if((dim.width+ dim.XInit)>layer->layerWidthTotal)
		//dim.width= layer->layerWidthTotal- dim.X[0];
		return 0;



	DMA2D_SetWait();
	DMA2D->CR_Bit.MODE=3;
	DMA2D->CR_Bit.TCIE=1;
	DMA2D->OPFCCR_Bit.CM=CM;
	DMA2D->OMAR=layer->layerDataAddress+((dim.YInit*layer->layerWidthTotal + dim.XInit)*2);
	DMA2D->OOR=layer->layerWidthTotal-dim.width;
	DMA2D->NLR_Bit.NL=dim.height;
	DMA2D->NLR_Bit.PL=dim.width;
	DMA2D->OCOLR=color;
	DMA2D->CR_Bit.START=1;
	timeout=60000000;
	while(DMA2D_Ready()){
		if(timeout==0)
		{
			DMA2D_ClearWait();
			DMA2D->CR_Bit.ABORT=1;
			return 0;
		}
		timeout--;
	}
	return 1;
}



LTDC_COORD_TypeDef Layer_Print_Char(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,char ascii,uint32_t color,FONT_TypeDef* font)
{
  uint32_t fila = 0, columna = 0, ypos =0;
  uint32_t  xAddress = dim.XInit;
  LTDC_COORD_TypeDef coord={0};

  const uint16_t* character;

  if((dim.YInit+font->height)>layer->layerHeightTotal)
	  return coord;

  if((dim.XInit+font->width)>layer->layerWidthTotal)
	  return coord;

  character=(const uint16_t*)(&font->ascii[(ascii-0x20) * font->height]);

  ypos = dim.YInit*layer->layerWidthTotal*2;

  if(font->width==11  )
  {
	  character=(const uint16_t*)(&font->ascii[(ascii-0x20) * font->width]);
	  ypos = dim.YInit;
	  for(fila = 0; fila < font->height; fila++)
	  {
			for(columna = 0; columna < font->width;columna++)
			{
				if((((character[columna] )>>(fila))&1) )
					*(__IO uint16_t*) (layer->layerDataAddress + (2*((ypos*layer->layerWidthTotal) + xAddress ))) = color;
				xAddress++;
			}
		xAddress =  dim.XInit;
		ypos++;
	  }
  }
  else if (font->width==7)
  {
	  for(fila = 0; fila < font->width; fila++)
	  {
			for(columna = 0; columna < font->height;columna++)
			{
				if((((character[columna] )>>(fila))&1) )
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = color;
				xAddress++;
			}
		xAddress += (layer->layerWidthTotal - font->height);
	  }
  }
  else
	for(fila = 0; fila < font->height; fila++)
	{
		if(font->height==24)
			for(columna = 0; columna < font->width;columna++)
			{
				if((((character[fila] )>>(columna))&1) )
					*( uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = color;
				xAddress++;
			}
		else
			for(columna = font->bits; columna > (font->bits-font->width);columna--)
			{
				if((((character[fila] )>>(columna-1))&1) )
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = color;
				xAddress++;
			}
		xAddress += (layer->layerWidthTotal - font->width);
	}
  coord.X=dim.XInit+font->width;
  coord.Y=dim.YInit;
  return coord;
}

LTDC_COORD_TypeDef Layer_Print_CharBG(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,char ascii,uint32_t colorFont, uint32_t colorBG,FONT_TypeDef* font)
{
  uint32_t fila = 0, columna = 0, ypos =0;
  uint32_t  xAddress = dim.XInit;
  LTDC_COORD_TypeDef coord={0};

  const uint16_t* character;

  if((dim.YInit+font->height)>layer->layerHeightTotal)
	  return coord;

  if((dim.XInit+font->width)>layer->layerWidthTotal)
	  return coord;

  character=(const uint16_t*)(&font->ascii[(ascii-0x20) * font->height]);

  ypos = dim.YInit*layer->layerWidthTotal*2;

  if((font->height==11 || font->width==7) )
	  for(fila = 0; fila < font->width; fila++)
	  {
			for(columna = 0; columna < font->height;columna++)
			{
				if((((character[columna] )>>(fila))&1) )
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = colorFont;
				else
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = colorBG;
				xAddress++;
			}
		xAddress += (layer->layerWidthTotal - font->height);
	  }
  else
	for(fila = 0; fila < font->height; fila++)
	{
		if(font->height==24)
			for(columna = 0; columna < font->width;columna++)
			{
				if((((character[fila] )>>(columna))&1) )
					*( uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = colorFont;
				else
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = colorBG;
				xAddress++;
			}
		else
			for(columna = font->bits; columna > (font->bits-font->width);columna--)
			{
				if((((character[fila] )>>(columna-1))&1) )
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = colorFont;
				else
					*(__IO uint16_t*) (layer->layerDataAddress + (2*xAddress) + ypos) = colorBG;
				xAddress++;
			}
		xAddress += (layer->layerWidthTotal - font->width);
	}
  coord.X=dim.XInit+font->width;
  coord.Y=dim.YInit;
  return coord;
}

uint32_t Layer_Print_String(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,LTDC_COORD_TypeDef* coord,char* string,uint32_t colorFont,FONT_TypeDef* font)
{
    uint32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron
    LTDC_DIMENSIONS_TypeDef dimensions;


    if((dim.YInit+dim.height)>layer->layerHeightTotal)
  	  return countChar;

    if((dim.XInit+dim.width)>layer->layerWidthTotal)
  	  return countChar;

    dimensions.XInit=dim.XInit;
    dimensions.YInit=dim.YInit;
     while(*string)
     {

    	 switch(*string)

    	 {
    	 case '\n':
			 dimensions.YInit=coord->Y+font->height;
			 if((dimensions.YInit-dim.YInit)>(dim.height))
				 return countChar;
			 break;
    	 case '\r':
			 dimensions.XInit=dim.XInit;
			 break;
    	 default:
    		 *coord=Layer_Print_Char(layer,dimensions,*string,colorFont,font);
			 if((coord->X-dim.XInit+ font->width)>(dim.width))
			 {
				 dimensions.XInit=dim.XInit;
				 dimensions.YInit=coord->Y+font->height;
				 if((dimensions.YInit-dim.YInit)>(dim.height))
					 return countChar;
			 }
			 else
			 {
				dimensions.XInit=coord->X;
				dimensions.YInit=coord->Y;
			 }
			 break;
    	 }
		 string++; //el puntero apunta al siguiente caracter
		 countChar++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     return countChar;
}

uint32_t Layer_StringSimpleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	LTDC_COORD_TypeDef coord;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.width=layerSource->layerWidth;
	dim.height=layerSource->layerHeight;
	return Layer_Print_String(layerDest,dim,&coord,layerSource->layerString,layerSource->layerColorFont,layerSource->layerFont);
}

uint32_t Layer_Print_StringBG(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,LTDC_COORD_TypeDef* coord,char* string,uint32_t colorFont, uint32_t colorBG,FONT_TypeDef* font)
{
    uint32_t countChar=0;//variable usada para saber cuentos caracteres se imprimieron
    LTDC_DIMENSIONS_TypeDef dimensions;


    if((dim.YInit+dim.height)>layer->layerHeightTotal)
  	  return countChar;

    if((dim.XInit+dim.width)>layer->layerWidthTotal)
  	  return countChar;

    dimensions.XInit=dim.XInit;
    dimensions.YInit=dim.YInit;
     while(*string)
     {

    	 *coord=Layer_Print_CharBG(layer,dimensions,*string,colorFont,colorBG,font);
    	 if((coord->X-dim.XInit+ font->width)>(dim.width))
    	 {
    		 dimensions.XInit=dim.XInit;
    		 dimensions.YInit=coord->Y+font->height;
        	 if((dimensions.YInit-dim.YInit)>(dim.height))
        		 return countChar;
    	 }
    	 else
    	 {
			dimensions.XInit=coord->X;
			dimensions.YInit=coord->Y;
    	 }
    	 string++; //el puntero apunta al siguiente caracter
         countChar++; //suma 1 al conteo total de caracter enviados a la LCD
     }
     return countChar;
}
uint32_t Layer_StringSimpleBGType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest)
{
	LTDC_DIMENSIONS_TypeDef dim;
	LTDC_COORD_TypeDef coord;
	dim.XInit=layerSource->layerBGXInit;
	dim.YInit=layerSource->layerBGYInit;
	dim.width=layerSource->layerWidth;
	dim.height=layerSource->layerHeight;
	return Layer_Print_StringBG(layerDest,dim,&coord,layerSource->layerString,layerSource->layerColorFont,layerSource->layerColorBG,layerSource->layerFont);
}
uint64_t Layer_Print_Formated(char* string,...)
{
    register uint64_t count=0;//variable usada para saber cuantos caracteres se mandaron a la LCD

    va_list ap; //crea puntero de los argumentos
    double valueARGd; //variable donde guardara el valor del argumento
    int8_t* valueARGc; //variable donde guardara el valor del argumento
    int32_t valueARGi; //variable donde guardara el valor del argumento
    int64_t valueARGii; //variable donde guardara el valor del argumento
    uint64_t valueARGuu; //variable donde guardara el valor del argumento
    void* valueARGcl; //variable donde guardara el valor del argumento
    int8_t conversion[30];
    va_start(ap, string);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado
    while(*string)// realiza el ciclo mientras la string tenga algun valor
    {
        switch (*string) //detecta si existe un caracter especial
        {
        case '%':
            string++;
            switch(*string)
            {
                case 'd': //"%d o %i"
                case 'i':
                    valueARGi=(int32_t)va_arg(ap, int32_t);
                    //Int_To_String((int32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break;
                case 'u':// "%u"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    //UInt_To_String((uint32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break;
                case 'x': //"%x"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    //Hex_To_String((uint32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break;
                case 'X':// "%X"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    //Hex_To_String((uint32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break;
                case 'o': //"%o"
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    Oct_To_String((uint32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break;
               case 'p': //"%p"
                    valueARGcl=(void*)va_arg(ap, void*);
                        Bin_To_String((int64_t)valueARGcl,conversion);
                        //count+=UART0_SendString(conversion)-1;
                        break;
                case 'f': //"%f"
                    valueARGd=(double)va_arg(ap, double);
                    //Float_To_String((float)valueARGd,3,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break;




                case 'c': //"%c"
                    valueARGi=(uint8_t)va_arg(ap, int32_t);
                    //while(!UART0_SendChar(valueARGi));//manda el caracter a la LCD
                    break;
                case 's':// "%s"
                    valueARGc=(int8_t*)va_arg(ap,int8_t*);  //el siguiente argumento es un puntero
                    //count+=UART0_SendString(valueARGc)-1;//imprime la string del puntero
                    break;
                case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                    string++; //aumenta en uno la posicion del string
                    if(*string=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                        valueARGd=(double)va_arg(ap, double);
                        //Float_To_String((double)valueARGd,5,conversion);
                        //count+=UART0_SendString(conversion)-1;
                        break; //break de este caso
                    }
                    if(*string=='l' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                        string++;
                        if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                          {
                          valueARGii=(int64_t)va_arg(ap, int64_t);
                          //Int_To_String((int64_t)valueARGii,conversion);
                          //count+=UART0_SendString(conversion)-1;
                          break; //break de este caso
                          }
                        if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                          {
                          valueARGii=(uint64_t)va_arg(ap, uint64_t);
                          //UInt_To_String((uint64_t)valueARGuu,conversion);
                          //count+=UART0_SendString(conversion)-1;
                          break; //break de este caso
                          }
                    }
                    if(*string=='d' || *string=='i' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valueARGi=(int32_t)va_arg(ap, int32_t);
                    //Int_To_String((int32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break; //break de este caso
                    }
                    if(*string=='u' ) //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valueARGi=(uint32_t)va_arg(ap, uint32_t);
                    //Int_To_String((uint32_t)valueARGi,conversion);
                    //count+=UART0_SendString(conversion)-1;
                    break; //break de este caso
                    }
                    else
                    {
                        string--; //si no encuentra la 'f' regresa a la 'l'
                    string--;//si no es ningun caso anterior regresa al '%'
                   // while(!UART0_SendChar(*string));
                    break;
                    }
                default:// "%p"
                    string--;//si no es ningun caso anterior regresa al '%'
                   // while(!UART0_SendChar(*string));
                    break;

           }
            break;



        default :
            //while(!UART0_SendChar(*(string))); //envia el caracter correspondiente
            break;
        }
        string++; //el puntero apunta al siguiente caracter
        count++; //suma 1 al conteo total de caracter enviados a la LCD
    }
    va_end(ap); //reinicia el puntero

     return count; //regresa el conteo de caracteres y caracteres especiales
}


/*
void LTDC_ClearLine(uint32_t line)
{
	LTDC_LayerActual->posX=0;
	LTDC_LayerActual->posY=line;
	LTDC_LayerActual->width=LTDC_LayerActual->widthTotal;
	LTDC_LayerActual->height=1;
	LTDC_LayerActual->color=LTDC_LayerActual->BGColor;
	LTDC_LayerFill(LTDC_LayerActual);
}

void LTDC_ClearFontLine(uint32_t line)
{
	LTDC_LayerActual->posX=0;
	LTDC_LayerActual->posY=line*LTDC_LayerActual->font->width;
	LTDC_LayerActual->width=LTDC_LayerActual->widthTotal;
	LTDC_LayerActual->height=LTDC_LayerActual->font->width;
	LTDC_LayerActual->color=LTDC_LayerActual->BGColor;
	LTDC_LayerFill(LTDC_LayerActual);
}


*/




uint32_t refresh=1;

void LTDC_Refresh(void)
{
	LTDC_ICR->CLIF=1;
	LTDC_IER->LIE=1;
	refresh=1;
	while(refresh);
}

__attribute__((section(".itcmram")))
void LTDC_ER_IRQHandler(void)
{
	if(LTDC_ISR->TERRIF)
	{

		LTDC_ICR->CTERRIF=1;
	}
	if(LTDC_ISR->FUIF)
	{
		LTDC_ICR->CFUIF=1;
	}
}

__attribute__((section(".itcmram")))
void LTDC_IRQHandler(void)
{
	if(LTDC_ISR->LIF)
	{
		LTDC_ICR->CLIF=1;
		refresh=0;
		LTDC_IER->LIE=0;
		//BGUpdate=0;
	}
}
