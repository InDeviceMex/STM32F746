/*
 * USART.c
 *
 *  Created on: 02/10/2018
 *      Author: InDev
 */



#include "USART.h"

uint32_t USART_Init(void)
{
	uint32_t temp=0,integerdivider,fractionaldivider,apbclock;
	RCC->AHB1ENR_Bit.GPIOAEN=1;
	RCC->APB2ENR_Bit.USART1EN=1;
	RCC->DCKCFGR2_Bit.UART1SEL=0;

	GPIOA_AFRH->AFR9=7;
	GPIOA_AFRH->AFR10=7;
	GPIOA_MODER->MODER9=GPIOA_MODER_MODER9_ALT;
	GPIOA_MODER->MODER10=GPIOA_MODER_MODER10_ALT;
	GPIOA_OSPEEDR->OSPEEDR9=GPIOA_OSPEEDR_OSPEEDR9_VERY_HIGH;
	GPIOA_OSPEEDR->OSPEEDR10=GPIOA_OSPEEDR_OSPEEDR10_VERY_HIGH;
	GPIOA_OTYPER->OTYPER9=GPIOA_OTYPER_OT9_PP;
	GPIOA_OTYPER->OTYPER10=GPIOA_OTYPER_OT10_PP;
	GPIOA_PUPDR->PUPDR9=GPIOA_PUPDR_PUPDR9_PU;
	GPIOA_PUPDR->PUPDR10=GPIOA_PUPDR_PUPDR10_NO;

	temp=USART1->CR2;
	temp&=~0x3000;
	USART1->CR2=temp;
	USART1->CR1&=~1;
	USART1->CR1=0xC;
	apbclock=PCLK2Freq;
	if ((USART1->CR1 & USART_CR1_OVER8) != 0)
	{
		integerdivider = ((25 * apbclock) / (2 * (921600)));
	}
	else
	{
	  integerdivider = ((25 * apbclock) / (4 * (921600)));
	}
	temp = (integerdivider / 100) << 4;
	fractionaldivider = integerdivider - (100 * (temp >> 4));
	if ((USART1->CR1 & USART_CR1_OVER8) != 0)
	{
		temp |= ((((fractionaldivider * 8) + 50) / 100)) & ((uint8_t)0x07);
	}
	else
	{
		temp |= ((((fractionaldivider * 16) + 50) / 100)) & ((uint8_t)0x0F);
	}
	USART1->BRR = (uint16_t)temp;
	USART1->CR1|=1;


	return 1;
}


