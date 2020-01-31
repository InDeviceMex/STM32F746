/*
 * DMA2D.c
 *
 *  Created on: 14/09/2018
 *      Author: InDev
 */
#include "DMA2D.h"
uint32_t wait=0;
uint32_t timeout=60000000;
uint32_t DMA2D_Init(void)
{
	uint32_t delay=0;
	RCC_AHB1ENR->DMA2DEN=1;
	delay=RCC_AHB1ENR->DMA2DEN;

	DMA2D->AMTCR_Bit.DT=10;
	DMA2D->AMTCR_Bit.EN=1;
	NVIC_ISER2->NVIC_DMA2D =1;
	NVIC_IPR22->NVIC_DMA2D=NVIC_PRIORITY_DMA2D;

	return delay;
}

uint32_t DMA2D_DeInit(void)
{
	uint32_t delay=0;
	RCC_AHB1RSTR->DMA2DRST=1;
	delay=RCC_AHB1RSTR->DMA2DRST;

	RCC_AHB1RSTR->DMA2DRST=0;

	DMA2D->CR_Bit.TEIE=1;
	DMA2D->CR_Bit.CEIE=1;
	NVIC_ISER2->NVIC_DMA2D =0;
	NVIC_IPR22->NVIC_DMA2D=NVIC_PRIORITY_DMA2D;

	return delay;
}

uint32_t DMA2D_Ready(void)
{
	if(timeout==0)
	{
		timeout=60000000;
		wait=0;
		DMA2D_CR_R |=DMA2D_CR_ABORT;
		return 0;
	}
	timeout--;
	return wait;
}
uint32_t DMA2D_SetWait(void)
{
	wait=1;
	return wait;
}

uint32_t DMA2D_ClearWait(void)
{
	wait=0;
	return wait;
}


__attribute__((section(".itcmram")))
void DMA2D_IRQHandler(void)
{
	if (DMA2D_ISR_R & DMA2D_ISR_TCIF)
	{
		DMA2D_IFCR_R |=DMA2D_IFCR_CTCIF;
		wait=0;
		DMA2D_CR_R &=~ DMA2D_CR_TCIE;

	}
	if (DMA2D_ISR_R & DMA2D_ISR_TEIF)
	{
		DMA2D_IFCR_R |=DMA2D_IFCR_CTEIF;
	}
	if (DMA2D_ISR_R & DMA2D_ISR_CEIF)
	{
		DMA2D_IFCR_R|= DMA2D_IFCR_CCEIF;

	}
}
