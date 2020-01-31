/*
 * NVIC.h
 *
 *  Created on: 19 jul. 2018
 *      Author: InDev
 */

#ifndef NVIC_H_
#define NVIC_H_

#include "Core.h"
#include <stdint.h>                      		/* standard types definitions                      */


#define NVIC_BASE            ((uint32_t)0xE000E000UL)
#define NVIC_OFFSET          ((uint32_t)0x00000100UL)

#define NVIC_IRQ_MAX		(97)
#define NVIC_MAX			(3)
#define NVIC_IPR_MAX		(24)




enum
{
    NVIC_PRIORITY_FMC         =15,
    NVIC_PRIORITY_DMA2_Stream0 =14,

    NVIC_PRIORITY_I2C2_EV      =13,
    NVIC_PRIORITY_I2C2_ER      =13,
    NVIC_PRIORITY_DMA1_Stream3 =12,
    NVIC_PRIORITY_DMA1_Stream7 =12,


    NVIC_PRIORITY_LTDC        =11,
    NVIC_PRIORITY_LTDC_ER     =10,
    NVIC_PRIORITY_DMA2D       =9,

    NVIC_PRIORITY_DCMI        =2,
    NVIC_PRIORITY_DMA2_Stream1 =1,

      NVIC_PRIORITY_WWDG       		=15,
      NVIC_PRIORITY_PVD       		=15,
      NVIC_PRIORITY_TAMP_STAMP 		=15,
      NVIC_PRIORITY_RTC_WKUP   		=15,
      NVIC_PRIORITY_FLASH      		=15,
      NVIC_PRIORITY_RCC        		=15,
      NVIC_PRIORITY_EXTI0      		=15,
      NVIC_PRIORITY_EXTI1      		=15,
      NVIC_PRIORITY_EXTI2      		=15,
      NVIC_PRIORITY_EXTI3      		=15,
      NVIC_PRIORITY_EXTI4      		=15,
      NVIC_PRIORITY_DMA1_Stream0  	=15,
      NVIC_PRIORITY_DMA1_Stream1		=15,
      NVIC_PRIORITY_DMA1_Stream2  	=15,
      NVIC_PRIORITY_DMA1_Stream4	    =15,
      NVIC_PRIORITY_DMA1_Stream5		=15,
      NVIC_PRIORITY_DMA1_Stream6	    =15,
      NVIC_PRIORITY_ADC      		=15,
      NVIC_PRIORITY_CAN1_TX    		=15,
      NVIC_PRIORITY_CAN1_RX0   		=15,
      NVIC_PRIORITY_CAN1_RX1   		=15,
      NVIC_PRIORITY_CAN1_SCE   		=15,
      NVIC_PRIORITY_EXTI9_5    		=15,
      NVIC_PRIORITY_TIM1_BRK_TIM9	=15,
      NVIC_PRIORITY_TIM1_UP_TIM10	=15,
      NVIC_PRIORITY_TIM1_TRG_COM_TIM11=15,
      NVIC_PRIORITY_TIM1_CC          =15,
      NVIC_PRIORITY_TIM2             =15,
      NVIC_PRIORITY_TIM3	   	 	    =15,
      NVIC_PRIORITY_TIM4 	        =15,
      NVIC_PRIORITY_I2C1_EV       	=15,
      NVIC_PRIORITY_I2C1_ER      =15,
      NVIC_PRIORITY_SPI1         =15,
      NVIC_PRIORITY_SPI2         =15,
      NVIC_PRIORITY_USART1       =15,
      NVIC_PRIORITY_USART2       =15,
      NVIC_PRIORITY_USART3       =15,
      NVIC_PRIORITY_EXTI15_10    =15,
      NVIC_PRIORITY_RTC_Alarm    =15,
      NVIC_PRIORITY_OTG_FS_WKUP  =15,
      NVIC_PRIORITY_TIM8_BRK_TIM12=15,
      NVIC_PRIORITY_TIM8_UP_TIM13=15,
      NVIC_PRIORITY_TIM8_TRG_COM_TIM14=15,
      NVIC_PRIORITY_TIM8_CC      =15,
      NVIC_PRIORITY_SDMMC1       =15,
      NVIC_PRIORITY_TIM5         =15,
      NVIC_PRIORITY_SPI3         =15,
      NVIC_PRIORITY_UART4        =15,
      NVIC_PRIORITY_UART5        =15,
      NVIC_PRIORITY_TIM6_DAC     =15,
      NVIC_PRIORITY_TIM7         =15,
      NVIC_PRIORITY_DMA2_Stream2 =15,
      NVIC_PRIORITY_DMA2_Stream3 =15,
      NVIC_PRIORITY_DMA2_Stream4 =15,
      NVIC_PRIORITY_ETH          =15,
      NVIC_PRIORITY_ETH_WKUP     =15,
      NVIC_PRIORITY_CAN2_TX      =15,
      NVIC_PRIORITY_CAN2_RX0    =15,
      NVIC_PRIORITY_CAN2_RX1    =15,
      NVIC_PRIORITY_CAN2_SCE    =15,
      NVIC_PRIORITY_OTG_FS      =15,
      NVIC_PRIORITY_DMA2_Stream5=15,
      NVIC_PRIORITY_DMA2_Stream6=15,
      NVIC_PRIORITY_DMA2_Stream7=15,
      NVIC_PRIORITY_USART6      =15,
      NVIC_PRIORITY_I2C3_EV     =15,
      NVIC_PRIORITY_I2C3_ER     =15,
      NVIC_PRIORITY_OTG_HS_EP1_OUT=15,
      NVIC_PRIORITY_OTG_HS_EP1_IN =15,
      NVIC_PRIORITY_OTG_HS_WKUP =15,
      NVIC_PRIORITY_OTG_HS      =15,
      NVIC_PRIORITY_RNG         =15,
      NVIC_PRIORITY_FPU         =15,
      NVIC_PRIORITY_UART7       =15,
      NVIC_PRIORITY_UART8       =15,
      NVIC_PRIORITY_SPI4        =15,
      NVIC_PRIORITY_SPI5        =15,
      NVIC_PRIORITY_SPI6        =15,
      NVIC_PRIORITY_SAI1        =15,
      NVIC_PRIORITY_SAI2        =15,
      NVIC_PRIORITY_QUADSPI     =15,
      NVIC_PRIORITY_LPTIM1      =15,
      NVIC_PRIORITY_CEC         =15,
      NVIC_PRIORITY_I2C4_EV     =15,
      NVIC_PRIORITY_I2C4_ER     =15,
      NVIC_PRIORITY_SPDIF_RX    =15,
}NVIC_IPR_Priority;


typedef __IO struct
{
    __IO uint32_t NVIC_WWDG       		:1;
    __IO uint32_t NVIC_PVD       		:1;
    __IO uint32_t NVIC_TAMP_STAMP 		:1;
    __IO uint32_t NVIC_RTC_WKUP   		:1;
    __IO uint32_t NVIC_FLASH      		:1;
    __IO uint32_t NVIC_RCC        		:1;
    __IO uint32_t NVIC_EXTI0      		:1;
    __IO uint32_t NVIC_EXTI1      		:1;
    __IO uint32_t NVIC_EXTI2      		:1;
    __IO uint32_t NVIC_EXTI3      		:1;
    __IO uint32_t NVIC_EXTI4      		:1;
    __IO uint32_t NVIC_DMA1_Stream0  	:1;
    __IO uint32_t NVIC_DMA1_Stream1		:1;
    __IO uint32_t NVIC_DMA1_Stream2  	:1;
    __IO uint32_t NVIC_DMA1_Stream3		:1;
    __IO uint32_t NVIC_DMA1_Stream4	    :1;
    __IO uint32_t NVIC_DMA1_Stream5		:1;
    __IO uint32_t NVIC_DMA1_Stream6	    :1;
    __IO uint32_t NVIC_ADC      		:1;
    __IO uint32_t NVIC_CAN1_TX    		:1;
    __IO uint32_t NVIC_CAN1_RX0   		:1;
    __IO uint32_t NVIC_CAN1_RX1   		:1;
    __IO uint32_t NVIC_CAN1_SCE   		:1;
    __IO uint32_t NVIC_EXTI9_5    		:1;
    __IO uint32_t NVIC_TIM1_BRK_TIM9	:1;
    __IO uint32_t NVIC_TIM1_UP_TIM10	:1;
    __IO uint32_t NVIC_TIM1_TRG_COM_TIM11:1;
    __IO uint32_t NVIC_TIM1_CC          :1;
    __IO uint32_t NVIC_TIM2             :1;
    __IO uint32_t NVIC_TIM3	   	 	    :1;
    __IO uint32_t NVIC_TIM4 	        :1;
    __IO uint32_t NVIC_I2C1_EV       	:1;
}NVIC0_TypeDef;

typedef __IO struct
{
    __IO uint32_t NVIC_I2C1_ER      :1;
    __IO uint32_t NVIC_I2C2_EV      :1;
    __IO uint32_t NVIC_I2C2_ER      :1;
    __IO uint32_t NVIC_SPI1         :1;
    __IO uint32_t NVIC_SPI2         :1;
    __IO uint32_t NVIC_USART1       :1;
    __IO uint32_t NVIC_USART2       :1;
    __IO uint32_t NVIC_USART3       :1;
    __IO uint32_t NVIC_EXTI15_10    :1;
    __IO uint32_t NVIC_RTC_Alarm    :1;
    __IO uint32_t NVIC_OTG_FS_WKUP  :1;
    __IO uint32_t NVIC_TIM8_BRK_TIM12:1;
    __IO uint32_t NVIC_TIM8_UP_TIM13:1;
    __IO uint32_t NVIC_TIM8_TRG_COM_TIM14:1;
    __IO uint32_t NVIC_TIM8_CC      :1;
    __IO uint32_t NVIC_DMA1_Stream7 :1;
    __IO uint32_t NVIC_FMC          :1;
    __IO uint32_t NVIC_SDMMC1       :1;
    __IO uint32_t NVIC_TIM5         :1;
    __IO uint32_t NVIC_SPI3         :1;
    __IO uint32_t NVIC_UART4        :1;
    __IO uint32_t NVIC_UART5        :1;
    __IO uint32_t NVIC_TIM6_DAC     :1;
    __IO uint32_t NVIC_TIM7         :1;
    __IO uint32_t NVIC_DMA2_Stream0 :1;
    __IO uint32_t NVIC_DMA2_Stream1 :1;
    __IO uint32_t NVIC_DMA2_Stream2 :1;
    __IO uint32_t NVIC_DMA2_Stream3 :1;
    __IO uint32_t NVIC_DMA2_Stream4 :1;
    __IO uint32_t NVIC_ETH          :1;
    __IO uint32_t NVIC_ETH_WKUP     :1;
    __IO uint32_t NVIC_CAN2_TX      :1;
}NVIC1_TypeDef;


typedef __IO struct
{
    __IO uint32_t NVIC_CAN2_RX0    :1;
    __IO uint32_t NVIC_CAN2_RX1    :1;
    __IO uint32_t NVIC_CAN2_SCE    :1;
    __IO uint32_t NVIC_OTG_FS      :1;
    __IO uint32_t NVIC_DMA2_Stream5:1;
    __IO uint32_t NVIC_DMA2_Stream6:1;
    __IO uint32_t NVIC_DMA2_Stream7:1;
    __IO uint32_t NVIC_USART6      :1;
    __IO uint32_t NVIC_I2C3_EV     :1;
    __IO uint32_t NVIC_I2C3_ER     :1;
    __IO uint32_t NVIC_OTG_HS_EP1_OUT:1;
    __IO uint32_t NVIC_OTG_HS_EP1_IN :1;
    __IO uint32_t NVIC_OTG_HS_WKUP :1;
    __IO uint32_t NVIC_OTG_HS      :1;
    __IO uint32_t NVIC_DCMI        :1;
    __I  uint32_t reserved1        :1;
    __IO uint32_t NVIC_RNG         :1;
    __IO uint32_t NVIC_FPU         :1;
    __IO uint32_t NVIC_UART7       :1;
    __IO uint32_t NVIC_UART8       :1;
    __IO uint32_t NVIC_SPI4        :1;
    __IO uint32_t NVIC_SPI5        :1;
    __IO uint32_t NVIC_SPI6        :1;
    __IO uint32_t NVIC_SAI1        :1;
    __IO uint32_t NVIC_LTDC        :1;
    __IO uint32_t NVIC_LTDC_ER     :1;
    __IO uint32_t NVIC_DMA2D       :1;
    __IO uint32_t NVIC_SAI2        :1;
    __IO uint32_t NVIC_QUADSPI     :1;
    __IO uint32_t NVIC_LPTIM1      :1;
    __IO uint32_t NVIC_CEC         :1;
    __IO uint32_t NVIC_I2C4_EV     :1;
}NVIC2_TypeDef;


typedef __IO struct
{
    __IO uint32_t NVIC_I2C4_ER     :1;
    __IO uint32_t NVIC_SPDIF_RX    :1;
    __I uint32_t reserved         :30;
}NVIC3_TypeDef;


typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_WWDG  		:4;//0
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_PVD  		:4;//1
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_TAMP_STAMP  	:4;//2
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_RTC_WKUP 	:4;//3
}IPR0_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_FLASH  		:4;//4
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_RCC	 		:4;//5
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_EXTI0	  	:4;//6
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_EXTI1	 	:4;//7
}IPR1_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_EXTI2  		:4;//8
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_EXTI3		:4;//9
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_EXTI4	  	:4;//10
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_DMA1_Stream0	:4;//11
}IPR2_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_DMA1_Stream1	:4;//12
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_DMA1_Stream2 :4;//13
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_DMA1_Stream3 :4;//14
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_DMA1_Stream4 :4;//15
}IPR3_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_DMA1_Stream5 :4;//16
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_DMA1_Stream6 :4;//17
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_ADC  	  	:4;//18
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_CAN1_TX	 	:4;//19
}IPR4_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_I2C1_ER		:4;//20
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_CAN1_RX1		:4;//21
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_CAN1_SCE	  	:4;//22
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_EXTI9_5	 	:4;//23
}IPR5_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_TIM1_BRK_TIM9:4;//24
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_TIM1_UP_TIM10:4;//25
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_TIM1_TRG_COM_TIM11:4;//26
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_TIM1_CC	 	:4;//27
}IPR6_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_TIM2			:4;//28
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_TIM3			:4;//29
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_TIM4		  	:4;//30
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_I2C1_EV	 	:4;//31
}IPR7_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_I2C1_ER		:4;//32
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_I2C2_EV		:4;//33
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_I2C2_ER	  	:4;//34
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_SPI1		 	:4;//35
}IPR8_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_SPI2			:4;//36
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_USART1		:4;//37
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_USART2	  	:4;//38
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_USART3	 	:4;//39
}IPR9_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_EXTI15_10	:4;//40
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_RTC_Alarm	:4;//41
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_OTG_FS_WKUP 	:4;//42
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_TIM8_BRK_TIM12:4;//43
}IPR10_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_TIM8_UP_TIM13:4;//44
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_TIM8_TRG_COM_TIM14:4;//45
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_TIM8_CC	 	:4;//46
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_DMA1_Stream7	:4;//47
}IPR11_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_FMC			:4;//48
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_SDIO 		:4;//49
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_TIM5		 	:4;//50
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_SPI3		 	:4;//51
}IPR12_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_UART4		:4;//52
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_UART5		:4;//53
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_TIM6_DAC	 	:4;//54
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_TIM7		 	:4;//55
}IPR13_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_DMA2_Stream0 :4;//56
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_DMA2_Stream1 :4;//57
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_DMA2_Stream2 :4;//58
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_DMA2_Stream3 :4;//59
}IPR14_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_DMA2_Stream4 :4;//60
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_ETH      	:4;//61
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_ETH_WKUP 	:4;//62
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_CAN2_TX  	:4;//63
}IPR15_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_CAN2_RX0		:4;//64
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_CAN2_RX1		:4;//65
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_CAN2_SCE 	:4;//66
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_OTG_FS	 	:4;//67
}IPR16_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_DMA2_Stream5	:4;//68
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_DMA2_Stream6 :4;//69
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_DMA2_Stream7 :4;//70
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_USART6	 	:4;//71
}IPR17_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_I2C3_EV		:4;//72
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_I2C3_ER		:4;//73
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_OTG_HS_EP1_OUT:4;//74
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_OTG_HS_EP1_IN:4;//75
}IPR18_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_OTG_HS_WKUP  :4;//76
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_OTG_HS		:4;//77
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_DCMI		 	:4;//78
         uint32_t reserved3			:4;
    __IO uint32_t _reserved79	 	:4;//79
}IPR19_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_RNG	    	:4;//80
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_FPU			:4;//81
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_UART7		:4;//82
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_UART8	 	:4;//83
}IPR20_TypeDef;


typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_SPI4 		:4;//84
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_SPI5 		:4;//85
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_SPI6 		:4;//86
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_SAI1 	 	:4;//87
}IPR21_TypeDef;


typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_LTDC 		:4;//88
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_LTDC_ER 		:4;//89
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_DMA2D    	:4;//90
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_SAI2 	 	:4;//91
}IPR22_TypeDef;


typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_QUADSPI 		:4;//92
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_LPTIM1 		:4;//93
         uint32_t reserved2			:4;
    __IO uint32_t NVIC_CEC       	:4;//94
         uint32_t reserved3			:4;
    __IO uint32_t NVIC_I2C4_EV 	 	:4;//95
}IPR23_TypeDef;

typedef __IO struct
{
         uint32_t reserved 			:4;
    __IO uint32_t NVIC_I2C4_ER		:4;//96
         uint32_t reserved1			:4;
    __IO uint32_t NVIC_SPDIF_RX 	:4;//97
         uint32_t reserved2			:4;
    __IO uint32_t _reserved98      	:4;//98
         uint32_t reserved3			:4;
    __IO uint32_t _reserved99 	 	:4;//99
}IPR24_TypeDef;



typedef __IO struct
{
          uint32_t reserved :4;
     __IO uint32_t IP0  	:4;//0
          uint32_t reserved1:4;
     __IO uint32_t IP1 		:4;//1
          uint32_t reserved2:4;
     __IO uint32_t IP2  	:4;//2
          uint32_t reserved3:4;
     __IO uint32_t IP3 		:4;//3
}IPRw_TypeDef;

typedef __IO struct
{
          uint32_t reserved :4;
     __IO uint32_t IP    	:4;//0
}IPRb_TypeDef;




typedef volatile struct
{
    IPRb_TypeDef IPR[240];
}IPRb__TypeDef;

typedef volatile struct
{
    IPRw_TypeDef IPR[60];
}IPRw__TypeDef;




typedef __IO struct
{
    __IO uint32_t INTID    :8;
         uint32_t reserved :24;
}STIR_TypeDef;




typedef __IO struct
{
  __IO uint32_t ISER[4U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
       uint32_t reserved0[28U];
  __IO uint32_t ICER[4U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
       uint32_t RSERVED1[28U];
  __IO uint32_t ISPR[4U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
       uint32_t reserved2[28U];
  __IO uint32_t ICPR[4U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
       uint32_t reserved3[28U];
  __IO uint32_t IABR[4U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
       uint32_t reserved4[60U];
  __IO uint8_t  IP[240U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
       uint32_t reserved5[644U];
  __O  uint32_t STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICb_TypeDef;


typedef __IO struct
{
  __IO uint32_t ISER[4U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
       uint32_t reserved0[28U];
  __IO uint32_t ICER[4U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
       uint32_t RSERVED1[28U];
  __IO uint32_t ISPR[4U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
       uint32_t reserved2[28U];
  __IO uint32_t ICPR[4U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
       uint32_t reserved3[28U];
  __IO uint32_t IABR[4U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
       uint32_t reserved4[60U];
  __IO uint32_t IP[60];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
       uint32_t reserved5[644U];
  __O  uint32_t STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICw_TypeDef;



typedef __IO struct
{
    union
    {
        __IO uint32_t  		ISER0;
        NVIC0_TypeDef       ISER0_Bit;
    };
    union
    {
        __IO uint32_t  		ISER1;
        NVIC1_TypeDef       ISER1_Bit;
    };
    union
    {
        __IO uint32_t  		ISER2;
        NVIC2_TypeDef       ISER2_Bit;
    };
    union
    {
        __IO uint32_t  		ISER3;
        NVIC3_TypeDef       ISER3_Bit;
    };

    uint32_t                reserved[28U];

    union
    {
        __IO uint32_t  		ICER0;
        NVIC0_TypeDef       ICER0_Bit;
    };
    union
    {
        __IO uint32_t  		ICER1;
        NVIC1_TypeDef       ICER1_Bit;
    };
    union
    {
        __IO uint32_t  		ICER2;
        NVIC2_TypeDef       ICER2_Bit;
    };
    union
    {
        __IO uint32_t  		ICER3;
        NVIC3_TypeDef       ICER3_Bit;
    };

    uint32_t  				reserved1[28U];

    union
    {
        __IO uint32_t  		ISPR0;
        NVIC0_TypeDef       ISPR0_Bit;
    };
    union
    {
        __IO uint32_t  		ISPR1;
        NVIC1_TypeDef       ISPR1_Bit;
    };
    union
    {
        __IO uint32_t  		ISPR2;
        NVIC2_TypeDef       ISPR2_Bit;
    };
    union
    {
        __IO uint32_t  		ISPR3;
        NVIC3_TypeDef       ISPR3_Bit;
    };

    uint32_t  				reserved2[28U];

    union
    {
        __IO uint32_t  		ICPR0;
        NVIC0_TypeDef       ICPR0_Bit;
    };
    union
    {
        __IO uint32_t  		ICPR1;
        NVIC1_TypeDef       ICPR1_Bit;
    };
    union
    {
        __IO uint32_t  		ICPR2;
        NVIC2_TypeDef       ICPR2_Bit;
    };
    union
    {
        __IO uint32_t  		ICPR3;
        NVIC3_TypeDef       ICPR3_Bit;
    };

    uint32_t  				reserved3[28U];

    union
    {
        __IO uint32_t  		IABR0;
        NVIC0_TypeDef       IABR0_Bit;
    };
    union
    {
        __IO uint32_t  		IABR1;
        NVIC1_TypeDef       IABR1_Bit;
    };
    union
    {
        __IO uint32_t  		IABR2;
        NVIC2_TypeDef       IABR2_Bit;
    };
    union
    {
        __IO uint32_t  		IABR3;
        NVIC3_TypeDef       IABR3_Bit;
    };

    uint32_t  				reserved4[60U];

    union
    {
        __IO uint8_t  		IPR0b[4];
        IPRb_TypeDef  		IPR0b_Bit[4];
        __IO uint32_t  		IPR0w;
        IPRw_TypeDef  		IPR0w_Bit;
        __IO uint32_t 		IPR0;
        IPR0_TypeDef        IPR0_Bit;
    };
    union
    {
        __IO uint8_t  		IPR1b[4];
        IPRb_TypeDef  		IPR1b_Bit[4];
        __IO uint32_t  		IPR1w;
        IPRw_TypeDef  		IPR1w_Bit;
        __IO uint32_t 		IPR1;
        IPR1_TypeDef        IPR1_Bit;
    };
    union
    {
        __IO uint8_t  		IPR2b[4];
        IPRb_TypeDef  		IPR2b_Bit[4];
        __IO uint32_t  		IPR2w;
        IPRw_TypeDef  		IPR2w_Bit;
        __IO uint32_t 		IPR2;
        IPR2_TypeDef        IPR2_Bit;
    };
    union
    {
        __IO uint8_t  		IPR3b[4];
        IPRb_TypeDef  		IPR3b_Bit[4];
        __IO uint32_t  		IPR3w;
        IPRw_TypeDef  		IPR3w_Bit;
        __IO uint32_t 		IPR3;
        IPR3_TypeDef        IPR3_Bit;
    };
    union
    {
        __IO uint8_t  		IPR4b[4];
        IPRb_TypeDef  		IPR4b_Bit[4];
        __IO uint32_t  		IPR4w;
        IPRw_TypeDef  		IPR4w_Bit;
        __IO uint32_t 		IPR4;
        IPR4_TypeDef        IPR4_Bit;
    };
    union
    {
        __IO uint8_t  		IPR5b[4];
        IPRb_TypeDef  		IPR5b_Bit[4];
        __IO uint32_t  		IPR5w;
        IPRw_TypeDef  		IPR5w_Bit;
        __IO uint32_t 		IPR5;
        IPR5_TypeDef        IPR5_Bit;
    };
    union
    {
        __IO uint8_t  		IPR6b[4];
        IPRb_TypeDef  		IPR6b_Bit[4];
        __IO uint32_t  		IPR6w;
        IPRw_TypeDef  		IPR6w_Bit;
        __IO uint32_t 		IPR6;
        IPR6_TypeDef        IPR6_Bit;
    };
    union
    {
        __IO uint8_t  		IPR7b[4];
        IPRb_TypeDef  		IPR7b_Bit[4];
        __IO uint32_t  		IPR7w;
        IPRw_TypeDef  		IPR7w_Bit;
        __IO uint32_t 		IPR7;
        IPR7_TypeDef        IPR7_Bit;
    };
    union
    {
        __IO uint8_t  		IPR8b[4];
        IPRb_TypeDef  		IPR8b_Bit[4];
        __IO uint32_t  		IPR8w;
        IPRw_TypeDef  		IPR8w_Bit;
        __IO uint32_t 		IPR8;
        IPR8_TypeDef        IPR8_Bit;
    };
    union
    {
        __IO uint8_t  		IPR9b[4];
        IPRb_TypeDef  		IPR9b_Bit[4];
        __IO uint32_t  		IPR9w;
        IPRw_TypeDef  		IPR9w_Bit;
        __IO uint32_t 		IPR9;
        IPR9_TypeDef        IPR9_Bit;
    };
    union
    {
        __IO uint8_t  		IPR10b[4];
        IPRb_TypeDef  		IPR10b_Bit[4];
        __IO uint32_t  		IPR10w;
        IPRw_TypeDef  		IPR10w_Bit;
        __IO uint32_t 		IPR10;
        IPR10_TypeDef       IPR10_Bit;
    };
    union
    {
        __IO uint8_t  		IPR11b[4];
        IPRb_TypeDef  		IPR11b_Bit[4];
        __IO uint32_t  		IPR11w;
        IPRw_TypeDef  		IPR11w_Bit;
        __IO uint32_t 		IPR11;
        IPR11_TypeDef       IPR11_Bit;
    };
    union
    {
        __IO uint8_t  		IPR12b[4];
        IPRb_TypeDef  		IPR12b_Bit[4];
        __IO uint32_t  		IPR12w;
        IPRw_TypeDef  		IPR12w_Bit;
        __IO uint32_t 		IPR12;
        IPR12_TypeDef       IPR12_Bit;
    };
    union
    {
        __IO uint8_t  		IPR13b[4];
        IPRb_TypeDef  		IPR13b_Bit[4];
        __IO uint32_t  		IPR13w;
        IPRw_TypeDef  		IPR13w_Bit;
        __IO uint32_t 		IPR13;
        IPR13_TypeDef       IPR13_Bit;
    };
    union
    {
        __IO uint8_t  		IPR14b[4];
        IPRb_TypeDef  		IPR14b_Bit[4];
        __IO uint32_t  		IPR14w;
        IPRw_TypeDef  		IPR14w_Bit;
        __IO uint32_t 		IPR14;
        IPR14_TypeDef       IPR14_Bit;
    };
    union
    {
        __IO uint8_t  		IPR15b[4];
        IPRb_TypeDef  		IPR15b_Bit[4];
        __IO uint32_t  		IPR15w;
        IPRw_TypeDef  		IPR15w_Bit;
        __IO uint32_t 		IPR15;
        IPR15_TypeDef       IPR15_Bit;
    };
    union
    {
        __IO uint8_t  		IPR16b[4];
        IPRb_TypeDef  		IPR16b_Bit[4];
        __IO uint32_t  		IPR16w;
        IPRw_TypeDef  		IPR16w_Bit;
        __IO uint32_t 		IPR16;
        IPR16_TypeDef       IPR16_Bit;
    };
    union
    {
        __IO uint8_t  		IPR17b[4];
        IPRb_TypeDef  		IPR17b_Bit[4];
        __IO uint32_t  		IPR17w;
        IPRw_TypeDef  		IPR17w_Bit;
        __IO uint32_t 		IPR17;
        IPR17_TypeDef       IPR17_Bit;
    };
    union
    {
        __IO uint8_t  		IPR18b[4];
        IPRb_TypeDef  		IPR18b_Bit[4];
        __IO uint32_t  		IPR18w;
        IPRw_TypeDef  		IPR18w_Bit;
        __IO uint32_t 		IPR18;
        IPR18_TypeDef       IPR18_Bit;
    };
    union
    {
        __IO uint8_t  		IPR19b[4];
        IPRb_TypeDef  		IPR19b_Bit[4];
        __IO uint32_t  		IPR19w;
        IPRw_TypeDef  		IPR19w_Bit;
        __IO uint32_t 		IPR19;
        IPR19_TypeDef       IPR19_Bit;
    };
    union
    {
        __IO uint8_t  		IPR20b[4];
        IPRb_TypeDef  		IPR20b_Bit[4];
        __IO uint32_t  		IPR20w;
        IPRw_TypeDef  		IPR20w_Bit;
        __IO uint32_t 		IPR20;
        IPR20_TypeDef       IPR20_Bit;
    };
    union
    {
        __IO uint8_t  		IPR21b[4];
        IPRb_TypeDef  		IPR21b_Bit[4];
        __IO uint32_t  		IPR21w;
        IPRw_TypeDef  		IPR21w_Bit;
        __IO uint32_t 		IPR21;
        IPR20_TypeDef       IPR21_Bit;
    };
    union
    {
        __IO uint8_t  		IPR22b[4];
        IPRb_TypeDef  		IPR22b_Bit[4];
        __IO uint32_t  		IPR22w;
        IPRw_TypeDef  		IPR22w_Bit;
        __IO uint32_t 		IPR22;
        IPR22_TypeDef       IPR22_Bit;
    };

    union
    {
        __IO uint8_t  		IPR23b[4];
        IPRb_TypeDef  		IPR23b_Bit[4];
        __IO uint32_t  		IPR23w;
        IPRw_TypeDef  		IPR23w_Bit;
        __IO uint32_t 		IPR23;
        IPR23_TypeDef       IPR23_Bit;
    };

    union
    {
        __IO uint8_t  		IPR24b[4];
        IPRb_TypeDef  		IPR24b_Bit[4];
        __IO uint32_t  		IPR24w;
        IPRw_TypeDef  		IPR24w_Bit;
        __IO uint32_t 		IPR24;
        IPR24_TypeDef       IPR24_Bit;
    };

    uint32_t  				reserved5[669U];

    union
    {
        __IO uint32_t  		STIR;
        STIR_TypeDef        STIR_Bit;
    };

}NVIC_TypeDef;

#define NVIC                ((NVIC_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICw               ((NVICw_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICb               ((NVICb_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */


#define NVIC_ISER0_OFFSET       ((uint32_t)0x0100)
#define NVIC_ICER0_OFFSET       ((uint32_t)0x0180)
#define NVIC_ISPR0_OFFSET       ((uint32_t)0x0200)
#define NVIC_ICPR0_OFFSET       ((uint32_t)0x0280)
#define NVIC_IABR0_OFFSET       ((uint32_t)0x0300)
#define NVIC_ISER1_OFFSET       ((uint32_t)0x0104)
#define NVIC_ICER1_OFFSET       ((uint32_t)0x0184)
#define NVIC_ISPR1_OFFSET       ((uint32_t)0x0204)
#define NVIC_ICPR1_OFFSET       ((uint32_t)0x0284)
#define NVIC_IABR1_OFFSET       ((uint32_t)0x0304)
#define NVIC_ISER2_OFFSET       ((uint32_t)0x0108)
#define NVIC_ICER2_OFFSET       ((uint32_t)0x0188)
#define NVIC_ISPR2_OFFSET       ((uint32_t)0x0208)
#define NVIC_ICPR2_OFFSET       ((uint32_t)0x0288)
#define NVIC_IABR2_OFFSET       ((uint32_t)0x0308)
#define NVIC_ISER3_OFFSET       ((uint32_t)0x010C)
#define NVIC_ICER3_OFFSET       ((uint32_t)0x018C)
#define NVIC_ISPR3_OFFSET       ((uint32_t)0x020C)
#define NVIC_ICPR3_OFFSET       ((uint32_t)0x028C)
#define NVIC_IABR3_OFFSET       ((uint32_t)0x030C)
#define NVIC_IPR0_OFFSET        ((uint32_t)0x0400)
#define NVIC_IPR1_OFFSET        ((uint32_t)0x0404)
#define NVIC_IPR2_OFFSET        ((uint32_t)0x0408)
#define NVIC_IPR3_OFFSET        ((uint32_t)0x040C)
#define NVIC_IPR4_OFFSET        ((uint32_t)0x0410)
#define NVIC_IPR5_OFFSET        ((uint32_t)0x0414)
#define NVIC_IPR6_OFFSET        ((uint32_t)0x0418)
#define NVIC_IPR7_OFFSET        ((uint32_t)0x041C)
#define NVIC_IPR8_OFFSET        ((uint32_t)0x0420)
#define NVIC_IPR9_OFFSET        ((uint32_t)0x0424)
#define NVIC_IPR10_OFFSET       ((uint32_t)0x0428)
#define NVIC_IPR11_OFFSET       ((uint32_t)0x042C)
#define NVIC_IPR12_OFFSET       ((uint32_t)0x0430)
#define NVIC_IPR13_OFFSET       ((uint32_t)0x0434)
#define NVIC_IPR14_OFFSET       ((uint32_t)0x0438)
#define NVIC_IPR15_OFFSET       ((uint32_t)0x043C)
#define NVIC_IPR16_OFFSET       ((uint32_t)0x0440)
#define NVIC_IPR17_OFFSET       ((uint32_t)0x0444)
#define NVIC_IPR18_OFFSET       ((uint32_t)0x0448)
#define NVIC_IPR19_OFFSET       ((uint32_t)0x044C)
#define NVIC_IPR20_OFFSET       ((uint32_t)0x0450)
#define NVIC_IPR21_OFFSET       ((uint32_t)0x0454)
#define NVIC_IPR22_OFFSET       ((uint32_t)0x0458)
#define NVIC_IPR23_OFFSET       ((uint32_t)0x045C)
#define NVIC_IPR24_OFFSET       ((uint32_t)0x0460)
#define NVIC_STIR_OFFSET        ((uint32_t)0x0F00)



//ToDo ISER0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISER0_OFFSET)))
#define NVIC_ISER0_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISER0_OFFSET)))


//--------
#define NVIC_ISER0_R_NVIC_WWDG_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_R_NVIC_WWDG_BIT       			(0)
#define NVIC_ISER0_R_NVIC_WWDG_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_WWDG_EN        			((uint32_t)0x00000001)

#define NVIC_ISER0_NVIC_WWDG_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_WWDG_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_WWDG_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_PVD_MASK      			((uint32_t)0x00000002)
#define NVIC_ISER0_R_NVIC_PVD_BIT       			(1)
#define NVIC_ISER0_R_NVIC_PVD_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PVD_EN        			((uint32_t)0x00000002)

#define NVIC_ISER0_NVIC_PVD_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PVD_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PVD_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TAMP_STAMP_MASK			((uint32_t)0x00000004)
#define NVIC_ISER0_R_NVIC_TAMP_STAMP_BIT    		(2)
#define NVIC_ISER0_R_NVIC_TAMP_STAMP_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TAMP_STAMP_EN     		((uint32_t)0x00000004)

#define NVIC_ISER0_NVIC_TAMP_STAMP_MASK     		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TAMP_STAMP_DIS      		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TAMP_STAMP_EN       		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_RTC_WKUP_MASK	  			((uint32_t)0x00000008)
#define NVIC_ISER0_R_NVIC_RTC_WKUP_BIT      		(3)
#define NVIC_ISER0_R_NVIC_RTC_WKUP_DIS      		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_RTC_WKUP_EN       		((uint32_t)0x00000008)

#define NVIC_ISER0_NVIC_RTC_WKUP_MASK       		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_RTC_WKUP_DIS        		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_RTC_WKUP_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_FLASH_MASK      			((uint32_t)0x00000010)
#define NVIC_ISER0_R_NVIC_FLASH_BIT       			(4)
#define NVIC_ISER0_R_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_FLASH_EN        			((uint32_t)0x00000010)

#define NVIC_ISER0_NVIC_FLASH_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_FLASH_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_RCC_MASK      			((uint32_t)0x00000020)
#define NVIC_ISER0_R_NVIC_RCC_BIT       			(5)
#define NVIC_ISER0_R_NVIC_RCC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_RCC_EN        			((uint32_t)0x00000020)

#define NVIC_ISER0_NVIC_RCC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_RCC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_RCC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_EXTI0_MASK      			((uint32_t)0x00000040)
#define NVIC_ISER0_R_NVIC_EXTI0_BIT       			(6)
#define NVIC_ISER0_R_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_EXTI0_EN        			((uint32_t)0x00000040)

#define NVIC_ISER0_NVIC_EXTI0_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_EXTI0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_EXTI1_MASK      			((uint32_t)0x00000080)
#define NVIC_ISER0_R_NVIC_EXTI1_BIT       			(7)
#define NVIC_ISER0_R_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_EXTI1_EN        			((uint32_t)0x00000080)

#define NVIC_ISER0_NVIC_EXTI1_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_EXTI1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_EXTI2_MASK      			((uint32_t)0x00000100)
#define NVIC_ISER0_R_NVIC_EXTI2_BIT       			(8)
#define NVIC_ISER0_R_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_EXTI2_EN        			((uint32_t)0x00000100)

#define NVIC_ISER0_NVIC_EXTI2_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_EXTI2_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_EXTI3_MASK      			((uint32_t)0x00000200)
#define NVIC_ISER0_R_NVIC_EXTI3_BIT       			(9)
#define NVIC_ISER0_R_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_EXTI3_EN        			((uint32_t)0x00000200)

#define NVIC_ISER0_NVIC_EXTI3_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_EXTI3_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_EXTI4_MASK      			((uint32_t)0x00000400)
#define NVIC_ISER0_R_NVIC_EXTI4_BIT       			(10)
#define NVIC_ISER0_R_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_EXTI4_EN        			((uint32_t)0x00000400)

#define NVIC_ISER0_NVIC_EXTI4_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_EXTI4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream0_MASK			((uint32_t)0x00000800)
#define NVIC_ISER0_R_NVIC_DMA1_Stream0_BIT  		(11)
#define NVIC_ISER0_R_NVIC_DMA1_Stream0_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream0_EN   		((uint32_t)0x00000800)

#define NVIC_ISER0_NVIC_DMA1_Stream0_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream0_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream0_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream1_MASK 		((uint32_t)0x00001000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream1_BIT  		(12)
#define NVIC_ISER0_R_NVIC_DMA1_Stream1_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream1_EN   		((uint32_t)0x00001000)

#define NVIC_ISER0_NVIC_DMA1_Stream1_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream1_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream1_EN     		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream2_MASK 		((uint32_t)0x00002000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream2_BIT  		(13)
#define NVIC_ISER0_R_NVIC_DMA1_Stream2_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream2_EN   		((uint32_t)0x00002000)

#define NVIC_ISER0_NVIC_DMA1_Stream2_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream2_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream2_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream3_MASK 		((uint32_t)0x00004000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream3_BIT  		(14)
#define NVIC_ISER0_R_NVIC_DMA1_Stream3_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream3_EN   		((uint32_t)0x00004000)

#define NVIC_ISER0_NVIC_DMA1_Stream3_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream3_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream3_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream4_MASK 		((uint32_t)0x00008000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream4_BIT  		(15)
#define NVIC_ISER0_R_NVIC_DMA1_Stream4_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream4_EN   		((uint32_t)0x00008000)

#define NVIC_ISER0_NVIC_DMA1_Stream4_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream4_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream4_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream5_MASK 		((uint32_t)0x00010000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream5_BIT  		(16)
#define NVIC_ISER0_R_NVIC_DMA1_Stream5_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream5_EN   		((uint32_t)0x00010000)

#define NVIC_ISER0_NVIC_DMA1_Stream5_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream5_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream5_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA1_Stream6_MASK 		((uint32_t)0x00020000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream6_BIT  		(17)
#define NVIC_ISER0_R_NVIC_DMA1_Stream6_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA1_Stream6_EN   		((uint32_t)0x00020000)

#define NVIC_ISER0_NVIC_DMA1_Stream6_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA1_Stream6_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA1_Stream6_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ADC_MASK      			((uint32_t)0x00040000)
#define NVIC_ISER0_R_NVIC_ADC_BIT       			(18)
#define NVIC_ISER0_R_NVIC_ADC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ADC_EN        			((uint32_t)0x00040000)

#define NVIC_ISER0_NVIC_ADC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ADC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ADC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_CAN1_TX_MASK      		((uint32_t)0x00080000)
#define NVIC_ISER0_R_NVIC_CAN1_TX_BIT       		(19)
#define NVIC_ISER0_R_NVIC_CAN1_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_CAN1_TX_EN        		((uint32_t)0x00080000)

#define NVIC_ISER0_NVIC_CAN1_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_CAN1_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_CAN1_TX_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_I2C1_ER_MASK     		((uint32_t)0x00100000)
#define NVIC_ISER0_R_NVIC_I2C1_ER_BIT      		(20)
#define NVIC_ISER0_R_NVIC_I2C1_ER_DIS      		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_I2C1_ER_EN       		((uint32_t)0x00100000)

#define NVIC_ISER0_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_CAN1_RX1_MASK     		((uint32_t)0x00200000)
#define NVIC_ISER0_R_NVIC_CAN1_RX1_BIT      		(21)
#define NVIC_ISER0_R_NVIC_CAN1_RX1_DIS      		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_CAN1_RX1_EN       		((uint32_t)0x00200000)

#define NVIC_ISER0_NVIC_CAN1_RX1_MASK       		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_CAN1_RX1_DIS        		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_CAN1_RX1_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_CAN1_SCE_MASK     		((uint32_t)0x00400000)
#define NVIC_ISER0_R_NVIC_CAN1_SCE_BIT      		(22)
#define NVIC_ISER0_R_NVIC_CAN1_SCE_DIS      		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_CAN1_SCE_EN       		((uint32_t)0x00400000)

#define NVIC_ISER0_NVIC_CAN1_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_CAN1_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_CAN1_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_EXTI9_5_MASK      		((uint32_t)0x00800000)
#define NVIC_ISER0_R_NVIC_EXTI9_5_BIT       		(23)
#define NVIC_ISER0_R_NVIC_EXTI9_5_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_EXTI9_5_EN        		((uint32_t)0x00800000)

#define NVIC_ISER0_NVIC_EXTI9_5_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_EXTI9_5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_EXTI9_5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM1_BRK_TIM9_MASK 		((uint32_t)0x01000000)
#define NVIC_ISER0_R_NVIC_TIM1_BRK_TIM9_BIT  		(24)
#define NVIC_ISER0_R_NVIC_TIM1_BRK_TIM9_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM1_BRK_TIM9_EN   		((uint32_t)0x01000000)

#define NVIC_ISER0_NVIC_TIM1_BRK_TIM9_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM1_BRK_TIM9_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM1_BRK_TIM9_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM1_UP_TIM10_MASK 		((uint32_t)0x02000000)
#define NVIC_ISER0_R_NVIC_TIM1_UP_TIM10_BIT  		(25)
#define NVIC_ISER0_R_NVIC_TIM1_UP_TIM10_DIS  		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM1_UP_TIM10_EN   		((uint32_t)0x02000000)

#define NVIC_ISER0_NVIC_TIM1_UP_TIM10_MASK   		((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM1_UP_TIM10_DIS    		((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM1_UP_TIM10_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM1_TRIG_COM_TIM11_MASK  ((uint32_t)0x04000000)
#define NVIC_ISER0_R_NVIC_TIM1_TRIG_COM_TIM11_BIT   (26)
#define NVIC_ISER0_R_NVIC_TIM1_TRIG_COM_TIM11_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM1_TRIG_COM_TIM11_EN    ((uint32_t)0x04000000)

#define NVIC_ISER0_NVIC_TIM1_TRIG_COM_TIM11_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM1_TRIG_COM_TIM11_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM1_TRIG_COM_TIM11_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM1_CC_MASK				((uint32_t)0x08000000)
#define NVIC_ISER0_R_NVIC_TIM1_CC_BIT       		(27)
#define NVIC_ISER0_R_NVIC_TIM1_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM1_CC_EN        		((uint32_t)0x08000000)

#define NVIC_ISER0_NVIC_TIM1_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM1_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM1_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM2_MASK      			((uint32_t)0x10000000)
#define NVIC_ISER0_R_NVIC_TIM2_BIT       			(28)
#define NVIC_ISER0_R_NVIC_TIM2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM2_EN        			((uint32_t)0x10000000)

#define NVIC_ISER0_NVIC_TIM2_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM2_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM3_MASK      			((uint32_t)0x20000000)
#define NVIC_ISER0_R_NVIC_TIM3_BIT       			(29)
#define NVIC_ISER0_R_NVIC_TIM3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM3_EN        			((uint32_t)0x20000000)

#define NVIC_ISER0_NVIC_TIM3_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM3_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_TIM4_MASK      			((uint32_t)0x40000000)
#define NVIC_ISER0_R_NVIC_TIM4_BIT       			(30)
#define NVIC_ISER0_R_NVIC_TIM4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_TIM4_EN        			((uint32_t)0x40000000)

#define NVIC_ISER0_NVIC_TIM4_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_TIM4_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_TIM4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_I2C1_EV_MASK      		((uint32_t)0x80000000)
#define NVIC_ISER0_R_NVIC_I2C1_EV_BIT       		(31)
#define NVIC_ISER0_R_NVIC_I2C1_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_I2C1_EV_EN        		((uint32_t)0x80000000)

#define NVIC_ISER0_NVIC_I2C1_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_I2C1_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_I2C1_EV_EN        			((uint32_t)0x00000001)
//--------



//ToDo ICER0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICER0_OFFSET)))
#define NVIC_ICER0_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICER0_OFFSET)))


//--------
#define NVIC_ICER0_R_NVIC_WWDG_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_R_NVIC_WWDG_BIT       			(0)
#define NVIC_ICER0_R_NVIC_WWDG_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_WWDG_EN        			((uint32_t)0x00000001)

#define NVIC_ICER0_NVIC_WWDG_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_WWDG_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_WWDG_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_PVD_MASK      			((uint32_t)0x00000002)
#define NVIC_ICER0_R_NVIC_PVD_BIT       			(1)
#define NVIC_ICER0_R_NVIC_PVD_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PVD_EN        			((uint32_t)0x00000002)

#define NVIC_ICER0_NVIC_PVD_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PVD_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PVD_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TAMP_STAMP_MASK			((uint32_t)0x00000004)
#define NVIC_ICER0_R_NVIC_TAMP_STAMP_BIT    		(2)
#define NVIC_ICER0_R_NVIC_TAMP_STAMP_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TAMP_STAMP_EN     		((uint32_t)0x00000004)

#define NVIC_ICER0_NVIC_TAMP_STAMP_MASK     		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TAMP_STAMP_DIS      		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TAMP_STAMP_EN       		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_RTC_WKUP_MASK	  			((uint32_t)0x00000008)
#define NVIC_ICER0_R_NVIC_RTC_WKUP_BIT      		(3)
#define NVIC_ICER0_R_NVIC_RTC_WKUP_DIS      		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_RTC_WKUP_EN       		((uint32_t)0x00000008)

#define NVIC_ICER0_NVIC_RTC_WKUP_MASK       		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_RTC_WKUP_DIS        		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_RTC_WKUP_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_FLASH_MASK      			((uint32_t)0x00000010)
#define NVIC_ICER0_R_NVIC_FLASH_BIT       			(4)
#define NVIC_ICER0_R_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_FLASH_EN        			((uint32_t)0x00000010)

#define NVIC_ICER0_NVIC_FLASH_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_FLASH_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_RCC_MASK      			((uint32_t)0x00000020)
#define NVIC_ICER0_R_NVIC_RCC_BIT       			(5)
#define NVIC_ICER0_R_NVIC_RCC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_RCC_EN        			((uint32_t)0x00000020)

#define NVIC_ICER0_NVIC_RCC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_RCC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_RCC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_EXTI0_MASK      			((uint32_t)0x00000040)
#define NVIC_ICER0_R_NVIC_EXTI0_BIT       			(6)
#define NVIC_ICER0_R_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_EXTI0_EN        			((uint32_t)0x00000040)

#define NVIC_ICER0_NVIC_EXTI0_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_EXTI0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_EXTI1_MASK      			((uint32_t)0x00000080)
#define NVIC_ICER0_R_NVIC_EXTI1_BIT       			(7)
#define NVIC_ICER0_R_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_EXTI1_EN        			((uint32_t)0x00000080)

#define NVIC_ICER0_NVIC_EXTI1_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_EXTI1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_EXTI2_MASK      			((uint32_t)0x00000100)
#define NVIC_ICER0_R_NVIC_EXTI2_BIT       			(8)
#define NVIC_ICER0_R_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_EXTI2_EN        			((uint32_t)0x00000100)

#define NVIC_ICER0_NVIC_EXTI2_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_EXTI2_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_EXTI3_MASK      			((uint32_t)0x00000200)
#define NVIC_ICER0_R_NVIC_EXTI3_BIT       			(9)
#define NVIC_ICER0_R_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_EXTI3_EN        			((uint32_t)0x00000200)

#define NVIC_ICER0_NVIC_EXTI3_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_EXTI3_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_EXTI4_MASK      			((uint32_t)0x00000400)
#define NVIC_ICER0_R_NVIC_EXTI4_BIT       			(10)
#define NVIC_ICER0_R_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_EXTI4_EN        			((uint32_t)0x00000400)

#define NVIC_ICER0_NVIC_EXTI4_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_EXTI4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream0_MASK			((uint32_t)0x00000800)
#define NVIC_ICER0_R_NVIC_DMA1_Stream0_BIT  		(11)
#define NVIC_ICER0_R_NVIC_DMA1_Stream0_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream0_EN   		((uint32_t)0x00000800)

#define NVIC_ICER0_NVIC_DMA1_Stream0_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream0_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream0_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream1_MASK 		((uint32_t)0x00001000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream1_BIT  		(12)
#define NVIC_ICER0_R_NVIC_DMA1_Stream1_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream1_EN   		((uint32_t)0x00001000)

#define NVIC_ICER0_NVIC_DMA1_Stream1_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream1_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream1_EN     		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream2_MASK 		((uint32_t)0x00002000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream2_BIT  		(13)
#define NVIC_ICER0_R_NVIC_DMA1_Stream2_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream2_EN   		((uint32_t)0x00002000)

#define NVIC_ICER0_NVIC_DMA1_Stream2_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream2_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream2_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream3_MASK 		((uint32_t)0x00004000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream3_BIT  		(14)
#define NVIC_ICER0_R_NVIC_DMA1_Stream3_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream3_EN   		((uint32_t)0x00004000)

#define NVIC_ICER0_NVIC_DMA1_Stream3_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream3_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream3_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream4_MASK 		((uint32_t)0x00008000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream4_BIT  		(15)
#define NVIC_ICER0_R_NVIC_DMA1_Stream4_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream4_EN   		((uint32_t)0x00008000)

#define NVIC_ICER0_NVIC_DMA1_Stream4_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream4_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream4_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream5_MASK 		((uint32_t)0x00010000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream5_BIT  		(16)
#define NVIC_ICER0_R_NVIC_DMA1_Stream5_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream5_EN   		((uint32_t)0x00010000)

#define NVIC_ICER0_NVIC_DMA1_Stream5_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream5_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream5_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA1_Stream6_MASK 		((uint32_t)0x00020000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream6_BIT  		(17)
#define NVIC_ICER0_R_NVIC_DMA1_Stream6_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA1_Stream6_EN   		((uint32_t)0x00020000)

#define NVIC_ICER0_NVIC_DMA1_Stream6_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA1_Stream6_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA1_Stream6_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ADC_MASK      			((uint32_t)0x00040000)
#define NVIC_ICER0_R_NVIC_ADC_BIT       			(18)
#define NVIC_ICER0_R_NVIC_ADC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ADC_EN        			((uint32_t)0x00040000)

#define NVIC_ICER0_NVIC_ADC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ADC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ADC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_CAN1_TX_MASK      		((uint32_t)0x00080000)
#define NVIC_ICER0_R_NVIC_CAN1_TX_BIT       		(19)
#define NVIC_ICER0_R_NVIC_CAN1_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_CAN1_TX_EN        		((uint32_t)0x00080000)

#define NVIC_ICER0_NVIC_CAN1_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_CAN1_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_CAN1_TX_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_I2C1_ER_MASK     		((uint32_t)0x00100000)
#define NVIC_ICER0_R_NVIC_I2C1_ER_BIT      		(20)
#define NVIC_ICER0_R_NVIC_I2C1_ER_DIS      		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_I2C1_ER_EN       		((uint32_t)0x00100000)

#define NVIC_ICER0_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_CAN1_RX1_MASK     		((uint32_t)0x00200000)
#define NVIC_ICER0_R_NVIC_CAN1_RX1_BIT      		(21)
#define NVIC_ICER0_R_NVIC_CAN1_RX1_DIS      		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_CAN1_RX1_EN       		((uint32_t)0x00200000)

#define NVIC_ICER0_NVIC_CAN1_RX1_MASK       		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_CAN1_RX1_DIS        		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_CAN1_RX1_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_CAN1_SCE_MASK     		((uint32_t)0x00400000)
#define NVIC_ICER0_R_NVIC_CAN1_SCE_BIT      		(22)
#define NVIC_ICER0_R_NVIC_CAN1_SCE_DIS      		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_CAN1_SCE_EN       		((uint32_t)0x00400000)

#define NVIC_ICER0_NVIC_CAN1_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_CAN1_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_CAN1_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_EXTI9_5_MASK      		((uint32_t)0x00800000)
#define NVIC_ICER0_R_NVIC_EXTI9_5_BIT       		(23)
#define NVIC_ICER0_R_NVIC_EXTI9_5_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_EXTI9_5_EN        		((uint32_t)0x00800000)

#define NVIC_ICER0_NVIC_EXTI9_5_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_EXTI9_5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_EXTI9_5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM1_BRK_TIM9_MASK 		((uint32_t)0x01000000)
#define NVIC_ICER0_R_NVIC_TIM1_BRK_TIM9_BIT  		(24)
#define NVIC_ICER0_R_NVIC_TIM1_BRK_TIM9_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM1_BRK_TIM9_EN   		((uint32_t)0x01000000)

#define NVIC_ICER0_NVIC_TIM1_BRK_TIM9_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM1_BRK_TIM9_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM1_BRK_TIM9_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM1_UP_TIM10_MASK 		((uint32_t)0x02000000)
#define NVIC_ICER0_R_NVIC_TIM1_UP_TIM10_BIT  		(25)
#define NVIC_ICER0_R_NVIC_TIM1_UP_TIM10_DIS  		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM1_UP_TIM10_EN   		((uint32_t)0x02000000)

#define NVIC_ICER0_NVIC_TIM1_UP_TIM10_MASK   		((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM1_UP_TIM10_DIS    		((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM1_UP_TIM10_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM1_TRIG_COM_TIM11_MASK  ((uint32_t)0x04000000)
#define NVIC_ICER0_R_NVIC_TIM1_TRIG_COM_TIM11_BIT   (26)
#define NVIC_ICER0_R_NVIC_TIM1_TRIG_COM_TIM11_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM1_TRIG_COM_TIM11_EN    ((uint32_t)0x04000000)

#define NVIC_ICER0_NVIC_TIM1_TRIG_COM_TIM11_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM1_TRIG_COM_TIM11_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM1_TRIG_COM_TIM11_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM1_CC_MASK				((uint32_t)0x08000000)
#define NVIC_ICER0_R_NVIC_TIM1_CC_BIT       		(27)
#define NVIC_ICER0_R_NVIC_TIM1_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM1_CC_EN        		((uint32_t)0x08000000)

#define NVIC_ICER0_NVIC_TIM1_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM1_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM1_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM2_MASK      			((uint32_t)0x10000000)
#define NVIC_ICER0_R_NVIC_TIM2_BIT       			(28)
#define NVIC_ICER0_R_NVIC_TIM2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM2_EN        			((uint32_t)0x10000000)

#define NVIC_ICER0_NVIC_TIM2_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM2_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM3_MASK      			((uint32_t)0x20000000)
#define NVIC_ICER0_R_NVIC_TIM3_BIT       			(29)
#define NVIC_ICER0_R_NVIC_TIM3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM3_EN        			((uint32_t)0x20000000)

#define NVIC_ICER0_NVIC_TIM3_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM3_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_TIM4_MASK      			((uint32_t)0x40000000)
#define NVIC_ICER0_R_NVIC_TIM4_BIT       			(30)
#define NVIC_ICER0_R_NVIC_TIM4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_TIM4_EN        			((uint32_t)0x40000000)

#define NVIC_ICER0_NVIC_TIM4_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_TIM4_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_TIM4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_I2C1_EV_MASK      		((uint32_t)0x80000000)
#define NVIC_ICER0_R_NVIC_I2C1_EV_BIT       		(31)
#define NVIC_ICER0_R_NVIC_I2C1_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_I2C1_EV_EN        		((uint32_t)0x80000000)

#define NVIC_ICER0_NVIC_I2C1_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_I2C1_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_I2C1_EV_EN        			((uint32_t)0x00000001)
//--------


//ToDo ISPR0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISPR0_OFFSET)))
#define NVIC_ISPR0_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISPR0_OFFSET)))


//--------
#define NVIC_ISPR0_R_NVIC_WWDG_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_R_NVIC_WWDG_BIT       			(0)
#define NVIC_ISPR0_R_NVIC_WWDG_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_WWDG_EN        			((uint32_t)0x00000001)

#define NVIC_ISPR0_NVIC_WWDG_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_WWDG_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_WWDG_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_PVD_MASK      			((uint32_t)0x00000002)
#define NVIC_ISPR0_R_NVIC_PVD_BIT       			(1)
#define NVIC_ISPR0_R_NVIC_PVD_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PVD_EN        			((uint32_t)0x00000002)

#define NVIC_ISPR0_NVIC_PVD_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PVD_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PVD_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TAMP_STAMP_MASK			((uint32_t)0x00000004)
#define NVIC_ISPR0_R_NVIC_TAMP_STAMP_BIT    		(2)
#define NVIC_ISPR0_R_NVIC_TAMP_STAMP_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TAMP_STAMP_EN     		((uint32_t)0x00000004)

#define NVIC_ISPR0_NVIC_TAMP_STAMP_MASK     		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TAMP_STAMP_DIS      		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TAMP_STAMP_EN       		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_RTC_WKUP_MASK	  			((uint32_t)0x00000008)
#define NVIC_ISPR0_R_NVIC_RTC_WKUP_BIT      		(3)
#define NVIC_ISPR0_R_NVIC_RTC_WKUP_DIS      		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_RTC_WKUP_EN       		((uint32_t)0x00000008)

#define NVIC_ISPR0_NVIC_RTC_WKUP_MASK       		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_RTC_WKUP_DIS        		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_RTC_WKUP_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_FLASH_MASK      			((uint32_t)0x00000010)
#define NVIC_ISPR0_R_NVIC_FLASH_BIT       			(4)
#define NVIC_ISPR0_R_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_FLASH_EN        			((uint32_t)0x00000010)

#define NVIC_ISPR0_NVIC_FLASH_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_FLASH_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_RCC_MASK      			((uint32_t)0x00000020)
#define NVIC_ISPR0_R_NVIC_RCC_BIT       			(5)
#define NVIC_ISPR0_R_NVIC_RCC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_RCC_EN        			((uint32_t)0x00000020)

#define NVIC_ISPR0_NVIC_RCC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_RCC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_RCC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_EXTI0_MASK      			((uint32_t)0x00000040)
#define NVIC_ISPR0_R_NVIC_EXTI0_BIT       			(6)
#define NVIC_ISPR0_R_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_EXTI0_EN        			((uint32_t)0x00000040)

#define NVIC_ISPR0_NVIC_EXTI0_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_EXTI0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_EXTI1_MASK      			((uint32_t)0x00000080)
#define NVIC_ISPR0_R_NVIC_EXTI1_BIT       			(7)
#define NVIC_ISPR0_R_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_EXTI1_EN        			((uint32_t)0x00000080)

#define NVIC_ISPR0_NVIC_EXTI1_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_EXTI1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_EXTI2_MASK      			((uint32_t)0x00000100)
#define NVIC_ISPR0_R_NVIC_EXTI2_BIT       			(8)
#define NVIC_ISPR0_R_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_EXTI2_EN        			((uint32_t)0x00000100)

#define NVIC_ISPR0_NVIC_EXTI2_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_EXTI2_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_EXTI3_MASK      			((uint32_t)0x00000200)
#define NVIC_ISPR0_R_NVIC_EXTI3_BIT       			(9)
#define NVIC_ISPR0_R_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_EXTI3_EN        			((uint32_t)0x00000200)

#define NVIC_ISPR0_NVIC_EXTI3_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_EXTI3_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_EXTI4_MASK      			((uint32_t)0x00000400)
#define NVIC_ISPR0_R_NVIC_EXTI4_BIT       			(10)
#define NVIC_ISPR0_R_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_EXTI4_EN        			((uint32_t)0x00000400)

#define NVIC_ISPR0_NVIC_EXTI4_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_EXTI4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream0_MASK			((uint32_t)0x00000800)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream0_BIT  		(11)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream0_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream0_EN   		((uint32_t)0x00000800)

#define NVIC_ISPR0_NVIC_DMA1_Stream0_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream0_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream0_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream1_MASK 		((uint32_t)0x00001000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream1_BIT  		(12)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream1_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream1_EN   		((uint32_t)0x00001000)

#define NVIC_ISPR0_NVIC_DMA1_Stream1_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream1_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream1_EN     		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream2_MASK 		((uint32_t)0x00002000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream2_BIT  		(13)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream2_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream2_EN   		((uint32_t)0x00002000)

#define NVIC_ISPR0_NVIC_DMA1_Stream2_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream2_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream2_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream3_MASK 		((uint32_t)0x00004000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream3_BIT  		(14)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream3_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream3_EN   		((uint32_t)0x00004000)

#define NVIC_ISPR0_NVIC_DMA1_Stream3_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream3_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream3_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream4_MASK 		((uint32_t)0x00008000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream4_BIT  		(15)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream4_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream4_EN   		((uint32_t)0x00008000)

#define NVIC_ISPR0_NVIC_DMA1_Stream4_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream4_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream4_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream5_MASK 		((uint32_t)0x00010000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream5_BIT  		(16)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream5_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream5_EN   		((uint32_t)0x00010000)

#define NVIC_ISPR0_NVIC_DMA1_Stream5_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream5_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream5_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA1_Stream6_MASK 		((uint32_t)0x00020000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream6_BIT  		(17)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream6_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA1_Stream6_EN   		((uint32_t)0x00020000)

#define NVIC_ISPR0_NVIC_DMA1_Stream6_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA1_Stream6_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA1_Stream6_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ADC_MASK      			((uint32_t)0x00040000)
#define NVIC_ISPR0_R_NVIC_ADC_BIT       			(18)
#define NVIC_ISPR0_R_NVIC_ADC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ADC_EN        			((uint32_t)0x00040000)

#define NVIC_ISPR0_NVIC_ADC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ADC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ADC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_CAN1_TX_MASK      		((uint32_t)0x00080000)
#define NVIC_ISPR0_R_NVIC_CAN1_TX_BIT       		(19)
#define NVIC_ISPR0_R_NVIC_CAN1_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_CAN1_TX_EN        		((uint32_t)0x00080000)

#define NVIC_ISPR0_NVIC_CAN1_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_CAN1_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_CAN1_TX_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_I2C1_ER_MASK     		((uint32_t)0x00100000)
#define NVIC_ISPR0_R_NVIC_I2C1_ER_BIT      		(20)
#define NVIC_ISPR0_R_NVIC_I2C1_ER_DIS      		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_I2C1_ER_EN       		((uint32_t)0x00100000)

#define NVIC_ISPR0_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_CAN1_RX1_MASK     		((uint32_t)0x00200000)
#define NVIC_ISPR0_R_NVIC_CAN1_RX1_BIT      		(21)
#define NVIC_ISPR0_R_NVIC_CAN1_RX1_DIS      		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_CAN1_RX1_EN       		((uint32_t)0x00200000)

#define NVIC_ISPR0_NVIC_CAN1_RX1_MASK       		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_CAN1_RX1_DIS        		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_CAN1_RX1_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_CAN1_SCE_MASK     		((uint32_t)0x00400000)
#define NVIC_ISPR0_R_NVIC_CAN1_SCE_BIT      		(22)
#define NVIC_ISPR0_R_NVIC_CAN1_SCE_DIS      		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_CAN1_SCE_EN       		((uint32_t)0x00400000)

#define NVIC_ISPR0_NVIC_CAN1_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_CAN1_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_CAN1_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_EXTI9_5_MASK      		((uint32_t)0x00800000)
#define NVIC_ISPR0_R_NVIC_EXTI9_5_BIT       		(23)
#define NVIC_ISPR0_R_NVIC_EXTI9_5_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_EXTI9_5_EN        		((uint32_t)0x00800000)

#define NVIC_ISPR0_NVIC_EXTI9_5_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_EXTI9_5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_EXTI9_5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM1_BRK_TIM9_MASK 		((uint32_t)0x01000000)
#define NVIC_ISPR0_R_NVIC_TIM1_BRK_TIM9_BIT  		(24)
#define NVIC_ISPR0_R_NVIC_TIM1_BRK_TIM9_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM1_BRK_TIM9_EN   		((uint32_t)0x01000000)

#define NVIC_ISPR0_NVIC_TIM1_BRK_TIM9_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM1_BRK_TIM9_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM1_BRK_TIM9_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM1_UP_TIM10_MASK 		((uint32_t)0x02000000)
#define NVIC_ISPR0_R_NVIC_TIM1_UP_TIM10_BIT  		(25)
#define NVIC_ISPR0_R_NVIC_TIM1_UP_TIM10_DIS  		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM1_UP_TIM10_EN   		((uint32_t)0x02000000)

#define NVIC_ISPR0_NVIC_TIM1_UP_TIM10_MASK   		((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM1_UP_TIM10_DIS    		((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM1_UP_TIM10_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM1_TRIG_COM_TIM11_MASK  ((uint32_t)0x04000000)
#define NVIC_ISPR0_R_NVIC_TIM1_TRIG_COM_TIM11_BIT   (26)
#define NVIC_ISPR0_R_NVIC_TIM1_TRIG_COM_TIM11_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM1_TRIG_COM_TIM11_EN    ((uint32_t)0x04000000)

#define NVIC_ISPR0_NVIC_TIM1_TRIG_COM_TIM11_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM1_TRIG_COM_TIM11_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM1_TRIG_COM_TIM11_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM1_CC_MASK				((uint32_t)0x08000000)
#define NVIC_ISPR0_R_NVIC_TIM1_CC_BIT       		(27)
#define NVIC_ISPR0_R_NVIC_TIM1_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM1_CC_EN        		((uint32_t)0x08000000)

#define NVIC_ISPR0_NVIC_TIM1_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM1_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM1_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM2_MASK      			((uint32_t)0x10000000)
#define NVIC_ISPR0_R_NVIC_TIM2_BIT       			(28)
#define NVIC_ISPR0_R_NVIC_TIM2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM2_EN        			((uint32_t)0x10000000)

#define NVIC_ISPR0_NVIC_TIM2_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM2_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM3_MASK      			((uint32_t)0x20000000)
#define NVIC_ISPR0_R_NVIC_TIM3_BIT       			(29)
#define NVIC_ISPR0_R_NVIC_TIM3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM3_EN        			((uint32_t)0x20000000)

#define NVIC_ISPR0_NVIC_TIM3_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM3_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_TIM4_MASK      			((uint32_t)0x40000000)
#define NVIC_ISPR0_R_NVIC_TIM4_BIT       			(30)
#define NVIC_ISPR0_R_NVIC_TIM4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_TIM4_EN        			((uint32_t)0x40000000)

#define NVIC_ISPR0_NVIC_TIM4_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_TIM4_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_TIM4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_I2C1_EV_MASK      		((uint32_t)0x80000000)
#define NVIC_ISPR0_R_NVIC_I2C1_EV_BIT       		(31)
#define NVIC_ISPR0_R_NVIC_I2C1_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_I2C1_EV_EN        		((uint32_t)0x80000000)

#define NVIC_ISPR0_NVIC_I2C1_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_I2C1_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_I2C1_EV_EN        			((uint32_t)0x00000001)
//--------



//ToDo ICPR0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICPR0_OFFSET)))
#define NVIC_ICPR0_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICPR0_OFFSET)))


//--------
#define NVIC_ICPR0_R_NVIC_WWDG_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_R_NVIC_WWDG_BIT       			(0)
#define NVIC_ICPR0_R_NVIC_WWDG_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_WWDG_EN        			((uint32_t)0x00000001)

#define NVIC_ICPR0_NVIC_WWDG_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_WWDG_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_WWDG_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_PVD_MASK      			((uint32_t)0x00000002)
#define NVIC_ICPR0_R_NVIC_PVD_BIT       			(1)
#define NVIC_ICPR0_R_NVIC_PVD_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PVD_EN        			((uint32_t)0x00000002)

#define NVIC_ICPR0_NVIC_PVD_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PVD_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PVD_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TAMP_STAMP_MASK			((uint32_t)0x00000004)
#define NVIC_ICPR0_R_NVIC_TAMP_STAMP_BIT    		(2)
#define NVIC_ICPR0_R_NVIC_TAMP_STAMP_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TAMP_STAMP_EN     		((uint32_t)0x00000004)

#define NVIC_ICPR0_NVIC_TAMP_STAMP_MASK     		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TAMP_STAMP_DIS      		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TAMP_STAMP_EN       		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_RTC_WKUP_MASK	  			((uint32_t)0x00000008)
#define NVIC_ICPR0_R_NVIC_RTC_WKUP_BIT      		(3)
#define NVIC_ICPR0_R_NVIC_RTC_WKUP_DIS      		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_RTC_WKUP_EN       		((uint32_t)0x00000008)

#define NVIC_ICPR0_NVIC_RTC_WKUP_MASK       		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_RTC_WKUP_DIS        		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_RTC_WKUP_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_FLASH_MASK      			((uint32_t)0x00000010)
#define NVIC_ICPR0_R_NVIC_FLASH_BIT       			(4)
#define NVIC_ICPR0_R_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_FLASH_EN        			((uint32_t)0x00000010)

#define NVIC_ICPR0_NVIC_FLASH_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_FLASH_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_RCC_MASK      			((uint32_t)0x00000020)
#define NVIC_ICPR0_R_NVIC_RCC_BIT       			(5)
#define NVIC_ICPR0_R_NVIC_RCC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_RCC_EN        			((uint32_t)0x00000020)

#define NVIC_ICPR0_NVIC_RCC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_RCC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_RCC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_EXTI0_MASK      			((uint32_t)0x00000040)
#define NVIC_ICPR0_R_NVIC_EXTI0_BIT       			(6)
#define NVIC_ICPR0_R_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_EXTI0_EN        			((uint32_t)0x00000040)

#define NVIC_ICPR0_NVIC_EXTI0_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_EXTI0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_EXTI1_MASK      			((uint32_t)0x00000080)
#define NVIC_ICPR0_R_NVIC_EXTI1_BIT       			(7)
#define NVIC_ICPR0_R_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_EXTI1_EN        			((uint32_t)0x00000080)

#define NVIC_ICPR0_NVIC_EXTI1_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_EXTI1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_EXTI2_MASK      			((uint32_t)0x00000100)
#define NVIC_ICPR0_R_NVIC_EXTI2_BIT       			(8)
#define NVIC_ICPR0_R_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_EXTI2_EN        			((uint32_t)0x00000100)

#define NVIC_ICPR0_NVIC_EXTI2_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_EXTI2_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_EXTI3_MASK      			((uint32_t)0x00000200)
#define NVIC_ICPR0_R_NVIC_EXTI3_BIT       			(9)
#define NVIC_ICPR0_R_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_EXTI3_EN        			((uint32_t)0x00000200)

#define NVIC_ICPR0_NVIC_EXTI3_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_EXTI3_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_EXTI4_MASK      			((uint32_t)0x00000400)
#define NVIC_ICPR0_R_NVIC_EXTI4_BIT       			(10)
#define NVIC_ICPR0_R_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_EXTI4_EN        			((uint32_t)0x00000400)

#define NVIC_ICPR0_NVIC_EXTI4_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_EXTI4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream0_MASK			((uint32_t)0x00000800)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream0_BIT  		(11)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream0_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream0_EN   		((uint32_t)0x00000800)

#define NVIC_ICPR0_NVIC_DMA1_Stream0_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream0_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream0_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream1_MASK 		((uint32_t)0x00001000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream1_BIT  		(12)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream1_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream1_EN   		((uint32_t)0x00001000)

#define NVIC_ICPR0_NVIC_DMA1_Stream1_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream1_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream1_EN     		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream2_MASK 		((uint32_t)0x00002000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream2_BIT  		(13)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream2_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream2_EN   		((uint32_t)0x00002000)

#define NVIC_ICPR0_NVIC_DMA1_Stream2_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream2_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream2_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream3_MASK 		((uint32_t)0x00004000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream3_BIT  		(14)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream3_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream3_EN   		((uint32_t)0x00004000)

#define NVIC_ICPR0_NVIC_DMA1_Stream3_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream3_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream3_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream4_MASK 		((uint32_t)0x00008000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream4_BIT  		(15)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream4_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream4_EN   		((uint32_t)0x00008000)

#define NVIC_ICPR0_NVIC_DMA1_Stream4_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream4_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream4_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream5_MASK 		((uint32_t)0x00010000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream5_BIT  		(16)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream5_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream5_EN   		((uint32_t)0x00010000)

#define NVIC_ICPR0_NVIC_DMA1_Stream5_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream5_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream5_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA1_Stream6_MASK 		((uint32_t)0x00020000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream6_BIT  		(17)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream6_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA1_Stream6_EN   		((uint32_t)0x00020000)

#define NVIC_ICPR0_NVIC_DMA1_Stream6_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA1_Stream6_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA1_Stream6_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ADC_MASK      			((uint32_t)0x00040000)
#define NVIC_ICPR0_R_NVIC_ADC_BIT       			(18)
#define NVIC_ICPR0_R_NVIC_ADC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ADC_EN        			((uint32_t)0x00040000)

#define NVIC_ICPR0_NVIC_ADC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ADC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ADC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_CAN1_TX_MASK      		((uint32_t)0x00080000)
#define NVIC_ICPR0_R_NVIC_CAN1_TX_BIT       		(19)
#define NVIC_ICPR0_R_NVIC_CAN1_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_CAN1_TX_EN        		((uint32_t)0x00080000)

#define NVIC_ICPR0_NVIC_CAN1_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_CAN1_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_CAN1_TX_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_I2C1_ER_MASK     		((uint32_t)0x00100000)
#define NVIC_ICPR0_R_NVIC_I2C1_ER_BIT      		(20)
#define NVIC_ICPR0_R_NVIC_I2C1_ER_DIS      		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_I2C1_ER_EN       		((uint32_t)0x00100000)

#define NVIC_ICPR0_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_CAN1_RX1_MASK     		((uint32_t)0x00200000)
#define NVIC_ICPR0_R_NVIC_CAN1_RX1_BIT      		(21)
#define NVIC_ICPR0_R_NVIC_CAN1_RX1_DIS      		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_CAN1_RX1_EN       		((uint32_t)0x00200000)

#define NVIC_ICPR0_NVIC_CAN1_RX1_MASK       		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_CAN1_RX1_DIS        		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_CAN1_RX1_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_CAN1_SCE_MASK     		((uint32_t)0x00400000)
#define NVIC_ICPR0_R_NVIC_CAN1_SCE_BIT      		(22)
#define NVIC_ICPR0_R_NVIC_CAN1_SCE_DIS      		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_CAN1_SCE_EN       		((uint32_t)0x00400000)

#define NVIC_ICPR0_NVIC_CAN1_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_CAN1_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_CAN1_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_EXTI9_5_MASK      		((uint32_t)0x00800000)
#define NVIC_ICPR0_R_NVIC_EXTI9_5_BIT       		(23)
#define NVIC_ICPR0_R_NVIC_EXTI9_5_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_EXTI9_5_EN        		((uint32_t)0x00800000)

#define NVIC_ICPR0_NVIC_EXTI9_5_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_EXTI9_5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_EXTI9_5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM1_BRK_TIM9_MASK 		((uint32_t)0x01000000)
#define NVIC_ICPR0_R_NVIC_TIM1_BRK_TIM9_BIT  		(24)
#define NVIC_ICPR0_R_NVIC_TIM1_BRK_TIM9_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM1_BRK_TIM9_EN   		((uint32_t)0x01000000)

#define NVIC_ICPR0_NVIC_TIM1_BRK_TIM9_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM1_BRK_TIM9_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM1_BRK_TIM9_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM1_UP_TIM10_MASK 		((uint32_t)0x02000000)
#define NVIC_ICPR0_R_NVIC_TIM1_UP_TIM10_BIT  		(25)
#define NVIC_ICPR0_R_NVIC_TIM1_UP_TIM10_DIS  		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM1_UP_TIM10_EN   		((uint32_t)0x02000000)

#define NVIC_ICPR0_NVIC_TIM1_UP_TIM10_MASK   		((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM1_UP_TIM10_DIS    		((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM1_UP_TIM10_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM1_TRIG_COM_TIM11_MASK  ((uint32_t)0x04000000)
#define NVIC_ICPR0_R_NVIC_TIM1_TRIG_COM_TIM11_BIT   (26)
#define NVIC_ICPR0_R_NVIC_TIM1_TRIG_COM_TIM11_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM1_TRIG_COM_TIM11_EN    ((uint32_t)0x04000000)

#define NVIC_ICPR0_NVIC_TIM1_TRIG_COM_TIM11_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM1_TRIG_COM_TIM11_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM1_TRIG_COM_TIM11_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM1_CC_MASK				((uint32_t)0x08000000)
#define NVIC_ICPR0_R_NVIC_TIM1_CC_BIT       		(27)
#define NVIC_ICPR0_R_NVIC_TIM1_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM1_CC_EN        		((uint32_t)0x08000000)

#define NVIC_ICPR0_NVIC_TIM1_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM1_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM1_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM2_MASK      			((uint32_t)0x10000000)
#define NVIC_ICPR0_R_NVIC_TIM2_BIT       			(28)
#define NVIC_ICPR0_R_NVIC_TIM2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM2_EN        			((uint32_t)0x10000000)

#define NVIC_ICPR0_NVIC_TIM2_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM2_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM3_MASK      			((uint32_t)0x20000000)
#define NVIC_ICPR0_R_NVIC_TIM3_BIT       			(29)
#define NVIC_ICPR0_R_NVIC_TIM3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM3_EN        			((uint32_t)0x20000000)

#define NVIC_ICPR0_NVIC_TIM3_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM3_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_TIM4_MASK      			((uint32_t)0x40000000)
#define NVIC_ICPR0_R_NVIC_TIM4_BIT       			(30)
#define NVIC_ICPR0_R_NVIC_TIM4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_TIM4_EN        			((uint32_t)0x40000000)

#define NVIC_ICPR0_NVIC_TIM4_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_TIM4_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_TIM4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_I2C1_EV_MASK      		((uint32_t)0x80000000)
#define NVIC_ICPR0_R_NVIC_I2C1_EV_BIT       		(31)
#define NVIC_ICPR0_R_NVIC_I2C1_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_I2C1_EV_EN        		((uint32_t)0x80000000)

#define NVIC_ICPR0_NVIC_I2C1_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_I2C1_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_I2C1_EV_EN        			((uint32_t)0x00000001)
//--------


//ToDo IABR0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_IABR0_OFFSET)))
#define NVIC_IABR0_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_IABR0_OFFSET)))


//--------
#define NVIC_IABR0_R_NVIC_WWDG_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_R_NVIC_WWDG_BIT       			(0)
#define NVIC_IABR0_R_NVIC_WWDG_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_WWDG_EN        			((uint32_t)0x00000001)

#define NVIC_IABR0_NVIC_WWDG_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_WWDG_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_WWDG_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_PVD_MASK      			((uint32_t)0x00000002)
#define NVIC_IABR0_R_NVIC_PVD_BIT       			(1)
#define NVIC_IABR0_R_NVIC_PVD_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PVD_EN        			((uint32_t)0x00000002)

#define NVIC_IABR0_NVIC_PVD_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PVD_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PVD_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TAMP_STAMP_MASK			((uint32_t)0x00000004)
#define NVIC_IABR0_R_NVIC_TAMP_STAMP_BIT    		(2)
#define NVIC_IABR0_R_NVIC_TAMP_STAMP_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TAMP_STAMP_EN     		((uint32_t)0x00000004)

#define NVIC_IABR0_NVIC_TAMP_STAMP_MASK     		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TAMP_STAMP_DIS      		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TAMP_STAMP_EN       		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_RTC_WKUP_MASK	  			((uint32_t)0x00000008)
#define NVIC_IABR0_R_NVIC_RTC_WKUP_BIT      		(3)
#define NVIC_IABR0_R_NVIC_RTC_WKUP_DIS      		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_RTC_WKUP_EN       		((uint32_t)0x00000008)

#define NVIC_IABR0_NVIC_RTC_WKUP_MASK       		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_RTC_WKUP_DIS        		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_RTC_WKUP_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_FLASH_MASK      			((uint32_t)0x00000010)
#define NVIC_IABR0_R_NVIC_FLASH_BIT       			(4)
#define NVIC_IABR0_R_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_FLASH_EN        			((uint32_t)0x00000010)

#define NVIC_IABR0_NVIC_FLASH_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_FLASH_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_FLASH_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_RCC_MASK      			((uint32_t)0x00000020)
#define NVIC_IABR0_R_NVIC_RCC_BIT       			(5)
#define NVIC_IABR0_R_NVIC_RCC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_RCC_EN        			((uint32_t)0x00000020)

#define NVIC_IABR0_NVIC_RCC_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_RCC_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_RCC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_EXTI0_MASK      			((uint32_t)0x00000040)
#define NVIC_IABR0_R_NVIC_EXTI0_BIT       			(6)
#define NVIC_IABR0_R_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_EXTI0_EN        			((uint32_t)0x00000040)

#define NVIC_IABR0_NVIC_EXTI0_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_EXTI0_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_EXTI0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_EXTI1_MASK      			((uint32_t)0x00000080)
#define NVIC_IABR0_R_NVIC_EXTI1_BIT       			(7)
#define NVIC_IABR0_R_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_EXTI1_EN        			((uint32_t)0x00000080)

#define NVIC_IABR0_NVIC_EXTI1_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_EXTI1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_EXTI1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_EXTI2_MASK      			((uint32_t)0x00000100)
#define NVIC_IABR0_R_NVIC_EXTI2_BIT       			(8)
#define NVIC_IABR0_R_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_EXTI2_EN        			((uint32_t)0x00000100)

#define NVIC_IABR0_NVIC_EXTI2_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_EXTI2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_EXTI2_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_EXTI3_MASK      			((uint32_t)0x00000200)
#define NVIC_IABR0_R_NVIC_EXTI3_BIT       			(9)
#define NVIC_IABR0_R_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_EXTI3_EN        			((uint32_t)0x00000200)

#define NVIC_IABR0_NVIC_EXTI3_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_EXTI3_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_EXTI3_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_EXTI4_MASK      			((uint32_t)0x00000400)
#define NVIC_IABR0_R_NVIC_EXTI4_BIT       			(10)
#define NVIC_IABR0_R_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_EXTI4_EN        			((uint32_t)0x00000400)

#define NVIC_IABR0_NVIC_EXTI4_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_EXTI4_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_EXTI4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream0_MASK			((uint32_t)0x00000800)
#define NVIC_IABR0_R_NVIC_DMA1_Stream0_BIT  		(11)
#define NVIC_IABR0_R_NVIC_DMA1_Stream0_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream0_EN   		((uint32_t)0x00000800)

#define NVIC_IABR0_NVIC_DMA1_Stream0_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream0_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream0_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream1_MASK 		((uint32_t)0x00001000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream1_BIT  		(12)
#define NVIC_IABR0_R_NVIC_DMA1_Stream1_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream1_EN   		((uint32_t)0x00001000)

#define NVIC_IABR0_NVIC_DMA1_Stream1_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream1_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream1_EN     		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream2_MASK 		((uint32_t)0x00002000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream2_BIT  		(13)
#define NVIC_IABR0_R_NVIC_DMA1_Stream2_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream2_EN   		((uint32_t)0x00002000)

#define NVIC_IABR0_NVIC_DMA1_Stream2_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream2_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream2_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream3_MASK 		((uint32_t)0x00004000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream3_BIT  		(14)
#define NVIC_IABR0_R_NVIC_DMA1_Stream3_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream3_EN   		((uint32_t)0x00004000)

#define NVIC_IABR0_NVIC_DMA1_Stream3_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream3_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream3_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream4_MASK 		((uint32_t)0x00008000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream4_BIT  		(15)
#define NVIC_IABR0_R_NVIC_DMA1_Stream4_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream4_EN   		((uint32_t)0x00008000)

#define NVIC_IABR0_NVIC_DMA1_Stream4_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream4_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream4_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream5_MASK 		((uint32_t)0x00010000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream5_BIT  		(16)
#define NVIC_IABR0_R_NVIC_DMA1_Stream5_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream5_EN   		((uint32_t)0x00010000)

#define NVIC_IABR0_NVIC_DMA1_Stream5_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream5_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream5_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA1_Stream6_MASK 		((uint32_t)0x00020000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream6_BIT  		(17)
#define NVIC_IABR0_R_NVIC_DMA1_Stream6_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA1_Stream6_EN   		((uint32_t)0x00020000)

#define NVIC_IABR0_NVIC_DMA1_Stream6_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA1_Stream6_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA1_Stream6_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ADC_MASK      			((uint32_t)0x00040000)
#define NVIC_IABR0_R_NVIC_ADC_BIT       			(18)
#define NVIC_IABR0_R_NVIC_ADC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ADC_EN        			((uint32_t)0x00040000)

#define NVIC_IABR0_NVIC_ADC_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ADC_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ADC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_CAN1_TX_MASK      		((uint32_t)0x00080000)
#define NVIC_IABR0_R_NVIC_CAN1_TX_BIT       		(19)
#define NVIC_IABR0_R_NVIC_CAN1_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_CAN1_TX_EN        		((uint32_t)0x00080000)

#define NVIC_IABR0_NVIC_CAN1_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_CAN1_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_CAN1_TX_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_I2C1_ER_MASK     		((uint32_t)0x00100000)
#define NVIC_IABR0_R_NVIC_I2C1_ER_BIT      		(20)
#define NVIC_IABR0_R_NVIC_I2C1_ER_DIS      		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_I2C1_ER_EN       		((uint32_t)0x00100000)

#define NVIC_IABR0_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_CAN1_RX1_MASK     		((uint32_t)0x00200000)
#define NVIC_IABR0_R_NVIC_CAN1_RX1_BIT      		(21)
#define NVIC_IABR0_R_NVIC_CAN1_RX1_DIS      		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_CAN1_RX1_EN       		((uint32_t)0x00200000)

#define NVIC_IABR0_NVIC_CAN1_RX1_MASK       		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_CAN1_RX1_DIS        		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_CAN1_RX1_EN         		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_CAN1_SCE_MASK     		((uint32_t)0x00400000)
#define NVIC_IABR0_R_NVIC_CAN1_SCE_BIT      		(22)
#define NVIC_IABR0_R_NVIC_CAN1_SCE_DIS      		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_CAN1_SCE_EN       		((uint32_t)0x00400000)

#define NVIC_IABR0_NVIC_CAN1_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_CAN1_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_CAN1_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_EXTI9_5_MASK      		((uint32_t)0x00800000)
#define NVIC_IABR0_R_NVIC_EXTI9_5_BIT       		(23)
#define NVIC_IABR0_R_NVIC_EXTI9_5_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_EXTI9_5_EN        		((uint32_t)0x00800000)

#define NVIC_IABR0_NVIC_EXTI9_5_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_EXTI9_5_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_EXTI9_5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM1_BRK_TIM9_MASK 		((uint32_t)0x01000000)
#define NVIC_IABR0_R_NVIC_TIM1_BRK_TIM9_BIT  		(24)
#define NVIC_IABR0_R_NVIC_TIM1_BRK_TIM9_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM1_BRK_TIM9_EN   		((uint32_t)0x01000000)

#define NVIC_IABR0_NVIC_TIM1_BRK_TIM9_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM1_BRK_TIM9_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM1_BRK_TIM9_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM1_UP_TIM10_MASK 		((uint32_t)0x02000000)
#define NVIC_IABR0_R_NVIC_TIM1_UP_TIM10_BIT  		(25)
#define NVIC_IABR0_R_NVIC_TIM1_UP_TIM10_DIS  		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM1_UP_TIM10_EN   		((uint32_t)0x02000000)

#define NVIC_IABR0_NVIC_TIM1_UP_TIM10_MASK   		((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM1_UP_TIM10_DIS    		((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM1_UP_TIM10_EN     		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM1_TRIG_COM_TIM11_MASK  ((uint32_t)0x04000000)
#define NVIC_IABR0_R_NVIC_TIM1_TRIG_COM_TIM11_BIT   (26)
#define NVIC_IABR0_R_NVIC_TIM1_TRIG_COM_TIM11_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM1_TRIG_COM_TIM11_EN    ((uint32_t)0x04000000)

#define NVIC_IABR0_NVIC_TIM1_TRIG_COM_TIM11_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM1_TRIG_COM_TIM11_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM1_TRIG_COM_TIM11_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM1_CC_MASK				((uint32_t)0x08000000)
#define NVIC_IABR0_R_NVIC_TIM1_CC_BIT       		(27)
#define NVIC_IABR0_R_NVIC_TIM1_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM1_CC_EN        		((uint32_t)0x08000000)

#define NVIC_IABR0_NVIC_TIM1_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM1_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM1_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM2_MASK      			((uint32_t)0x10000000)
#define NVIC_IABR0_R_NVIC_TIM2_BIT       			(28)
#define NVIC_IABR0_R_NVIC_TIM2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM2_EN        			((uint32_t)0x10000000)

#define NVIC_IABR0_NVIC_TIM2_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM2_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM3_MASK      			((uint32_t)0x20000000)
#define NVIC_IABR0_R_NVIC_TIM3_BIT       			(29)
#define NVIC_IABR0_R_NVIC_TIM3_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM3_EN        			((uint32_t)0x20000000)

#define NVIC_IABR0_NVIC_TIM3_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM3_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_TIM4_MASK      			((uint32_t)0x40000000)
#define NVIC_IABR0_R_NVIC_TIM4_BIT       			(30)
#define NVIC_IABR0_R_NVIC_TIM4_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_TIM4_EN        			((uint32_t)0x40000000)

#define NVIC_IABR0_NVIC_TIM4_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_TIM4_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_TIM4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_I2C1_EV_MASK      		((uint32_t)0x80000000)
#define NVIC_IABR0_R_NVIC_I2C1_EV_BIT       		(31)
#define NVIC_IABR0_R_NVIC_I2C1_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_I2C1_EV_EN        		((uint32_t)0x80000000)

#define NVIC_IABR0_NVIC_I2C1_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_I2C1_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_I2C1_EV_EN        			((uint32_t)0x00000001)
//--------




//ToDo ISER1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISER1_OFFSET)))
#define NVIC_ISER1_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISER1_OFFSET)))


//--------
#define NVIC_ISER1_R_NVIC_I2C1_ER_MASK				((uint32_t)0x00000001)
#define NVIC_ISER1_R_NVIC_I2C1_ER_BIT       		(0)
#define NVIC_ISER1_R_NVIC_I2C1_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_I2C1_ER_EN        		((uint32_t)0x00000001)

#define NVIC_ISER1_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_I2C2_EV_MASK      		((uint32_t)0x00000002)
#define NVIC_ISER1_R_NVIC_I2C2_EV_BIT       		(1)
#define NVIC_ISER1_R_NVIC_I2C2_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_I2C2_EV_EN        		((uint32_t)0x00000002)

#define NVIC_ISER1_NVIC_I2C2_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_I2C2_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_I2C2_EV_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_I2C2_ER_MASK      		((uint32_t)0x00000004)
#define NVIC_ISER1_R_NVIC_I2C2_ER_BIT       		(2)
#define NVIC_ISER1_R_NVIC_I2C2_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_I2C2_ER_EN        		((uint32_t)0x00000004)

#define NVIC_ISER1_NVIC_I2C2_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_I2C2_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_I2C2_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_SPI1_MASK      			((uint32_t)0x00000008)
#define NVIC_ISER1_R_NVIC_SPI1_BIT       			(3)
#define NVIC_ISER1_R_NVIC_SPI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SPI1_EN        			((uint32_t)0x00000008)

#define NVIC_ISER1_NVIC_SPI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SPI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SPI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_SPI2_MASK      			((uint32_t)0x00000010)
#define NVIC_ISER1_R_NVIC_SPI2_BIT       			(4)
#define NVIC_ISER1_R_NVIC_SPI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SPI2_EN        			((uint32_t)0x00000010)

#define NVIC_ISER1_NVIC_SPI2_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SPI2_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SPI2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_USART1_MASK      			((uint32_t)0x00000020)
#define NVIC_ISER1_R_NVIC_USART1_BIT       			(5)
#define NVIC_ISER1_R_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_USART1_EN        			((uint32_t)0x00000020)

#define NVIC_ISER1_NVIC_USART1_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_USART1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_USART2_MASK      			((uint32_t)0x00000040)
#define NVIC_ISER1_R_NVIC_USART2_BIT       			(6)
#define NVIC_ISER1_R_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_USART2_EN        			((uint32_t)0x00000040)

#define NVIC_ISER1_NVIC_USART2_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_USART2_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_USART3_MASK      			((uint32_t)0x00000080)
#define NVIC_ISER1_R_NVIC_USART3_BIT       			(7)
#define NVIC_ISER1_R_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_USART3_EN        			((uint32_t)0x00000080)

#define NVIC_ISER1_NVIC_USART3_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_USART3_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000100)
#define NVIC_ISER1_R_NVIC_EXTI15_10_BIT       		(8)
#define NVIC_ISER1_R_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_EXTI15_10_EN        		((uint32_t)0x00000100)

#define NVIC_ISER1_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_EXTI15_10_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000200)
#define NVIC_ISER1_R_NVIC_RTC_Alarm_BIT       		(9)
#define NVIC_ISER1_R_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000200)

#define NVIC_ISER1_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_OTG_FS_WKUP_MASK      	((uint32_t)0x00000400)
#define NVIC_ISER1_R_NVIC_OTG_FS_WKUP_BIT       	(10)
#define NVIC_ISER1_R_NVIC_OTG_FS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_OTG_FS_WKUP_EN        	((uint32_t)0x00000400)

#define NVIC_ISER1_NVIC_OTG_FS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_OTG_FS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_OTG_FS_WKUP_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000800)
#define NVIC_ISER1_R_NVIC_TIM8_BRK_TIM12_BIT       	(11)
#define NVIC_ISER1_R_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000800)

#define NVIC_ISER1_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00001000)
#define NVIC_ISER1_R_NVIC_TIM8_UP_TIM13_BIT       	(12)
#define NVIC_ISER1_R_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00001000)

#define NVIC_ISER1_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_TIM8_TRIG_COM_TIM14_MASK  ((uint32_t)0x00002000)
#define NVIC_ISER1_R_NVIC_TIM8_TRIG_COM_TIM14_BIT   (13)
#define NVIC_ISER1_R_NVIC_TIM8_TRIG_COM_TIM14_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM8_TRIG_COM_TIM14_EN    ((uint32_t)0x00002000)

#define NVIC_ISER1_NVIC_TIM8_TRIG_COM_TIM14_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM8_TRIG_COM_TIM14_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM8_TRIG_COM_TIM14_EN     	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIM8_CC_MASK      		((uint32_t)0x00004000)
#define NVIC_ISER1_R_NVIC_TIM8_CC_BIT       		(14)
#define NVIC_ISER1_R_NVIC_TIM8_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM8_CC_EN        		((uint32_t)0x00004000)

#define NVIC_ISER1_NVIC_TIM8_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM8_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM8_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA1_Stream7_MASK      	((uint32_t)0x00008000)
#define NVIC_ISER1_R_NVIC_DMA1_Stream7_BIT       	(15)
#define NVIC_ISER1_R_NVIC_DMA1_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA1_Stream7_EN        	((uint32_t)0x00008000)

#define NVIC_ISER1_NVIC_DMA1_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA1_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA1_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_FMC_MASK      			((uint32_t)0x00010000)
#define NVIC_ISER1_R_NVIC_FMC_BIT       			(16)
#define NVIC_ISER1_R_NVIC_FMC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_FMC_EN        			((uint32_t)0x00010000)

#define NVIC_ISER1_NVIC_FMC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_FMC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_FMC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_SDIO_MASK      			((uint32_t)0x00020000)
#define NVIC_ISER1_R_NVIC_SDIO_BIT       			(17)
#define NVIC_ISER1_R_NVIC_SDIO_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SDIO_EN        			((uint32_t)0x00020000)

#define NVIC_ISER1_NVIC_SDIO_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SDIO_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SDIO_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIM5_MASK      			((uint32_t)0x00040000)
#define NVIC_ISER1_R_NVIC_TIM5_BIT       			(18)
#define NVIC_ISER1_R_NVIC_TIM5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM5_EN        			((uint32_t)0x00040000)

#define NVIC_ISER1_NVIC_TIM5_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM5_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_SPI3_MASK      			((uint32_t)0x00080000)
#define NVIC_ISER1_R_NVIC_SPI3_BIT       			(19)
#define NVIC_ISER1_R_NVIC_SPI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_SPI3_EN        			((uint32_t)0x00080000)

#define NVIC_ISER1_NVIC_SPI3_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_SPI3_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_SPI3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART4_MASK      			((uint32_t)0x00100000)
#define NVIC_ISER1_R_NVIC_UART4_BIT       			(20)
#define NVIC_ISER1_R_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART4_EN        			((uint32_t)0x00100000)

#define NVIC_ISER1_NVIC_UART4_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_UART5_MASK      			((uint32_t)0x00200000)
#define NVIC_ISER1_R_NVIC_UART5_BIT       			(21)
#define NVIC_ISER1_R_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_UART5_EN        			((uint32_t)0x00200000)

#define NVIC_ISER1_NVIC_UART5_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_UART5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_TIM6_DAC_MASK      		((uint32_t)0x00400000)
#define NVIC_ISER1_R_NVIC_TIM6_DAC_BIT       		(22)
#define NVIC_ISER1_R_NVIC_TIM6_DAC_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM6_DAC_EN        		((uint32_t)0x00400000)

#define NVIC_ISER1_NVIC_TIM6_DAC_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM6_DAC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM6_DAC_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_TIM7_MASK      			((uint32_t)0x00800000)
#define NVIC_ISER1_R_NVIC_TIM7_BIT       			(23)
#define NVIC_ISER1_R_NVIC_TIM7_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_TIM7_EN        			((uint32_t)0x00800000)

#define NVIC_ISER1_NVIC_TIM7_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_TIM7_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_TIM7_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA2_Stream0_MASK      	((uint32_t)0x01000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream0_BIT       	(24)
#define NVIC_ISER1_R_NVIC_DMA2_Stream0_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream0_EN        	((uint32_t)0x01000000)

#define NVIC_ISER1_NVIC_DMA2_Stream0_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA2_Stream0_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA2_Stream0_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA2_Stream1_MASK      	((uint32_t)0x02000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream1_BIT       	(25)
#define NVIC_ISER1_R_NVIC_DMA2_Stream1_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream1_EN        	((uint32_t)0x02000000)

#define NVIC_ISER1_NVIC_DMA2_Stream1_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA2_Stream1_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA2_Stream1_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA2_Stream2_MASK      	((uint32_t)0x04000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream2_BIT       	(26)
#define NVIC_ISER1_R_NVIC_DMA2_Stream2_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream2_EN        	((uint32_t)0x04000000)

#define NVIC_ISER1_NVIC_DMA2_Stream2_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA2_Stream2_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA2_Stream2_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA2_Stream3_MASK      	((uint32_t)0x08000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream3_BIT       	(27)
#define NVIC_ISER1_R_NVIC_DMA2_Stream3_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA2_Stream3_EN        	((uint32_t)0x08000000)

#define NVIC_ISER1_NVIC_DMA2_Stream3_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA2_Stream3_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA2_Stream3_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x10000000)
#define NVIC_ISER1_R_NVIC__DMA2_Stream4_BIT       	(28)
#define NVIC_ISER1_R_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC__DMA2_Stream4_EN        	((uint32_t)0x10000000)

#define NVIC_ISER1_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC__DMA2_Stream4_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ETH_MASK      			((uint32_t)0x20000000)
#define NVIC_ISER1_R_NVIC_ETH_BIT       			(29)
#define NVIC_ISER1_R_NVIC_ETH_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ETH_EN        			((uint32_t)0x20000000)

#define NVIC_ISER1_NVIC_ETH_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ETH_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ETH_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_ETH_WKUP_MASK      		((uint32_t)0x40000000)
#define NVIC_ISER1_R_NVIC_ETH_WKUP_BIT       		(30)
#define NVIC_ISER1_R_NVIC_ETH_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_ETH_WKUP_EN        		((uint32_t)0x40000000)

#define NVIC_ISER1_NVIC_ETH_WKUP_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_ETH_WKUP_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_ETH_WKUP_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_CAN2_TX_MASK      		((uint32_t)0x80000000)
#define NVIC_ISER1_R_NVIC_CAN2_TX_BIT       		(31)
#define NVIC_ISER1_R_NVIC_CAN2_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_CAN2_TX_EN        		((uint32_t)0x80000000)

#define NVIC_ISER1_NVIC_CAN2_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_CAN2_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_CAN2_TX_EN        			((uint32_t)0x00000001)
//--------





//ToDo ICER1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICER1_OFFSET)))
#define NVIC_ICER1_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICER1_OFFSET)))


//--------
#define NVIC_ICER1_R_NVIC_I2C1_ER_MASK				((uint32_t)0x00000001)
#define NVIC_ICER1_R_NVIC_I2C1_ER_BIT       		(0)
#define NVIC_ICER1_R_NVIC_I2C1_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_I2C1_ER_EN        		((uint32_t)0x00000001)

#define NVIC_ICER1_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_I2C2_EV_MASK      		((uint32_t)0x00000002)
#define NVIC_ICER1_R_NVIC_I2C2_EV_BIT       		(1)
#define NVIC_ICER1_R_NVIC_I2C2_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_I2C2_EV_EN        		((uint32_t)0x00000002)

#define NVIC_ICER1_NVIC_I2C2_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_I2C2_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_I2C2_EV_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_I2C2_ER_MASK      		((uint32_t)0x00000004)
#define NVIC_ICER1_R_NVIC_I2C2_ER_BIT       		(2)
#define NVIC_ICER1_R_NVIC_I2C2_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_I2C2_ER_EN        		((uint32_t)0x00000004)

#define NVIC_ICER1_NVIC_I2C2_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_I2C2_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_I2C2_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_SPI1_MASK      			((uint32_t)0x00000008)
#define NVIC_ICER1_R_NVIC_SPI1_BIT       			(3)
#define NVIC_ICER1_R_NVIC_SPI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SPI1_EN        			((uint32_t)0x00000008)

#define NVIC_ICER1_NVIC_SPI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SPI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SPI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_SPI2_MASK      			((uint32_t)0x00000010)
#define NVIC_ICER1_R_NVIC_SPI2_BIT       			(4)
#define NVIC_ICER1_R_NVIC_SPI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SPI2_EN        			((uint32_t)0x00000010)

#define NVIC_ICER1_NVIC_SPI2_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SPI2_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SPI2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_USART1_MASK      			((uint32_t)0x00000020)
#define NVIC_ICER1_R_NVIC_USART1_BIT       			(5)
#define NVIC_ICER1_R_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_USART1_EN        			((uint32_t)0x00000020)

#define NVIC_ICER1_NVIC_USART1_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_USART1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_USART2_MASK      			((uint32_t)0x00000040)
#define NVIC_ICER1_R_NVIC_USART2_BIT       			(6)
#define NVIC_ICER1_R_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_USART2_EN        			((uint32_t)0x00000040)

#define NVIC_ICER1_NVIC_USART2_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_USART2_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_USART3_MASK      			((uint32_t)0x00000080)
#define NVIC_ICER1_R_NVIC_USART3_BIT       			(7)
#define NVIC_ICER1_R_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_USART3_EN        			((uint32_t)0x00000080)

#define NVIC_ICER1_NVIC_USART3_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_USART3_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000100)
#define NVIC_ICER1_R_NVIC_EXTI15_10_BIT       		(8)
#define NVIC_ICER1_R_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_EXTI15_10_EN        		((uint32_t)0x00000100)

#define NVIC_ICER1_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_EXTI15_10_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000200)
#define NVIC_ICER1_R_NVIC_RTC_Alarm_BIT       		(9)
#define NVIC_ICER1_R_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000200)

#define NVIC_ICER1_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_OTG_FS_WKUP_MASK      	((uint32_t)0x00000400)
#define NVIC_ICER1_R_NVIC_OTG_FS_WKUP_BIT       	(10)
#define NVIC_ICER1_R_NVIC_OTG_FS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_OTG_FS_WKUP_EN        	((uint32_t)0x00000400)

#define NVIC_ICER1_NVIC_OTG_FS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_OTG_FS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_OTG_FS_WKUP_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000800)
#define NVIC_ICER1_R_NVIC_TIM8_BRK_TIM12_BIT       	(11)
#define NVIC_ICER1_R_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000800)

#define NVIC_ICER1_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00001000)
#define NVIC_ICER1_R_NVIC_TIM8_UP_TIM13_BIT       	(12)
#define NVIC_ICER1_R_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00001000)

#define NVIC_ICER1_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_TIM8_TRIG_COM_TIM14_MASK  ((uint32_t)0x00002000)
#define NVIC_ICER1_R_NVIC_TIM8_TRIG_COM_TIM14_BIT   (13)
#define NVIC_ICER1_R_NVIC_TIM8_TRIG_COM_TIM14_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM8_TRIG_COM_TIM14_EN    ((uint32_t)0x00002000)

#define NVIC_ICER1_NVIC_TIM8_TRIG_COM_TIM14_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM8_TRIG_COM_TIM14_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM8_TRIG_COM_TIM14_EN     	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIM8_CC_MASK      		((uint32_t)0x00004000)
#define NVIC_ICER1_R_NVIC_TIM8_CC_BIT       		(14)
#define NVIC_ICER1_R_NVIC_TIM8_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM8_CC_EN        		((uint32_t)0x00004000)

#define NVIC_ICER1_NVIC_TIM8_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM8_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM8_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA1_Stream7_MASK      	((uint32_t)0x00008000)
#define NVIC_ICER1_R_NVIC_DMA1_Stream7_BIT       	(15)
#define NVIC_ICER1_R_NVIC_DMA1_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA1_Stream7_EN        	((uint32_t)0x00008000)

#define NVIC_ICER1_NVIC_DMA1_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA1_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA1_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_FMC_MASK      			((uint32_t)0x00010000)
#define NVIC_ICER1_R_NVIC_FMC_BIT       			(16)
#define NVIC_ICER1_R_NVIC_FMC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_FMC_EN        			((uint32_t)0x00010000)

#define NVIC_ICER1_NVIC_FMC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_FMC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_FMC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_SDIO_MASK      			((uint32_t)0x00020000)
#define NVIC_ICER1_R_NVIC_SDIO_BIT       			(17)
#define NVIC_ICER1_R_NVIC_SDIO_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SDIO_EN        			((uint32_t)0x00020000)

#define NVIC_ICER1_NVIC_SDIO_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SDIO_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SDIO_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIM5_MASK      			((uint32_t)0x00040000)
#define NVIC_ICER1_R_NVIC_TIM5_BIT       			(18)
#define NVIC_ICER1_R_NVIC_TIM5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM5_EN        			((uint32_t)0x00040000)

#define NVIC_ICER1_NVIC_TIM5_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM5_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_SPI3_MASK      			((uint32_t)0x00080000)
#define NVIC_ICER1_R_NVIC_SPI3_BIT       			(19)
#define NVIC_ICER1_R_NVIC_SPI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_SPI3_EN        			((uint32_t)0x00080000)

#define NVIC_ICER1_NVIC_SPI3_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_SPI3_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_SPI3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART4_MASK      			((uint32_t)0x00100000)
#define NVIC_ICER1_R_NVIC_UART4_BIT       			(20)
#define NVIC_ICER1_R_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART4_EN        			((uint32_t)0x00100000)

#define NVIC_ICER1_NVIC_UART4_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_UART5_MASK      			((uint32_t)0x00200000)
#define NVIC_ICER1_R_NVIC_UART5_BIT       			(21)
#define NVIC_ICER1_R_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_UART5_EN        			((uint32_t)0x00200000)

#define NVIC_ICER1_NVIC_UART5_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_UART5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_TIM6_DAC_MASK      		((uint32_t)0x00400000)
#define NVIC_ICER1_R_NVIC_TIM6_DAC_BIT       		(22)
#define NVIC_ICER1_R_NVIC_TIM6_DAC_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM6_DAC_EN        		((uint32_t)0x00400000)

#define NVIC_ICER1_NVIC_TIM6_DAC_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM6_DAC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM6_DAC_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_TIM7_MASK      			((uint32_t)0x00800000)
#define NVIC_ICER1_R_NVIC_TIM7_BIT       			(23)
#define NVIC_ICER1_R_NVIC_TIM7_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_TIM7_EN        			((uint32_t)0x00800000)

#define NVIC_ICER1_NVIC_TIM7_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_TIM7_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_TIM7_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA2_Stream0_MASK      	((uint32_t)0x01000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream0_BIT       	(24)
#define NVIC_ICER1_R_NVIC_DMA2_Stream0_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream0_EN        	((uint32_t)0x01000000)

#define NVIC_ICER1_NVIC_DMA2_Stream0_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA2_Stream0_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA2_Stream0_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA2_Stream1_MASK      	((uint32_t)0x02000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream1_BIT       	(25)
#define NVIC_ICER1_R_NVIC_DMA2_Stream1_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream1_EN        	((uint32_t)0x02000000)

#define NVIC_ICER1_NVIC_DMA2_Stream1_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA2_Stream1_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA2_Stream1_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA2_Stream2_MASK      	((uint32_t)0x04000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream2_BIT       	(26)
#define NVIC_ICER1_R_NVIC_DMA2_Stream2_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream2_EN        	((uint32_t)0x04000000)

#define NVIC_ICER1_NVIC_DMA2_Stream2_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA2_Stream2_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA2_Stream2_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA2_Stream3_MASK      	((uint32_t)0x08000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream3_BIT       	(27)
#define NVIC_ICER1_R_NVIC_DMA2_Stream3_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA2_Stream3_EN        	((uint32_t)0x08000000)

#define NVIC_ICER1_NVIC_DMA2_Stream3_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA2_Stream3_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA2_Stream3_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x10000000)
#define NVIC_ICER1_R_NVIC__DMA2_Stream4_BIT       	(28)
#define NVIC_ICER1_R_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC__DMA2_Stream4_EN        	((uint32_t)0x10000000)

#define NVIC_ICER1_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC__DMA2_Stream4_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ETH_MASK      			((uint32_t)0x20000000)
#define NVIC_ICER1_R_NVIC_ETH_BIT       			(29)
#define NVIC_ICER1_R_NVIC_ETH_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ETH_EN        			((uint32_t)0x20000000)

#define NVIC_ICER1_NVIC_ETH_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ETH_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ETH_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_ETH_WKUP_MASK      		((uint32_t)0x40000000)
#define NVIC_ICER1_R_NVIC_ETH_WKUP_BIT       		(30)
#define NVIC_ICER1_R_NVIC_ETH_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_ETH_WKUP_EN        		((uint32_t)0x40000000)

#define NVIC_ICER1_NVIC_ETH_WKUP_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_ETH_WKUP_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_ETH_WKUP_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_CAN2_TX_MASK      		((uint32_t)0x80000000)
#define NVIC_ICER1_R_NVIC_CAN2_TX_BIT       		(31)
#define NVIC_ICER1_R_NVIC_CAN2_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_CAN2_TX_EN        		((uint32_t)0x80000000)

#define NVIC_ICER1_NVIC_CAN2_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_CAN2_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_CAN2_TX_EN        			((uint32_t)0x00000001)
//--------






//ToDo ISPR1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISPR1_OFFSET)))
#define NVIC_ISPR1_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISPR1_OFFSET)))


//--------
#define NVIC_ISPR1_R_NVIC_I2C1_ER_MASK				((uint32_t)0x00000001)
#define NVIC_ISPR1_R_NVIC_I2C1_ER_BIT       		(0)
#define NVIC_ISPR1_R_NVIC_I2C1_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_I2C1_ER_EN        		((uint32_t)0x00000001)

#define NVIC_ISPR1_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_I2C2_EV_MASK      		((uint32_t)0x00000002)
#define NVIC_ISPR1_R_NVIC_I2C2_EV_BIT       		(1)
#define NVIC_ISPR1_R_NVIC_I2C2_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_I2C2_EV_EN        		((uint32_t)0x00000002)

#define NVIC_ISPR1_NVIC_I2C2_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_I2C2_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_I2C2_EV_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_I2C2_ER_MASK      		((uint32_t)0x00000004)
#define NVIC_ISPR1_R_NVIC_I2C2_ER_BIT       		(2)
#define NVIC_ISPR1_R_NVIC_I2C2_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_I2C2_ER_EN        		((uint32_t)0x00000004)

#define NVIC_ISPR1_NVIC_I2C2_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_I2C2_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_I2C2_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_SPI1_MASK      			((uint32_t)0x00000008)
#define NVIC_ISPR1_R_NVIC_SPI1_BIT       			(3)
#define NVIC_ISPR1_R_NVIC_SPI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SPI1_EN        			((uint32_t)0x00000008)

#define NVIC_ISPR1_NVIC_SPI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SPI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SPI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_SPI2_MASK      			((uint32_t)0x00000010)
#define NVIC_ISPR1_R_NVIC_SPI2_BIT       			(4)
#define NVIC_ISPR1_R_NVIC_SPI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SPI2_EN        			((uint32_t)0x00000010)

#define NVIC_ISPR1_NVIC_SPI2_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SPI2_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SPI2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_USART1_MASK      			((uint32_t)0x00000020)
#define NVIC_ISPR1_R_NVIC_USART1_BIT       			(5)
#define NVIC_ISPR1_R_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_USART1_EN        			((uint32_t)0x00000020)

#define NVIC_ISPR1_NVIC_USART1_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_USART1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_USART2_MASK      			((uint32_t)0x00000040)
#define NVIC_ISPR1_R_NVIC_USART2_BIT       			(6)
#define NVIC_ISPR1_R_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_USART2_EN        			((uint32_t)0x00000040)

#define NVIC_ISPR1_NVIC_USART2_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_USART2_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_USART3_MASK      			((uint32_t)0x00000080)
#define NVIC_ISPR1_R_NVIC_USART3_BIT       			(7)
#define NVIC_ISPR1_R_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_USART3_EN        			((uint32_t)0x00000080)

#define NVIC_ISPR1_NVIC_USART3_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_USART3_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000100)
#define NVIC_ISPR1_R_NVIC_EXTI15_10_BIT       		(8)
#define NVIC_ISPR1_R_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_EXTI15_10_EN        		((uint32_t)0x00000100)

#define NVIC_ISPR1_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_EXTI15_10_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000200)
#define NVIC_ISPR1_R_NVIC_RTC_Alarm_BIT       		(9)
#define NVIC_ISPR1_R_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000200)

#define NVIC_ISPR1_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_OTG_FS_WKUP_MASK      	((uint32_t)0x00000400)
#define NVIC_ISPR1_R_NVIC_OTG_FS_WKUP_BIT       	(10)
#define NVIC_ISPR1_R_NVIC_OTG_FS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_OTG_FS_WKUP_EN        	((uint32_t)0x00000400)

#define NVIC_ISPR1_NVIC_OTG_FS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_OTG_FS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_OTG_FS_WKUP_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000800)
#define NVIC_ISPR1_R_NVIC_TIM8_BRK_TIM12_BIT       	(11)
#define NVIC_ISPR1_R_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000800)

#define NVIC_ISPR1_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00001000)
#define NVIC_ISPR1_R_NVIC_TIM8_UP_TIM13_BIT       	(12)
#define NVIC_ISPR1_R_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00001000)

#define NVIC_ISPR1_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_TIM8_TRIG_COM_TIM14_MASK  ((uint32_t)0x00002000)
#define NVIC_ISPR1_R_NVIC_TIM8_TRIG_COM_TIM14_BIT   (13)
#define NVIC_ISPR1_R_NVIC_TIM8_TRIG_COM_TIM14_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM8_TRIG_COM_TIM14_EN    ((uint32_t)0x00002000)

#define NVIC_ISPR1_NVIC_TIM8_TRIG_COM_TIM14_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM8_TRIG_COM_TIM14_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM8_TRIG_COM_TIM14_EN     	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIM8_CC_MASK      		((uint32_t)0x00004000)
#define NVIC_ISPR1_R_NVIC_TIM8_CC_BIT       		(14)
#define NVIC_ISPR1_R_NVIC_TIM8_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM8_CC_EN        		((uint32_t)0x00004000)

#define NVIC_ISPR1_NVIC_TIM8_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM8_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM8_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA1_Stream7_MASK      	((uint32_t)0x00008000)
#define NVIC_ISPR1_R_NVIC_DMA1_Stream7_BIT       	(15)
#define NVIC_ISPR1_R_NVIC_DMA1_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA1_Stream7_EN        	((uint32_t)0x00008000)

#define NVIC_ISPR1_NVIC_DMA1_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA1_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA1_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_FMC_MASK      			((uint32_t)0x00010000)
#define NVIC_ISPR1_R_NVIC_FMC_BIT       			(16)
#define NVIC_ISPR1_R_NVIC_FMC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_FMC_EN        			((uint32_t)0x00010000)

#define NVIC_ISPR1_NVIC_FMC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_FMC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_FMC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_SDIO_MASK      			((uint32_t)0x00020000)
#define NVIC_ISPR1_R_NVIC_SDIO_BIT       			(17)
#define NVIC_ISPR1_R_NVIC_SDIO_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SDIO_EN        			((uint32_t)0x00020000)

#define NVIC_ISPR1_NVIC_SDIO_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SDIO_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SDIO_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIM5_MASK      			((uint32_t)0x00040000)
#define NVIC_ISPR1_R_NVIC_TIM5_BIT       			(18)
#define NVIC_ISPR1_R_NVIC_TIM5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM5_EN        			((uint32_t)0x00040000)

#define NVIC_ISPR1_NVIC_TIM5_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM5_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_SPI3_MASK      			((uint32_t)0x00080000)
#define NVIC_ISPR1_R_NVIC_SPI3_BIT       			(19)
#define NVIC_ISPR1_R_NVIC_SPI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_SPI3_EN        			((uint32_t)0x00080000)

#define NVIC_ISPR1_NVIC_SPI3_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_SPI3_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_SPI3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART4_MASK      			((uint32_t)0x00100000)
#define NVIC_ISPR1_R_NVIC_UART4_BIT       			(20)
#define NVIC_ISPR1_R_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART4_EN        			((uint32_t)0x00100000)

#define NVIC_ISPR1_NVIC_UART4_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_UART5_MASK      			((uint32_t)0x00200000)
#define NVIC_ISPR1_R_NVIC_UART5_BIT       			(21)
#define NVIC_ISPR1_R_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_UART5_EN        			((uint32_t)0x00200000)

#define NVIC_ISPR1_NVIC_UART5_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_UART5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_TIM6_DAC_MASK      		((uint32_t)0x00400000)
#define NVIC_ISPR1_R_NVIC_TIM6_DAC_BIT       		(22)
#define NVIC_ISPR1_R_NVIC_TIM6_DAC_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM6_DAC_EN        		((uint32_t)0x00400000)

#define NVIC_ISPR1_NVIC_TIM6_DAC_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM6_DAC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM6_DAC_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_TIM7_MASK      			((uint32_t)0x00800000)
#define NVIC_ISPR1_R_NVIC_TIM7_BIT       			(23)
#define NVIC_ISPR1_R_NVIC_TIM7_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_TIM7_EN        			((uint32_t)0x00800000)

#define NVIC_ISPR1_NVIC_TIM7_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_TIM7_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_TIM7_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA2_Stream0_MASK      	((uint32_t)0x01000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream0_BIT       	(24)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream0_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream0_EN        	((uint32_t)0x01000000)

#define NVIC_ISPR1_NVIC_DMA2_Stream0_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA2_Stream0_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA2_Stream0_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA2_Stream1_MASK      	((uint32_t)0x02000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream1_BIT       	(25)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream1_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream1_EN        	((uint32_t)0x02000000)

#define NVIC_ISPR1_NVIC_DMA2_Stream1_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA2_Stream1_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA2_Stream1_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA2_Stream2_MASK      	((uint32_t)0x04000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream2_BIT       	(26)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream2_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream2_EN        	((uint32_t)0x04000000)

#define NVIC_ISPR1_NVIC_DMA2_Stream2_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA2_Stream2_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA2_Stream2_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA2_Stream3_MASK      	((uint32_t)0x08000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream3_BIT       	(27)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream3_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA2_Stream3_EN        	((uint32_t)0x08000000)

#define NVIC_ISPR1_NVIC_DMA2_Stream3_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA2_Stream3_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA2_Stream3_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x10000000)
#define NVIC_ISPR1_R_NVIC__DMA2_Stream4_BIT       	(28)
#define NVIC_ISPR1_R_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC__DMA2_Stream4_EN        	((uint32_t)0x10000000)

#define NVIC_ISPR1_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC__DMA2_Stream4_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ETH_MASK      			((uint32_t)0x20000000)
#define NVIC_ISPR1_R_NVIC_ETH_BIT       			(29)
#define NVIC_ISPR1_R_NVIC_ETH_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ETH_EN        			((uint32_t)0x20000000)

#define NVIC_ISPR1_NVIC_ETH_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ETH_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ETH_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_ETH_WKUP_MASK      		((uint32_t)0x40000000)
#define NVIC_ISPR1_R_NVIC_ETH_WKUP_BIT       		(30)
#define NVIC_ISPR1_R_NVIC_ETH_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_ETH_WKUP_EN        		((uint32_t)0x40000000)

#define NVIC_ISPR1_NVIC_ETH_WKUP_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_ETH_WKUP_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_ETH_WKUP_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_CAN2_TX_MASK      		((uint32_t)0x80000000)
#define NVIC_ISPR1_R_NVIC_CAN2_TX_BIT       		(31)
#define NVIC_ISPR1_R_NVIC_CAN2_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_CAN2_TX_EN        		((uint32_t)0x80000000)

#define NVIC_ISPR1_NVIC_CAN2_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_CAN2_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_CAN2_TX_EN        			((uint32_t)0x00000001)
//--------



//ToDo ICPR1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICPR1_OFFSET)))
#define NVIC_ICPR1_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICPR1_OFFSET)))


//--------
#define NVIC_ICPR1_R_NVIC_I2C1_ER_MASK				((uint32_t)0x00000001)
#define NVIC_ICPR1_R_NVIC_I2C1_ER_BIT       		(0)
#define NVIC_ICPR1_R_NVIC_I2C1_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_I2C1_ER_EN        		((uint32_t)0x00000001)

#define NVIC_ICPR1_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_I2C2_EV_MASK      		((uint32_t)0x00000002)
#define NVIC_ICPR1_R_NVIC_I2C2_EV_BIT       		(1)
#define NVIC_ICPR1_R_NVIC_I2C2_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_I2C2_EV_EN        		((uint32_t)0x00000002)

#define NVIC_ICPR1_NVIC_I2C2_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_I2C2_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_I2C2_EV_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_I2C2_ER_MASK      		((uint32_t)0x00000004)
#define NVIC_ICPR1_R_NVIC_I2C2_ER_BIT       		(2)
#define NVIC_ICPR1_R_NVIC_I2C2_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_I2C2_ER_EN        		((uint32_t)0x00000004)

#define NVIC_ICPR1_NVIC_I2C2_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_I2C2_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_I2C2_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_SPI1_MASK      			((uint32_t)0x00000008)
#define NVIC_ICPR1_R_NVIC_SPI1_BIT       			(3)
#define NVIC_ICPR1_R_NVIC_SPI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SPI1_EN        			((uint32_t)0x00000008)

#define NVIC_ICPR1_NVIC_SPI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SPI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SPI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_SPI2_MASK      			((uint32_t)0x00000010)
#define NVIC_ICPR1_R_NVIC_SPI2_BIT       			(4)
#define NVIC_ICPR1_R_NVIC_SPI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SPI2_EN        			((uint32_t)0x00000010)

#define NVIC_ICPR1_NVIC_SPI2_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SPI2_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SPI2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_USART1_MASK      			((uint32_t)0x00000020)
#define NVIC_ICPR1_R_NVIC_USART1_BIT       			(5)
#define NVIC_ICPR1_R_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_USART1_EN        			((uint32_t)0x00000020)

#define NVIC_ICPR1_NVIC_USART1_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_USART1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_USART2_MASK      			((uint32_t)0x00000040)
#define NVIC_ICPR1_R_NVIC_USART2_BIT       			(6)
#define NVIC_ICPR1_R_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_USART2_EN        			((uint32_t)0x00000040)

#define NVIC_ICPR1_NVIC_USART2_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_USART2_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_USART3_MASK      			((uint32_t)0x00000080)
#define NVIC_ICPR1_R_NVIC_USART3_BIT       			(7)
#define NVIC_ICPR1_R_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_USART3_EN        			((uint32_t)0x00000080)

#define NVIC_ICPR1_NVIC_USART3_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_USART3_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000100)
#define NVIC_ICPR1_R_NVIC_EXTI15_10_BIT       		(8)
#define NVIC_ICPR1_R_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_EXTI15_10_EN        		((uint32_t)0x00000100)

#define NVIC_ICPR1_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_EXTI15_10_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000200)
#define NVIC_ICPR1_R_NVIC_RTC_Alarm_BIT       		(9)
#define NVIC_ICPR1_R_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000200)

#define NVIC_ICPR1_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_OTG_FS_WKUP_MASK      	((uint32_t)0x00000400)
#define NVIC_ICPR1_R_NVIC_OTG_FS_WKUP_BIT       	(10)
#define NVIC_ICPR1_R_NVIC_OTG_FS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_OTG_FS_WKUP_EN        	((uint32_t)0x00000400)

#define NVIC_ICPR1_NVIC_OTG_FS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_OTG_FS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_OTG_FS_WKUP_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000800)
#define NVIC_ICPR1_R_NVIC_TIM8_BRK_TIM12_BIT       	(11)
#define NVIC_ICPR1_R_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000800)

#define NVIC_ICPR1_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00001000)
#define NVIC_ICPR1_R_NVIC_TIM8_UP_TIM13_BIT       	(12)
#define NVIC_ICPR1_R_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00001000)

#define NVIC_ICPR1_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_TIM8_TRIG_COM_TIM14_MASK  ((uint32_t)0x00002000)
#define NVIC_ICPR1_R_NVIC_TIM8_TRIG_COM_TIM14_BIT   (13)
#define NVIC_ICPR1_R_NVIC_TIM8_TRIG_COM_TIM14_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM8_TRIG_COM_TIM14_EN    ((uint32_t)0x00002000)

#define NVIC_ICPR1_NVIC_TIM8_TRIG_COM_TIM14_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM8_TRIG_COM_TIM14_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM8_TRIG_COM_TIM14_EN     	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIM8_CC_MASK      		((uint32_t)0x00004000)
#define NVIC_ICPR1_R_NVIC_TIM8_CC_BIT       		(14)
#define NVIC_ICPR1_R_NVIC_TIM8_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM8_CC_EN        		((uint32_t)0x00004000)

#define NVIC_ICPR1_NVIC_TIM8_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM8_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM8_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA1_Stream7_MASK      	((uint32_t)0x00008000)
#define NVIC_ICPR1_R_NVIC_DMA1_Stream7_BIT       	(15)
#define NVIC_ICPR1_R_NVIC_DMA1_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA1_Stream7_EN        	((uint32_t)0x00008000)

#define NVIC_ICPR1_NVIC_DMA1_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA1_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA1_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_FMC_MASK      			((uint32_t)0x00010000)
#define NVIC_ICPR1_R_NVIC_FMC_BIT       			(16)
#define NVIC_ICPR1_R_NVIC_FMC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_FMC_EN        			((uint32_t)0x00010000)

#define NVIC_ICPR1_NVIC_FMC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_FMC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_FMC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_SDIO_MASK      			((uint32_t)0x00020000)
#define NVIC_ICPR1_R_NVIC_SDIO_BIT       			(17)
#define NVIC_ICPR1_R_NVIC_SDIO_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SDIO_EN        			((uint32_t)0x00020000)

#define NVIC_ICPR1_NVIC_SDIO_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SDIO_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SDIO_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIM5_MASK      			((uint32_t)0x00040000)
#define NVIC_ICPR1_R_NVIC_TIM5_BIT       			(18)
#define NVIC_ICPR1_R_NVIC_TIM5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM5_EN        			((uint32_t)0x00040000)

#define NVIC_ICPR1_NVIC_TIM5_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM5_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_SPI3_MASK      			((uint32_t)0x00080000)
#define NVIC_ICPR1_R_NVIC_SPI3_BIT       			(19)
#define NVIC_ICPR1_R_NVIC_SPI3_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_SPI3_EN        			((uint32_t)0x00080000)

#define NVIC_ICPR1_NVIC_SPI3_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_SPI3_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_SPI3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART4_MASK      			((uint32_t)0x00100000)
#define NVIC_ICPR1_R_NVIC_UART4_BIT       			(20)
#define NVIC_ICPR1_R_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART4_EN        			((uint32_t)0x00100000)

#define NVIC_ICPR1_NVIC_UART4_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_UART5_MASK      			((uint32_t)0x00200000)
#define NVIC_ICPR1_R_NVIC_UART5_BIT       			(21)
#define NVIC_ICPR1_R_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_UART5_EN        			((uint32_t)0x00200000)

#define NVIC_ICPR1_NVIC_UART5_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_UART5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_TIM6_DAC_MASK      		((uint32_t)0x00400000)
#define NVIC_ICPR1_R_NVIC_TIM6_DAC_BIT       		(22)
#define NVIC_ICPR1_R_NVIC_TIM6_DAC_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM6_DAC_EN        		((uint32_t)0x00400000)

#define NVIC_ICPR1_NVIC_TIM6_DAC_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM6_DAC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM6_DAC_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_TIM7_MASK      			((uint32_t)0x00800000)
#define NVIC_ICPR1_R_NVIC_TIM7_BIT       			(23)
#define NVIC_ICPR1_R_NVIC_TIM7_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_TIM7_EN        			((uint32_t)0x00800000)

#define NVIC_ICPR1_NVIC_TIM7_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_TIM7_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_TIM7_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA2_Stream0_MASK      	((uint32_t)0x01000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream0_BIT       	(24)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream0_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream0_EN        	((uint32_t)0x01000000)

#define NVIC_ICPR1_NVIC_DMA2_Stream0_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA2_Stream0_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA2_Stream0_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA2_Stream1_MASK      	((uint32_t)0x02000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream1_BIT       	(25)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream1_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream1_EN        	((uint32_t)0x02000000)

#define NVIC_ICPR1_NVIC_DMA2_Stream1_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA2_Stream1_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA2_Stream1_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA2_Stream2_MASK      	((uint32_t)0x04000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream2_BIT       	(26)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream2_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream2_EN        	((uint32_t)0x04000000)

#define NVIC_ICPR1_NVIC_DMA2_Stream2_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA2_Stream2_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA2_Stream2_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA2_Stream3_MASK      	((uint32_t)0x08000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream3_BIT       	(27)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream3_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA2_Stream3_EN        	((uint32_t)0x08000000)

#define NVIC_ICPR1_NVIC_DMA2_Stream3_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA2_Stream3_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA2_Stream3_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x10000000)
#define NVIC_ICPR1_R_NVIC__DMA2_Stream4_BIT       	(28)
#define NVIC_ICPR1_R_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC__DMA2_Stream4_EN        	((uint32_t)0x10000000)

#define NVIC_ICPR1_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC__DMA2_Stream4_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ETH_MASK      			((uint32_t)0x20000000)
#define NVIC_ICPR1_R_NVIC_ETH_BIT       			(29)
#define NVIC_ICPR1_R_NVIC_ETH_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ETH_EN        			((uint32_t)0x20000000)

#define NVIC_ICPR1_NVIC_ETH_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ETH_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ETH_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_ETH_WKUP_MASK      		((uint32_t)0x40000000)
#define NVIC_ICPR1_R_NVIC_ETH_WKUP_BIT       		(30)
#define NVIC_ICPR1_R_NVIC_ETH_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_ETH_WKUP_EN        		((uint32_t)0x40000000)

#define NVIC_ICPR1_NVIC_ETH_WKUP_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_ETH_WKUP_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_ETH_WKUP_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_CAN2_TX_MASK      		((uint32_t)0x80000000)
#define NVIC_ICPR1_R_NVIC_CAN2_TX_BIT       		(31)
#define NVIC_ICPR1_R_NVIC_CAN2_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_CAN2_TX_EN        		((uint32_t)0x80000000)

#define NVIC_ICPR1_NVIC_CAN2_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_CAN2_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_CAN2_TX_EN        			((uint32_t)0x00000001)
//--------



//ToDo IABR1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_IABR1_OFFSET)))
#define NVIC_IABR1_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_IABR1_OFFSET)))


//--------
#define NVIC_IABR1_R_NVIC_I2C1_ER_MASK				((uint32_t)0x00000001)
#define NVIC_IABR1_R_NVIC_I2C1_ER_BIT       		(0)
#define NVIC_IABR1_R_NVIC_I2C1_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_I2C1_ER_EN        		((uint32_t)0x00000001)

#define NVIC_IABR1_NVIC_I2C1_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_I2C1_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_I2C1_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_I2C2_EV_MASK      		((uint32_t)0x00000002)
#define NVIC_IABR1_R_NVIC_I2C2_EV_BIT       		(1)
#define NVIC_IABR1_R_NVIC_I2C2_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_I2C2_EV_EN        		((uint32_t)0x00000002)

#define NVIC_IABR1_NVIC_I2C2_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_I2C2_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_I2C2_EV_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_I2C2_ER_MASK      		((uint32_t)0x00000004)
#define NVIC_IABR1_R_NVIC_I2C2_ER_BIT       		(2)
#define NVIC_IABR1_R_NVIC_I2C2_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_I2C2_ER_EN        		((uint32_t)0x00000004)

#define NVIC_IABR1_NVIC_I2C2_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_I2C2_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_I2C2_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_SPI1_MASK      			((uint32_t)0x00000008)
#define NVIC_IABR1_R_NVIC_SPI1_BIT       			(3)
#define NVIC_IABR1_R_NVIC_SPI1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SPI1_EN        			((uint32_t)0x00000008)

#define NVIC_IABR1_NVIC_SPI1_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SPI1_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SPI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_SPI2_MASK      			((uint32_t)0x00000010)
#define NVIC_IABR1_R_NVIC_SPI2_BIT       			(4)
#define NVIC_IABR1_R_NVIC_SPI2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SPI2_EN        			((uint32_t)0x00000010)

#define NVIC_IABR1_NVIC_SPI2_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SPI2_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SPI2_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_USART1_MASK      			((uint32_t)0x00000020)
#define NVIC_IABR1_R_NVIC_USART1_BIT       			(5)
#define NVIC_IABR1_R_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_USART1_EN        			((uint32_t)0x00000020)

#define NVIC_IABR1_NVIC_USART1_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_USART1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_USART1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_USART2_MASK      			((uint32_t)0x00000040)
#define NVIC_IABR1_R_NVIC_USART2_BIT       			(6)
#define NVIC_IABR1_R_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_USART2_EN        			((uint32_t)0x00000040)

#define NVIC_IABR1_NVIC_USART2_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_USART2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_USART2_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_USART3_MASK      			((uint32_t)0x00000080)
#define NVIC_IABR1_R_NVIC_USART3_BIT       			(7)
#define NVIC_IABR1_R_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_USART3_EN        			((uint32_t)0x00000080)

#define NVIC_IABR1_NVIC_USART3_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_USART3_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_USART3_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000100)
#define NVIC_IABR1_R_NVIC_EXTI15_10_BIT       		(8)
#define NVIC_IABR1_R_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_EXTI15_10_EN        		((uint32_t)0x00000100)

#define NVIC_IABR1_NVIC_EXTI15_10_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_EXTI15_10_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_EXTI15_10_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000200)
#define NVIC_IABR1_R_NVIC_RTC_Alarm_BIT       		(9)
#define NVIC_IABR1_R_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000200)

#define NVIC_IABR1_NVIC_RTC_Alarm_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RTC_Alarm_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RTC_Alarm_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_OTG_FS_WKUP_MASK      	((uint32_t)0x00000400)
#define NVIC_IABR1_R_NVIC_OTG_FS_WKUP_BIT       	(10)
#define NVIC_IABR1_R_NVIC_OTG_FS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_OTG_FS_WKUP_EN        	((uint32_t)0x00000400)

#define NVIC_IABR1_NVIC_OTG_FS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_OTG_FS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_OTG_FS_WKUP_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000800)
#define NVIC_IABR1_R_NVIC_TIM8_BRK_TIM12_BIT       	(11)
#define NVIC_IABR1_R_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000800)

#define NVIC_IABR1_NVIC_TIM8_BRK_TIM12_MASK      	((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM8_BRK_TIM12_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM8_BRK_TIM12_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00001000)
#define NVIC_IABR1_R_NVIC_TIM8_UP_TIM13_BIT       	(12)
#define NVIC_IABR1_R_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00001000)

#define NVIC_IABR1_NVIC_TIM8_UP_TIM13_MASK      	((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM8_UP_TIM13_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM8_UP_TIM13_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_TIM8_TRIG_COM_TIM14_MASK  ((uint32_t)0x00002000)
#define NVIC_IABR1_R_NVIC_TIM8_TRIG_COM_TIM14_BIT   (13)
#define NVIC_IABR1_R_NVIC_TIM8_TRIG_COM_TIM14_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM8_TRIG_COM_TIM14_EN    ((uint32_t)0x00002000)

#define NVIC_IABR1_NVIC_TIM8_TRIG_COM_TIM14_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM8_TRIG_COM_TIM14_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM8_TRIG_COM_TIM14_EN     	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIM8_CC_MASK      		((uint32_t)0x00004000)
#define NVIC_IABR1_R_NVIC_TIM8_CC_BIT       		(14)
#define NVIC_IABR1_R_NVIC_TIM8_CC_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM8_CC_EN        		((uint32_t)0x00004000)

#define NVIC_IABR1_NVIC_TIM8_CC_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM8_CC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM8_CC_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA1_Stream7_MASK      	((uint32_t)0x00008000)
#define NVIC_IABR1_R_NVIC_DMA1_Stream7_BIT       	(15)
#define NVIC_IABR1_R_NVIC_DMA1_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA1_Stream7_EN        	((uint32_t)0x00008000)

#define NVIC_IABR1_NVIC_DMA1_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA1_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA1_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_FMC_MASK      			((uint32_t)0x00010000)
#define NVIC_IABR1_R_NVIC_FMC_BIT       			(16)
#define NVIC_IABR1_R_NVIC_FMC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_FMC_EN        			((uint32_t)0x00010000)

#define NVIC_IABR1_NVIC_FMC_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_FMC_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_FMC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_SDIO_MASK      			((uint32_t)0x00020000)
#define NVIC_IABR1_R_NVIC_SDIO_BIT       			(17)
#define NVIC_IABR1_R_NVIC_SDIO_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SDIO_EN        			((uint32_t)0x00020000)

#define NVIC_IABR1_NVIC_SDIO_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SDIO_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SDIO_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIM5_MASK      			((uint32_t)0x00040000)
#define NVIC_IABR1_R_NVIC_TIM5_BIT       			(18)
#define NVIC_IABR1_R_NVIC_TIM5_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM5_EN        			((uint32_t)0x00040000)

#define NVIC_IABR1_NVIC_TIM5_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM5_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_SPI3_MASK      			((uint32_t)0x00080000)
#define NVIC_IABR1_R_NVIC_SPI3_BIT       			(19)
#define NVIC_IABR1_R_NVIC_SPI3_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_SPI3_EN        			((uint32_t)0x00080000)

#define NVIC_IABR1_NVIC_SPI3_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_SPI3_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_SPI3_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART4_MASK      			((uint32_t)0x00100000)
#define NVIC_IABR1_R_NVIC_UART4_BIT       			(20)
#define NVIC_IABR1_R_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART4_EN        			((uint32_t)0x00100000)

#define NVIC_IABR1_NVIC_UART4_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART4_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART4_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_UART5_MASK      			((uint32_t)0x00200000)
#define NVIC_IABR1_R_NVIC_UART5_BIT       			(21)
#define NVIC_IABR1_R_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_UART5_EN        			((uint32_t)0x00200000)

#define NVIC_IABR1_NVIC_UART5_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_UART5_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_UART5_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_TIM6_DAC_MASK      		((uint32_t)0x00400000)
#define NVIC_IABR1_R_NVIC_TIM6_DAC_BIT       		(22)
#define NVIC_IABR1_R_NVIC_TIM6_DAC_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM6_DAC_EN        		((uint32_t)0x00400000)

#define NVIC_IABR1_NVIC_TIM6_DAC_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM6_DAC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM6_DAC_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_TIM7_MASK      			((uint32_t)0x00800000)
#define NVIC_IABR1_R_NVIC_TIM7_BIT       			(23)
#define NVIC_IABR1_R_NVIC_TIM7_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_TIM7_EN        			((uint32_t)0x00800000)

#define NVIC_IABR1_NVIC_TIM7_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_TIM7_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_TIM7_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA2_Stream0_MASK      	((uint32_t)0x01000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream0_BIT       	(24)
#define NVIC_IABR1_R_NVIC_DMA2_Stream0_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream0_EN        	((uint32_t)0x01000000)

#define NVIC_IABR1_NVIC_DMA2_Stream0_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA2_Stream0_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA2_Stream0_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA2_Stream1_MASK      	((uint32_t)0x02000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream1_BIT       	(25)
#define NVIC_IABR1_R_NVIC_DMA2_Stream1_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream1_EN        	((uint32_t)0x02000000)

#define NVIC_IABR1_NVIC_DMA2_Stream1_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA2_Stream1_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA2_Stream1_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA2_Stream2_MASK      	((uint32_t)0x04000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream2_BIT       	(26)
#define NVIC_IABR1_R_NVIC_DMA2_Stream2_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream2_EN        	((uint32_t)0x04000000)

#define NVIC_IABR1_NVIC_DMA2_Stream2_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA2_Stream2_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA2_Stream2_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA2_Stream3_MASK      	((uint32_t)0x08000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream3_BIT       	(27)
#define NVIC_IABR1_R_NVIC_DMA2_Stream3_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA2_Stream3_EN        	((uint32_t)0x08000000)

#define NVIC_IABR1_NVIC_DMA2_Stream3_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA2_Stream3_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA2_Stream3_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x10000000)
#define NVIC_IABR1_R_NVIC__DMA2_Stream4_BIT       	(28)
#define NVIC_IABR1_R_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC__DMA2_Stream4_EN        	((uint32_t)0x10000000)

#define NVIC_IABR1_NVIC__DMA2_Stream4_MASK      	((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC__DMA2_Stream4_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC__DMA2_Stream4_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ETH_MASK      			((uint32_t)0x20000000)
#define NVIC_IABR1_R_NVIC_ETH_BIT       			(29)
#define NVIC_IABR1_R_NVIC_ETH_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ETH_EN        			((uint32_t)0x20000000)

#define NVIC_IABR1_NVIC_ETH_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ETH_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ETH_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_ETH_WKUP_MASK      		((uint32_t)0x40000000)
#define NVIC_IABR1_R_NVIC_ETH_WKUP_BIT       		(30)
#define NVIC_IABR1_R_NVIC_ETH_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_ETH_WKUP_EN        		((uint32_t)0x40000000)

#define NVIC_IABR1_NVIC_ETH_WKUP_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_ETH_WKUP_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_ETH_WKUP_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_CAN2_TX_MASK      		((uint32_t)0x80000000)
#define NVIC_IABR1_R_NVIC_CAN2_TX_BIT       		(31)
#define NVIC_IABR1_R_NVIC_CAN2_TX_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_CAN2_TX_EN        		((uint32_t)0x80000000)

#define NVIC_IABR1_NVIC_CAN2_TX_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_CAN2_TX_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_CAN2_TX_EN        			((uint32_t)0x00000001)
//--------



//ToDo ISER2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ISER2_OFFSET)))
#define NVIC_ISER2_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISER2_OFFSET)))


//--------
#define NVIC_ISER2_R_NVIC_CAN2_RX0_MASK    			((uint32_t)0x00000001)
#define NVIC_ISER2_R_NVIC_CAN2_RX0_BIT    	 		(0)
#define NVIC_ISER2_R_NVIC_CAN2_RX0_DIS     			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_CAN2_RX0_EN      			((uint32_t)0x00000001)

#define NVIC_ISER2_NVIC_CAN2_RX0_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_CAN2_RX0_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_CAN2_RX0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_CAN2_RX1_MASK    			((uint32_t)0x00000002)
#define NVIC_ISER2_R_NVIC_CAN2_RX1_BIT     			(1)
#define NVIC_ISER2_R_NVIC_CAN2_RX1_DIS     			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_CAN2_RX1_EN      			((uint32_t)0x00000002)

#define NVIC_ISER2_NVIC_CAN2_RX1_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_CAN2_RX1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_CAN2_RX1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_CAN2_SCE_MASK    			((uint32_t)0x00000004)
#define NVIC_ISER2_R_NVIC_CAN2_SCE_BIT     			(2)
#define NVIC_ISER2_R_NVIC_CAN2_SCE_DIS     			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_CAN2_SCE_EN      			((uint32_t)0x00000004)

#define NVIC_ISER2_NVIC_CAN2_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_CAN2_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_CAN2_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_OTG_FS_MASK      			((uint32_t)0x00000008)
#define NVIC_ISER2_R_NVIC_OTG_FS_BIT       			(3)
#define NVIC_ISER2_R_NVIC_OTG_FS_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_OTG_FS_EN        			((uint32_t)0x00000008)

#define NVIC_ISER2_NVIC_OTG_FS_MASK        			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_OTG_FS_DIS         			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_OTG_FS_EN          			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_DMA2_Stream5_MASK    		((uint32_t)0x00000010)
#define NVIC_ISER2_R_NVIC_DMA2_Stream5_BIT     		(4)
#define NVIC_ISER2_R_NVIC_DMA2_Stream5_DIS     		((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_DMA2_Stream5_EN      		((uint32_t)0x00000010)

#define NVIC_ISER2_NVIC_DMA2_Stream5_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_DMA2_Stream5_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_DMA2_Stream5_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_DMA2_Stream6_MASK      	((uint32_t)0x00000020)
#define NVIC_ISER2_R_NVIC_DMA2_Stream6_BIT       	(5)
#define NVIC_ISER2_R_NVIC_DMA2_Stream6_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_DMA2_Stream6_EN        	((uint32_t)0x00000020)

#define NVIC_ISER2_NVIC_DMA2_Stream6_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_DMA2_Stream6_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_DMA2_Stream6_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_DMA2_Stream7_MASK      	((uint32_t)0x00000040)
#define NVIC_ISER2_R_NVIC_DMA2_Stream7_BIT       	(6)
#define NVIC_ISER2_R_NVIC_DMA2_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_DMA2_Stream7_EN        	((uint32_t)0x00000040)

#define NVIC_ISER2_NVIC_DMA2_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_DMA2_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_DMA2_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_USART6_MASK      			((uint32_t)0x00000080)
#define NVIC_ISER2_R_NVIC_USART6_BIT       			(7)
#define NVIC_ISER2_R_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_USART6_EN        			((uint32_t)0x00000080)

#define NVIC_ISER2_NVIC_USART6_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_USART6_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_I2C3_EV_MASK      		((uint32_t)0x00000100)
#define NVIC_ISER2_R_NVIC_I2C3_EV_BIT       		(8)
#define NVIC_ISER2_R_NVIC_I2C3_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_I2C3_EV_EN        		((uint32_t)0x00000100)

#define NVIC_ISER2_NVIC_I2C3_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_I2C3_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_I2C3_EV_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_I2C3_ER_MASK      		((uint32_t)0x00000200)
#define NVIC_ISER2_R_NVIC_I2C3_ER_BIT       		(9)
#define NVIC_ISER2_R_NVIC_I2C3_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_I2C3_ER_EN        		((uint32_t)0x00000200)

#define NVIC_ISER2_NVIC_I2C3_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_I2C3_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_I2C3_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000400)
#define NVIC_ISER2_R_NVIC_OTG_HS_EP1_OUT_BIT       	(10)
#define NVIC_ISER2_R_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000400)

#define NVIC_ISER2_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000800)
#define NVIC_ISER2_R_NVIC_OTG_HS_EPI_IN_BIT       	(11)
#define NVIC_ISER2_R_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000800)

#define NVIC_ISER2_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_OTG_HS_WKUP_MASK      	((uint32_t)0x00001000)
#define NVIC_ISER2_R_NVIC_OTG_HS_WKUP_BIT       	(12)
#define NVIC_ISER2_R_NVIC_OTG_HS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_OTG_HS_WKUP_EN        	((uint32_t)0x00001000)

#define NVIC_ISER2_NVIC_OTG_HS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_OTG_HS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_OTG_HS_WKUP_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_OTG_HS_MASK      			((uint32_t)0x00002000)
#define NVIC_ISER2_R_NVIC_OTG_HS_BIT       			(13)
#define NVIC_ISER2_R_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_OTG_HS_EN        			((uint32_t)0x00002000)

#define NVIC_ISER2_NVIC_OTG_HS_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_OTG_HS_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_DCMI_MASK      			((uint32_t)0x00004000)
#define NVIC_ISER2_R_NVIC_DCMI_BIT       			(14)
#define NVIC_ISER2_R_NVIC_DCMI_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_DCMI_EN        			((uint32_t)0x00004000)

#define NVIC_ISER2_NVIC_DCMI_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_DCMI_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_DCMI_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_reserved79_MASK      			((uint32_t)0x00008000)
#define NVIC_ISER2_R_NVIC_reserved79_BIT       			(15)
#define NVIC_ISER2_R_NVIC_reserved79_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_reserved79_EN        			((uint32_t)0x00008000)

#define NVIC_ISER2_NVIC_reserved79_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_reserved79_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_reserved79_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_RNG_MASK      		((uint32_t)0x00010000)
#define NVIC_ISER2_R_NVIC_RNG_BIT       		(16)
#define NVIC_ISER2_R_NVIC_RNG_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_RNG_EN        		((uint32_t)0x00010000)

#define NVIC_ISER2_NVIC_RNG_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_RNG_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_RNG_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_FPU_MASK      			((uint32_t)0x00020000)
#define NVIC_ISER2_R_NVIC_FPU_BIT       			(17)
#define NVIC_ISER2_R_NVIC_FPU_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_FPU_EN        			((uint32_t)0x00020000)

#define NVIC_ISER2_NVIC_FPU_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_FPU_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_FPU_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_UART7_MASK      			((uint32_t)0x00040000)
#define NVIC_ISER2_R_NVIC_UART7_BIT       			(18)
#define NVIC_ISER2_R_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_UART7_EN        			((uint32_t)0x00040000)

#define NVIC_ISER2_NVIC_UART7_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_UART7_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_UART8_MASK      			((uint32_t)0x00080000)
#define NVIC_ISER2_R_NVIC_UART8_BIT       			(19)
#define NVIC_ISER2_R_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_UART8_EN        			((uint32_t)0x00080000)

#define NVIC_ISER2_NVIC_UART8_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_UART8_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_SPI4_MASK      			((uint32_t)0x00100000)
#define NVIC_ISER2_R_NVIC_SPI4_BIT       			(20)
#define NVIC_ISER2_R_NVIC_SPI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_SPI4_EN        			((uint32_t)0x00100000)

#define NVIC_ISER2_NVIC_SPI4_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_SPI4_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_SPI4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_SPI5_MASK      			((uint32_t)0x00200000)
#define NVIC_ISER2_R_NVIC_SPI5_BIT       			(21)
#define NVIC_ISER2_R_NVIC_SPI5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_SPI5_EN        			((uint32_t)0x00200000)

#define NVIC_ISER2_NVIC_SPI5_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_SPI5_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_SPI5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_SPI6_MASK      			((uint32_t)0x00400000)
#define NVIC_ISER2_R_NVIC_SPI6_BIT       			(22)
#define NVIC_ISER2_R_NVIC_SPI6_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_SPI6_EN        			((uint32_t)0x00400000)

#define NVIC_ISER2_NVIC_SPI6_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_SPI6_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_SPI6_EN        				((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER2_R_NVIC_SAI1_MASK      			((uint32_t)0x00800000)
#define NVIC_ISER2_R_NVIC_SAI1_BIT       			(23)
#define NVIC_ISER2_R_NVIC_SAI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_SAI1_EN        			((uint32_t)0x00800000)

#define NVIC_ISER2_NVIC_SAI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_SAI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_SAI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_LTDC_MASK      			((uint32_t)0x01000000)
#define NVIC_ISER2_R_NVIC_LTDC_BIT       			(24)
#define NVIC_ISER2_R_NVIC_LTDC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_LTDC_EN        			((uint32_t)0x01000000)

#define NVIC_ISER2_NVIC_LTDC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_LTDC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_LTDC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_LTDC_ER_MASK      		((uint32_t)0x02000000)
#define NVIC_ISER2_R_NVIC_LTDC_ER_BIT       		(25)
#define NVIC_ISER2_R_NVIC_LTDC_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_LTDC_ER_EN        		((uint32_t)0x02000000)

#define NVIC_ISER2_NVIC_LTDC_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_LTDC_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_LTDC_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_DMA2D_MASK      			((uint32_t)0x04000000)
#define NVIC_ISER2_R_NVIC_DMA2D_BIT       			(26)
#define NVIC_ISER2_R_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_DMA2D_EN        			((uint32_t)0x04000000)

#define NVIC_ISER2_NVIC_DMA2D_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_DMA2D_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_SAI2_MASK      			((uint32_t)0x08000000)
#define NVIC_ISER2_R_NVIC_SAI2_BIT       			(27)
#define NVIC_ISER2_R_NVIC_SAI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_SAI2_EN        			((uint32_t)0x08000000)

#define NVIC_ISER2_NVIC_SAI2_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_SAI2_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_SAI2_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_QUADSPI_MASK      			((uint32_t)0x10000000)
#define NVIC_ISER2_R_NVIC_QUADSPI_BIT       			(28)
#define NVIC_ISER2_R_NVIC_QUADSPI_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_QUADSPI_EN        			((uint32_t)0x10000000)

#define NVIC_ISER2_NVIC_QUADSPI_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_QUADSPI_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_QUADSPI_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_LPTIM1_MASK      			((uint32_t)0x20000000)
#define NVIC_ISER2_R_NVIC_LPTIM1_BIT       			(29)
#define NVIC_ISER2_R_NVIC_LPTIM1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_LPTIM1_EN        			((uint32_t)0x20000000)

#define NVIC_ISER2_NVIC_LPTIM1_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_LPTIM1_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_LPTIM1_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_CEC_MASK      			((uint32_t)0x40000000)
#define NVIC_ISER2_R_NVIC_CEC_BIT       			(30)
#define NVIC_ISER2_R_NVIC_CEC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_CEC_EN        			((uint32_t)0x40000000)

#define NVIC_ISER2_NVIC_CEC_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_CEC_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_CEC_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER2_R_NVIC_I2C4_EV_MASK      			((uint32_t)0x80000000)
#define NVIC_ISER2_R_NVIC_I2C4_EV_BIT       			(31)
#define NVIC_ISER2_R_NVIC_I2C4_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER2_R_NVIC_I2C4_EV_EN        			((uint32_t)0x80000000)

#define NVIC_ISER2_NVIC_I2C4_EV_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISER2_NVIC_I2C4_EV_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISER2_NVIC_I2C4_EV_EN        		   	   ((uint32_t)0x00000001)
//--------
//ToDo ICER2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ICER2_OFFSET)))
#define NVIC_ICER2_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICER2_OFFSET)))


//--------
#define NVIC_ICER2_R_NVIC_CAN2_RX0_MASK    			((uint32_t)0x00000001)
#define NVIC_ICER2_R_NVIC_CAN2_RX0_BIT    	 		(0)
#define NVIC_ICER2_R_NVIC_CAN2_RX0_DIS     			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_CAN2_RX0_EN      			((uint32_t)0x00000001)

#define NVIC_ICER2_NVIC_CAN2_RX0_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_CAN2_RX0_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_CAN2_RX0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_CAN2_RX1_MASK    			((uint32_t)0x00000002)
#define NVIC_ICER2_R_NVIC_CAN2_RX1_BIT     			(1)
#define NVIC_ICER2_R_NVIC_CAN2_RX1_DIS     			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_CAN2_RX1_EN      			((uint32_t)0x00000002)

#define NVIC_ICER2_NVIC_CAN2_RX1_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_CAN2_RX1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_CAN2_RX1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_CAN2_SCE_MASK    			((uint32_t)0x00000004)
#define NVIC_ICER2_R_NVIC_CAN2_SCE_BIT     			(2)
#define NVIC_ICER2_R_NVIC_CAN2_SCE_DIS     			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_CAN2_SCE_EN      			((uint32_t)0x00000004)

#define NVIC_ICER2_NVIC_CAN2_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_CAN2_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_CAN2_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_OTG_FS_MASK      			((uint32_t)0x00000008)
#define NVIC_ICER2_R_NVIC_OTG_FS_BIT       			(3)
#define NVIC_ICER2_R_NVIC_OTG_FS_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_OTG_FS_EN        			((uint32_t)0x00000008)

#define NVIC_ICER2_NVIC_OTG_FS_MASK        			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_OTG_FS_DIS         			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_OTG_FS_EN          			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_DMA2_Stream5_MASK    		((uint32_t)0x00000010)
#define NVIC_ICER2_R_NVIC_DMA2_Stream5_BIT     		(4)
#define NVIC_ICER2_R_NVIC_DMA2_Stream5_DIS     		((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_DMA2_Stream5_EN      		((uint32_t)0x00000010)

#define NVIC_ICER2_NVIC_DMA2_Stream5_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_DMA2_Stream5_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_DMA2_Stream5_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_DMA2_Stream6_MASK      	((uint32_t)0x00000020)
#define NVIC_ICER2_R_NVIC_DMA2_Stream6_BIT       	(5)
#define NVIC_ICER2_R_NVIC_DMA2_Stream6_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_DMA2_Stream6_EN        	((uint32_t)0x00000020)

#define NVIC_ICER2_NVIC_DMA2_Stream6_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_DMA2_Stream6_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_DMA2_Stream6_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_DMA2_Stream7_MASK      	((uint32_t)0x00000040)
#define NVIC_ICER2_R_NVIC_DMA2_Stream7_BIT       	(6)
#define NVIC_ICER2_R_NVIC_DMA2_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_DMA2_Stream7_EN        	((uint32_t)0x00000040)

#define NVIC_ICER2_NVIC_DMA2_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_DMA2_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_DMA2_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_USART6_MASK      			((uint32_t)0x00000080)
#define NVIC_ICER2_R_NVIC_USART6_BIT       			(7)
#define NVIC_ICER2_R_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_USART6_EN        			((uint32_t)0x00000080)

#define NVIC_ICER2_NVIC_USART6_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_USART6_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_I2C3_EV_MASK      		((uint32_t)0x00000100)
#define NVIC_ICER2_R_NVIC_I2C3_EV_BIT       		(8)
#define NVIC_ICER2_R_NVIC_I2C3_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_I2C3_EV_EN        		((uint32_t)0x00000100)

#define NVIC_ICER2_NVIC_I2C3_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_I2C3_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_I2C3_EV_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_I2C3_ER_MASK      		((uint32_t)0x00000200)
#define NVIC_ICER2_R_NVIC_I2C3_ER_BIT       		(9)
#define NVIC_ICER2_R_NVIC_I2C3_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_I2C3_ER_EN        		((uint32_t)0x00000200)

#define NVIC_ICER2_NVIC_I2C3_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_I2C3_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_I2C3_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000400)
#define NVIC_ICER2_R_NVIC_OTG_HS_EP1_OUT_BIT       	(10)
#define NVIC_ICER2_R_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000400)

#define NVIC_ICER2_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000800)
#define NVIC_ICER2_R_NVIC_OTG_HS_EPI_IN_BIT       	(11)
#define NVIC_ICER2_R_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000800)

#define NVIC_ICER2_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_OTG_HS_WKUP_MASK      	((uint32_t)0x00001000)
#define NVIC_ICER2_R_NVIC_OTG_HS_WKUP_BIT       	(12)
#define NVIC_ICER2_R_NVIC_OTG_HS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_OTG_HS_WKUP_EN        	((uint32_t)0x00001000)

#define NVIC_ICER2_NVIC_OTG_HS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_OTG_HS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_OTG_HS_WKUP_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_OTG_HS_MASK      			((uint32_t)0x00002000)
#define NVIC_ICER2_R_NVIC_OTG_HS_BIT       			(13)
#define NVIC_ICER2_R_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_OTG_HS_EN        			((uint32_t)0x00002000)

#define NVIC_ICER2_NVIC_OTG_HS_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_OTG_HS_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_DCMI_MASK      			((uint32_t)0x00004000)
#define NVIC_ICER2_R_NVIC_DCMI_BIT       			(14)
#define NVIC_ICER2_R_NVIC_DCMI_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_DCMI_EN        			((uint32_t)0x00004000)

#define NVIC_ICER2_NVIC_DCMI_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_DCMI_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_DCMI_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_reserved79_MASK      			((uint32_t)0x00008000)
#define NVIC_ICER2_R_NVIC_reserved79_BIT       			(15)
#define NVIC_ICER2_R_NVIC_reserved79_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_reserved79_EN        			((uint32_t)0x00008000)

#define NVIC_ICER2_NVIC_reserved79_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_reserved79_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_reserved79_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_HASH_RNG_MASK      		((uint32_t)0x00010000)
#define NVIC_ICER2_R_NVIC_HASH_RNG_BIT       		(16)
#define NVIC_ICER2_R_NVIC_HASH_RNG_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_HASH_RNG_EN        		((uint32_t)0x00010000)

#define NVIC_ICER2_NVIC_HASH_RNG_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_HASH_RNG_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_HASH_RNG_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_FPU_MASK      			((uint32_t)0x00020000)
#define NVIC_ICER2_R_NVIC_FPU_BIT       			(17)
#define NVIC_ICER2_R_NVIC_FPU_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_FPU_EN        			((uint32_t)0x00020000)

#define NVIC_ICER2_NVIC_FPU_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_FPU_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_FPU_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_UART7_MASK      			((uint32_t)0x00040000)
#define NVIC_ICER2_R_NVIC_UART7_BIT       			(18)
#define NVIC_ICER2_R_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_UART7_EN        			((uint32_t)0x00040000)

#define NVIC_ICER2_NVIC_UART7_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_UART7_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_UART8_MASK      			((uint32_t)0x00080000)
#define NVIC_ICER2_R_NVIC_UART8_BIT       			(19)
#define NVIC_ICER2_R_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_UART8_EN        			((uint32_t)0x00080000)

#define NVIC_ICER2_NVIC_UART8_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_UART8_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_SPI4_MASK      			((uint32_t)0x00100000)
#define NVIC_ICER2_R_NVIC_SPI4_BIT       			(20)
#define NVIC_ICER2_R_NVIC_SPI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_SPI4_EN        			((uint32_t)0x00100000)

#define NVIC_ICER2_NVIC_SPI4_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_SPI4_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_SPI4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_SPI5_MASK      			((uint32_t)0x00200000)
#define NVIC_ICER2_R_NVIC_SPI5_BIT       			(21)
#define NVIC_ICER2_R_NVIC_SPI5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_SPI5_EN        			((uint32_t)0x00200000)

#define NVIC_ICER2_NVIC_SPI5_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_SPI5_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_SPI5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_SPI6_MASK      			((uint32_t)0x00400000)
#define NVIC_ICER2_R_NVIC_SPI6_BIT       			(22)
#define NVIC_ICER2_R_NVIC_SPI6_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_SPI6_EN        			((uint32_t)0x00400000)

#define NVIC_ICER2_NVIC_SPI6_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_SPI6_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_SPI6_EN        				((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_SAI1_MASK      			((uint32_t)0x00800000)
#define NVIC_ICER2_R_NVIC_SAI1_BIT       			(23)
#define NVIC_ICER2_R_NVIC_SAI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_SAI1_EN        			((uint32_t)0x00800000)

#define NVIC_ICER2_NVIC_SAI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_SAI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_SAI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_LTDC_MASK      			((uint32_t)0x01000000)
#define NVIC_ICER2_R_NVIC_LTDC_BIT       			(24)
#define NVIC_ICER2_R_NVIC_LTDC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_LTDC_EN        			((uint32_t)0x01000000)

#define NVIC_ICER2_NVIC_LTDC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_LTDC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_LTDC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_LTDC_ER_MASK      		((uint32_t)0x02000000)
#define NVIC_ICER2_R_NVIC_LTDC_ER_BIT       		(25)
#define NVIC_ICER2_R_NVIC_LTDC_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_LTDC_ER_EN        		((uint32_t)0x02000000)

#define NVIC_ICER2_NVIC_LTDC_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_LTDC_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_LTDC_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_DMA2D_MASK      			((uint32_t)0x04000000)
#define NVIC_ICER2_R_NVIC_DMA2D_BIT       			(26)
#define NVIC_ICER2_R_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_DMA2D_EN        			((uint32_t)0x04000000)

#define NVIC_ICER2_NVIC_DMA2D_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_DMA2D_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER2_R_NVIC_SAI2_MASK      			((uint32_t)0x08000000)
#define NVIC_ICER2_R_NVIC_SAI2_BIT       			(27)
#define NVIC_ICER2_R_NVIC_SAI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_SAI2_EN        			((uint32_t)0x08000000)

#define NVIC_ICER2_NVIC_SAI2_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_SAI2_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_SAI2_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_QUADSPI_MASK      			((uint32_t)0x10000000)
#define NVIC_ICER2_R_NVIC_QUADSPI_BIT       			(28)
#define NVIC_ICER2_R_NVIC_QUADSPI_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_QUADSPI_EN        			((uint32_t)0x10000000)

#define NVIC_ICER2_NVIC_QUADSPI_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_QUADSPI_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_QUADSPI_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_LPTIM1_MASK      			((uint32_t)0x20000000)
#define NVIC_ICER2_R_NVIC_LPTIM1_BIT       			(29)
#define NVIC_ICER2_R_NVIC_LPTIM1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_LPTIM1_EN        			((uint32_t)0x20000000)

#define NVIC_ICER2_NVIC_LPTIM1_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_LPTIM1_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_LPTIM1_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_CEC_MASK      			((uint32_t)0x40000000)
#define NVIC_ICER2_R_NVIC_CEC_BIT       			(30)
#define NVIC_ICER2_R_NVIC_CEC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_CEC_EN        			((uint32_t)0x40000000)

#define NVIC_ICER2_NVIC_CEC_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_CEC_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_CEC_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER2_R_NVIC_I2C4_EV_MASK      			((uint32_t)0x80000000)
#define NVIC_ICER2_R_NVIC_I2C4_EV_BIT       			(31)
#define NVIC_ICER2_R_NVIC_I2C4_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER2_R_NVIC_I2C4_EV_EN        			((uint32_t)0x80000000)

#define NVIC_ICER2_NVIC_I2C4_EV_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICER2_NVIC_I2C4_EV_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICER2_NVIC_I2C4_EV_EN        		   	   ((uint32_t)0x00000001)
//--------


//ToDo ISPR2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ISPR2_OFFSET)))
#define NVIC_ISPR2_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISPR2_OFFSET)))


//--------
#define NVIC_ISPR2_R_NVIC_CAN2_RX0_MASK    			((uint32_t)0x00000001)
#define NVIC_ISPR2_R_NVIC_CAN2_RX0_BIT    	 		(0)
#define NVIC_ISPR2_R_NVIC_CAN2_RX0_DIS     			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_CAN2_RX0_EN      			((uint32_t)0x00000001)

#define NVIC_ISPR2_NVIC_CAN2_RX0_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_CAN2_RX0_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_CAN2_RX0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_CAN2_RX1_MASK    			((uint32_t)0x00000002)
#define NVIC_ISPR2_R_NVIC_CAN2_RX1_BIT     			(1)
#define NVIC_ISPR2_R_NVIC_CAN2_RX1_DIS     			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_CAN2_RX1_EN      			((uint32_t)0x00000002)

#define NVIC_ISPR2_NVIC_CAN2_RX1_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_CAN2_RX1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_CAN2_RX1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_CAN2_SCE_MASK    			((uint32_t)0x00000004)
#define NVIC_ISPR2_R_NVIC_CAN2_SCE_BIT     			(2)
#define NVIC_ISPR2_R_NVIC_CAN2_SCE_DIS     			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_CAN2_SCE_EN      			((uint32_t)0x00000004)

#define NVIC_ISPR2_NVIC_CAN2_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_CAN2_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_CAN2_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_OTG_FS_MASK      			((uint32_t)0x00000008)
#define NVIC_ISPR2_R_NVIC_OTG_FS_BIT       			(3)
#define NVIC_ISPR2_R_NVIC_OTG_FS_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_OTG_FS_EN        			((uint32_t)0x00000008)

#define NVIC_ISPR2_NVIC_OTG_FS_MASK        			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_OTG_FS_DIS         			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_OTG_FS_EN          			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_DMA2_Stream5_MASK    		((uint32_t)0x00000010)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream5_BIT     		(4)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream5_DIS     		((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream5_EN      		((uint32_t)0x00000010)

#define NVIC_ISPR2_NVIC_DMA2_Stream5_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_DMA2_Stream5_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_DMA2_Stream5_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_DMA2_Stream6_MASK      	((uint32_t)0x00000020)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream6_BIT       	(5)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream6_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream6_EN        	((uint32_t)0x00000020)

#define NVIC_ISPR2_NVIC_DMA2_Stream6_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_DMA2_Stream6_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_DMA2_Stream6_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_DMA2_Stream7_MASK      	((uint32_t)0x00000040)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream7_BIT       	(6)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_DMA2_Stream7_EN        	((uint32_t)0x00000040)

#define NVIC_ISPR2_NVIC_DMA2_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_DMA2_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_DMA2_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_USART6_MASK      			((uint32_t)0x00000080)
#define NVIC_ISPR2_R_NVIC_USART6_BIT       			(7)
#define NVIC_ISPR2_R_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_USART6_EN        			((uint32_t)0x00000080)

#define NVIC_ISPR2_NVIC_USART6_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_USART6_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_I2C3_EV_MASK      		((uint32_t)0x00000100)
#define NVIC_ISPR2_R_NVIC_I2C3_EV_BIT       		(8)
#define NVIC_ISPR2_R_NVIC_I2C3_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_I2C3_EV_EN        		((uint32_t)0x00000100)

#define NVIC_ISPR2_NVIC_I2C3_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_I2C3_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_I2C3_EV_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_I2C3_ER_MASK      		((uint32_t)0x00000200)
#define NVIC_ISPR2_R_NVIC_I2C3_ER_BIT       		(9)
#define NVIC_ISPR2_R_NVIC_I2C3_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_I2C3_ER_EN        		((uint32_t)0x00000200)

#define NVIC_ISPR2_NVIC_I2C3_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_I2C3_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_I2C3_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000400)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EP1_OUT_BIT       	(10)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000400)

#define NVIC_ISPR2_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000800)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EPI_IN_BIT       	(11)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000800)

#define NVIC_ISPR2_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_OTG_HS_WKUP_MASK      	((uint32_t)0x00001000)
#define NVIC_ISPR2_R_NVIC_OTG_HS_WKUP_BIT       	(12)
#define NVIC_ISPR2_R_NVIC_OTG_HS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_OTG_HS_WKUP_EN        	((uint32_t)0x00001000)

#define NVIC_ISPR2_NVIC_OTG_HS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_OTG_HS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_OTG_HS_WKUP_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_OTG_HS_MASK      			((uint32_t)0x00002000)
#define NVIC_ISPR2_R_NVIC_OTG_HS_BIT       			(13)
#define NVIC_ISPR2_R_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_OTG_HS_EN        			((uint32_t)0x00002000)

#define NVIC_ISPR2_NVIC_OTG_HS_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_OTG_HS_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_DCMI_MASK      			((uint32_t)0x00004000)
#define NVIC_ISPR2_R_NVIC_DCMI_BIT       			(14)
#define NVIC_ISPR2_R_NVIC_DCMI_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_DCMI_EN        			((uint32_t)0x00004000)

#define NVIC_ISPR2_NVIC_DCMI_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_DCMI_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_DCMI_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_reserved79_MASK      			((uint32_t)0x00008000)
#define NVIC_ISPR2_R_NVIC_reserved79_BIT       			(15)
#define NVIC_ISPR2_R_NVIC_reserved79_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_reserved79_EN        			((uint32_t)0x00008000)

#define NVIC_ISPR2_NVIC_reserved79_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_reserved79_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_reserved79_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_HASH_RNG_MASK      		((uint32_t)0x00010000)
#define NVIC_ISPR2_R_NVIC_HASH_RNG_BIT       		(16)
#define NVIC_ISPR2_R_NVIC_HASH_RNG_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_HASH_RNG_EN        		((uint32_t)0x00010000)

#define NVIC_ISPR2_NVIC_HASH_RNG_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_HASH_RNG_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_HASH_RNG_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_FPU_MASK      			((uint32_t)0x00020000)
#define NVIC_ISPR2_R_NVIC_FPU_BIT       			(17)
#define NVIC_ISPR2_R_NVIC_FPU_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_FPU_EN        			((uint32_t)0x00020000)

#define NVIC_ISPR2_NVIC_FPU_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_FPU_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_FPU_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_UART7_MASK      			((uint32_t)0x00040000)
#define NVIC_ISPR2_R_NVIC_UART7_BIT       			(18)
#define NVIC_ISPR2_R_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_UART7_EN        			((uint32_t)0x00040000)

#define NVIC_ISPR2_NVIC_UART7_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_UART7_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_UART8_MASK      			((uint32_t)0x00080000)
#define NVIC_ISPR2_R_NVIC_UART8_BIT       			(19)
#define NVIC_ISPR2_R_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_UART8_EN        			((uint32_t)0x00080000)

#define NVIC_ISPR2_NVIC_UART8_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_UART8_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_SPI4_MASK      			((uint32_t)0x00100000)
#define NVIC_ISPR2_R_NVIC_SPI4_BIT       			(20)
#define NVIC_ISPR2_R_NVIC_SPI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_SPI4_EN        			((uint32_t)0x00100000)

#define NVIC_ISPR2_NVIC_SPI4_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_SPI4_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_SPI4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_SPI5_MASK      			((uint32_t)0x00200000)
#define NVIC_ISPR2_R_NVIC_SPI5_BIT       			(21)
#define NVIC_ISPR2_R_NVIC_SPI5_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_SPI5_EN        			((uint32_t)0x00200000)

#define NVIC_ISPR2_NVIC_SPI5_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_SPI5_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_SPI5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_SPI6_MASK      			((uint32_t)0x00400000)
#define NVIC_ISPR2_R_NVIC_SPI6_BIT       			(22)
#define NVIC_ISPR2_R_NVIC_SPI6_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_SPI6_EN        			((uint32_t)0x00400000)

#define NVIC_ISPR2_NVIC_SPI6_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_SPI6_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_SPI6_EN        				((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR2_R_NVIC_SAI1_MASK      			((uint32_t)0x00800000)
#define NVIC_ISPR2_R_NVIC_SAI1_BIT       			(23)
#define NVIC_ISPR2_R_NVIC_SAI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_SAI1_EN        			((uint32_t)0x00800000)

#define NVIC_ISPR2_NVIC_SAI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_SAI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_SAI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_LTDC_MASK      			((uint32_t)0x01000000)
#define NVIC_ISPR2_R_NVIC_LTDC_BIT       			(24)
#define NVIC_ISPR2_R_NVIC_LTDC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_LTDC_EN        			((uint32_t)0x01000000)

#define NVIC_ISPR2_NVIC_LTDC_MASK      				((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_LTDC_DIS       				((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_LTDC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_LTDC_ER_MASK      		((uint32_t)0x02000000)
#define NVIC_ISPR2_R_NVIC_LTDC_ER_BIT       		(25)
#define NVIC_ISPR2_R_NVIC_LTDC_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_LTDC_ER_EN        		((uint32_t)0x02000000)

#define NVIC_ISPR2_NVIC_LTDC_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_LTDC_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_LTDC_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_DMA2D_MASK      			((uint32_t)0x04000000)
#define NVIC_ISPR2_R_NVIC_DMA2D_BIT       			(26)
#define NVIC_ISPR2_R_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_DMA2D_EN        			((uint32_t)0x04000000)

#define NVIC_ISPR2_NVIC_DMA2D_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_DMA2D_EN        			((uint32_t)0x00000001)
//--------



//--------
#define NVIC_ISPR2_R_NVIC_SAI2_MASK      			((uint32_t)0x08000000)
#define NVIC_ISPR2_R_NVIC_SAI2_BIT       			(27)
#define NVIC_ISPR2_R_NVIC_SAI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_SAI2_EN        			((uint32_t)0x08000000)

#define NVIC_ISPR2_NVIC_SAI2_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_SAI2_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_SAI2_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_QUADSPI_MASK      			((uint32_t)0x10000000)
#define NVIC_ISPR2_R_NVIC_QUADSPI_BIT       			(28)
#define NVIC_ISPR2_R_NVIC_QUADSPI_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_QUADSPI_EN        			((uint32_t)0x10000000)

#define NVIC_ISPR2_NVIC_QUADSPI_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_QUADSPI_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_QUADSPI_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_LPTIM1_MASK      			((uint32_t)0x20000000)
#define NVIC_ISPR2_R_NVIC_LPTIM1_BIT       			(29)
#define NVIC_ISPR2_R_NVIC_LPTIM1_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_LPTIM1_EN        			((uint32_t)0x20000000)

#define NVIC_ISPR2_NVIC_LPTIM1_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_LPTIM1_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_LPTIM1_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_CEC_MASK      			((uint32_t)0x40000000)
#define NVIC_ISPR2_R_NVIC_CEC_BIT       			(30)
#define NVIC_ISPR2_R_NVIC_CEC_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_CEC_EN        			((uint32_t)0x40000000)

#define NVIC_ISPR2_NVIC_CEC_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_CEC_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_CEC_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR2_R_NVIC_I2C4_EV_MASK      			((uint32_t)0x80000000)
#define NVIC_ISPR2_R_NVIC_I2C4_EV_BIT       			(31)
#define NVIC_ISPR2_R_NVIC_I2C4_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR2_R_NVIC_I2C4_EV_EN        			((uint32_t)0x80000000)

#define NVIC_ISPR2_NVIC_I2C4_EV_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ISPR2_NVIC_I2C4_EV_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ISPR2_NVIC_I2C4_EV_EN        		   	   ((uint32_t)0x00000001)
//--------






//ToDo ICPR2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ICPR2_OFFSET)))
#define NVIC_ICPR2_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICPR2_OFFSET)))


//--------
#define NVIC_ICPR2_R_NVIC_CAN2_RX0_MASK    			((uint32_t)0x00000001)
#define NVIC_ICPR2_R_NVIC_CAN2_RX0_BIT    	 		(0)
#define NVIC_ICPR2_R_NVIC_CAN2_RX0_DIS     			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_CAN2_RX0_EN      			((uint32_t)0x00000001)

#define NVIC_ICPR2_NVIC_CAN2_RX0_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_CAN2_RX0_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_CAN2_RX0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_CAN2_RX1_MASK    			((uint32_t)0x00000002)
#define NVIC_ICPR2_R_NVIC_CAN2_RX1_BIT     			(1)
#define NVIC_ICPR2_R_NVIC_CAN2_RX1_DIS     			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_CAN2_RX1_EN      			((uint32_t)0x00000002)

#define NVIC_ICPR2_NVIC_CAN2_RX1_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_CAN2_RX1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_CAN2_RX1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_CAN2_SCE_MASK    			((uint32_t)0x00000004)
#define NVIC_ICPR2_R_NVIC_CAN2_SCE_BIT     			(2)
#define NVIC_ICPR2_R_NVIC_CAN2_SCE_DIS     			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_CAN2_SCE_EN      			((uint32_t)0x00000004)

#define NVIC_ICPR2_NVIC_CAN2_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_CAN2_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_CAN2_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_OTG_FS_MASK      			((uint32_t)0x00000008)
#define NVIC_ICPR2_R_NVIC_OTG_FS_BIT       			(3)
#define NVIC_ICPR2_R_NVIC_OTG_FS_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_OTG_FS_EN        			((uint32_t)0x00000008)

#define NVIC_ICPR2_NVIC_OTG_FS_MASK        			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_OTG_FS_DIS         			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_OTG_FS_EN          			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_DMA2_Stream5_MASK    		((uint32_t)0x00000010)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream5_BIT     		(4)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream5_DIS     		((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream5_EN      		((uint32_t)0x00000010)

#define NVIC_ICPR2_NVIC_DMA2_Stream5_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_DMA2_Stream5_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_DMA2_Stream5_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_DMA2_Stream6_MASK      	((uint32_t)0x00000020)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream6_BIT       	(5)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream6_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream6_EN        	((uint32_t)0x00000020)

#define NVIC_ICPR2_NVIC_DMA2_Stream6_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_DMA2_Stream6_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_DMA2_Stream6_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_DMA2_Stream7_MASK      	((uint32_t)0x00000040)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream7_BIT       	(6)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_DMA2_Stream7_EN        	((uint32_t)0x00000040)

#define NVIC_ICPR2_NVIC_DMA2_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_DMA2_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_DMA2_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_USART6_MASK      			((uint32_t)0x00000080)
#define NVIC_ICPR2_R_NVIC_USART6_BIT       			(7)
#define NVIC_ICPR2_R_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_USART6_EN        			((uint32_t)0x00000080)

#define NVIC_ICPR2_NVIC_USART6_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_USART6_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_I2C3_EV_MASK      		((uint32_t)0x00000100)
#define NVIC_ICPR2_R_NVIC_I2C3_EV_BIT       		(8)
#define NVIC_ICPR2_R_NVIC_I2C3_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_I2C3_EV_EN        		((uint32_t)0x00000100)

#define NVIC_ICPR2_NVIC_I2C3_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_I2C3_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_I2C3_EV_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_I2C3_ER_MASK      		((uint32_t)0x00000200)
#define NVIC_ICPR2_R_NVIC_I2C3_ER_BIT       		(9)
#define NVIC_ICPR2_R_NVIC_I2C3_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_I2C3_ER_EN        		((uint32_t)0x00000200)

#define NVIC_ICPR2_NVIC_I2C3_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_I2C3_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_I2C3_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000400)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EP1_OUT_BIT       	(10)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000400)

#define NVIC_ICPR2_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000800)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EPI_IN_BIT       	(11)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000800)

#define NVIC_ICPR2_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_OTG_HS_WKUP_MASK      	((uint32_t)0x00001000)
#define NVIC_ICPR2_R_NVIC_OTG_HS_WKUP_BIT       	(12)
#define NVIC_ICPR2_R_NVIC_OTG_HS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_OTG_HS_WKUP_EN        	((uint32_t)0x00001000)

#define NVIC_ICPR2_NVIC_OTG_HS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_OTG_HS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_OTG_HS_WKUP_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_OTG_HS_MASK      			((uint32_t)0x00002000)
#define NVIC_ICPR2_R_NVIC_OTG_HS_BIT       			(13)
#define NVIC_ICPR2_R_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_OTG_HS_EN        			((uint32_t)0x00002000)

#define NVIC_ICPR2_NVIC_OTG_HS_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_OTG_HS_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_DCMI_MASK      			((uint32_t)0x00004000)
#define NVIC_ICPR2_R_NVIC_DCMI_BIT       			(14)
#define NVIC_ICPR2_R_NVIC_DCMI_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_DCMI_EN        			((uint32_t)0x00004000)

#define NVIC_ICPR2_NVIC_DCMI_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_DCMI_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_DCMI_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_reserved79_MASK      			((uint32_t)0x00008000)
#define NVIC_ICPR2_R_NVIC_reserved79_BIT       			(15)
#define NVIC_ICPR2_R_NVIC_reserved79_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_reserved79_EN        			((uint32_t)0x00008000)

#define NVIC_ICPR2_NVIC_reserved79_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_reserved79_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_reserved79_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_HASH_RNG_MASK      		((uint32_t)0x00010000)
#define NVIC_ICPR2_R_NVIC_HASH_RNG_BIT       		(16)
#define NVIC_ICPR2_R_NVIC_HASH_RNG_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_HASH_RNG_EN        		((uint32_t)0x00010000)

#define NVIC_ICPR2_NVIC_HASH_RNG_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_HASH_RNG_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_HASH_RNG_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_FPU_MASK      			((uint32_t)0x00020000)
#define NVIC_ICPR2_R_NVIC_FPU_BIT       			(17)
#define NVIC_ICPR2_R_NVIC_FPU_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_FPU_EN        			((uint32_t)0x00020000)

#define NVIC_ICPR2_NVIC_FPU_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_FPU_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_FPU_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_UART7_MASK      			((uint32_t)0x00040000)
#define NVIC_ICPR2_R_NVIC_UART7_BIT       			(18)
#define NVIC_ICPR2_R_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_UART7_EN        			((uint32_t)0x00040000)

#define NVIC_ICPR2_NVIC_UART7_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_UART7_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_UART8_MASK      			((uint32_t)0x00080000)
#define NVIC_ICPR2_R_NVIC_UART8_BIT       			(19)
#define NVIC_ICPR2_R_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_UART8_EN        			((uint32_t)0x00080000)

#define NVIC_ICPR2_NVIC_UART8_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_UART8_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_SPI4_MASK      			((uint32_t)0x00100000)
#define NVIC_ICPR2_R_NVIC_SPI4_BIT       			(20)
#define NVIC_ICPR2_R_NVIC_SPI4_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_SPI4_EN        			((uint32_t)0x00100000)

#define NVIC_ICPR2_NVIC_SPI4_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_SPI4_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_SPI4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_SPI5_MASK      			((uint32_t)0x00200000)
#define NVIC_ICPR2_R_NVIC_SPI5_BIT       			(21)
#define NVIC_ICPR2_R_NVIC_SPI5_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_SPI5_EN        			((uint32_t)0x00200000)

#define NVIC_ICPR2_NVIC_SPI5_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_SPI5_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_SPI5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_SPI6_MASK      			((uint32_t)0x00400000)
#define NVIC_ICPR2_R_NVIC_SPI6_BIT       			(22)
#define NVIC_ICPR2_R_NVIC_SPI6_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_SPI6_EN        			((uint32_t)0x00400000)

#define NVIC_ICPR2_NVIC_SPI6_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_SPI6_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_SPI6_EN        				((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_SAI1_MASK      			((uint32_t)0x00800000)
#define NVIC_ICPR2_R_NVIC_SAI1_BIT       			(23)
#define NVIC_ICPR2_R_NVIC_SAI1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_SAI1_EN        			((uint32_t)0x00800000)

#define NVIC_ICPR2_NVIC_SAI1_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_SAI1_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_SAI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_LTDC_MASK      			((uint32_t)0x01000000)
#define NVIC_ICPR2_R_NVIC_LTDC_BIT       			(24)
#define NVIC_ICPR2_R_NVIC_LTDC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_LTDC_EN        			((uint32_t)0x01000000)

#define NVIC_ICPR2_NVIC_LTDC_MASK      				((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_LTDC_DIS       				((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_LTDC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_LTDC_ER_MASK      		((uint32_t)0x02000000)
#define NVIC_ICPR2_R_NVIC_LTDC_ER_BIT       		(25)
#define NVIC_ICPR2_R_NVIC_LTDC_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_LTDC_ER_EN        		((uint32_t)0x02000000)

#define NVIC_ICPR2_NVIC_LTDC_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_LTDC_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_LTDC_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_DMA2D_MASK      			((uint32_t)0x04000000)
#define NVIC_ICPR2_R_NVIC_DMA2D_BIT       			(26)
#define NVIC_ICPR2_R_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_DMA2D_EN        			((uint32_t)0x04000000)

#define NVIC_ICPR2_NVIC_DMA2D_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_DMA2D_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR2_R_NVIC_SAI2_MASK      			((uint32_t)0x08000000)
#define NVIC_ICPR2_R_NVIC_SAI2_BIT       			(27)
#define NVIC_ICPR2_R_NVIC_SAI2_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_SAI2_EN        			((uint32_t)0x08000000)

#define NVIC_ICPR2_NVIC_SAI2_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_SAI2_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_SAI2_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_QUADSPI_MASK      			((uint32_t)0x10000000)
#define NVIC_ICPR2_R_NVIC_QUADSPI_BIT       			(28)
#define NVIC_ICPR2_R_NVIC_QUADSPI_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_QUADSPI_EN        			((uint32_t)0x10000000)

#define NVIC_ICPR2_NVIC_QUADSPI_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_QUADSPI_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_QUADSPI_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_LPTIM1_MASK      			((uint32_t)0x20000000)
#define NVIC_ICPR2_R_NVIC_LPTIM1_BIT       			(29)
#define NVIC_ICPR2_R_NVIC_LPTIM1_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_LPTIM1_EN        			((uint32_t)0x20000000)

#define NVIC_ICPR2_NVIC_LPTIM1_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_LPTIM1_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_LPTIM1_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_CEC_MASK      			((uint32_t)0x40000000)
#define NVIC_ICPR2_R_NVIC_CEC_BIT       			(30)
#define NVIC_ICPR2_R_NVIC_CEC_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_CEC_EN        			((uint32_t)0x40000000)

#define NVIC_ICPR2_NVIC_CEC_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_CEC_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_CEC_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR2_R_NVIC_I2C4_EV_MASK      			((uint32_t)0x80000000)
#define NVIC_ICPR2_R_NVIC_I2C4_EV_BIT       			(31)
#define NVIC_ICPR2_R_NVIC_I2C4_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR2_R_NVIC_I2C4_EV_EN        			((uint32_t)0x80000000)

#define NVIC_ICPR2_NVIC_I2C4_EV_MASK      			   ((uint32_t)0x00000001)
#define NVIC_ICPR2_NVIC_I2C4_EV_DIS       			   ((uint32_t)0x00000000)
#define NVIC_ICPR2_NVIC_I2C4_EV_EN        		   	   ((uint32_t)0x00000001)
//--------

//ToDo IABR2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_IABR2_OFFSET)))
#define NVIC_IABR2_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_IABR2_OFFSET)))


//--------
#define NVIC_IABR2_R_NVIC_CAN2_RX0_MASK    			((uint32_t)0x00000001)
#define NVIC_IABR2_R_NVIC_CAN2_RX0_BIT    	 		(0)
#define NVIC_IABR2_R_NVIC_CAN2_RX0_DIS     			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_CAN2_RX0_EN      			((uint32_t)0x00000001)

#define NVIC_IABR2_NVIC_CAN2_RX0_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_CAN2_RX0_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_CAN2_RX0_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_CAN2_RX1_MASK    			((uint32_t)0x00000002)
#define NVIC_IABR2_R_NVIC_CAN2_RX1_BIT     			(1)
#define NVIC_IABR2_R_NVIC_CAN2_RX1_DIS     			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_CAN2_RX1_EN      			((uint32_t)0x00000002)

#define NVIC_IABR2_NVIC_CAN2_RX1_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_CAN2_RX1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_CAN2_RX1_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_CAN2_SCE_MASK    			((uint32_t)0x00000004)
#define NVIC_IABR2_R_NVIC_CAN2_SCE_BIT     			(2)
#define NVIC_IABR2_R_NVIC_CAN2_SCE_DIS     			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_CAN2_SCE_EN      			((uint32_t)0x00000004)

#define NVIC_IABR2_NVIC_CAN2_SCE_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_CAN2_SCE_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_CAN2_SCE_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_OTG_FS_MASK      			((uint32_t)0x00000008)
#define NVIC_IABR2_R_NVIC_OTG_FS_BIT       			(3)
#define NVIC_IABR2_R_NVIC_OTG_FS_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_OTG_FS_EN        			((uint32_t)0x00000008)

#define NVIC_IABR2_NVIC_OTG_FS_MASK        			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_OTG_FS_DIS         			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_OTG_FS_EN          			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_DMA2_Stream5_MASK    		((uint32_t)0x00000010)
#define NVIC_IABR2_R_NVIC_DMA2_Stream5_BIT     		(4)
#define NVIC_IABR2_R_NVIC_DMA2_Stream5_DIS     		((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_DMA2_Stream5_EN      		((uint32_t)0x00000010)

#define NVIC_IABR2_NVIC_DMA2_Stream5_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_DMA2_Stream5_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_DMA2_Stream5_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_DMA2_Stream6_MASK      	((uint32_t)0x00000020)
#define NVIC_IABR2_R_NVIC_DMA2_Stream6_BIT       	(5)
#define NVIC_IABR2_R_NVIC_DMA2_Stream6_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_DMA2_Stream6_EN        	((uint32_t)0x00000020)

#define NVIC_IABR2_NVIC_DMA2_Stream6_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_DMA2_Stream6_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_DMA2_Stream6_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_DMA2_Stream7_MASK      	((uint32_t)0x00000040)
#define NVIC_IABR2_R_NVIC_DMA2_Stream7_BIT       	(6)
#define NVIC_IABR2_R_NVIC_DMA2_Stream7_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_DMA2_Stream7_EN        	((uint32_t)0x00000040)

#define NVIC_IABR2_NVIC_DMA2_Stream7_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_DMA2_Stream7_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_DMA2_Stream7_EN        		((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_USART6_MASK      			((uint32_t)0x00000080)
#define NVIC_IABR2_R_NVIC_USART6_BIT       			(7)
#define NVIC_IABR2_R_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_USART6_EN        			((uint32_t)0x00000080)

#define NVIC_IABR2_NVIC_USART6_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_USART6_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_USART6_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_I2C3_EV_MASK      		((uint32_t)0x00000100)
#define NVIC_IABR2_R_NVIC_I2C3_EV_BIT       		(8)
#define NVIC_IABR2_R_NVIC_I2C3_EV_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_I2C3_EV_EN        		((uint32_t)0x00000100)

#define NVIC_IABR2_NVIC_I2C3_EV_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_I2C3_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_I2C3_EV_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_I2C3_ER_MASK      		((uint32_t)0x00000200)
#define NVIC_IABR2_R_NVIC_I2C3_ER_BIT       		(9)
#define NVIC_IABR2_R_NVIC_I2C3_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_I2C3_ER_EN        		((uint32_t)0x00000200)

#define NVIC_IABR2_NVIC_I2C3_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_I2C3_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_I2C3_ER_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000400)
#define NVIC_IABR2_R_NVIC_OTG_HS_EP1_OUT_BIT       	(10)
#define NVIC_IABR2_R_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000400)

#define NVIC_IABR2_NVIC_OTG_HS_EP1_OUT_MASK      	((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_OTG_HS_EP1_OUT_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_OTG_HS_EP1_OUT_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000800)
#define NVIC_IABR2_R_NVIC_OTG_HS_EPI_IN_BIT       	(11)
#define NVIC_IABR2_R_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000800)

#define NVIC_IABR2_NVIC_OTG_HS_EPI_IN_MASK      	((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_OTG_HS_EPI_IN_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_OTG_HS_EPI_IN_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_OTG_HS_WKUP_MASK      	((uint32_t)0x00001000)
#define NVIC_IABR2_R_NVIC_OTG_HS_WKUP_BIT       	(12)
#define NVIC_IABR2_R_NVIC_OTG_HS_WKUP_DIS       	((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_OTG_HS_WKUP_EN        	((uint32_t)0x00001000)

#define NVIC_IABR2_NVIC_OTG_HS_WKUP_MASK      		((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_OTG_HS_WKUP_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_OTG_HS_WKUP_EN        		((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_OTG_HS_MASK      			((uint32_t)0x00002000)
#define NVIC_IABR2_R_NVIC_OTG_HS_BIT       			(13)
#define NVIC_IABR2_R_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_OTG_HS_EN        			((uint32_t)0x00002000)

#define NVIC_IABR2_NVIC_OTG_HS_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_OTG_HS_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_OTG_HS_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_DCMI_MASK      			((uint32_t)0x00004000)
#define NVIC_IABR2_R_NVIC_DCMI_BIT       			(14)
#define NVIC_IABR2_R_NVIC_DCMI_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_DCMI_EN        			((uint32_t)0x00004000)

#define NVIC_IABR2_NVIC_DCMI_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_DCMI_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_DCMI_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_reserved79_MASK      			((uint32_t)0x00008000)
#define NVIC_IABR2_R_NVIC_reserved79_BIT       			(15)
#define NVIC_IABR2_R_NVIC_reserved79_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_reserved79_EN        			((uint32_t)0x00008000)

#define NVIC_IABR2_NVIC_reserved79_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_reserved79_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_reserved79_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_HASH_RNG_MASK      		((uint32_t)0x00010000)
#define NVIC_IABR2_R_NVIC_HASH_RNG_BIT       		(16)
#define NVIC_IABR2_R_NVIC_HASH_RNG_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_HASH_RNG_EN        		((uint32_t)0x00010000)

#define NVIC_IABR2_NVIC_HASH_RNG_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_HASH_RNG_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_HASH_RNG_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_FPU_MASK      			((uint32_t)0x00020000)
#define NVIC_IABR2_R_NVIC_FPU_BIT       			(17)
#define NVIC_IABR2_R_NVIC_FPU_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_FPU_EN        			((uint32_t)0x00020000)

#define NVIC_IABR2_NVIC_FPU_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_FPU_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_FPU_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_UART7_MASK      			((uint32_t)0x00040000)
#define NVIC_IABR2_R_NVIC_UART7_BIT       			(18)
#define NVIC_IABR2_R_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_UART7_EN        			((uint32_t)0x00040000)

#define NVIC_IABR2_NVIC_UART7_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_UART7_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_UART7_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_UART8_MASK      			((uint32_t)0x00080000)
#define NVIC_IABR2_R_NVIC_UART8_BIT       			(19)
#define NVIC_IABR2_R_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_UART8_EN        			((uint32_t)0x00080000)

#define NVIC_IABR2_NVIC_UART8_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_UART8_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_UART8_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_SPI4_MASK      			((uint32_t)0x00100000)
#define NVIC_IABR2_R_NVIC_SPI4_BIT       			(20)
#define NVIC_IABR2_R_NVIC_SPI4_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_SPI4_EN        			((uint32_t)0x00100000)

#define NVIC_IABR2_NVIC_SPI4_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_SPI4_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_SPI4_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_SPI5_MASK      			((uint32_t)0x00200000)
#define NVIC_IABR2_R_NVIC_SPI5_BIT       			(21)
#define NVIC_IABR2_R_NVIC_SPI5_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_SPI5_EN        			((uint32_t)0x00200000)

#define NVIC_IABR2_NVIC_SPI5_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_SPI5_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_SPI5_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_SPI6_MASK      			((uint32_t)0x00400000)
#define NVIC_IABR2_R_NVIC_SPI6_BIT       			(22)
#define NVIC_IABR2_R_NVIC_SPI6_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_SPI6_EN        			((uint32_t)0x00400000)

#define NVIC_IABR2_NVIC_SPI6_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_SPI6_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_SPI6_EN        				((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_SAI1_MASK      			((uint32_t)0x00800000)
#define NVIC_IABR2_R_NVIC_SAI1_BIT       			(23)
#define NVIC_IABR2_R_NVIC_SAI1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_SAI1_EN        			((uint32_t)0x00800000)

#define NVIC_IABR2_NVIC_SAI1_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_SAI1_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_SAI1_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_LTDC_MASK      			((uint32_t)0x01000000)
#define NVIC_IABR2_R_NVIC_LTDC_BIT       			(24)
#define NVIC_IABR2_R_NVIC_LTDC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_LTDC_EN        			((uint32_t)0x01000000)

#define NVIC_IABR2_NVIC_LTDC_MASK      				((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_LTDC_DIS       				((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_LTDC_EN        				((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_LTDC_ER_MASK      		((uint32_t)0x02000000)
#define NVIC_IABR2_R_NVIC_LTDC_ER_BIT       		(25)
#define NVIC_IABR2_R_NVIC_LTDC_ER_DIS       		((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_LTDC_ER_EN        		((uint32_t)0x02000000)

#define NVIC_IABR2_NVIC_LTDC_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_LTDC_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_LTDC_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_DMA2D_MASK      			((uint32_t)0x04000000)
#define NVIC_IABR2_R_NVIC_DMA2D_BIT       			(26)
#define NVIC_IABR2_R_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_DMA2D_EN        			((uint32_t)0x04000000)

#define NVIC_IABR2_NVIC_DMA2D_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_DMA2D_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_DMA2D_EN        			((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR2_R_NVIC_SAI2_MASK      			((uint32_t)0x08000000)
#define NVIC_IABR2_R_NVIC_SAI2_BIT       			(27)
#define NVIC_IABR2_R_NVIC_SAI2_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_SAI2_EN        			((uint32_t)0x08000000)

#define NVIC_IABR2_NVIC_SAI2_MASK      			   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_SAI2_DIS       			   ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_SAI2_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_QUADSPI_MASK      			((uint32_t)0x10000000)
#define NVIC_IABR2_R_NVIC_QUADSPI_BIT       			(28)
#define NVIC_IABR2_R_NVIC_QUADSPI_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_QUADSPI_EN        			((uint32_t)0x10000000)

#define NVIC_IABR2_NVIC_QUADSPI_MASK      			   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_QUADSPI_DIS       			   ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_QUADSPI_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_LPTIM1_MASK      			((uint32_t)0x20000000)
#define NVIC_IABR2_R_NVIC_LPTIM1_BIT       			(29)
#define NVIC_IABR2_R_NVIC_LPTIM1_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_LPTIM1_EN        			((uint32_t)0x20000000)

#define NVIC_IABR2_NVIC_LPTIM1_MASK      			   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_LPTIM1_DIS       			   ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_LPTIM1_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_CEC_MASK      			((uint32_t)0x40000000)
#define NVIC_IABR2_R_NVIC_CEC_BIT       			(30)
#define NVIC_IABR2_R_NVIC_CEC_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_CEC_EN        			((uint32_t)0x40000000)

#define NVIC_IABR2_NVIC_CEC_MASK      			   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_CEC_DIS       			   ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_CEC_EN        		   	   ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR2_R_NVIC_I2C4_EV_MASK      			((uint32_t)0x80000000)
#define NVIC_IABR2_R_NVIC_I2C4_EV_BIT       			(31)
#define NVIC_IABR2_R_NVIC_I2C4_EV_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR2_R_NVIC_I2C4_EV_EN        			((uint32_t)0x80000000)

#define NVIC_IABR2_NVIC_I2C4_EV_MASK      			   ((uint32_t)0x00000001)
#define NVIC_IABR2_NVIC_I2C4_EV_DIS       			   ((uint32_t)0x00000000)
#define NVIC_IABR2_NVIC_I2C4_EV_EN        		   	   ((uint32_t)0x00000001)
//--------


//ToDo ISER3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ISER3_OFFSET)))
#define NVIC_ISER3_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISER3_OFFSET)))


//--------
#define NVIC_ISER3_R_NVIC_I2C4_ER_MASK    			((uint32_t)0x00000001)
#define NVIC_ISER3_R_NVIC_I2C4_ER_BIT    	 		(0)
#define NVIC_ISER3_R_NVIC_I2C4_ER_DIS     			((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_I2C4_ER_EN      			((uint32_t)0x00000001)

#define NVIC_ISER3_NVIC_I2C4_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_I2C4_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_I2C4_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER3_R_NVIC_SPDIF_MASK    			((uint32_t)0x00000002)
#define NVIC_ISER3_R_NVIC_SPDIF_BIT     			(1)
#define NVIC_ISER3_R_NVIC_SPDIF_DIS     			((uint32_t)0x00000000)
#define NVIC_ISER3_R_NVIC_SPDIF_EN      			((uint32_t)0x00000002)

#define NVIC_ISER3_NVIC_SPDIF_MASK      			((uint32_t)0x00000001)
#define NVIC_ISER3_NVIC_SPDIF_DIS       			((uint32_t)0x00000000)
#define NVIC_ISER3_NVIC_SPDIF_EN        			((uint32_t)0x00000001)
//--------


//ToDo ICER3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ICER3_OFFSET)))
#define NVIC_ICER3_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICER3_OFFSET)))


//--------
#define NVIC_ICER3_R_NVIC_I2C4_ER_MASK    			((uint32_t)0x00000001)
#define NVIC_ICER3_R_NVIC_I2C4_ER_BIT    	 		(0)
#define NVIC_ICER3_R_NVIC_I2C4_ER_DIS     			((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_I2C4_ER_EN      			((uint32_t)0x00000001)

#define NVIC_ICER3_NVIC_I2C4_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_I2C4_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_I2C4_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER3_R_NVIC_SPDIF_MASK    			((uint32_t)0x00000002)
#define NVIC_ICER3_R_NVIC_SPDIF_BIT     			(1)
#define NVIC_ICER3_R_NVIC_SPDIF_DIS     			((uint32_t)0x00000000)
#define NVIC_ICER3_R_NVIC_SPDIF_EN      			((uint32_t)0x00000002)

#define NVIC_ICER3_NVIC_SPDIF_MASK      			((uint32_t)0x00000001)
#define NVIC_ICER3_NVIC_SPDIF_DIS       			((uint32_t)0x00000000)
#define NVIC_ICER3_NVIC_SPDIF_EN        			((uint32_t)0x00000001)
//--------



//ToDo ISPR3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ISPR3_OFFSET)))
#define NVIC_ISPR3_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ISPR3_OFFSET)))


//--------
#define NVIC_ISPR3_R_NVIC_I2C4_ER_MASK    			((uint32_t)0x00000001)
#define NVIC_ISPR3_R_NVIC_I2C4_ER_BIT    	 		(0)
#define NVIC_ISPR3_R_NVIC_I2C4_ER_DIS     			((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_I2C4_ER_EN      			((uint32_t)0x00000001)

#define NVIC_ISPR3_NVIC_I2C4_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_I2C4_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_I2C4_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR3_R_NVIC_SPDIF_MASK    			((uint32_t)0x00000002)
#define NVIC_ISPR3_R_NVIC_SPDIF_BIT     			(1)
#define NVIC_ISPR3_R_NVIC_SPDIF_DIS     			((uint32_t)0x00000000)
#define NVIC_ISPR3_R_NVIC_SPDIF_EN      			((uint32_t)0x00000002)

#define NVIC_ISPR3_NVIC_SPDIF_MASK      			((uint32_t)0x00000001)
#define NVIC_ISPR3_NVIC_SPDIF_DIS       			((uint32_t)0x00000000)
#define NVIC_ISPR3_NVIC_SPDIF_EN        			((uint32_t)0x00000001)
//--------



//ToDo ICPR3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ICPR3_OFFSET)))
#define NVIC_ICPR3_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_ICPR3_OFFSET)))


//--------
#define NVIC_ICPR3_R_NVIC_I2C4_ER_MASK    			((uint32_t)0x00000001)
#define NVIC_ICPR3_R_NVIC_I2C4_ER_BIT    	 		(0)
#define NVIC_ICPR3_R_NVIC_I2C4_ER_DIS     			((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_I2C4_ER_EN      			((uint32_t)0x00000001)

#define NVIC_ICPR3_NVIC_I2C4_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_I2C4_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_I2C4_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR3_R_NVIC_SPDIF_MASK    			((uint32_t)0x00000002)
#define NVIC_ICPR3_R_NVIC_SPDIF_BIT     			(1)
#define NVIC_ICPR3_R_NVIC_SPDIF_DIS     			((uint32_t)0x00000000)
#define NVIC_ICPR3_R_NVIC_SPDIF_EN      			((uint32_t)0x00000002)

#define NVIC_ICPR3_NVIC_SPDIF_MASK      			((uint32_t)0x00000001)
#define NVIC_ICPR3_NVIC_SPDIF_DIS       			((uint32_t)0x00000000)
#define NVIC_ICPR3_NVIC_SPDIF_EN        			((uint32_t)0x00000001)
//--------


//ToDo IABR3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_IABR3_OFFSET)))
#define NVIC_IABR3_R              (*((__IO uint32_t *)(NVIC_BASE+NVIC_IABR3_OFFSET)))


//--------
#define NVIC_IABR3_R_NVIC_I2C4_ER_MASK    			((uint32_t)0x00000001)
#define NVIC_IABR3_R_NVIC_I2C4_ER_BIT    	 		(0)
#define NVIC_IABR3_R_NVIC_I2C4_ER_DIS     			((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_I2C4_ER_EN      			((uint32_t)0x00000001)

#define NVIC_IABR3_NVIC_I2C4_ER_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_I2C4_ER_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_I2C4_ER_EN        			((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR3_R_NVIC_SPDIF_MASK    			((uint32_t)0x00000002)
#define NVIC_IABR3_R_NVIC_SPDIF_BIT     			(1)
#define NVIC_IABR3_R_NVIC_SPDIF_DIS     			((uint32_t)0x00000000)
#define NVIC_IABR3_R_NVIC_SPDIF_EN      			((uint32_t)0x00000002)

#define NVIC_IABR3_NVIC_SPDIF_MASK      			((uint32_t)0x00000001)
#define NVIC_IABR3_NVIC_SPDIF_DIS       			((uint32_t)0x00000000)
#define NVIC_IABR3_NVIC_SPDIF_EN        			((uint32_t)0x00000001)
//--------



//todo IPR
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_IPRb            (((IPRb__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPRw            (((IPRw__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))


//Todo IPR0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR0 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR0            (((IPR0_TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPR0_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR0_OFFSET)))


//--------
#define NVIC_IPR0_R_NVIC_WWDG_MASK     			((uint32_t)0x000000F0)
#define NVIC_IPR0_R_NVIC_WWDG_BIT      			(4)
#define NVIC_IPR0_R_NVIC_WWDG_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_WWDG_IP1      			((uint32_t)0x00000010)
#define NVIC_IPR0_R_NVIC_WWDG_IP2      			((uint32_t)0x00000020)
#define NVIC_IPR0_R_NVIC_WWDG_IP3      			((uint32_t)0x00000030)
#define NVIC_IPR0_R_NVIC_WWDG_IP4      			((uint32_t)0x00000040)
#define NVIC_IPR0_R_NVIC_WWDG_IP5      			((uint32_t)0x00000050)
#define NVIC_IPR0_R_NVIC_WWDG_IP6      			((uint32_t)0x00000060)
#define NVIC_IPR0_R_NVIC_WWDG_IP7      			((uint32_t)0x00000070)
#define NVIC_IPR0_R_NVIC_WWDG_IP8      			((uint32_t)0x00000080)
#define NVIC_IPR0_R_NVIC_WWDG_IP9      			((uint32_t)0x00000090)
#define NVIC_IPR0_R_NVIC_WWDG_IP10     			((uint32_t)0x000000A0)
#define NVIC_IPR0_R_NVIC_WWDG_IP11     			((uint32_t)0x000000B0)
#define NVIC_IPR0_R_NVIC_WWDG_IP12     			((uint32_t)0x000000C0)
#define NVIC_IPR0_R_NVIC_WWDG_IP13     			((uint32_t)0x000000D0)
#define NVIC_IPR0_R_NVIC_WWDG_IP14     			((uint32_t)0x000000E0)
#define NVIC_IPR0_R_NVIC_WWDG_IP15     			((uint32_t)0x000000F0)

#define NVIC_IPR0_NVIC_WWDG_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR0_NVIC_WWDG_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_WWDG_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_WWDG_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_WWDG_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_WWDG_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_WWDG_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_WWDG_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_WWDG_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_WWDG_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR0_NVIC_WWDG_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR0_NVIC_WWDG_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR0_NVIC_WWDG_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR0_NVIC_WWDG_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR0_NVIC_WWDG_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR0_NVIC_WWDG_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR0_NVIC_WWDG_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR0_R_NVIC_PVD_MASK  				((uint32_t)0x0000F000)
#define NVIC_IPR0_R_NVIC_PVD_BIT    			(12)
#define NVIC_IPR0_R_NVIC_PVD_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_PVD_IP1     			((uint32_t)0x00001000)
#define NVIC_IPR0_R_NVIC_PVD_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR0_R_NVIC_PVD_IP3      			((uint32_t)0x00003000)
#define NVIC_IPR0_R_NVIC_PVD_IP4      			((uint32_t)0x00004000)
#define NVIC_IPR0_R_NVIC_PVD_IP5      			((uint32_t)0x00005000)
#define NVIC_IPR0_R_NVIC_PVD_IP6      			((uint32_t)0x00006000)
#define NVIC_IPR0_R_NVIC_PVD_IP7      			((uint32_t)0x00007000)
#define NVIC_IPR0_R_NVIC_PVD_IP8      			((uint32_t)0x00008000)
#define NVIC_IPR0_R_NVIC_PVD_IP9      			((uint32_t)0x00009000)
#define NVIC_IPR0_R_NVIC_PVD_IP10     			((uint32_t)0x0000A000)
#define NVIC_IPR0_R_NVIC_PVD_IP11     			((uint32_t)0x0000B000)
#define NVIC_IPR0_R_NVIC_PVD_IP12     			((uint32_t)0x0000C000)
#define NVIC_IPR0_R_NVIC_PVD_IP13     			((uint32_t)0x0000D000)
#define NVIC_IPR0_R_NVIC_PVD_IP14     			((uint32_t)0x0000E000)
#define NVIC_IPR0_R_NVIC_PVD_IP15     			((uint32_t)0x0000F000)

#define NVIC_IPR0_NVIC_PVD_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR0_NVIC_PVD_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_PVD_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_PVD_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_PVD_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_PVD_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_PVD_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_PVD_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_PVD_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_PVD_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR0_NVIC_PVD_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR0_NVIC_PVD_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR0_NVIC_PVD_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR0_NVIC_PVD_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR0_NVIC_PVD_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR0_NVIC_PVD_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR0_NVIC_PVD_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_MASK    	((uint32_t)0x00F00000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_BIT     	(20)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP1      	((uint32_t)0x00100000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP2      	((uint32_t)0x00200000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP3      	((uint32_t)0x00300000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP4      	((uint32_t)0x00400000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP5      	((uint32_t)0x00500000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP6      	((uint32_t)0x00600000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP7      	((uint32_t)0x00700000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP8      	((uint32_t)0x00800000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP9      	((uint32_t)0x00900000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP10     	((uint32_t)0x00A00000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP11     	((uint32_t)0x00B00000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP12     	((uint32_t)0x00C00000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP13     	((uint32_t)0x00D00000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP14     	((uint32_t)0x00E00000)
#define NVIC_IPR0_R_NVIC_TAMP_STAMP_IP15     	((uint32_t)0x00F00000)

#define NVIC_IPR0_NVIC_TAMP_STAMP_MASK      	((uint32_t)0x0000000F)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR0_NVIC_TAMP_STAMP_IP15     		((uint32_t)0x0000000F)
//--------



//--------
#define NVIC_IPR0_R_NVIC_RTC_WKUP_MASK      	((uint32_t)0xF0000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_BIT       	(28)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP1      		((uint32_t)0x10000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP2      		((uint32_t)0x20000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP3      		((uint32_t)0x30000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP4      		((uint32_t)0x40000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP5      		((uint32_t)0x50000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP6      		((uint32_t)0x60000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP7      		((uint32_t)0x70000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP8      		((uint32_t)0x80000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP9      		((uint32_t)0x90000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP10     		((uint32_t)0xA0000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP11     		((uint32_t)0xB0000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP12     		((uint32_t)0xC0000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP13     		((uint32_t)0xD0000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP14     		((uint32_t)0xE0000000)
#define NVIC_IPR0_R_NVIC_RTC_WKUP_IP15     		((uint32_t)0xF0000000)

#define NVIC_IPR0_NVIC_RTC_WKUP_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR0_NVIC_RTC_WKUP_IP15     		((uint32_t)0x0000000F)
//--------




//Todo IPR1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR1 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR1            (((IPR1_TypeDef*)(NVIC_BASE+NVIC_IPR1_OFFSET)))
#define NVIC_IPR1_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR1_OFFSET)))


//--------
#define NVIC_IPR1_R_NVIC_FLASH_MASK      			((uint32_t)0x000000F0)
#define NVIC_IPR1_R_NVIC_FLASH_BIT       			(4)
#define NVIC_IPR1_R_NVIC_FLASH_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_FLASH_IP1      			((uint32_t)0x00000010)
#define NVIC_IPR1_R_NVIC_FLASH_IP2      			((uint32_t)0x00000020)
#define NVIC_IPR1_R_NVIC_FLASH_IP3      			((uint32_t)0x00000030)
#define NVIC_IPR1_R_NVIC_FLASH_IP4      			((uint32_t)0x00000040)
#define NVIC_IPR1_R_NVIC_FLASH_IP5      			((uint32_t)0x00000050)
#define NVIC_IPR1_R_NVIC_FLASH_IP6      			((uint32_t)0x00000060)
#define NVIC_IPR1_R_NVIC_FLASH_IP7      			((uint32_t)0x00000070)
#define NVIC_IPR1_R_NVIC_FLASH_IP8      			((uint32_t)0x00000080)
#define NVIC_IPR1_R_NVIC_FLASH_IP9      			((uint32_t)0x00000090)
#define NVIC_IPR1_R_NVIC_FLASH_IP10     			((uint32_t)0x000000A0)
#define NVIC_IPR1_R_NVIC_FLASH_IP11     			((uint32_t)0x000000B0)
#define NVIC_IPR1_R_NVIC_FLASH_IP12     			((uint32_t)0x000000C0)
#define NVIC_IPR1_R_NVIC_FLASH_IP13     			((uint32_t)0x000000D0)
#define NVIC_IPR1_R_NVIC_FLASH_IP14     			((uint32_t)0x000000E0)
#define NVIC_IPR1_R_NVIC_FLASH_IP15     			((uint32_t)0x000000F0)

#define NVIC_IPR1_NVIC_FLASH_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR1_NVIC_FLASH_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_FLASH_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_FLASH_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_FLASH_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_FLASH_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_FLASH_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_FLASH_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_FLASH_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_FLASH_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR1_NVIC_FLASH_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR1_NVIC_FLASH_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR1_NVIC_FLASH_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR1_NVIC_FLASH_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR1_NVIC_FLASH_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR1_NVIC_FLASH_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR1_NVIC_FLASH_IP15     				((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR1_R_NVIC_RCC_MASK      				((uint32_t)0x0000F000)
#define NVIC_IPR1_R_NVIC_RCC_BIT       				(12)
#define NVIC_IPR1_R_NVIC_RCC_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_RCC_IP1      				((uint32_t)0x00001000)
#define NVIC_IPR1_R_NVIC_RCC_IP2      				((uint32_t)0x00002000)
#define NVIC_IPR1_R_NVIC_RCC_IP3      				((uint32_t)0x00003000)
#define NVIC_IPR1_R_NVIC_RCC_IP4      				((uint32_t)0x00004000)
#define NVIC_IPR1_R_NVIC_RCC_IP5      				((uint32_t)0x00005000)
#define NVIC_IPR1_R_NVIC_RCC_IP6      				((uint32_t)0x00006000)
#define NVIC_IPR1_R_NVIC_RCC_IP7      				((uint32_t)0x00007000)
#define NVIC_IPR1_R_NVIC_RCC_IP8      				((uint32_t)0x00008000)
#define NVIC_IPR1_R_NVIC_RCC_IP9      				((uint32_t)0x00009000)
#define NVIC_IPR1_R_NVIC_RCC_IP10     				((uint32_t)0x0000A000)
#define NVIC_IPR1_R_NVIC_RCC_IP11     				((uint32_t)0x0000B000)
#define NVIC_IPR1_R_NVIC_RCC_IP12     				((uint32_t)0x0000C000)
#define NVIC_IPR1_R_NVIC_RCC_IP13     				((uint32_t)0x0000D000)
#define NVIC_IPR1_R_NVIC_RCC_IP14     				((uint32_t)0x0000E000)
#define NVIC_IPR1_R_NVIC_RCC_IP15     				((uint32_t)0x0000F000)

#define NVIC_IPR1_NVIC_RCC_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR1_NVIC_RCC_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_RCC_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_RCC_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_RCC_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_RCC_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_RCC_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_RCC_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_RCC_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_RCC_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR1_NVIC_RCC_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR1_NVIC_RCC_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR1_NVIC_RCC_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR1_NVIC_RCC_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR1_NVIC_RCC_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR1_NVIC_RCC_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR1_NVIC_RCC_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR1_R_NVIC_EXTI0_MASK      			((uint32_t)0x00F00000)
#define NVIC_IPR1_R_NVIC_EXTI0_BIT       			(20)
#define NVIC_IPR1_R_NVIC_EXTI0_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP1      			((uint32_t)0x00100000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP2      			((uint32_t)0x00200000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP3      			((uint32_t)0x00300000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP4      			((uint32_t)0x00400000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP5      			((uint32_t)0x00500000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP6      			((uint32_t)0x00600000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP7      			((uint32_t)0x00700000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP8      			((uint32_t)0x00800000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP9      			((uint32_t)0x00900000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP10     			((uint32_t)0x00A00000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP11     			((uint32_t)0x00B00000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP12     			((uint32_t)0x00C00000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP13     			((uint32_t)0x00D00000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP14     			((uint32_t)0x00E00000)
#define NVIC_IPR1_R_NVIC_EXTI0_IP15     			((uint32_t)0x00F00000)

#define NVIC_IPR1_NVIC_EXTI0_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR1_NVIC_EXTI0_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_EXTI0_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_EXTI0_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_EXTI0_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_EXTI0_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_EXTI0_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_EXTI0_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_EXTI0_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_EXTI0_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR1_NVIC_EXTI0_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR1_NVIC_EXTI0_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR1_NVIC_EXTI0_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR1_NVIC_EXTI0_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR1_NVIC_EXTI0_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR1_NVIC_EXTI0_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR1_NVIC_EXTI0_IP15     				((uint32_t)0x0000000F)
//--------



//--------
#define NVIC_IPR1_R_NVIC_EXTI1_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR1_R_NVIC_EXTI1_BIT       			(28)
#define NVIC_IPR1_R_NVIC_EXTI1_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP4      			((uint32_t)0x40000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP5      			((uint32_t)0x50000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP6      			((uint32_t)0x60000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP7      			((uint32_t)0x70000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP8      			((uint32_t)0x80000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP9      			((uint32_t)0x90000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP10     			((uint32_t)0xA0000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP11     			((uint32_t)0xB0000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP13     			((uint32_t)0xD0000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR1_R_NVIC_EXTI1_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR1_NVIC_EXTI1_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR1_NVIC_EXTI1_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_EXTI1_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_EXTI1_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_EXTI1_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_EXTI1_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_EXTI1_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_EXTI1_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_EXTI1_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_EXTI1_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR1_NVIC_EXTI1_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR1_NVIC_EXTI1_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR1_NVIC_EXTI1_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR1_NVIC_EXTI1_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR1_NVIC_EXTI1_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR1_NVIC_EXTI1_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR1_NVIC_EXTI1_IP15     				((uint32_t)0x0000000F)
//--------



//Todo IPR2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR2 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR2            (((IPR2_TypeDef*)(NVIC_BASE+NVIC_IPR2_OFFSET)))
#define NVIC_IPR2_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR2_OFFSET)))


//--------
#define NVIC_IPR2_R_NVIC_EXTI2_MASK      			((uint32_t)0x000000F0)
#define NVIC_IPR2_R_NVIC_EXTI2_BIT       			(4)
#define NVIC_IPR2_R_NVIC_EXTI2_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_EXTI2_IP1      			((uint32_t)0x00000010)
#define NVIC_IPR2_R_NVIC_EXTI2_IP2      			((uint32_t)0x00000020)
#define NVIC_IPR2_R_NVIC_EXTI2_IP3      			((uint32_t)0x00000030)
#define NVIC_IPR2_R_NVIC_EXTI2_IP4      			((uint32_t)0x00000040)
#define NVIC_IPR2_R_NVIC_EXTI2_IP5      			((uint32_t)0x00000050)
#define NVIC_IPR2_R_NVIC_EXTI2_IP6      			((uint32_t)0x00000060)
#define NVIC_IPR2_R_NVIC_EXTI2_IP7      			((uint32_t)0x00000070)
#define NVIC_IPR2_R_NVIC_EXTI2_IP8      			((uint32_t)0x00000080)
#define NVIC_IPR2_R_NVIC_EXTI2_IP9      			((uint32_t)0x00000090)
#define NVIC_IPR2_R_NVIC_EXTI2_IP10     			((uint32_t)0x000000A0)
#define NVIC_IPR2_R_NVIC_EXTI2_IP11     			((uint32_t)0x000000B0)
#define NVIC_IPR2_R_NVIC_EXTI2_IP12     			((uint32_t)0x000000C0)
#define NVIC_IPR2_R_NVIC_EXTI2_IP13     			((uint32_t)0x000000D0)
#define NVIC_IPR2_R_NVIC_EXTI2_IP14     			((uint32_t)0x000000E0)
#define NVIC_IPR2_R_NVIC_EXTI2_IP15     			((uint32_t)0x000000F0)

#define NVIC_IPR2_NVIC_EXTI2_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR2_NVIC_EXTI2_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_EXTI2_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_EXTI2_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_EXTI2_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_EXTI2_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_EXTI2_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_EXTI2_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_EXTI2_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_EXTI2_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR2_NVIC_EXTI2_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR2_NVIC_EXTI2_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR2_NVIC_EXTI2_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR2_NVIC_EXTI2_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR2_NVIC_EXTI2_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR2_NVIC_EXTI2_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR2_NVIC_EXTI2_IP15     				((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR2_R_NVIC_EXTI3_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR2_R_NVIC_EXTI3_BIT       			(12)
#define NVIC_IPR2_R_NVIC_EXTI3_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP3      			((uint32_t)0x00003000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP4      			((uint32_t)0x00004000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP5      			((uint32_t)0x00005000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP6      			((uint32_t)0x00006000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP7      			((uint32_t)0x00007000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP8      			((uint32_t)0x00008000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP9      			((uint32_t)0x00009000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP10     			((uint32_t)0x0000A000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP11     			((uint32_t)0x0000B000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP12     			((uint32_t)0x0000C000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP13     			((uint32_t)0x0000D000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP14     			((uint32_t)0x0000E000)
#define NVIC_IPR2_R_NVIC_EXTI3_IP15     			((uint32_t)0x0000F000)

#define NVIC_IPR2_NVIC_EXTI3_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR2_NVIC_EXTI3_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_EXTI3_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_EXTI3_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_EXTI3_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_EXTI3_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_EXTI3_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_EXTI3_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_EXTI3_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_EXTI3_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR2_NVIC_EXTI3_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR2_NVIC_EXTI3_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR2_NVIC_EXTI3_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR2_NVIC_EXTI3_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR2_NVIC_EXTI3_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR2_NVIC_EXTI3_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR2_NVIC_EXTI3_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR2_R_NVIC_EXTI4_MASK      			((uint32_t)0x00F00000)
#define NVIC_IPR2_R_NVIC_EXTI4_BIT       			(20)
#define NVIC_IPR2_R_NVIC_EXTI4_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP1      			((uint32_t)0x00100000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP2      			((uint32_t)0x00200000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP3      			((uint32_t)0x00300000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP4      			((uint32_t)0x00400000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP5      			((uint32_t)0x00500000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP6      			((uint32_t)0x00600000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP7      			((uint32_t)0x00700000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP8      			((uint32_t)0x00800000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP9      			((uint32_t)0x00900000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP10     			((uint32_t)0x00A00000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP11     			((uint32_t)0x00B00000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP12     			((uint32_t)0x00C00000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP13     			((uint32_t)0x00D00000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP14     			((uint32_t)0x00E00000)
#define NVIC_IPR2_R_NVIC_EXTI4_IP15     			((uint32_t)0x00F00000)

#define NVIC_IPR2_NVIC_EXTI4_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR2_NVIC_EXTI4_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_EXTI4_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_EXTI4_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_EXTI4_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_EXTI4_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_EXTI4_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_EXTI4_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_EXTI4_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_EXTI4_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR2_NVIC_EXTI4_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR2_NVIC_EXTI4_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR2_NVIC_EXTI4_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR2_NVIC_EXTI4_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR2_NVIC_EXTI4_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR2_NVIC_EXTI4_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR2_NVIC_EXTI4_IP15     				((uint32_t)0x0000000F)
//--------



//--------
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_MASK      	((uint32_t)0xF0000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_BIT       	(28)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP1      	((uint32_t)0x10000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP2      	((uint32_t)0x20000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP3      	((uint32_t)0x30000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP4    		((uint32_t)0x40000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP5     		((uint32_t)0x50000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP6  		((uint32_t)0x60000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP7  		((uint32_t)0x70000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP8  		((uint32_t)0x80000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP9  		((uint32_t)0x90000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP10 		((uint32_t)0xA0000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP11 		((uint32_t)0xB0000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP12     	((uint32_t)0xC0000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP14     	((uint32_t)0xE0000000)
#define NVIC_IPR2_R_NVIC_DMA1_Stream0_IP15     	((uint32_t)0xF0000000)

#define NVIC_IPR2_NVIC_DMA1_Stream0_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR2_NVIC_DMA1_Stream0_IP15     		((uint32_t)0x0000000F)
//--------



//Todo IPR3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR3 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR3            (((IPR3_TypeDef*)(NVIC_BASE+NVIC_IPR3_OFFSET)))
#define NVIC_IPR3_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR3_OFFSET)))


//--------
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_MASK     	    ((uint32_t)0x000000F0)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_BIT       	(4)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR3_R_NVIC_DMA1_Stream1_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR3_NVIC_DMA1_Stream1_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR3_NVIC_DMA1_Stream1_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_MASK      	((uint32_t)0x0000F000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_BIT       	(12)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP1      	((uint32_t)0x00001000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP2      	((uint32_t)0x00002000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP3     		((uint32_t)0x00003000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP4     		((uint32_t)0x00004000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP5     		((uint32_t)0x00005000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP6     		((uint32_t)0x00006000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP7     		((uint32_t)0x00007000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP8     		((uint32_t)0x00008000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP9     		((uint32_t)0x00009000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP10    		((uint32_t)0x0000A000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP11    		((uint32_t)0x0000B000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP12    		((uint32_t)0x0000C000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP13    		((uint32_t)0x0000D000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP14    		((uint32_t)0x0000E000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream2_IP15    		((uint32_t)0x0000F000)

#define NVIC_IPR3_NVIC_DMA1_Stream2_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR3_NVIC_DMA1_Stream2_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_BIT       	(20)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP1      	((uint32_t)0x00100000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP2      	((uint32_t)0x00200000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP3      	((uint32_t)0x00300000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP4      	((uint32_t)0x00400000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP5      	((uint32_t)0x00500000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP6      	((uint32_t)0x00600000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP7      	((uint32_t)0x00700000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP8      	((uint32_t)0x00800000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP9      	((uint32_t)0x00900000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP10     	((uint32_t)0x00A00000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP11     	((uint32_t)0x00B00000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP12     	((uint32_t)0x00C00000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP13     	((uint32_t)0x00D00000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP14     	((uint32_t)0x00E00000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream3_IP15     	((uint32_t)0x00F00000)

#define NVIC_IPR3_NVIC_DMA1_Stream3_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR3_NVIC_DMA1_Stream3_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_MASK      	((uint32_t)0xF0000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_BIT       	(28)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP1      	((uint32_t)0x10000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP2      	((uint32_t)0x20000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP3      	((uint32_t)0x30000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP4    		((uint32_t)0x40000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP5     		((uint32_t)0x50000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP6  		((uint32_t)0x60000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP7  		((uint32_t)0x70000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP8  		((uint32_t)0x80000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP9  		((uint32_t)0x90000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP10 		((uint32_t)0xA0000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP11 		((uint32_t)0xB0000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP12     	((uint32_t)0xC0000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP14     	((uint32_t)0xE0000000)
#define NVIC_IPR3_R_NVIC_DMA1_Stream4_IP15     	((uint32_t)0xF0000000)

#define NVIC_IPR3_NVIC_DMA1_Stream4_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR3_NVIC_DMA1_Stream4_IP15     		((uint32_t)0x0000000F)
//--------



//Todo IPR4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR4 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR4            (((IPR4_TypeDef*)(NVIC_BASE+NVIC_IPR4_OFFSET)))
#define NVIC_IPR4_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR4_OFFSET)))


//--------
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_MASK     		((uint32_t)0x000000F0)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_BIT       	(4)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR4_R_NVIC_DMA1_Stream5_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR4_NVIC_DMA1_Stream5_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR4_NVIC_DMA1_Stream5_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_MASK      	((uint32_t)0x0000F000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_BIT       	(12)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP1      	((uint32_t)0x00001000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP2      	((uint32_t)0x00002000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP3     		((uint32_t)0x00003000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP4     		((uint32_t)0x00004000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP5     		((uint32_t)0x00005000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP6     		((uint32_t)0x00006000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP7     		((uint32_t)0x00007000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP8     		((uint32_t)0x00008000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP9     		((uint32_t)0x00009000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP10    		((uint32_t)0x0000A000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP11    		((uint32_t)0x0000B000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP12    		((uint32_t)0x0000C000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP13    		((uint32_t)0x0000D000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP14    		((uint32_t)0x0000E000)
#define NVIC_IPR4_R_NVIC_DMA1_Stream6_IP15    		((uint32_t)0x0000F000)

#define NVIC_IPR4_NVIC_DMA1_Stream6_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR4_NVIC_DMA1_Stream6_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR4_R_NVIC_ADC_MASK     				((uint32_t)0x00F00000)
#define NVIC_IPR4_R_NVIC_ADC_BIT       				(20)
#define NVIC_IPR4_R_NVIC_ADC_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_ADC_IP1      				((uint32_t)0x00100000)
#define NVIC_IPR4_R_NVIC_ADC_IP2      				((uint32_t)0x00200000)
#define NVIC_IPR4_R_NVIC_ADC_IP3      				((uint32_t)0x00300000)
#define NVIC_IPR4_R_NVIC_ADC_IP4      				((uint32_t)0x00400000)
#define NVIC_IPR4_R_NVIC_ADC_IP5      				((uint32_t)0x00500000)
#define NVIC_IPR4_R_NVIC_ADC_IP6      				((uint32_t)0x00600000)
#define NVIC_IPR4_R_NVIC_ADC_IP7      				((uint32_t)0x00700000)
#define NVIC_IPR4_R_NVIC_ADC_IP8      				((uint32_t)0x00800000)
#define NVIC_IPR4_R_NVIC_ADC_IP9      				((uint32_t)0x00900000)
#define NVIC_IPR4_R_NVIC_ADC_IP10     				((uint32_t)0x00A00000)
#define NVIC_IPR4_R_NVIC_ADC_IP11     				((uint32_t)0x00B00000)
#define NVIC_IPR4_R_NVIC_ADC_IP12     				((uint32_t)0x00C00000)
#define NVIC_IPR4_R_NVIC_ADC_IP13     				((uint32_t)0x00D00000)
#define NVIC_IPR4_R_NVIC_ADC_IP14     				((uint32_t)0x00E00000)
#define NVIC_IPR4_R_NVIC_ADC_IP15     				((uint32_t)0x00F00000)

#define NVIC_IPR4_NVIC_ADC_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR4_NVIC_ADC_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_ADC_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_ADC_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_ADC_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_ADC_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_ADC_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_ADC_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_ADC_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_ADC_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR4_NVIC_ADC_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR4_NVIC_ADC_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR4_NVIC_ADC_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR4_NVIC_ADC_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR4_NVIC_ADC_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR4_NVIC_ADC_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR4_NVIC_ADC_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR4_R_NVIC_CAN1_TX_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_BIT       			(28)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR4_R_NVIC_CAN1_TX_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR4_NVIC_CAN1_TX_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR4_NVIC_CAN1_TX_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_CAN1_TX_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_CAN1_TX_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_CAN1_TX_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_CAN1_TX_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_CAN1_TX_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_CAN1_TX_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_CAN1_TX_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_CAN1_TX_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR4_NVIC_CAN1_TX_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR4_NVIC_CAN1_TX_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR4_NVIC_CAN1_TX_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR4_NVIC_CAN1_TX_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR4_NVIC_CAN1_TX_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR4_NVIC_CAN1_TX_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR4_NVIC_CAN1_TX_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR5
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR5 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR5            (((IPR5_TypeDef*)(NVIC_BASE+NVIC_IPR5_OFFSET)))
#define NVIC_IPR5_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR5_OFFSET)))


//--------
#define NVIC_IPR5_R_NVIC_CAN1_RX0_MASK     			((uint32_t)0x000000F0)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_BIT       		(4)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP2   			((uint32_t)0x00000020)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP5   			((uint32_t)0x00000050)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP8   			((uint32_t)0x00000080)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP11  			((uint32_t)0x000000B0)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP14  			((uint32_t)0x000000E0)
#define NVIC_IPR5_R_NVIC_CAN1_RX0_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR5_NVIC_CAN1_RX0_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR5_NVIC_CAN1_RX0_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR5_R_NVIC_CAN1_RX1_MASK      		((uint32_t)0x0000F000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_BIT       		(12)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP1      		((uint32_t)0x00001000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP2      		((uint32_t)0x00002000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP3     			((uint32_t)0x00003000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP4     			((uint32_t)0x00004000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP5     			((uint32_t)0x00005000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP6     			((uint32_t)0x00006000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP7     			((uint32_t)0x00007000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP8     			((uint32_t)0x00008000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP9     			((uint32_t)0x00009000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP10    			((uint32_t)0x0000A000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP11    			((uint32_t)0x0000B000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP12    			((uint32_t)0x0000C000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP13    			((uint32_t)0x0000D000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP14    			((uint32_t)0x0000E000)
#define NVIC_IPR5_R_NVIC_CAN1_RX1_IP15    			((uint32_t)0x0000F000)

#define NVIC_IPR5_NVIC_CAN1_RX1_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR5_NVIC_CAN1_RX1_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR5_R_NVIC_CAN1_SCE_MASK     			((uint32_t)0x00F00000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_BIT       		(20)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP1      		((uint32_t)0x00100000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP2      		((uint32_t)0x00200000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP3      		((uint32_t)0x00300000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP4      		((uint32_t)0x00400000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP5      		((uint32_t)0x00500000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP6      		((uint32_t)0x00600000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP7      		((uint32_t)0x00700000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP8      		((uint32_t)0x00800000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP9      		((uint32_t)0x00900000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP10     		((uint32_t)0x00A00000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP11     		((uint32_t)0x00B00000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP12     		((uint32_t)0x00C00000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP14     		((uint32_t)0x00E00000)
#define NVIC_IPR5_R_NVIC_CAN1_SCE_IP15     		((uint32_t)0x00F00000)

#define NVIC_IPR5_NVIC_CAN1_SCE_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR5_NVIC_CAN1_SCE_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR5_R_NVIC_EXTI9_5_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_BIT       			(28)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR5_R_NVIC_EXTI9_5_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR5_NVIC_EXTI9_5_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR5_NVIC_EXTI9_5_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_EXTI9_5_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_EXTI9_5_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_EXTI9_5_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_EXTI9_5_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_EXTI9_5_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_EXTI9_5_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_EXTI9_5_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_EXTI9_5_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR5_NVIC_EXTI9_5_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR5_NVIC_EXTI9_5_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR5_NVIC_EXTI9_5_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR5_NVIC_EXTI9_5_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR5_NVIC_EXTI9_5_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR5_NVIC_EXTI9_5_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR5_NVIC_EXTI9_5_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR6
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR6 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR6            (((IPR6_TypeDef*)(NVIC_BASE+NVIC_IPR6_OFFSET)))
#define NVIC_IPR6_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR6_OFFSET)))


//--------
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_MASK     		((uint32_t)0x000000F0)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_BIT       	(4)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR6_R_NVIC_TIM1_BRK_TIM9_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR6_NVIC_TIM1_BRK_TIM9_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_MASK      	((uint32_t)0x0000F000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_BIT       	(12)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP1      	((uint32_t)0x00001000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP2      	((uint32_t)0x00002000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP3     		((uint32_t)0x00003000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP4     		((uint32_t)0x00004000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP5     		((uint32_t)0x00005000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP6     		((uint32_t)0x00006000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP7     		((uint32_t)0x00007000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP8     		((uint32_t)0x00008000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP9     		((uint32_t)0x00009000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP10    		((uint32_t)0x0000A000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP11    		((uint32_t)0x0000B000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP12    		((uint32_t)0x0000C000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP13    		((uint32_t)0x0000D000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP14    		((uint32_t)0x0000E000)
#define NVIC_IPR6_R_NVIC_TIM1_UP_TIM10_IP15    		((uint32_t)0x0000F000)

#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR6_NVIC_TIM1_UP_TIM10_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_MASK 	((uint32_t)0x00F00000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_BIT    (20)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP1   ((uint32_t)0x00100000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP2   ((uint32_t)0x00200000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP3   ((uint32_t)0x00300000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP4   ((uint32_t)0x00400000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP5   ((uint32_t)0x00500000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP6   ((uint32_t)0x00600000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP7   ((uint32_t)0x00700000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP8   ((uint32_t)0x00800000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP9   ((uint32_t)0x00900000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP10  ((uint32_t)0x00A00000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP11  ((uint32_t)0x00B00000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP12  ((uint32_t)0x00C00000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP13  ((uint32_t)0x00D00000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP14  ((uint32_t)0x00E00000)
#define NVIC_IPR6_R_NVIC_TIM1_TRIG_COM_TIM11_IP15  ((uint32_t)0x00F00000)

#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_MASK     ((uint32_t)0x0000000F)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP7     ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP8     ((uint32_t)0x00000008)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP9     ((uint32_t)0x00000009)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP10    ((uint32_t)0x0000000A)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP11    ((uint32_t)0x0000000B)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP12    ((uint32_t)0x0000000C)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP13    ((uint32_t)0x0000000D)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP14    ((uint32_t)0x0000000E)
#define NVIC_IPR6_NVIC_TIM1_TRIG_COM_TIM11_IP15    ((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR6_R_NVIC_TIM1_CC_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_BIT       			(28)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR6_R_NVIC_TIM1_CC_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR6_NVIC_TIM1_CC_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR6_NVIC_TIM1_CC_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_TIM1_CC_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_TIM1_CC_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_TIM1_CC_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_TIM1_CC_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_TIM1_CC_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_TIM1_CC_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_TIM1_CC_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_TIM1_CC_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR6_NVIC_TIM1_CC_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR6_NVIC_TIM1_CC_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR6_NVIC_TIM1_CC_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR6_NVIC_TIM1_CC_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR6_NVIC_TIM1_CC_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR6_NVIC_TIM1_CC_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR6_NVIC_TIM1_CC_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR7
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR7 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR7            (((IPR7_TypeDef*)(NVIC_BASE+NVIC_IPR7_OFFSET)))
#define NVIC_IPR7_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR7_OFFSET)))


//--------
#define NVIC_IPR7_R_NVIC_TIM2_MASK     				((uint32_t)0x000000F0)
#define NVIC_IPR7_R_NVIC_TIM2_BIT       			(4)
#define NVIC_IPR7_R_NVIC_TIM2_IP0   				((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_TIM2_IP1   				((uint32_t)0x00000010)
#define NVIC_IPR7_R_NVIC_TIM2_IP2   				((uint32_t)0x00000020)
#define NVIC_IPR7_R_NVIC_TIM2_IP3   				((uint32_t)0x00000030)
#define NVIC_IPR7_R_NVIC_TIM2_IP4   				((uint32_t)0x00000040)
#define NVIC_IPR7_R_NVIC_TIM2_IP5   				((uint32_t)0x00000050)
#define NVIC_IPR7_R_NVIC_TIM2_IP6   				((uint32_t)0x00000060)
#define NVIC_IPR7_R_NVIC_TIM2_IP7   				((uint32_t)0x00000070)
#define NVIC_IPR7_R_NVIC_TIM2_IP8   				((uint32_t)0x00000080)
#define NVIC_IPR7_R_NVIC_TIM2_IP9   				((uint32_t)0x00000090)
#define NVIC_IPR7_R_NVIC_TIM2_IP10  				((uint32_t)0x000000A0)
#define NVIC_IPR7_R_NVIC_TIM2_IP11  				((uint32_t)0x000000B0)
#define NVIC_IPR7_R_NVIC_TIM2_IP12  				((uint32_t)0x000000C0)
#define NVIC_IPR7_R_NVIC_TIM2_IP13  				((uint32_t)0x000000D0)
#define NVIC_IPR7_R_NVIC_TIM2_IP14  				((uint32_t)0x000000E0)
#define NVIC_IPR7_R_NVIC_TIM2_IP15  				((uint32_t)0x000000F0)

#define NVIC_IPR7_NVIC_TIM2_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR7_NVIC_TIM2_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_TIM2_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_TIM2_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_TIM2_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_TIM2_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_TIM2_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_TIM2_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_TIM2_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_TIM2_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR7_NVIC_TIM2_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR7_NVIC_TIM2_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR7_NVIC_TIM2_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR7_NVIC_TIM2_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR7_NVIC_TIM2_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR7_NVIC_TIM2_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR7_NVIC_TIM2_IP15     				((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR7_R_NVIC_TIM3_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR7_R_NVIC_TIM3_BIT       			(12)
#define NVIC_IPR7_R_NVIC_TIM3_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_TIM3_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR7_R_NVIC_TIM3_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR7_R_NVIC_TIM3_IP3     				((uint32_t)0x00003000)
#define NVIC_IPR7_R_NVIC_TIM3_IP4     				((uint32_t)0x00004000)
#define NVIC_IPR7_R_NVIC_TIM3_IP5     				((uint32_t)0x00005000)
#define NVIC_IPR7_R_NVIC_TIM3_IP6     				((uint32_t)0x00006000)
#define NVIC_IPR7_R_NVIC_TIM3_IP7     				((uint32_t)0x00007000)
#define NVIC_IPR7_R_NVIC_TIM3_IP8     				((uint32_t)0x00008000)
#define NVIC_IPR7_R_NVIC_TIM3_IP9     				((uint32_t)0x00009000)
#define NVIC_IPR7_R_NVIC_TIM3_IP10    				((uint32_t)0x0000A000)
#define NVIC_IPR7_R_NVIC_TIM3_IP11    				((uint32_t)0x0000B000)
#define NVIC_IPR7_R_NVIC_TIM3_IP12    				((uint32_t)0x0000C000)
#define NVIC_IPR7_R_NVIC_TIM3_IP13    				((uint32_t)0x0000D000)
#define NVIC_IPR7_R_NVIC_TIM3_IP14    				((uint32_t)0x0000E000)
#define NVIC_IPR7_R_NVIC_TIM3_IP15    				((uint32_t)0x0000F000)

#define NVIC_IPR7_NVIC_TIM3_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR7_NVIC_TIM3_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_TIM3_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_TIM3_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_TIM3_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_TIM3_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_TIM3_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_TIM3_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_TIM3_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_TIM3_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR7_NVIC_TIM3_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR7_NVIC_TIM3_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR7_NVIC_TIM3_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR7_NVIC_TIM3_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR7_NVIC_TIM3_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR7_NVIC_TIM3_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR7_NVIC_TIM3_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR7_R_NVIC_TIM4_MASK     				((uint32_t)0x00F00000)
#define NVIC_IPR7_R_NVIC_TIM4_BIT       			(20)
#define NVIC_IPR7_R_NVIC_TIM4_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_TIM4_IP1      			((uint32_t)0x00100000)
#define NVIC_IPR7_R_NVIC_TIM4_IP2      			((uint32_t)0x00200000)
#define NVIC_IPR7_R_NVIC_TIM4_IP3      			((uint32_t)0x00300000)
#define NVIC_IPR7_R_NVIC_TIM4_IP4      			((uint32_t)0x00400000)
#define NVIC_IPR7_R_NVIC_TIM4_IP5      			((uint32_t)0x00500000)
#define NVIC_IPR7_R_NVIC_TIM4_IP6      			((uint32_t)0x00600000)
#define NVIC_IPR7_R_NVIC_TIM4_IP7      			((uint32_t)0x00700000)
#define NVIC_IPR7_R_NVIC_TIM4_IP8      			((uint32_t)0x00800000)
#define NVIC_IPR7_R_NVIC_TIM4_IP9      			((uint32_t)0x00900000)
#define NVIC_IPR7_R_NVIC_TIM4_IP10     			((uint32_t)0x00A00000)
#define NVIC_IPR7_R_NVIC_TIM4_IP11     			((uint32_t)0x00B00000)
#define NVIC_IPR7_R_NVIC_TIM4_IP12     			((uint32_t)0x00C00000)
#define NVIC_IPR7_R_NVIC_TIM4_IP13     			((uint32_t)0x00D00000)
#define NVIC_IPR7_R_NVIC_TIM4_IP14     			((uint32_t)0x00E00000)
#define NVIC_IPR7_R_NVIC_TIM4_IP15     			((uint32_t)0x00F00000)

#define NVIC_IPR7_NVIC_TIM4_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR7_NVIC_TIM4_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_TIM4_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_TIM4_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_TIM4_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_TIM4_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_TIM4_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_TIM4_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_TIM4_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_TIM4_IP8    	  			((uint32_t)0x00000008)
#define NVIC_IPR7_NVIC_TIM4_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR7_NVIC_TIM4_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR7_NVIC_TIM4_IP11 	    			((uint32_t)0x0000000B)
#define NVIC_IPR7_NVIC_TIM4_IP12   	  			((uint32_t)0x0000000C)
#define NVIC_IPR7_NVIC_TIM4_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR7_NVIC_TIM4_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR7_NVIC_TIM4_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR7_R_NVIC_I2C1_EV_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_BIT       			(28)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR7_R_NVIC_I2C1_EV_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR7_NVIC_I2C1_EV_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR7_NVIC_I2C1_EV_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_I2C1_EV_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_I2C1_EV_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_I2C1_EV_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_I2C1_EV_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_I2C1_EV_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_I2C1_EV_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_I2C1_EV_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_I2C1_EV_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR7_NVIC_I2C1_EV_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR7_NVIC_I2C1_EV_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR7_NVIC_I2C1_EV_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR7_NVIC_I2C1_EV_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR7_NVIC_I2C1_EV_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR7_NVIC_I2C1_EV_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR7_NVIC_I2C1_EV_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR8
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR8 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR8            (((IPR8_TypeDef*)(NVIC_BASE+NVIC_IPR8_OFFSET)))
#define NVIC_IPR8_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR8_OFFSET)))


//--------
#define NVIC_IPR8_R_NVIC_I2C1_ER_MASK     			((uint32_t)0x000000F0)
#define NVIC_IPR8_R_NVIC_I2C1_ER_BIT       			(4)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP2   			((uint32_t)0x00000020)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP5   			((uint32_t)0x00000050)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP8   			((uint32_t)0x00000080)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP11  			((uint32_t)0x000000B0)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP14  			((uint32_t)0x000000E0)
#define NVIC_IPR8_R_NVIC_I2C1_ER_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR8_NVIC_I2C1_ER_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR8_NVIC_I2C1_ER_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_I2C1_ER_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_I2C1_ER_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_I2C1_ER_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_I2C1_ER_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_I2C1_ER_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_I2C1_ER_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_I2C1_ER_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_I2C1_ER_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR8_NVIC_I2C1_ER_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR8_NVIC_I2C1_ER_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR8_NVIC_I2C1_ER_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR8_NVIC_I2C1_ER_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR8_NVIC_I2C1_ER_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR8_NVIC_I2C1_ER_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR8_NVIC_I2C1_ER_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR8_R_NVIC_I2C2_EV_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_BIT       			(12)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP0    	  		((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP3     			((uint32_t)0x00003000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP4     			((uint32_t)0x00004000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP5     			((uint32_t)0x00005000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP6     			((uint32_t)0x00006000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP7     			((uint32_t)0x00007000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP8     			((uint32_t)0x00008000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP9     			((uint32_t)0x00009000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP10    			((uint32_t)0x0000A000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP11    			((uint32_t)0x0000B000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP12    			((uint32_t)0x0000C000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP13    			((uint32_t)0x0000D000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP14    			((uint32_t)0x0000E000)
#define NVIC_IPR8_R_NVIC_I2C2_EV_IP15    			((uint32_t)0x0000F000)

#define NVIC_IPR8_NVIC_I2C2_EV_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR8_NVIC_I2C2_EV_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_I2C2_EV_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_I2C2_EV_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_I2C2_EV_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_I2C2_EV_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_I2C2_EV_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_I2C2_EV_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_I2C2_EV_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_I2C2_EV_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR8_NVIC_I2C2_EV_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR8_NVIC_I2C2_EV_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR8_NVIC_I2C2_EV_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR8_NVIC_I2C2_EV_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR8_NVIC_I2C2_EV_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR8_NVIC_I2C2_EV_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR8_NVIC_I2C2_EV_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR8_R_NVIC_I2C2_ER_MASK     			((uint32_t)0x00F00000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_BIT  	     		(20)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP0   	   		((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP1      			((uint32_t)0x00100000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP2      			((uint32_t)0x00200000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP3 	     		((uint32_t)0x00300000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP4   	   		((uint32_t)0x00400000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP5      			((uint32_t)0x00500000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP6      			((uint32_t)0x00600000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP7 	     		((uint32_t)0x00700000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP8   	   		((uint32_t)0x00800000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP9      			((uint32_t)0x00900000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP10     			((uint32_t)0x00A00000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP11 	    		((uint32_t)0x00B00000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP12  	   		((uint32_t)0x00C00000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP13     			((uint32_t)0x00D00000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP14     			((uint32_t)0x00E00000)
#define NVIC_IPR8_R_NVIC_I2C2_ER_IP15     			((uint32_t)0x00F00000)

#define NVIC_IPR8_NVIC_I2C2_ER_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR8_NVIC_I2C2_ER_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_I2C2_ER_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_I2C2_ER_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_I2C2_ER_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_I2C2_ER_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_I2C2_ER_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_I2C2_ER_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_I2C2_ER_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_I2C2_ER_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR8_NVIC_I2C2_ER_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR8_NVIC_I2C2_ER_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR8_NVIC_I2C2_ER_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR8_NVIC_I2C2_ER_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR8_NVIC_I2C2_ER_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR8_NVIC_I2C2_ER_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR8_NVIC_I2C2_ER_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR8_R_NVIC_SPI1_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR8_R_NVIC_SPI1_BIT       			(28)
#define NVIC_IPR8_R_NVIC_SPI1_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP4    				((uint32_t)0x40000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP5     				((uint32_t)0x50000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP13    				((uint32_t)0xD0000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR8_R_NVIC_SPI1_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR8_NVIC_SPI1_MASK	      			((uint32_t)0x0000000F)
#define NVIC_IPR8_NVIC_SPI1_IP0    	  			((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_SPI1_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_SPI1_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_SPI1_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_SPI1_IP4	      			((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_SPI1_IP5    	  			((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_SPI1_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_SPI1_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_SPI1_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR8_NVIC_SPI1_IP9  	    			((uint32_t)0x00000009)
#define NVIC_IPR8_NVIC_SPI1_IP10   	  			((uint32_t)0x0000000A)
#define NVIC_IPR8_NVIC_SPI1_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR8_NVIC_SPI1_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR8_NVIC_SPI1_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR8_NVIC_SPI1_IP14	     			((uint32_t)0x0000000E)
#define NVIC_IPR8_NVIC_SPI1_IP15   	  			((uint32_t)0x0000000F)
//--------



//Todo IPR9
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR9 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR9            (((IPR9_TypeDef*)(NVIC_BASE+NVIC_IPR9_OFFSET)))
#define NVIC_IPR9_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR9_OFFSET)))


//--------
#define NVIC_IPR9_R_NVIC_SPI2_MASK     				((uint32_t)0x000000F0)
#define NVIC_IPR9_R_NVIC_SPI2_BIT       			(4)
#define NVIC_IPR9_R_NVIC_SPI2_IP0   				((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_SPI2_IP1   				((uint32_t)0x00000010)
#define NVIC_IPR9_R_NVIC_SPI2_IP2   				((uint32_t)0x00000020)
#define NVIC_IPR9_R_NVIC_SPI2_IP3   				((uint32_t)0x00000030)
#define NVIC_IPR9_R_NVIC_SPI2_IP4   				((uint32_t)0x00000040)
#define NVIC_IPR9_R_NVIC_SPI2_IP5   				((uint32_t)0x00000050)
#define NVIC_IPR9_R_NVIC_SPI2_IP6   				((uint32_t)0x00000060)
#define NVIC_IPR9_R_NVIC_SPI2_IP7   				((uint32_t)0x00000070)
#define NVIC_IPR9_R_NVIC_SPI2_IP8   				((uint32_t)0x00000080)
#define NVIC_IPR9_R_NVIC_SPI2_IP9   				((uint32_t)0x00000090)
#define NVIC_IPR9_R_NVIC_SPI2_IP10  				((uint32_t)0x000000A0)
#define NVIC_IPR9_R_NVIC_SPI2_IP11  				((uint32_t)0x000000B0)
#define NVIC_IPR9_R_NVIC_SPI2_IP12  				((uint32_t)0x000000C0)
#define NVIC_IPR9_R_NVIC_SPI2_IP13  				((uint32_t)0x000000D0)
#define NVIC_IPR9_R_NVIC_SPI2_IP14  				((uint32_t)0x000000E0)
#define NVIC_IPR9_R_NVIC_SPI2_IP15  				((uint32_t)0x000000F0)

#define NVIC_IPR9_NVIC_SPI2_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR9_NVIC_SPI2_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_SPI2_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_SPI2_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_SPI2_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_SPI2_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_SPI2_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_SPI2_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_SPI2_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_SPI2_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR9_NVIC_SPI2_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR9_NVIC_SPI2_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR9_NVIC_SPI2_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR9_NVIC_SPI2_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR9_NVIC_SPI2_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR9_NVIC_SPI2_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR9_NVIC_SPI2_IP15     				((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR9_R_NVIC_USART1_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR9_R_NVIC_USART1_BIT       			(12)
#define NVIC_IPR9_R_NVIC_USART1_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_USART1_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR9_R_NVIC_USART1_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR9_R_NVIC_USART1_IP3   				((uint32_t)0x00003000)
#define NVIC_IPR9_R_NVIC_USART1_IP4   				((uint32_t)0x00004000)
#define NVIC_IPR9_R_NVIC_USART1_IP5   				((uint32_t)0x00005000)
#define NVIC_IPR9_R_NVIC_USART1_IP6   				((uint32_t)0x00006000)
#define NVIC_IPR9_R_NVIC_USART1_IP7   				((uint32_t)0x00007000)
#define NVIC_IPR9_R_NVIC_USART1_IP8  				((uint32_t)0x00008000)
#define NVIC_IPR9_R_NVIC_USART1_IP9   				((uint32_t)0x00009000)
#define NVIC_IPR9_R_NVIC_USART1_IP10  				((uint32_t)0x0000A000)
#define NVIC_IPR9_R_NVIC_USART1_IP11  				((uint32_t)0x0000B000)
#define NVIC_IPR9_R_NVIC_USART1_IP12  				((uint32_t)0x0000C000)
#define NVIC_IPR9_R_NVIC_USART1_IP13 				((uint32_t)0x0000D000)
#define NVIC_IPR9_R_NVIC_USART1_IP14 				((uint32_t)0x0000E000)
#define NVIC_IPR9_R_NVIC_USART1_IP15 				((uint32_t)0x0000F000)

#define NVIC_IPR9_NVIC_USART1_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR9_NVIC_USART1_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_USART1_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_USART1_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_USART1_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_USART1_IP4     				((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_USART1_IP5     				((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_USART1_IP6     				((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_USART1_IP7     				((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_USART1_IP8     				((uint32_t)0x00000008)
#define NVIC_IPR9_NVIC_USART1_IP9     				((uint32_t)0x00000009)
#define NVIC_IPR9_NVIC_USART1_IP10    				((uint32_t)0x0000000A)
#define NVIC_IPR9_NVIC_USART1_IP11    				((uint32_t)0x0000000B)
#define NVIC_IPR9_NVIC_USART1_IP12    				((uint32_t)0x0000000C)
#define NVIC_IPR9_NVIC_USART1_IP13    				((uint32_t)0x0000000D)
#define NVIC_IPR9_NVIC_USART1_IP14    				((uint32_t)0x0000000E)
#define NVIC_IPR9_NVIC_USART1_IP15    				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR9_R_NVIC_USART2_MASK   				((uint32_t)0x00F00000)
#define NVIC_IPR9_R_NVIC_USART2_BIT       			(20)
#define NVIC_IPR9_R_NVIC_USART2_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_USART2_IP1      			((uint32_t)0x00100000)
#define NVIC_IPR9_R_NVIC_USART2_IP2      			((uint32_t)0x00200000)
#define NVIC_IPR9_R_NVIC_USART2_IP3      			((uint32_t)0x00300000)
#define NVIC_IPR9_R_NVIC_USART2_IP4      			((uint32_t)0x00400000)
#define NVIC_IPR9_R_NVIC_USART2_IP5      			((uint32_t)0x00500000)
#define NVIC_IPR9_R_NVIC_USART2_IP6      			((uint32_t)0x00600000)
#define NVIC_IPR9_R_NVIC_USART2_IP7      			((uint32_t)0x00700000)
#define NVIC_IPR9_R_NVIC_USART2_IP8      			((uint32_t)0x00800000)
#define NVIC_IPR9_R_NVIC_USART2_IP9      			((uint32_t)0x00900000)
#define NVIC_IPR9_R_NVIC_USART2_IP10     			((uint32_t)0x00A00000)
#define NVIC_IPR9_R_NVIC_USART2_IP11     			((uint32_t)0x00B00000)
#define NVIC_IPR9_R_NVIC_USART2_IP12     			((uint32_t)0x00C00000)
#define NVIC_IPR9_R_NVIC_USART2_IP13     			((uint32_t)0x00D00000)
#define NVIC_IPR9_R_NVIC_USART2_IP14     			((uint32_t)0x00E00000)
#define NVIC_IPR9_R_NVIC_USART2_IP15     			((uint32_t)0x00F00000)

#define NVIC_IPR9_NVIC_USART2_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR9_NVIC_USART2_IP0    				((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_USART2_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_USART2_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_USART2_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_USART2_IP4     				((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_USART2_IP5     				((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_USART2_IP6     				((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_USART2_IP7     				((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_USART2_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR9_NVIC_USART2_IP9     				((uint32_t)0x00000009)
#define NVIC_IPR9_NVIC_USART2_IP10    				((uint32_t)0x0000000A)
#define NVIC_IPR9_NVIC_USART2_IP11 	   			((uint32_t)0x0000000B)
#define NVIC_IPR9_NVIC_USART2_IP12   	  			((uint32_t)0x0000000C)
#define NVIC_IPR9_NVIC_USART2_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR9_NVIC_USART2_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR9_NVIC_USART2_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR9_R_NVIC_USART3_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR9_R_NVIC_USART3_BIT       			(28)
#define NVIC_IPR9_R_NVIC_USART3_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_USART3_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR9_R_NVIC_USART3_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR9_R_NVIC_USART3_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR9_R_NVIC_USART3_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR9_R_NVIC_USART3_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR9_R_NVIC_USART3_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR9_R_NVIC_USART3_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR9_R_NVIC_USART3_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR9_R_NVIC_USART3_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR9_R_NVIC_USART3_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR9_R_NVIC_USART3_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR9_R_NVIC_USART3_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR9_R_NVIC_USART3_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR9_R_NVIC_USART3_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR9_R_NVIC_USART3_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR9_NVIC_USART3_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR9_NVIC_USART3_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_USART3_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_USART3_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_USART3_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_USART3_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_USART3_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_USART3_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_USART3_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_USART3_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR9_NVIC_USART3_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR9_NVIC_USART3_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR9_NVIC_USART3_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR9_NVIC_USART3_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR9_NVIC_USART3_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR9_NVIC_USART3_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR9_NVIC_USART3_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR10
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR10 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR10            (((IPR10_TypeDef*)(NVIC_BASE+NVIC_IPR10_OFFSET)))
#define NVIC_IPR10_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR10_OFFSET)))


//--------
#define NVIC_IPR10_R_NVIC_EXTI15_10_MASK   			((uint32_t)0x000000F0)
#define NVIC_IPR10_R_NVIC_EXTI15_10_BIT    			(4)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP2   			((uint32_t)0x00000020)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP5   			((uint32_t)0x00000050)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP8   			((uint32_t)0x00000080)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP11  			((uint32_t)0x000000B0)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP14  			((uint32_t)0x000000E0)
#define NVIC_IPR10_R_NVIC_EXTI15_10_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR10_NVIC_EXTI15_10_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR10_NVIC_EXTI15_10_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_EXTI15_10_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_EXTI15_10_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_EXTI15_10_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_EXTI15_10_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_EXTI15_10_IP5     			((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_EXTI15_10_IP6     			((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_EXTI15_10_IP7     			((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_EXTI15_10_IP8     			((uint32_t)0x00000008)
#define NVIC_IPR10_NVIC_EXTI15_10_IP9    			((uint32_t)0x00000009)
#define NVIC_IPR10_NVIC_EXTI15_10_IP10   			((uint32_t)0x0000000A)
#define NVIC_IPR10_NVIC_EXTI15_10_IP11    			((uint32_t)0x0000000B)
#define NVIC_IPR10_NVIC_EXTI15_10_IP12    			((uint32_t)0x0000000C)
#define NVIC_IPR10_NVIC_EXTI15_10_IP13    			((uint32_t)0x0000000D)
#define NVIC_IPR10_NVIC_EXTI15_10_IP14    			((uint32_t)0x0000000E)
#define NVIC_IPR10_NVIC_EXTI15_10_IP15    			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR10_R_NVIC_RTC_Alarm_MASK    		((uint32_t)0x0000F000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_BIT     		(12)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP0    		((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP1    		((uint32_t)0x00001000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP2    		((uint32_t)0x00002000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP3   			((uint32_t)0x00003000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP4   			((uint32_t)0x00004000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP5   			((uint32_t)0x00005000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP6   			((uint32_t)0x00006000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP7   			((uint32_t)0x00007000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP8  			((uint32_t)0x00008000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP9   			((uint32_t)0x00009000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP10  			((uint32_t)0x0000A000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP11  			((uint32_t)0x0000B000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP12  			((uint32_t)0x0000C000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP13 			((uint32_t)0x0000D000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP14 			((uint32_t)0x0000E000)
#define NVIC_IPR10_R_NVIC_RTC_Alarm_IP15 			((uint32_t)0x0000F000)

#define NVIC_IPR10_NVIC_RTC_Alarm_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP4     			((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP5     			((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP6     			((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP7     			((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP8     			((uint32_t)0x00000008)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP9     			((uint32_t)0x00000009)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP10    			((uint32_t)0x0000000A)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP11    			((uint32_t)0x0000000B)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP12    			((uint32_t)0x0000000C)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP13    			((uint32_t)0x0000000D)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP14    			((uint32_t)0x0000000E)
#define NVIC_IPR10_NVIC_RTC_Alarm_IP15    			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_MASK   		((uint32_t)0x00F00000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_BIT    		(20)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP1   		((uint32_t)0x00100000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP2   		((uint32_t)0x00200000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP3   		((uint32_t)0x00300000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP4   		((uint32_t)0x00400000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP5   		((uint32_t)0x00500000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP6   		((uint32_t)0x00600000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP7   		((uint32_t)0x00700000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP8   		((uint32_t)0x00800000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP9   		((uint32_t)0x00900000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP10  		((uint32_t)0x00A00000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP11  		((uint32_t)0x00B00000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP12  		((uint32_t)0x00C00000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP13  		((uint32_t)0x00D00000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP14  		((uint32_t)0x00E00000)
#define NVIC_IPR10_R_NVIC_OTG_FS_WKUP_IP15  		((uint32_t)0x00F00000)

#define NVIC_IPR10_NVIC_OTG_FS_WKUP_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP0    		((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP1    		((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP2    		((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP3    		((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP4    		((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP5    		((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP6    		((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP7    		((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP8    		((uint32_t)0x00000008)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP9    		((uint32_t)0x00000009)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP10   		((uint32_t)0x0000000A)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP11 			((uint32_t)0x0000000B)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP12   		((uint32_t)0x0000000C)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP13   		((uint32_t)0x0000000D)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR10_NVIC_OTG_FS_WKUP_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_MASK  		((uint32_t)0xF0000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_BIT    	(28)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP0   	((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP1   	((uint32_t)0x10000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP2   	((uint32_t)0x20000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP3   	((uint32_t)0x30000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP4   	((uint32_t)0x40000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP5     	((uint32_t)0x50000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP6  		((uint32_t)0x60000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP7  		((uint32_t)0x70000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP8  		((uint32_t)0x80000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP9  		((uint32_t)0x90000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP10 		((uint32_t)0xA0000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP11 		((uint32_t)0xB0000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP12  	((uint32_t)0xC0000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP13  	((uint32_t)0xD0000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP14  	((uint32_t)0xE0000000)
#define NVIC_IPR10_R_NVIC_TIM8_BRK_TIM12_IP15  	((uint32_t)0xF0000000)

#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_MASK     	((uint32_t)0x0000000F)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP0     	((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP1     	((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP2     	((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP3     	((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP4     	((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP5     	((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP6     	((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP7     	((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP8     	((uint32_t)0x00000008)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP9     	((uint32_t)0x00000009)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP10    	((uint32_t)0x0000000A)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP11    	((uint32_t)0x0000000B)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP12    	((uint32_t)0x0000000C)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP13    	((uint32_t)0x0000000D)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP14    	((uint32_t)0x0000000E)
#define NVIC_IPR10_NVIC_TIM8_BRK_TIM12_IP15    	((uint32_t)0x0000000F)
//--------




//Todo IPR11
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR11 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR11            (((IPR11_TypeDef*)(NVIC_BASE+NVIC_IPR11_OFFSET)))
#define NVIC_IPR11_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR11_OFFSET)))


//--------
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_MASK		((uint32_t)0x000000F0)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_BIT 		(4)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP0		((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP1		((uint32_t)0x00000010)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP2		((uint32_t)0x00000020)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP3		((uint32_t)0x00000030)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR11_R_NVIC_TIM8_UP_TIM13_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP4      	((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP5     		((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP6     		((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP7     		((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP8     		((uint32_t)0x00000008)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP9    		((uint32_t)0x00000009)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP10   		((uint32_t)0x0000000A)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP11    		((uint32_t)0x0000000B)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP12    		((uint32_t)0x0000000C)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP13    		((uint32_t)0x0000000D)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP14    		((uint32_t)0x0000000E)
#define NVIC_IPR11_NVIC_TIM8_UP_TIM13_IP15    		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_MASK	((uint32_t)0x0000F000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_BIT   	(12)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP0  	((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP1  	((uint32_t)0x00001000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP2  	((uint32_t)0x00002000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP3  	((uint32_t)0x00003000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP4  	((uint32_t)0x00004000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP5  	((uint32_t)0x00005000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP6  	((uint32_t)0x00006000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP7  	((uint32_t)0x00007000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP8  	((uint32_t)0x00008000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP9   ((uint32_t)0x00009000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP10  ((uint32_t)0x0000A000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP11  ((uint32_t)0x0000B000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP12  ((uint32_t)0x0000C000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP13 	((uint32_t)0x0000D000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP14 	((uint32_t)0x0000E000)
#define NVIC_IPR11_R_NVIC_TIM8_TRG_COM_TIM14_IP15 	((uint32_t)0x0000F000)

#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_MASK     ((uint32_t)0x0000000F)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP7     ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP8     ((uint32_t)0x00000008)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP9     ((uint32_t)0x00000009)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP10    ((uint32_t)0x0000000A)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP11    ((uint32_t)0x0000000B)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP12    ((uint32_t)0x0000000C)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP13    ((uint32_t)0x0000000D)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP14    ((uint32_t)0x0000000E)
#define NVIC_IPR11_NVIC_TIM8_TRG_COM_TIM14_IP15    ((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR11_R_NVIC_TIM8_CC_MASK   			((uint32_t)0x00F00000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_BIT    			(20)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP0		   		((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP1   			((uint32_t)0x00100000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP2   			((uint32_t)0x00200000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP3  	 		((uint32_t)0x00300000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP4   			((uint32_t)0x00400000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP5   			((uint32_t)0x00500000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP6  	 		((uint32_t)0x00600000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP7   			((uint32_t)0x00700000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP8   			((uint32_t)0x00800000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP9 		  		((uint32_t)0x00900000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP10  			((uint32_t)0x00A00000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP11  			((uint32_t)0x00B00000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP12  			((uint32_t)0x00C00000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP13  			((uint32_t)0x00D00000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP14  			((uint32_t)0x00E00000)
#define NVIC_IPR11_R_NVIC_TIM8_CC_IP15  			((uint32_t)0x00F00000)

#define NVIC_IPR11_NVIC_TIM8_CC_MASK 	    		((uint32_t)0x0000000F)
#define NVIC_IPR11_NVIC_TIM8_CC_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_TIM8_CC_IP1    			((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_TIM8_CC_IP2    			((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_TIM8_CC_IP3 		   		((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_TIM8_CC_IP4    			((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_TIM8_CC_IP5    			((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_TIM8_CC_IP6   	 			((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_TIM8_CC_IP7    			((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_TIM8_CC_IP8    			((uint32_t)0x00000008)
#define NVIC_IPR11_NVIC_TIM8_CC_IP9    			((uint32_t)0x00000009)
#define NVIC_IPR11_NVIC_TIM8_CC_IP10   			((uint32_t)0x0000000A)
#define NVIC_IPR11_NVIC_TIM8_CC_IP11 				((uint32_t)0x0000000B)
#define NVIC_IPR11_NVIC_TIM8_CC_IP12   			((uint32_t)0x0000000C)
#define NVIC_IPR11_NVIC_TIM8_CC_IP13 		  		((uint32_t)0x0000000D)
#define NVIC_IPR11_NVIC_TIM8_CC_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR11_NVIC_TIM8_CC_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_MASK  		((uint32_t)0xF0000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_BIT  	  	(28)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP1 	  	((uint32_t)0x10000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP2   		((uint32_t)0x20000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP3   		((uint32_t)0x30000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP4  	 	((uint32_t)0x40000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP5     	((uint32_t)0x50000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP6  		((uint32_t)0x60000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP7  		((uint32_t)0x70000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP8  		((uint32_t)0x80000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP9  		((uint32_t)0x90000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP10 		((uint32_t)0xA0000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP11 		((uint32_t)0xB0000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP12	  	((uint32_t)0xC0000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP13  		((uint32_t)0xD0000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP14 	 	((uint32_t)0xE0000000)
#define NVIC_IPR11_R_NVIC_DAM1_Stream7_IP15  		((uint32_t)0xF0000000)

#define NVIC_IPR11_NVIC_DAM1_Stream7_MASK 	    	((uint32_t)0x0000000F)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP0   	  	((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP2	     	((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP3   	  	((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP4     		((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP5	     	((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP6   	  	((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP7     		((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP8  	   		((uint32_t)0x00000008)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP9   	  	((uint32_t)0x00000009)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP10 	   		((uint32_t)0x0000000A)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP11  	  	((uint32_t)0x0000000B)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP12 		   	((uint32_t)0x0000000C)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP13    		((uint32_t)0x0000000D)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP14 		   	((uint32_t)0x0000000E)
#define NVIC_IPR11_NVIC_DAM1_Stream7_IP15   	 	((uint32_t)0x0000000F)
//--------

//Todo IPR12
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR12 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR12            (((IPR12_TypeDef*)(NVIC_BASE+NVIC_IPR12_OFFSET)))
#define NVIC_IPR12_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR12_OFFSET)))


//--------
#define NVIC_IPR12_R_NVIC_FMC_MASK     				((uint32_t)0x000000F0)
#define NVIC_IPR12_R_NVIC_FMC_BIT       			(4)
#define NVIC_IPR12_R_NVIC_FMC_IP0   				((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_FMC_IP1   				((uint32_t)0x00000010)
#define NVIC_IPR12_R_NVIC_FMC_IP2   				((uint32_t)0x00000020)
#define NVIC_IPR12_R_NVIC_FMC_IP3   				((uint32_t)0x00000030)
#define NVIC_IPR12_R_NVIC_FMC_IP4   				((uint32_t)0x00000040)
#define NVIC_IPR12_R_NVIC_FMC_IP5   				((uint32_t)0x00000050)
#define NVIC_IPR12_R_NVIC_FMC_IP6   				((uint32_t)0x00000060)
#define NVIC_IPR12_R_NVIC_FMC_IP7   				((uint32_t)0x00000070)
#define NVIC_IPR12_R_NVIC_FMC_IP8   				((uint32_t)0x00000080)
#define NVIC_IPR12_R_NVIC_FMC_IP9   				((uint32_t)0x00000090)
#define NVIC_IPR12_R_NVIC_FMC_IP10  				((uint32_t)0x000000A0)
#define NVIC_IPR12_R_NVIC_FMC_IP11  				((uint32_t)0x000000B0)
#define NVIC_IPR12_R_NVIC_FMC_IP12  				((uint32_t)0x000000C0)
#define NVIC_IPR12_R_NVIC_FMC_IP13  				((uint32_t)0x000000D0)
#define NVIC_IPR12_R_NVIC_FMC_IP14  				((uint32_t)0x000000E0)
#define NVIC_IPR12_R_NVIC_FMC_IP15  				((uint32_t)0x000000F0)

#define NVIC_IPR12_NVIC_FMC_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR12_NVIC_FMC_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_FMC_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_FMC_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_FMC_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_FMC_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_FMC_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_FMC_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_FMC_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_FMC_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR12_NVIC_FMC_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR12_NVIC_FMC_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR12_NVIC_FMC_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR12_NVIC_FMC_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR12_NVIC_FMC_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR12_NVIC_FMC_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR12_NVIC_FMC_IP15     				((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR12_R_NVIC_SDIO_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR12_R_NVIC_SDIO_BIT       			(12)
#define NVIC_IPR12_R_NVIC_SDIO_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_SDIO_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR12_R_NVIC_SDIO_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR12_R_NVIC_SDIO_IP3   				((uint32_t)0x00003000)
#define NVIC_IPR12_R_NVIC_SDIO_IP4   				((uint32_t)0x00004000)
#define NVIC_IPR12_R_NVIC_SDIO_IP5   				((uint32_t)0x00005000)
#define NVIC_IPR12_R_NVIC_SDIO_IP6   				((uint32_t)0x00006000)
#define NVIC_IPR12_R_NVIC_SDIO_IP7   				((uint32_t)0x00007000)
#define NVIC_IPR12_R_NVIC_SDIO_IP8  				((uint32_t)0x00008000)
#define NVIC_IPR12_R_NVIC_SDIO_IP9   				((uint32_t)0x00009000)
#define NVIC_IPR12_R_NVIC_SDIO_IP10  				((uint32_t)0x0000A000)
#define NVIC_IPR12_R_NVIC_SDIO_IP11  				((uint32_t)0x0000B000)
#define NVIC_IPR12_R_NVIC_SDIO_IP12  				((uint32_t)0x0000C000)
#define NVIC_IPR12_R_NVIC_SDIO_IP13 				((uint32_t)0x0000D000)
#define NVIC_IPR12_R_NVIC_SDIO_IP14 				((uint32_t)0x0000E000)
#define NVIC_IPR12_R_NVIC_SDIO_IP15 				((uint32_t)0x0000F000)

#define NVIC_IPR12_NVIC_SDIO_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR12_NVIC_SDIO_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_SDIO_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_SDIO_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_SDIO_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_SDIO_IP4     				((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_SDIO_IP5     				((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_SDIO_IP6     				((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_SDIO_IP7     				((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_SDIO_IP8     				((uint32_t)0x00000008)
#define NVIC_IPR12_NVIC_SDIO_IP9     				((uint32_t)0x00000009)
#define NVIC_IPR12_NVIC_SDIO_IP10    				((uint32_t)0x0000000A)
#define NVIC_IPR12_NVIC_SDIO_IP11    				((uint32_t)0x0000000B)
#define NVIC_IPR12_NVIC_SDIO_IP12    				((uint32_t)0x0000000C)
#define NVIC_IPR12_NVIC_SDIO_IP13    				((uint32_t)0x0000000D)
#define NVIC_IPR12_NVIC_SDIO_IP14    				((uint32_t)0x0000000E)
#define NVIC_IPR12_NVIC_SDIO_IP15    				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR12_R_NVIC_TIM5_MASK   				((uint32_t)0x00F00000)
#define NVIC_IPR12_R_NVIC_TIM5_BIT       			(20)
#define NVIC_IPR12_R_NVIC_TIM5_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_TIM5_IP1      			((uint32_t)0x00100000)
#define NVIC_IPR12_R_NVIC_TIM5_IP2      			((uint32_t)0x00200000)
#define NVIC_IPR12_R_NVIC_TIM5_IP3      			((uint32_t)0x00300000)
#define NVIC_IPR12_R_NVIC_TIM5_IP4      			((uint32_t)0x00400000)
#define NVIC_IPR12_R_NVIC_TIM5_IP5      			((uint32_t)0x00500000)
#define NVIC_IPR12_R_NVIC_TIM5_IP6      			((uint32_t)0x00600000)
#define NVIC_IPR12_R_NVIC_TIM5_IP7      			((uint32_t)0x00700000)
#define NVIC_IPR12_R_NVIC_TIM5_IP8      			((uint32_t)0x00800000)
#define NVIC_IPR12_R_NVIC_TIM5_IP9      			((uint32_t)0x00900000)
#define NVIC_IPR12_R_NVIC_TIM5_IP10     			((uint32_t)0x00A00000)
#define NVIC_IPR12_R_NVIC_TIM5_IP11     			((uint32_t)0x00B00000)
#define NVIC_IPR12_R_NVIC_TIM5_IP12     			((uint32_t)0x00C00000)
#define NVIC_IPR12_R_NVIC_TIM5_IP13     			((uint32_t)0x00D00000)
#define NVIC_IPR12_R_NVIC_TIM5_IP14     			((uint32_t)0x00E00000)
#define NVIC_IPR12_R_NVIC_TIM5_IP15     			((uint32_t)0x00F00000)

#define NVIC_IPR12_NVIC_TIM5_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR12_NVIC_TIM5_IP0    				((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_TIM5_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_TIM5_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_TIM5_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_TIM5_IP4     				((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_TIM5_IP5     				((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_TIM5_IP6     				((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_TIM5_IP7     				((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_TIM5_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR12_NVIC_TIM5_IP9     				((uint32_t)0x00000009)
#define NVIC_IPR12_NVIC_TIM5_IP10    				((uint32_t)0x0000000A)
#define NVIC_IPR12_NVIC_TIM5_IP11 	   				((uint32_t)0x0000000B)
#define NVIC_IPR12_NVIC_TIM5_IP12   	  			((uint32_t)0x0000000C)
#define NVIC_IPR12_NVIC_TIM5_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR12_NVIC_TIM5_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR12_NVIC_TIM5_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR12_R_NVIC_SPI3_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR12_R_NVIC_SPI3_BIT       			(28)
#define NVIC_IPR12_R_NVIC_SPI3_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP4    				((uint32_t)0x40000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR12_R_NVIC_SPI3_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR12_NVIC_SPI3_MASK  	    			((uint32_t)0x0000000F)
#define NVIC_IPR12_NVIC_SPI3_IP0   	   			((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_SPI3_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_SPI3_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_SPI3_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_SPI3_IP4  	    			((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_SPI3_IP5   	   			((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_SPI3_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_SPI3_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_SPI3_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR12_NVIC_SPI3_IP9    	  			((uint32_t)0x00000009)
#define NVIC_IPR12_NVIC_SPI3_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR12_NVIC_SPI3_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR12_NVIC_SPI3_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR12_NVIC_SPI3_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR12_NVIC_SPI3_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR12_NVIC_SPI3_IP15     				((uint32_t)0x0000000F)
//--------


//Todo IPR13
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR13 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR13            (((IPR13_TypeDef*)(NVIC_BASE+NVIC_IPR13_OFFSET)))
#define NVIC_IPR13_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR13_OFFSET)))


//--------
#define NVIC_IPR13_R_NVIC_UART4_MASK     			((uint32_t)0x000000F0)
#define NVIC_IPR13_R_NVIC_UART4_BIT       			(4)
#define NVIC_IPR13_R_NVIC_UART4_IP0   				((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_UART4_IP1   				((uint32_t)0x00000010)
#define NVIC_IPR13_R_NVIC_UART4_IP2   				((uint32_t)0x00000020)
#define NVIC_IPR13_R_NVIC_UART4_IP3   				((uint32_t)0x00000030)
#define NVIC_IPR13_R_NVIC_UART4_IP4   				((uint32_t)0x00000040)
#define NVIC_IPR13_R_NVIC_UART4_IP5   				((uint32_t)0x00000050)
#define NVIC_IPR13_R_NVIC_UART4_IP6   				((uint32_t)0x00000060)
#define NVIC_IPR13_R_NVIC_UART4_IP7   				((uint32_t)0x00000070)
#define NVIC_IPR13_R_NVIC_UART4_IP8   				((uint32_t)0x00000080)
#define NVIC_IPR13_R_NVIC_UART4_IP9   				((uint32_t)0x00000090)
#define NVIC_IPR13_R_NVIC_UART4_IP10  				((uint32_t)0x000000A0)
#define NVIC_IPR13_R_NVIC_UART4_IP11  				((uint32_t)0x000000B0)
#define NVIC_IPR13_R_NVIC_UART4_IP12  				((uint32_t)0x000000C0)
#define NVIC_IPR13_R_NVIC_UART4_IP13  				((uint32_t)0x000000D0)
#define NVIC_IPR13_R_NVIC_UART4_IP14  				((uint32_t)0x000000E0)
#define NVIC_IPR13_R_NVIC_UART4_IP15  				((uint32_t)0x000000F0)

#define NVIC_IPR13_NVIC_UART4_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR13_NVIC_UART4_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_UART4_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_UART4_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_UART4_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_UART4_IP4     				((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_UART4_IP5     				((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_UART4_IP6     				((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_UART4_IP7     				((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_UART4_IP8     				((uint32_t)0x00000008)
#define NVIC_IPR13_NVIC_UART4_IP9     				((uint32_t)0x00000009)
#define NVIC_IPR13_NVIC_UART4_IP10    				((uint32_t)0x0000000A)
#define NVIC_IPR13_NVIC_UART4_IP11    				((uint32_t)0x0000000B)
#define NVIC_IPR13_NVIC_UART4_IP12    				((uint32_t)0x0000000C)
#define NVIC_IPR13_NVIC_UART4_IP13    				((uint32_t)0x0000000D)
#define NVIC_IPR13_NVIC_UART4_IP14    				((uint32_t)0x0000000E)
#define NVIC_IPR13_NVIC_UART4_IP15    				((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR13_R_NVIC_UART5_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR13_R_NVIC_UART5_BIT       			(12)
#define NVIC_IPR13_R_NVIC_UART5_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_UART5_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR13_R_NVIC_UART5_IP2      			((uint32_t)0x00002000)
#define NVIC_IPR13_R_NVIC_UART5_IP3   				((uint32_t)0x00003000)
#define NVIC_IPR13_R_NVIC_UART5_IP4   				((uint32_t)0x00004000)
#define NVIC_IPR13_R_NVIC_UART5_IP5   				((uint32_t)0x00005000)
#define NVIC_IPR13_R_NVIC_UART5_IP6   				((uint32_t)0x00006000)
#define NVIC_IPR13_R_NVIC_UART5_IP7   				((uint32_t)0x00007000)
#define NVIC_IPR13_R_NVIC_UART5_IP8  				((uint32_t)0x00008000)
#define NVIC_IPR13_R_NVIC_UART5_IP9   				((uint32_t)0x00009000)
#define NVIC_IPR13_R_NVIC_UART5_IP10  				((uint32_t)0x0000A000)
#define NVIC_IPR13_R_NVIC_UART5_IP11  				((uint32_t)0x0000B000)
#define NVIC_IPR13_R_NVIC_UART5_IP12  				((uint32_t)0x0000C000)
#define NVIC_IPR13_R_NVIC_UART5_IP13 				((uint32_t)0x0000D000)
#define NVIC_IPR13_R_NVIC_UART5_IP14 				((uint32_t)0x0000E000)
#define NVIC_IPR13_R_NVIC_UART5_IP15 				((uint32_t)0x0000F000)

#define NVIC_IPR13_NVIC_UART5_MASK     				((uint32_t)0x0000000F)
#define NVIC_IPR13_NVIC_UART5_IP0     				((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_UART5_IP1     				((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_UART5_IP2     				((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_UART5_IP3     				((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_UART5_IP4     				((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_UART5_IP5     				((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_UART5_IP6     				((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_UART5_IP7     				((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_UART5_IP8     				((uint32_t)0x00000008)
#define NVIC_IPR13_NVIC_UART5_IP9     				((uint32_t)0x00000009)
#define NVIC_IPR13_NVIC_UART5_IP10    				((uint32_t)0x0000000A)
#define NVIC_IPR13_NVIC_UART5_IP11    				((uint32_t)0x0000000B)
#define NVIC_IPR13_NVIC_UART5_IP12    				((uint32_t)0x0000000C)
#define NVIC_IPR13_NVIC_UART5_IP13    				((uint32_t)0x0000000D)
#define NVIC_IPR13_NVIC_UART5_IP14    				((uint32_t)0x0000000E)
#define NVIC_IPR13_NVIC_UART5_IP15    				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR13_R_NVIC_TIM6_DAC_MASK   			((uint32_t)0x00F00000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_BIT     			(20)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP1    			((uint32_t)0x00100000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP2    			((uint32_t)0x00200000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP3    			((uint32_t)0x00300000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP4   			((uint32_t)0x00400000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP5   			((uint32_t)0x00500000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP6   			((uint32_t)0x00600000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP7   			((uint32_t)0x00700000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP8    			((uint32_t)0x00800000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP9   			((uint32_t)0x00900000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP10   			((uint32_t)0x00A00000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP11   			((uint32_t)0x00B00000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP12   			((uint32_t)0x00C00000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP13   			((uint32_t)0x00D00000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP14   			((uint32_t)0x00E00000)
#define NVIC_IPR13_R_NVIC_TIM6_DAC_IP15   			((uint32_t)0x00F00000)

#define NVIC_IPR13_NVIC_TIM6_DAC_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP1    			((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP2    			((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP3    			((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP4    			((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP5    			((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP6    			((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP7    			((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP9    			((uint32_t)0x00000009)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP10   			((uint32_t)0x0000000A)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP11 	  			((uint32_t)0x0000000B)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR13_NVIC_TIM6_DAC_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR13_R_NVIC_TIM7_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR13_R_NVIC_TIM7_BIT       			(28)
#define NVIC_IPR13_R_NVIC_TIM7_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP4    				((uint32_t)0x40000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR13_R_NVIC_TIM7_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR13_NVIC_TIM7_MASK   	   			((uint32_t)0x0000000F)
#define NVIC_IPR13_NVIC_TIM7_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_TIM7_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_TIM7_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_TIM7_IP3 	     			((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_TIM7_IP4   	   			((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_TIM7_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_TIM7_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_TIM7_IP7  	    			((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_TIM7_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR13_NVIC_TIM7_IP9   	   			((uint32_t)0x00000009)
#define NVIC_IPR13_NVIC_TIM7_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR13_NVIC_TIM7_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR13_NVIC_TIM7_IP12    	 			((uint32_t)0x0000000C)
#define NVIC_IPR13_NVIC_TIM7_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR13_NVIC_TIM7_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR13_NVIC_TIM7_IP15     				((uint32_t)0x0000000F)
//--------


//Todo IPR14
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR14 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR14            (((IPR14_TypeDef*)(NVIC_BASE+NVIC_IPR14_OFFSET)))
#define NVIC_IPR14_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR14_OFFSET)))


//--------
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_MASK         ((uint32_t)0x000000F0)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_BIT       	(4)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR14_R_NVIC_DMA2_Stream0_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR14_NVIC_DMA2_Stream0_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR14_NVIC_DMA2_Stream0_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_MASK      	((uint32_t)0x0000F000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_BIT       	(12)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP1      	((uint32_t)0x00001000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP2      	((uint32_t)0x00002000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP3     	((uint32_t)0x00003000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP4     	((uint32_t)0x00004000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP5     	((uint32_t)0x00005000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP6     	((uint32_t)0x00006000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP7     	((uint32_t)0x00007000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP8     	((uint32_t)0x00008000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP9     	((uint32_t)0x00009000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP10    	((uint32_t)0x0000A000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP11    	((uint32_t)0x0000B000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP12    	((uint32_t)0x0000C000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP13    	((uint32_t)0x0000D000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP14    	((uint32_t)0x0000E000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream1_IP15    	((uint32_t)0x0000F000)

#define NVIC_IPR14_NVIC_DMA2_Stream1_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR14_NVIC_DMA2_Stream1_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_MASK     	((uint32_t)0x00F00000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_BIT       	(20)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP1      	((uint32_t)0x00100000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP2      	((uint32_t)0x00200000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP3      	((uint32_t)0x00300000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP4      	((uint32_t)0x00400000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP5      	((uint32_t)0x00500000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP6      	((uint32_t)0x00600000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP7      	((uint32_t)0x00700000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP8      	((uint32_t)0x00800000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP9      	((uint32_t)0x00900000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP10     	((uint32_t)0x00A00000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP11     	((uint32_t)0x00B00000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP12     	((uint32_t)0x00C00000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP13     	((uint32_t)0x00D00000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP14     	((uint32_t)0x00E00000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream2_IP15     	((uint32_t)0x00F00000)

#define NVIC_IPR14_NVIC_DMA2_Stream2_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR14_NVIC_DMA2_Stream2_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_MASK      	((uint32_t)0xF0000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_BIT       	(28)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP1      	((uint32_t)0x10000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP2      	((uint32_t)0x20000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP3      	((uint32_t)0x30000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP4    		((uint32_t)0x40000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP5     	((uint32_t)0x50000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP6  		((uint32_t)0x60000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP7  		((uint32_t)0x70000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP8  		((uint32_t)0x80000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP9  		((uint32_t)0x90000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP10 		((uint32_t)0xA0000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP11 		((uint32_t)0xB0000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP12     	((uint32_t)0xC0000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP13    	((uint32_t)0xD0000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP14     	((uint32_t)0xE0000000)
#define NVIC_IPR14_R_NVIC_DMA2_Stream3_IP15     	((uint32_t)0xF0000000)

#define NVIC_IPR14_NVIC_DMA2_Stream3_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR14_NVIC_DMA2_Stream3_IP15     		((uint32_t)0x0000000F)
//--------



//Todo IPR15
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR15 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR15            (((IPR15_TypeDef*)(NVIC_BASE+NVIC_IPR15_OFFSET)))
#define NVIC_IPR15_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR15_OFFSET)))


//--------
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_MASK     	((uint32_t)0x000000F0)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_BIT       	(4)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR15_R_NVIC_DMA2_Stream4_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR15_NVIC_DMA2_Stream4_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR15_NVIC_DMA2_Stream4_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR15_R_NVIC_ETH_MASK  	    		((uint32_t)0x0000F000)
#define NVIC_IPR15_R_NVIC_ETH_BIT     		  		(12)
#define NVIC_IPR15_R_NVIC_ETH_IP0    			  	((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_ETH_IP1      			((uint32_t)0x00001000)
#define NVIC_IPR15_R_NVIC_ETH_IP2     			 	((uint32_t)0x00002000)
#define NVIC_IPR15_R_NVIC_ETH_IP3     				((uint32_t)0x00003000)
#define NVIC_IPR15_R_NVIC_ETH_IP4     				((uint32_t)0x00004000)
#define NVIC_IPR15_R_NVIC_ETH_IP5     				((uint32_t)0x00005000)
#define NVIC_IPR15_R_NVIC_ETH_IP6     				((uint32_t)0x00006000)
#define NVIC_IPR15_R_NVIC_ETH_IP7     				((uint32_t)0x00007000)
#define NVIC_IPR15_R_NVIC_ETH_IP8     				((uint32_t)0x00008000)
#define NVIC_IPR15_R_NVIC_ETH_IP9     				((uint32_t)0x00009000)
#define NVIC_IPR15_R_NVIC_ETH_IP10    				((uint32_t)0x0000A000)
#define NVIC_IPR15_R_NVIC_ETH_IP11    				((uint32_t)0x0000B000)
#define NVIC_IPR15_R_NVIC_ETH_IP12    				((uint32_t)0x0000C000)
#define NVIC_IPR15_R_NVIC_ETH_IP13    				((uint32_t)0x0000D000)
#define NVIC_IPR15_R_NVIC_ETH_IP14    				((uint32_t)0x0000E000)
#define NVIC_IPR15_R_NVIC_ETH_IP15    				((uint32_t)0x0000F000)

#define NVIC_IPR15_NVIC_ETH_MASK      				((uint32_t)0x0000000F)
#define NVIC_IPR15_NVIC_ETH_IP0      				((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_ETH_IP1      				((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_ETH_IP2      				((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_ETH_IP3      				((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_ETH_IP4      				((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_ETH_IP5      				((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_ETH_IP6      				((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_ETH_IP7      				((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_ETH_IP8      				((uint32_t)0x00000008)
#define NVIC_IPR15_NVIC_ETH_IP9      				((uint32_t)0x00000009)
#define NVIC_IPR15_NVIC_ETH_IP10     				((uint32_t)0x0000000A)
#define NVIC_IPR15_NVIC_ETH_IP11     				((uint32_t)0x0000000B)
#define NVIC_IPR15_NVIC_ETH_IP12     				((uint32_t)0x0000000C)
#define NVIC_IPR15_NVIC_ETH_IP13     				((uint32_t)0x0000000D)
#define NVIC_IPR15_NVIC_ETH_IP14     				((uint32_t)0x0000000E)
#define NVIC_IPR15_NVIC_ETH_IP15     				((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR15_R_NVIC_ETH_WKUP_MASK  			((uint32_t)0x00F00000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_BIT   			(20)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP0  			((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP1     		((uint32_t)0x00100000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP2      		((uint32_t)0x00200000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP3      		((uint32_t)0x00300000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP4      		((uint32_t)0x00400000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP5      		((uint32_t)0x00500000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP6      		((uint32_t)0x00600000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP7      		((uint32_t)0x00700000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP8      		((uint32_t)0x00800000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP9      		((uint32_t)0x00900000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP10     		((uint32_t)0x00A00000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP11     		((uint32_t)0x00B00000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP12     		((uint32_t)0x00C00000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP14     		((uint32_t)0x00E00000)
#define NVIC_IPR15_R_NVIC_ETH_WKUP_IP15     		((uint32_t)0x00F00000)

#define NVIC_IPR15_NVIC_ETH_WKUP_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR15_NVIC_ETH_WKUP_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR15_R_NVIC_CAN2_TX_MASK      		((uint32_t)0xF0000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_BIT       		(28)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP1      		((uint32_t)0x10000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP2      		((uint32_t)0x20000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP3      		((uint32_t)0x30000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP6  			((uint32_t)0x60000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP7  			((uint32_t)0x70000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP8  			((uint32_t)0x80000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP9  			((uint32_t)0x90000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP10 			((uint32_t)0xA0000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP11 			((uint32_t)0xB0000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP12     		((uint32_t)0xC0000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP14     		((uint32_t)0xE0000000)
#define NVIC_IPR15_R_NVIC_CAN2_TX_IP15     		((uint32_t)0xF0000000)

#define NVIC_IPR15_NVIC_CAN2_TX_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR15_NVIC_CAN2_TX_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_CAN2_TX_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_CAN2_TX_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_CAN2_TX_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_CAN2_TX_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_CAN2_TX_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_CAN2_TX_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_CAN2_TX_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_CAN2_TX_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR15_NVIC_CAN2_TX_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR15_NVIC_CAN2_TX_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR15_NVIC_CAN2_TX_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR15_NVIC_CAN2_TX_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR15_NVIC_CAN2_TX_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR15_NVIC_CAN2_TX_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR15_NVIC_CAN2_TX_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR16
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR16 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR16            (((IPR16_TypeDef*)(NVIC_BASE+NVIC_IPR16_OFFSET)))
#define NVIC_IPR16_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR16_OFFSET)))


//--------
#define NVIC_IPR16_R_NVIC_CAN2_RX0_MASK     		((uint32_t)0x000000F0)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_BIT       		(4)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP2   			((uint32_t)0x00000020)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP5   			((uint32_t)0x00000050)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP8   			((uint32_t)0x00000080)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP11  			((uint32_t)0x000000B0)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP14  			((uint32_t)0x000000E0)
#define NVIC_IPR16_R_NVIC_CAN2_RX0_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR16_NVIC_CAN2_RX0_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR16_NVIC_CAN2_RX0_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR16_R_NVIC_CAN2_RX1_MASK      		((uint32_t)0x0000F000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_BIT       		(12)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP1      		((uint32_t)0x00001000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP2      		((uint32_t)0x00002000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP3    			((uint32_t)0x00003000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP4    			((uint32_t)0x00004000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP5    			((uint32_t)0x00005000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP6    			((uint32_t)0x00006000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP7    			((uint32_t)0x00007000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP8    			((uint32_t)0x00008000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP9    			((uint32_t)0x00009000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP10   			((uint32_t)0x0000A000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP11   			((uint32_t)0x0000B000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP12   			((uint32_t)0x0000C000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP13   			((uint32_t)0x0000D000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP14   			((uint32_t)0x0000E000)
#define NVIC_IPR16_R_NVIC_CAN2_RX1_IP15   			((uint32_t)0x0000F000)

#define NVIC_IPR16_NVIC_CAN2_RX1_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR16_NVIC_CAN2_RX1_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR16_R_NVIC_CAN2_SCE_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_BIT       		(20)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP1      		((uint32_t)0x00100000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP2      		((uint32_t)0x00200000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP3      		((uint32_t)0x00300000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP4      		((uint32_t)0x00400000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP5      		((uint32_t)0x00500000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP6      		((uint32_t)0x00600000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP7      		((uint32_t)0x00700000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP8      		((uint32_t)0x00800000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP9      		((uint32_t)0x00900000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP10     		((uint32_t)0x00A00000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP11     		((uint32_t)0x00B00000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP12     		((uint32_t)0x00C00000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP14     		((uint32_t)0x00E00000)
#define NVIC_IPR16_R_NVIC_CAN2_SCE_IP15     		((uint32_t)0x00F00000)

#define NVIC_IPR16_NVIC_CAN2_SCE_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR16_NVIC_CAN2_SCE_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR16_R_NVIC_OTG_FS_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_BIT       			(28)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR16_R_NVIC_OTG_FS_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR16_NVIC_OTG_FS_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR16_NVIC_OTG_FS_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR16_NVIC_OTG_FS_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR16_NVIC_OTG_FS_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR16_NVIC_OTG_FS_IP3      			((uint32_t)0x00000003)
#define NVIC_IPR16_NVIC_OTG_FS_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR16_NVIC_OTG_FS_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR16_NVIC_OTG_FS_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR16_NVIC_OTG_FS_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR16_NVIC_OTG_FS_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR16_NVIC_OTG_FS_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR16_NVIC_OTG_FS_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR16_NVIC_OTG_FS_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR16_NVIC_OTG_FS_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR16_NVIC_OTG_FS_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR16_NVIC_OTG_FS_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR16_NVIC_OTG_FS_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR17
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR17 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR17            (((IPR17_TypeDef*)(NVIC_BASE+NVIC_IPR17_OFFSET)))
#define NVIC_IPR17_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR17_OFFSET)))


//--------
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_MASK     	((uint32_t)0x000000F0)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_BIT       	(4)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR17_R_NVIC_DMA2_Stream5_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR17_NVIC_DMA2_Stream5_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR17_NVIC_DMA2_Stream5_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_MASK      	((uint32_t)0x0000F000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_BIT       	(12)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP1      	((uint32_t)0x00001000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP2      	((uint32_t)0x00002000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP3    		((uint32_t)0x00003000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP4    		((uint32_t)0x00004000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP5    		((uint32_t)0x00005000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP6    		((uint32_t)0x00006000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP7    		((uint32_t)0x00007000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP8    		((uint32_t)0x00008000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP9    		((uint32_t)0x00009000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP10   		((uint32_t)0x0000A000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP11   		((uint32_t)0x0000B000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP12   		((uint32_t)0x0000C000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP13   		((uint32_t)0x0000D000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP14   		((uint32_t)0x0000E000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream6_IP15   		((uint32_t)0x0000F000)

#define NVIC_IPR17_NVIC_DMA2_Stream6_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR17_NVIC_DMA2_Stream6_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_MASK     	((uint32_t)0x00F00000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_BIT       	(20)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP1      	((uint32_t)0x00100000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP2      	((uint32_t)0x00200000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP3      	((uint32_t)0x00300000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP4      	((uint32_t)0x00400000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP5      	((uint32_t)0x00500000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP6      	((uint32_t)0x00600000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP7      	((uint32_t)0x00700000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP8      	((uint32_t)0x00800000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP9      	((uint32_t)0x00900000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP10     	((uint32_t)0x00A00000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP11     	((uint32_t)0x00B00000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP12     	((uint32_t)0x00C00000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP13     	((uint32_t)0x00D00000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP14     	((uint32_t)0x00E00000)
#define NVIC_IPR17_R_NVIC_DMA2_Stream7_IP15     	((uint32_t)0x00F00000)

#define NVIC_IPR17_NVIC_DMA2_Stream7_MASK      		((uint32_t)0x0000000F)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP3      		((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR17_NVIC_DMA2_Stream7_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR17_R_NVIC_USART6_MASK      			((uint32_t)0xF0000000)
#define NVIC_IPR17_R_NVIC_USART6_BIT       			(28)
#define NVIC_IPR17_R_NVIC_USART6_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR17_R_NVIC_USART6_IP1      			((uint32_t)0x10000000)
#define NVIC_IPR17_R_NVIC_USART6_IP2      			((uint32_t)0x20000000)
#define NVIC_IPR17_R_NVIC_USART6_IP3      			((uint32_t)0x30000000)
#define NVIC_IPR17_R_NVIC_USART6_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR17_R_NVIC_USART6_IP5     			((uint32_t)0x50000000)
#define NVIC_IPR17_R_NVIC_USART6_IP6  				((uint32_t)0x60000000)
#define NVIC_IPR17_R_NVIC_USART6_IP7  				((uint32_t)0x70000000)
#define NVIC_IPR17_R_NVIC_USART6_IP8  				((uint32_t)0x80000000)
#define NVIC_IPR17_R_NVIC_USART6_IP9  				((uint32_t)0x90000000)
#define NVIC_IPR17_R_NVIC_USART6_IP10 				((uint32_t)0xA0000000)
#define NVIC_IPR17_R_NVIC_USART6_IP11 				((uint32_t)0xB0000000)
#define NVIC_IPR17_R_NVIC_USART6_IP12     			((uint32_t)0xC0000000)
#define NVIC_IPR17_R_NVIC_USART6_IP13    			((uint32_t)0xD0000000)
#define NVIC_IPR17_R_NVIC_USART6_IP14     			((uint32_t)0xE0000000)
#define NVIC_IPR17_R_NVIC_USART6_IP15     			((uint32_t)0xF0000000)

#define NVIC_IPR17_NVIC_USART6_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR17_NVIC_USART6_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR17_NVIC_USART6_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR17_NVIC_USART6_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR17_NVIC_USART6_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR17_NVIC_USART6_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR17_NVIC_USART6_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR17_NVIC_USART6_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR17_NVIC_USART6_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR17_NVIC_USART6_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR17_NVIC_USART6_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR17_NVIC_USART6_IP10    	 		((uint32_t)0x0000000A)
#define NVIC_IPR17_NVIC_USART6_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR17_NVIC_USART6_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR17_NVIC_USART6_IP13   		  		((uint32_t)0x0000000D)
#define NVIC_IPR17_NVIC_USART6_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR17_NVIC_USART6_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR18
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR18 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR18            (((IPR18_TypeDef*)(NVIC_BASE+NVIC_IPR18_OFFSET)))
#define NVIC_IPR18_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR18_OFFSET)))


//--------
#define NVIC_IPR18_R_NVIC_I2C3_EV_MASK     			((uint32_t)0x000000F0)
#define NVIC_IPR18_R_NVIC_I2C3_EV_BIT       		(4)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP2   			((uint32_t)0x00000020)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP3		   		((uint32_t)0x00000030)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP5   			((uint32_t)0x00000050)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP6		   		((uint32_t)0x00000060)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP8   			((uint32_t)0x00000080)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP9		   		((uint32_t)0x00000090)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP11  			((uint32_t)0x000000B0)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP14  			((uint32_t)0x000000E0)
#define NVIC_IPR18_R_NVIC_I2C3_EV_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR18_NVIC_I2C3_EV_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR18_NVIC_I2C3_EV_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_I2C3_EV_IP1 	    		((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_I2C3_EV_IP2    	 		((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_I2C3_EV_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_I2C3_EV_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_I2C3_EV_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_I2C3_EV_IP6    	  		((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_I2C3_EV_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_I2C3_EV_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR18_NVIC_I2C3_EV_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR18_NVIC_I2C3_EV_IP10   	  		((uint32_t)0x0000000A)
#define NVIC_IPR18_NVIC_I2C3_EV_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR18_NVIC_I2C3_EV_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR18_NVIC_I2C3_EV_IP13 	    		((uint32_t)0x0000000D)
#define NVIC_IPR18_NVIC_I2C3_EV_IP14   	  		((uint32_t)0x0000000E)
#define NVIC_IPR18_NVIC_I2C3_EV_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR18_R_NVIC_I2C3_ER_MASK  	    	((uint32_t)0x0000F000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_BIT       		(12)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP0      		((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP1		      	((uint32_t)0x00001000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP2      		((uint32_t)0x00002000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP3    			((uint32_t)0x00003000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP4 	   			((uint32_t)0x00004000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP5  	  		((uint32_t)0x00005000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP6 		   		((uint32_t)0x00006000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP7    			((uint32_t)0x00007000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP8    			((uint32_t)0x00008000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP9    			((uint32_t)0x00009000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP10   			((uint32_t)0x0000A000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP11   			((uint32_t)0x0000B000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP12   			((uint32_t)0x0000C000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP13   			((uint32_t)0x0000D000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP14   			((uint32_t)0x0000E000)
#define NVIC_IPR18_R_NVIC_I2C3_ER_IP15   			((uint32_t)0x0000F000)

#define NVIC_IPR18_NVIC_I2C3_ER_MASK  	    		((uint32_t)0x0000000F)
#define NVIC_IPR18_NVIC_I2C3_ER_IP0    	  		((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_I2C3_ER_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_I2C3_ER_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_I2C3_ER_IP3  	    		((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_I2C3_ER_IP4    	  		((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_I2C3_ER_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_I2C3_ER_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_I2C3_ER_IP7 	     		((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_I2C3_ER_IP8    	  		((uint32_t)0x00000008)
#define NVIC_IPR18_NVIC_I2C3_ER_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR18_NVIC_I2C3_ER_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR18_NVIC_I2C3_ER_IP11  	   			((uint32_t)0x0000000B)
#define NVIC_IPR18_NVIC_I2C3_ER_IP12   	  		((uint32_t)0x0000000C)
#define NVIC_IPR18_NVIC_I2C3_ER_IP13 	    		((uint32_t)0x0000000D)
#define NVIC_IPR18_NVIC_I2C3_ER_IP14   	  		((uint32_t)0x0000000E)
#define NVIC_IPR18_NVIC_I2C3_ER_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_MASK     	((uint32_t)0x00F00000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_BIT       	(20)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP1      	((uint32_t)0x00100000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP2      	((uint32_t)0x00200000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP3      	((uint32_t)0x00300000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP4      	((uint32_t)0x00400000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP5      	((uint32_t)0x00500000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP6      	((uint32_t)0x00600000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP7      	((uint32_t)0x00700000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP8      	((uint32_t)0x00800000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP9      	((uint32_t)0x00900000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP10     	((uint32_t)0x00A00000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP11     	((uint32_t)0x00B00000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP12     	((uint32_t)0x00C00000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP13     	((uint32_t)0x00D00000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP14     	((uint32_t)0x00E00000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_OUT_IP15     	((uint32_t)0x00F00000)

#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_MASK    		((uint32_t)0x0000000F)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP1    		((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP2    		((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP3    		((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP4    		((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP5    		((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP6     	((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP7     	((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP8     	((uint32_t)0x00000008)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP9     	((uint32_t)0x00000009)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP10    	((uint32_t)0x0000000A)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP11    	((uint32_t)0x0000000B)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP12    	((uint32_t)0x0000000C)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP13    	((uint32_t)0x0000000D)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP14    	((uint32_t)0x0000000E)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_OUT_IP15    	((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_MASK    	((uint32_t)0xF0000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_BIT       	(28)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP0      	((uint32_t)0x00000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP1      	((uint32_t)0x10000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP2      	((uint32_t)0x20000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP3      	((uint32_t)0x30000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP4    	((uint32_t)0x40000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP5     	((uint32_t)0x50000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP6  		((uint32_t)0x60000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP7  		((uint32_t)0x70000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP8  		((uint32_t)0x80000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP9  		((uint32_t)0x90000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP10 		((uint32_t)0xA0000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP11 		((uint32_t)0xB0000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP12     	((uint32_t)0xC0000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP13    	((uint32_t)0xD0000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP14     	((uint32_t)0xE0000000)
#define NVIC_IPR18_R_NVIC_OTG_HS_EP1_IN_IP15     	((uint32_t)0xF0000000)

#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP3 	   		((uint32_t)0x00000003)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP4     		((uint32_t)0x00000004)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP5 	   		((uint32_t)0x00000005)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP6     		((uint32_t)0x00000006)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP7     		((uint32_t)0x00000007)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP8     		((uint32_t)0x00000008)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP9 	   		((uint32_t)0x00000009)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP10    		((uint32_t)0x0000000A)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP11    		((uint32_t)0x0000000B)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP12    		((uint32_t)0x0000000C)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP13   		((uint32_t)0x0000000D)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP14     	((uint32_t)0x0000000E)
#define NVIC_IPR18_NVIC_OTG_HS_EP1_IN_IP15     	((uint32_t)0x0000000F)
//--------



//Todo IPR19
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR19 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR19            (((IPR19_TypeDef*)(NVIC_BASE+NVIC_IPR19_OFFSET)))
#define NVIC_IPR19_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR19_OFFSET)))


//--------
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_MASK     		((uint32_t)0x000000F0)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_BIT       	(4)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR19_R_NVIC_OTG_HS_WKUP_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR19_NVIC_OTG_HS_WKUP_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR19_NVIC_OTG_HS_WKUP_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR19_R_NVIC_OTG_HS_MASK      			((uint32_t)0x0000F000)
#define NVIC_IPR19_R_NVIC_OTG_HS_BIT   		    	(12)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP0   		   	((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP1    		  	((uint32_t)0x00001000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP2    		  	((uint32_t)0x00002000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP3  		  		((uint32_t)0x00003000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP4   	 		((uint32_t)0x00004000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP5    			((uint32_t)0x00005000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP6   	 		((uint32_t)0x00006000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP7    			((uint32_t)0x00007000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP8    			((uint32_t)0x00008000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP9    			((uint32_t)0x00009000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP10   			((uint32_t)0x0000A000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP11   			((uint32_t)0x0000B000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP12   			((uint32_t)0x0000C000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP13   			((uint32_t)0x0000D000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP14   			((uint32_t)0x0000E000)
#define NVIC_IPR19_R_NVIC_OTG_HS_IP15   			((uint32_t)0x0000F000)

#define NVIC_IPR19_NVIC_OTG_HS_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR19_NVIC_OTG_HS_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_OTG_HS_IP1     	 		((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_OTG_HS_IP2    		  		((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_OTG_HS_IP3    		  		((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_OTG_HS_IP4    		  		((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_OTG_HS_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_OTG_HS_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_OTG_HS_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_OTG_HS_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR19_NVIC_OTG_HS_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR19_NVIC_OTG_HS_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR19_NVIC_OTG_HS_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR19_NVIC_OTG_HS_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR19_NVIC_OTG_HS_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR19_NVIC_OTG_HS_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR19_NVIC_OTG_HS_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR19_R_NVIC_DCMI_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR19_R_NVIC_DCMI_BIT      	 	(20)
#define NVIC_IPR19_R_NVIC_DCMI_IP0     	 	((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_DCMI_IP1     	 	((uint32_t)0x00100000)
#define NVIC_IPR19_R_NVIC_DCMI_IP2     	 	((uint32_t)0x00200000)
#define NVIC_IPR19_R_NVIC_DCMI_IP3    		  	((uint32_t)0x00300000)
#define NVIC_IPR19_R_NVIC_DCMI_IP4     	 	((uint32_t)0x00400000)
#define NVIC_IPR19_R_NVIC_DCMI_IP5    		  	((uint32_t)0x00500000)
#define NVIC_IPR19_R_NVIC_DCMI_IP6    		  	((uint32_t)0x00600000)
#define NVIC_IPR19_R_NVIC_DCMI_IP7     	 	((uint32_t)0x00700000)
#define NVIC_IPR19_R_NVIC_DCMI_IP8     	 	((uint32_t)0x00800000)
#define NVIC_IPR19_R_NVIC_DCMI_IP9     	 	((uint32_t)0x00900000)
#define NVIC_IPR19_R_NVIC_DCMI_IP10    	 	((uint32_t)0x00A00000)
#define NVIC_IPR19_R_NVIC_DCMI_IP11	     	((uint32_t)0x00B00000)
#define NVIC_IPR19_R_NVIC_DCMI_IP12    	 	((uint32_t)0x00C00000)
#define NVIC_IPR19_R_NVIC_DCMI_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR19_R_NVIC_DCMI_IP14 	    	((uint32_t)0x00E00000)
#define NVIC_IPR19_R_NVIC_DCMI_IP15    	 	((uint32_t)0x00F00000)

#define NVIC_IPR19_NVIC_DCMI_MASK	      		((uint32_t)0x0000000F)
#define NVIC_IPR19_NVIC_DCMI_IP0   	   		((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_DCMI_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_DCMI_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_DCMI_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_DCMI_IP4   	   		((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_DCMI_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_DCMI_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_DCMI_IP7 	     		((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_DCMI_IP8   	   		((uint32_t)0x00000008)
#define NVIC_IPR19_NVIC_DCMI_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR19_NVIC_DCMI_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR19_NVIC_DCMI_IP11	     		((uint32_t)0x0000000B)
#define NVIC_IPR19_NVIC_DCMI_IP12  	   		((uint32_t)0x0000000C)
#define NVIC_IPR19_NVIC_DCMI_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR19_NVIC_DCMI_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR19_NVIC_DCMI_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR19_R_NVIC_reserved79_MASK    			((uint32_t)0xF0000000)
#define NVIC_IPR19_R_NVIC_reserved79_BIT     			(28)
#define NVIC_IPR19_R_NVIC_reserved79_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP1    			((uint32_t)0x10000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP2    			((uint32_t)0x20000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP3    			((uint32_t)0x30000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP5    			((uint32_t)0x50000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP6  			((uint32_t)0x60000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP7  			((uint32_t)0x70000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP8  			((uint32_t)0x80000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP9  			((uint32_t)0x90000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP10 			((uint32_t)0xA0000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP11 			((uint32_t)0xB0000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP12    		((uint32_t)0xC0000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP14    		((uint32_t)0xE0000000)
#define NVIC_IPR19_R_NVIC_reserved79_IP15    		((uint32_t)0xF0000000)

#define NVIC_IPR19_NVIC_reserved79_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR19_NVIC_reserved79_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR19_NVIC_reserved79_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR19_NVIC_reserved79_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR19_NVIC_reserved79_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR19_NVIC_reserved79_IP4      			((uint32_t)0x00000004)
#define NVIC_IPR19_NVIC_reserved79_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR19_NVIC_reserved79_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR19_NVIC_reserved79_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR19_NVIC_reserved79_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR19_NVIC_reserved79_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR19_NVIC_reserved79_IP10    	 		((uint32_t)0x0000000A)
#define NVIC_IPR19_NVIC_reserved79_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR19_NVIC_reserved79_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR19_NVIC_reserved79_IP13   	  		((uint32_t)0x0000000D)
#define NVIC_IPR19_NVIC_reserved79_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR19_NVIC_reserved79_IP15     			((uint32_t)0x0000000F)
//--------


//Todo IPR20
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR20 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR20            (((IPR20_TypeDef*)(NVIC_BASE+NVIC_IPR20_OFFSET)))
#define NVIC_IPR20_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR20_OFFSET)))


//--------
#define NVIC_IPR20_R_NVIC_HASH_RNG_MASK     	((uint32_t)0x000000F0)
#define NVIC_IPR20_R_NVIC_HASH_RNG_BIT       	(4)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP0   		((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP1   		((uint32_t)0x00000010)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP2   		((uint32_t)0x00000020)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP3   		((uint32_t)0x00000030)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP4   		((uint32_t)0x00000040)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP5   		((uint32_t)0x00000050)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP6   		((uint32_t)0x00000060)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP7   		((uint32_t)0x00000070)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP8   		((uint32_t)0x00000080)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP9   		((uint32_t)0x00000090)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP10  		((uint32_t)0x000000A0)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP11  		((uint32_t)0x000000B0)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP12  		((uint32_t)0x000000C0)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP13  		((uint32_t)0x000000D0)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP14  		((uint32_t)0x000000E0)
#define NVIC_IPR20_R_NVIC_HASH_RNG_IP15  		((uint32_t)0x000000F0)

#define NVIC_IPR20_NVIC_HASH_RNG_MASK     		((uint32_t)0x0000000F)
#define NVIC_IPR20_NVIC_HASH_RNG_IP0     		((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_HASH_RNG_IP1     		((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_HASH_RNG_IP2     		((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_HASH_RNG_IP3     		((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_HASH_RNG_IP4      		((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_HASH_RNG_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_HASH_RNG_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_HASH_RNG_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_HASH_RNG_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR20_NVIC_HASH_RNG_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR20_NVIC_HASH_RNG_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR20_NVIC_HASH_RNG_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR20_NVIC_HASH_RNG_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR20_NVIC_HASH_RNG_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR20_NVIC_HASH_RNG_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR20_NVIC_HASH_RNG_IP15     		((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR20_R_NVIC_FPU_MASK      		((uint32_t)0x0000F000)
#define NVIC_IPR20_R_NVIC_FPU_BIT   		   	(12)
#define NVIC_IPR20_R_NVIC_FPU_IP0   		   	((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_FPU_IP1    		  	((uint32_t)0x00001000)
#define NVIC_IPR20_R_NVIC_FPU_IP2    		  	((uint32_t)0x00002000)
#define NVIC_IPR20_R_NVIC_FPU_IP3  			((uint32_t)0x00003000)
#define NVIC_IPR20_R_NVIC_FPU_IP4   	 		((uint32_t)0x00004000)
#define NVIC_IPR20_R_NVIC_FPU_IP5    			((uint32_t)0x00005000)
#define NVIC_IPR20_R_NVIC_FPU_IP6   	 		((uint32_t)0x00006000)
#define NVIC_IPR20_R_NVIC_FPU_IP7    			((uint32_t)0x00007000)
#define NVIC_IPR20_R_NVIC_FPU_IP8    			((uint32_t)0x00008000)
#define NVIC_IPR20_R_NVIC_FPU_IP9    			((uint32_t)0x00009000)
#define NVIC_IPR20_R_NVIC_FPU_IP10   			((uint32_t)0x0000A000)
#define NVIC_IPR20_R_NVIC_FPU_IP11   			((uint32_t)0x0000B000)
#define NVIC_IPR20_R_NVIC_FPU_IP12   			((uint32_t)0x0000C000)
#define NVIC_IPR20_R_NVIC_FPU_IP13   			((uint32_t)0x0000D000)
#define NVIC_IPR20_R_NVIC_FPU_IP14   			((uint32_t)0x0000E000)
#define NVIC_IPR20_R_NVIC_FPU_IP15   			((uint32_t)0x0000F000)

#define NVIC_IPR20_NVIC_FPU_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR20_NVIC_FPU_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_FPU_IP1     	 		((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_FPU_IP2    	  		((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_FPU_IP3    	  		((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_FPU_IP4    	  		((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_FPU_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_FPU_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_FPU_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_FPU_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR20_NVIC_FPU_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR20_NVIC_FPU_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR20_NVIC_FPU_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR20_NVIC_FPU_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR20_NVIC_FPU_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR20_NVIC_FPU_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR20_NVIC_FPU_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR20_R_NVIC_UART7_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR20_R_NVIC_UART7_BIT      	 	(20)
#define NVIC_IPR20_R_NVIC_UART7_IP0     	 	((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_UART7_IP1     	 	((uint32_t)0x00100000)
#define NVIC_IPR20_R_NVIC_UART7_IP2     	 	((uint32_t)0x00200000)
#define NVIC_IPR20_R_NVIC_UART7_IP3    	  	((uint32_t)0x00300000)
#define NVIC_IPR20_R_NVIC_UART7_IP4     	 	((uint32_t)0x00400000)
#define NVIC_IPR20_R_NVIC_UART7_IP5    	  	((uint32_t)0x00500000)
#define NVIC_IPR20_R_NVIC_UART7_IP6    	  	((uint32_t)0x00600000)
#define NVIC_IPR20_R_NVIC_UART7_IP7     	 	((uint32_t)0x00700000)
#define NVIC_IPR20_R_NVIC_UART7_IP8     	 	((uint32_t)0x00800000)
#define NVIC_IPR20_R_NVIC_UART7_IP9     	 	((uint32_t)0x00900000)
#define NVIC_IPR20_R_NVIC_UART7_IP10    	 	((uint32_t)0x00A00000)
#define NVIC_IPR20_R_NVIC_UART7_IP11	     	((uint32_t)0x00B00000)
#define NVIC_IPR20_R_NVIC_UART7_IP12    	 	((uint32_t)0x00C00000)
#define NVIC_IPR20_R_NVIC_UART7_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR20_R_NVIC_UART7_IP14 	    	((uint32_t)0x00E00000)
#define NVIC_IPR20_R_NVIC_UART7_IP15    	 	((uint32_t)0x00F00000)

#define NVIC_IPR20_NVIC_UART7_MASK	      		((uint32_t)0x0000000F)
#define NVIC_IPR20_NVIC_UART7_IP0   	   		((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_UART7_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_UART7_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_UART7_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_UART7_IP4   	   		((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_UART7_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_UART7_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_UART7_IP7 	     		((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_UART7_IP8   	   		((uint32_t)0x00000008)
#define NVIC_IPR20_NVIC_UART7_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR20_NVIC_UART7_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR20_NVIC_UART7_IP11	     		((uint32_t)0x0000000B)
#define NVIC_IPR20_NVIC_UART7_IP12  	   		((uint32_t)0x0000000C)
#define NVIC_IPR20_NVIC_UART7_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR20_NVIC_UART7_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR20_NVIC_UART7_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR20_R_NVIC_UART8_MASK    		((uint32_t)0xF0000000)
#define NVIC_IPR20_R_NVIC_UART8_BIT     		(28)
#define NVIC_IPR20_R_NVIC_UART8_IP0    		((uint32_t)0x00000000)
#define NVIC_IPR20_R_NVIC_UART8_IP1    		((uint32_t)0x10000000)
#define NVIC_IPR20_R_NVIC_UART8_IP2    		((uint32_t)0x20000000)
#define NVIC_IPR20_R_NVIC_UART8_IP3    		((uint32_t)0x30000000)
#define NVIC_IPR20_R_NVIC_UART8_IP4    		((uint32_t)0x40000000)
#define NVIC_IPR20_R_NVIC_UART8_IP5    		((uint32_t)0x50000000)
#define NVIC_IPR20_R_NVIC_UART8_IP6  			((uint32_t)0x60000000)
#define NVIC_IPR20_R_NVIC_UART8_IP7  			((uint32_t)0x70000000)
#define NVIC_IPR20_R_NVIC_UART8_IP8  			((uint32_t)0x80000000)
#define NVIC_IPR20_R_NVIC_UART8_IP9  			((uint32_t)0x90000000)
#define NVIC_IPR20_R_NVIC_UART8_IP10 			((uint32_t)0xA0000000)
#define NVIC_IPR20_R_NVIC_UART8_IP11 			((uint32_t)0xB0000000)
#define NVIC_IPR20_R_NVIC_UART8_IP12    		((uint32_t)0xC0000000)
#define NVIC_IPR20_R_NVIC_UART8_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR20_R_NVIC_UART8_IP14    		((uint32_t)0xE0000000)
#define NVIC_IPR20_R_NVIC_UART8_IP15    		((uint32_t)0xF0000000)

#define NVIC_IPR20_NVIC_UART8_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR20_NVIC_UART8_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR20_NVIC_UART8_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR20_NVIC_UART8_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR20_NVIC_UART8_IP3 	    		((uint32_t)0x00000003)
#define NVIC_IPR20_NVIC_UART8_IP4     			((uint32_t)0x00000004)
#define NVIC_IPR20_NVIC_UART8_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR20_NVIC_UART8_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR20_NVIC_UART8_IP7      		((uint32_t)0x00000007)
#define NVIC_IPR20_NVIC_UART8_IP8      		((uint32_t)0x00000008)
#define NVIC_IPR20_NVIC_UART8_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR20_NVIC_UART8_IP10    	 		((uint32_t)0x0000000A)
#define NVIC_IPR20_NVIC_UART8_IP11     		((uint32_t)0x0000000B)
#define NVIC_IPR20_NVIC_UART8_IP12     		((uint32_t)0x0000000C)
#define NVIC_IPR20_NVIC_UART8_IP13   	  		((uint32_t)0x0000000D)
#define NVIC_IPR20_NVIC_UART8_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR20_NVIC_UART8_IP15     		((uint32_t)0x0000000F)
//--------


//Todo IPR21
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR21 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR21            (((IPR21_TypeDef*)(NVIC_BASE+NVIC_IPR21_OFFSET)))
#define NVIC_IPR21_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR21_OFFSET)))


//--------
#define NVIC_IPR21_R_NVIC_SPI4_MASK	    	 	((uint32_t)0x000000F0)
#define NVIC_IPR21_R_NVIC_SPI4_BIT  	     	(4)
#define NVIC_IPR21_R_NVIC_SPI4_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_SPI4_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR21_R_NVIC_SPI4_IP2 	  		((uint32_t)0x00000020)
#define NVIC_IPR21_R_NVIC_SPI4_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR21_R_NVIC_SPI4_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR21_R_NVIC_SPI4_IP5		   		((uint32_t)0x00000050)
#define NVIC_IPR21_R_NVIC_SPI4_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR21_R_NVIC_SPI4_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR21_R_NVIC_SPI4_IP8 	  		((uint32_t)0x00000080)
#define NVIC_IPR21_R_NVIC_SPI4_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR21_R_NVIC_SPI4_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR21_R_NVIC_SPI4_IP11	  		((uint32_t)0x000000B0)
#define NVIC_IPR21_R_NVIC_SPI4_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR21_R_NVIC_SPI4_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR21_R_NVIC_SPI4_IP14 	 		((uint32_t)0x000000E0)
#define NVIC_IPR21_R_NVIC_SPI4_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR21_NVIC_SPI4_MASK  	   			((uint32_t)0x0000000F)
#define NVIC_IPR21_NVIC_SPI4_IP0 	  	  		((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_SPI4_IP1   	  		((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_SPI4_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_SPI4_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_SPI4_IP4  	    		((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_SPI4_IP5   	   		((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_SPI4_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_SPI4_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_SPI4_IP8  	    		((uint32_t)0x00000008)
#define NVIC_IPR21_NVIC_SPI4_IP9   	   		((uint32_t)0x00000009)
#define NVIC_IPR21_NVIC_SPI4_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR21_NVIC_SPI4_IP11  	   		((uint32_t)0x0000000B)
#define NVIC_IPR21_NVIC_SPI4_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR21_NVIC_SPI4_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR21_NVIC_SPI4_IP14   	  		((uint32_t)0x0000000E)
#define NVIC_IPR21_NVIC_SPI4_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR21_R_NVIC_SPI5_MASK      		((uint32_t)0x0000F000)
#define NVIC_IPR21_R_NVIC_SPI5_BIT   		   	(12)
#define NVIC_IPR21_R_NVIC_SPI5_IP0   		   	((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_SPI5_IP1    		  	((uint32_t)0x00001000)
#define NVIC_IPR21_R_NVIC_SPI5_IP2    		  	((uint32_t)0x00002000)
#define NVIC_IPR21_R_NVIC_SPI5_IP3  			((uint32_t)0x00003000)
#define NVIC_IPR21_R_NVIC_SPI5_IP4   	 		((uint32_t)0x00004000)
#define NVIC_IPR21_R_NVIC_SPI5_IP5    			((uint32_t)0x00005000)
#define NVIC_IPR21_R_NVIC_SPI5_IP6   	 		((uint32_t)0x00006000)
#define NVIC_IPR21_R_NVIC_SPI5_IP7    			((uint32_t)0x00007000)
#define NVIC_IPR21_R_NVIC_SPI5_IP8    			((uint32_t)0x00008000)
#define NVIC_IPR21_R_NVIC_SPI5_IP9    			((uint32_t)0x00009000)
#define NVIC_IPR21_R_NVIC_SPI5_IP10   			((uint32_t)0x0000A000)
#define NVIC_IPR21_R_NVIC_SPI5_IP11   			((uint32_t)0x0000B000)
#define NVIC_IPR21_R_NVIC_SPI5_IP12   			((uint32_t)0x0000C000)
#define NVIC_IPR21_R_NVIC_SPI5_IP13   			((uint32_t)0x0000D000)
#define NVIC_IPR21_R_NVIC_SPI5_IP14   			((uint32_t)0x0000E000)
#define NVIC_IPR21_R_NVIC_SPI5_IP15   			((uint32_t)0x0000F000)

#define NVIC_IPR21_NVIC_SPI5_MASK      			((uint32_t)0x0000000F)
#define NVIC_IPR21_NVIC_SPI5_IP0      			((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_SPI5_IP1     	 		((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_SPI5_IP2    	  		((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_SPI5_IP3    	  		((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_SPI5_IP4    	  		((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_SPI5_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_SPI5_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_SPI5_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_SPI5_IP8      			((uint32_t)0x00000008)
#define NVIC_IPR21_NVIC_SPI5_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR21_NVIC_SPI5_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR21_NVIC_SPI5_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR21_NVIC_SPI5_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR21_NVIC_SPI5_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR21_NVIC_SPI5_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR21_NVIC_SPI5_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR21_R_NVIC_SPI6_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR21_R_NVIC_SPI6_BIT      	 	(20)
#define NVIC_IPR21_R_NVIC_SPI6_IP0     	 	((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_SPI6_IP1     	 	((uint32_t)0x00100000)
#define NVIC_IPR21_R_NVIC_SPI6_IP2     	 	((uint32_t)0x00200000)
#define NVIC_IPR21_R_NVIC_SPI6_IP3    		  	((uint32_t)0x00300000)
#define NVIC_IPR21_R_NVIC_SPI6_IP4     	 	((uint32_t)0x00400000)
#define NVIC_IPR21_R_NVIC_SPI6_IP5    	  		((uint32_t)0x00500000)
#define NVIC_IPR21_R_NVIC_SPI6_IP6    	 	 	((uint32_t)0x00600000)
#define NVIC_IPR21_R_NVIC_SPI6_IP7     	 	((uint32_t)0x00700000)
#define NVIC_IPR21_R_NVIC_SPI6_IP8     	 	((uint32_t)0x00800000)
#define NVIC_IPR21_R_NVIC_SPI6_IP9     	 	((uint32_t)0x00900000)
#define NVIC_IPR21_R_NVIC_SPI6_IP10    	 	((uint32_t)0x00A00000)
#define NVIC_IPR21_R_NVIC_SPI6_IP11	     	((uint32_t)0x00B00000)
#define NVIC_IPR21_R_NVIC_SPI6_IP12    	 	((uint32_t)0x00C00000)
#define NVIC_IPR21_R_NVIC_SPI6_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR21_R_NVIC_SPI6_IP14 	    	((uint32_t)0x00E00000)
#define NVIC_IPR21_R_NVIC_SPI6_IP15    	 	((uint32_t)0x00F00000)

#define NVIC_IPR21_NVIC_SPI6_MASK	      		((uint32_t)0x0000000F)
#define NVIC_IPR21_NVIC_SPI6_IP0   	   		((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_SPI6_IP1      			((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_SPI6_IP2      			((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_SPI6_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_SPI6_IP4   	   		((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_SPI6_IP5      			((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_SPI6_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_SPI6_IP7 	     		((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_SPI6_IP8   	   		((uint32_t)0x00000008)
#define NVIC_IPR21_NVIC_SPI6_IP9      			((uint32_t)0x00000009)
#define NVIC_IPR21_NVIC_SPI6_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR21_NVIC_SPI6_IP11	     		((uint32_t)0x0000000B)
#define NVIC_IPR21_NVIC_SPI6_IP12  	   		((uint32_t)0x0000000C)
#define NVIC_IPR21_NVIC_SPI6_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR21_NVIC_SPI6_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR21_NVIC_SPI6_IP15     			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR21_R_NVIC_SAI1_MASK    			((uint32_t)0xF0000000)
#define NVIC_IPR21_R_NVIC_SAI1_BIT     			(28)
#define NVIC_IPR21_R_NVIC_SAI1_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP1   	 		((uint32_t)0x10000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP2   	 		((uint32_t)0x20000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP3    			((uint32_t)0x30000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP5    			((uint32_t)0x50000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP6  			((uint32_t)0x60000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP7  			((uint32_t)0x70000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP8  			((uint32_t)0x80000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP9  			((uint32_t)0x90000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP10 			((uint32_t)0xA0000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP11 			((uint32_t)0xB0000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP12    		((uint32_t)0xC0000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP14    		((uint32_t)0xE0000000)
#define NVIC_IPR21_R_NVIC_SAI1_IP15    		((uint32_t)0xF0000000)

#define NVIC_IPR21_NVIC_SAI1_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR21_NVIC_SAI1_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR21_NVIC_SAI1_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR21_NVIC_SAI1_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR21_NVIC_SAI1_IP3 	    		((uint32_t)0x00000003)
#define NVIC_IPR21_NVIC_SAI1_IP4     			((uint32_t)0x00000004)
#define NVIC_IPR21_NVIC_SAI1_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR21_NVIC_SAI1_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR21_NVIC_SAI1_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR21_NVIC_SAI1_IP8     	 		((uint32_t)0x00000008)
#define NVIC_IPR21_NVIC_SAI1_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR21_NVIC_SAI1_IP10    	 		((uint32_t)0x0000000A)
#define NVIC_IPR21_NVIC_SAI1_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR21_NVIC_SAI1_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR21_NVIC_SAI1_IP13   	  		((uint32_t)0x0000000D)
#define NVIC_IPR21_NVIC_SAI1_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR21_NVIC_SAI1_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR22
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR22 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR22            (((IPR22_TypeDef*)(NVIC_BASE+NVIC_IPR22_OFFSET)))
#define NVIC_IPR22_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR22_OFFSET)))


//--------
#define NVIC_IPR22_R_NVIC_LTDC_MASK	    	 	((uint32_t)0x000000F0)
#define NVIC_IPR22_R_NVIC_LTDC_BIT  	     	(4)
#define NVIC_IPR22_R_NVIC_LTDC_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_LTDC_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR22_R_NVIC_LTDC_IP2 	  		((uint32_t)0x00000020)
#define NVIC_IPR22_R_NVIC_LTDC_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR22_R_NVIC_LTDC_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR22_R_NVIC_LTDC_IP5		   		((uint32_t)0x00000050)
#define NVIC_IPR22_R_NVIC_LTDC_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR22_R_NVIC_LTDC_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR22_R_NVIC_LTDC_IP8 	  		((uint32_t)0x00000080)
#define NVIC_IPR22_R_NVIC_LTDC_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR22_R_NVIC_LTDC_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR22_R_NVIC_LTDC_IP11	  		((uint32_t)0x000000B0)
#define NVIC_IPR22_R_NVIC_LTDC_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR22_R_NVIC_LTDC_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR22_R_NVIC_LTDC_IP14 	 		((uint32_t)0x000000E0)
#define NVIC_IPR22_R_NVIC_LTDC_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR22_NVIC_LTDC_MASK  	   			((uint32_t)0x0000000F)
#define NVIC_IPR22_NVIC_LTDC_IP0 	  	  		((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_LTDC_IP1   	  		((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_LTDC_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_LTDC_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_LTDC_IP4  	    		((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_LTDC_IP5   	   		((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_LTDC_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_LTDC_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_LTDC_IP8  	    		((uint32_t)0x00000008)
#define NVIC_IPR22_NVIC_LTDC_IP9   	   		((uint32_t)0x00000009)
#define NVIC_IPR22_NVIC_LTDC_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR22_NVIC_LTDC_IP11  	   		((uint32_t)0x0000000B)
#define NVIC_IPR22_NVIC_LTDC_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR22_NVIC_LTDC_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR22_NVIC_LTDC_IP14   	  		((uint32_t)0x0000000E)
#define NVIC_IPR22_NVIC_LTDC_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR22_R_NVIC_LTDC_ER_MASK     		((uint32_t)0x0000F000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_BIT  		   	(12)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP0 		   	((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP1 		  	((uint32_t)0x00001000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP2 		  	((uint32_t)0x00002000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP3 			((uint32_t)0x00003000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP4 	 		((uint32_t)0x00004000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP5 			((uint32_t)0x00005000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP6 	 		((uint32_t)0x00006000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP7 			((uint32_t)0x00007000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP8 			((uint32_t)0x00008000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP9 			((uint32_t)0x00009000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP10			((uint32_t)0x0000A000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP11			((uint32_t)0x0000B000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP12			((uint32_t)0x0000C000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP13			((uint32_t)0x0000D000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP14			((uint32_t)0x0000E000)
#define NVIC_IPR22_R_NVIC_LTDC_ER_IP15			((uint32_t)0x0000F000)

#define NVIC_IPR22_NVIC_LTDC_ER_MASK   			((uint32_t)0x0000000F)
#define NVIC_IPR22_NVIC_LTDC_ER_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_LTDC_ER_IP1  	 		((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_LTDC_ER_IP2 	  		((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_LTDC_ER_IP3  	  		((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_LTDC_ER_IP4  	  		((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_LTDC_ER_IP5   			((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_LTDC_ER_IP6   	 		((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_LTDC_ER_IP7   			((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_LTDC_ER_IP8   			((uint32_t)0x00000008)
#define NVIC_IPR22_NVIC_LTDC_ER_IP9   			((uint32_t)0x00000009)
#define NVIC_IPR22_NVIC_LTDC_ER_IP10  			((uint32_t)0x0000000A)
#define NVIC_IPR22_NVIC_LTDC_ER_IP11  			((uint32_t)0x0000000B)
#define NVIC_IPR22_NVIC_LTDC_ER_IP12  			((uint32_t)0x0000000C)
#define NVIC_IPR22_NVIC_LTDC_ER_IP13  			((uint32_t)0x0000000D)
#define NVIC_IPR22_NVIC_LTDC_ER_IP14  			((uint32_t)0x0000000E)
#define NVIC_IPR22_NVIC_LTDC_ER_IP15  			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR22_R_NVIC_DMA2D_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR22_R_NVIC_DMA2D_BIT      	 	(20)
#define NVIC_IPR22_R_NVIC_DMA2D_IP0     	 	((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP1     	 	((uint32_t)0x00100000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP2     	 	((uint32_t)0x00200000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP3    	  	((uint32_t)0x00300000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP4     	 	((uint32_t)0x00400000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP5      		((uint32_t)0x00500000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP6     	 	((uint32_t)0x00600000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP7     	 	((uint32_t)0x00700000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP8     	 	((uint32_t)0x00800000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP9     	 	((uint32_t)0x00900000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP10    	 	((uint32_t)0x00A00000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP11	     	((uint32_t)0x00B00000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP12    	 	((uint32_t)0x00C00000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP14 	    	((uint32_t)0x00E00000)
#define NVIC_IPR22_R_NVIC_DMA2D_IP15    	 	((uint32_t)0x00F00000)

#define NVIC_IPR22_NVIC_DMA2D_MASK	      		((uint32_t)0x0000000F)
#define NVIC_IPR22_NVIC_DMA2D_IP0   	   		((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_DMA2D_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_DMA2D_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_DMA2D_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_DMA2D_IP4   	   		((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_DMA2D_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_DMA2D_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_DMA2D_IP7 	     		((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_DMA2D_IP8   	   		((uint32_t)0x00000008)
#define NVIC_IPR22_NVIC_DMA2D_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR22_NVIC_DMA2D_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR22_NVIC_DMA2D_IP11	    		((uint32_t)0x0000000B)
#define NVIC_IPR22_NVIC_DMA2D_IP12  	   		((uint32_t)0x0000000C)
#define NVIC_IPR22_NVIC_DMA2D_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR22_NVIC_DMA2D_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR22_NVIC_DMA2D_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR22_R_NVIC_SAI2_MASK    			((uint32_t)0xF0000000)
#define NVIC_IPR22_R_NVIC_SAI2_BIT     			(28)
#define NVIC_IPR22_R_NVIC_SAI2_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP1   	 		((uint32_t)0x10000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP2   	 		((uint32_t)0x20000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP3    			((uint32_t)0x30000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP5    			((uint32_t)0x50000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP6  			((uint32_t)0x60000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP7  			((uint32_t)0x70000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP8  			((uint32_t)0x80000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP9  			((uint32_t)0x90000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP10 			((uint32_t)0xA0000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP11 			((uint32_t)0xB0000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP12    		((uint32_t)0xC0000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP14    		((uint32_t)0xE0000000)
#define NVIC_IPR22_R_NVIC_SAI2_IP15    		((uint32_t)0xF0000000)

#define NVIC_IPR22_NVIC_SAI2_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR22_NVIC_SAI2_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR22_NVIC_SAI2_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR22_NVIC_SAI2_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR22_NVIC_SAI2_IP3 	    		((uint32_t)0x00000003)
#define NVIC_IPR22_NVIC_SAI2_IP4     			((uint32_t)0x00000004)
#define NVIC_IPR22_NVIC_SAI2_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR22_NVIC_SAI2_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR22_NVIC_SAI2_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR22_NVIC_SAI2_IP8     	 		((uint32_t)0x00000008)
#define NVIC_IPR22_NVIC_SAI2_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR22_NVIC_SAI2_IP10    	 		((uint32_t)0x0000000A)
#define NVIC_IPR22_NVIC_SAI2_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR22_NVIC_SAI2_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR22_NVIC_SAI2_IP13   	  		((uint32_t)0x0000000D)
#define NVIC_IPR22_NVIC_SAI2_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR22_NVIC_SAI2_IP15     			((uint32_t)0x0000000F)
//--------



//Todo IPR23
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR23 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR23            (((IPR23_TypeDef*)(NVIC_BASE+NVIC_IPR23_OFFSET)))
#define NVIC_IPR23_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR23_OFFSET)))


//--------
#define NVIC_IPR23_R_NVIC_QUADSPI_MASK	    	 	((uint32_t)0x000000F0)
#define NVIC_IPR23_R_NVIC_QUADSPI_BIT  	     	(4)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP2 	  		((uint32_t)0x00000020)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP5		   		((uint32_t)0x00000050)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP8 	  		((uint32_t)0x00000080)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP11	  		((uint32_t)0x000000B0)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP14 	 		((uint32_t)0x000000E0)
#define NVIC_IPR23_R_NVIC_QUADSPI_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR23_NVIC_QUADSPI_MASK  	   			((uint32_t)0x0000000F)
#define NVIC_IPR23_NVIC_QUADSPI_IP0 	  	  		((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_QUADSPI_IP1   	  		((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_QUADSPI_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_QUADSPI_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_QUADSPI_IP4  	    		((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_QUADSPI_IP5   	   		((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_QUADSPI_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_QUADSPI_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_QUADSPI_IP8  	    		((uint32_t)0x00000008)
#define NVIC_IPR23_NVIC_QUADSPI_IP9   	   		((uint32_t)0x00000009)
#define NVIC_IPR23_NVIC_QUADSPI_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR23_NVIC_QUADSPI_IP11  	   		((uint32_t)0x0000000B)
#define NVIC_IPR23_NVIC_QUADSPI_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR23_NVIC_QUADSPI_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR23_NVIC_QUADSPI_IP14   	  		((uint32_t)0x0000000E)
#define NVIC_IPR23_NVIC_QUADSPI_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR23_R_NVIC_LPTIM1_MASK     		((uint32_t)0x0000F000)
#define NVIC_IPR23_R_NVIC_LPTIM1_BIT  		   	(12)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP0 		   	((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP1 		  	((uint32_t)0x00001000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP2 		  	((uint32_t)0x00002000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP3 			((uint32_t)0x00003000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP4 	 		((uint32_t)0x00004000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP5 			((uint32_t)0x00005000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP6 	 		((uint32_t)0x00006000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP7 			((uint32_t)0x00007000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP8 			((uint32_t)0x00008000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP9 			((uint32_t)0x00009000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP10			((uint32_t)0x0000A000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP11			((uint32_t)0x0000B000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP12			((uint32_t)0x0000C000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP13			((uint32_t)0x0000D000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP14			((uint32_t)0x0000E000)
#define NVIC_IPR23_R_NVIC_LPTIM1_IP15			((uint32_t)0x0000F000)

#define NVIC_IPR23_NVIC_LPTIM1_MASK   			((uint32_t)0x0000000F)
#define NVIC_IPR23_NVIC_LPTIM1_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_LPTIM1_IP1  	 		((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_LPTIM1_IP2 	  		((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_LPTIM1_IP3  	  		((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_LPTIM1_IP4  	  		((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_LPTIM1_IP5   			((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_LPTIM1_IP6   	 		((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_LPTIM1_IP7   			((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_LPTIM1_IP8   			((uint32_t)0x00000008)
#define NVIC_IPR23_NVIC_LPTIM1_IP9   			((uint32_t)0x00000009)
#define NVIC_IPR23_NVIC_LPTIM1_IP10  			((uint32_t)0x0000000A)
#define NVIC_IPR23_NVIC_LPTIM1_IP11  			((uint32_t)0x0000000B)
#define NVIC_IPR23_NVIC_LPTIM1_IP12  			((uint32_t)0x0000000C)
#define NVIC_IPR23_NVIC_LPTIM1_IP13  			((uint32_t)0x0000000D)
#define NVIC_IPR23_NVIC_LPTIM1_IP14  			((uint32_t)0x0000000E)
#define NVIC_IPR23_NVIC_LPTIM1_IP15  			((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR23_R_NVIC_CEC_MASK     		((uint32_t)0x00F00000)
#define NVIC_IPR23_R_NVIC_CEC_BIT      	 	(20)
#define NVIC_IPR23_R_NVIC_CEC_IP0     	 	((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_CEC_IP1     	 	((uint32_t)0x00100000)
#define NVIC_IPR23_R_NVIC_CEC_IP2     	 	((uint32_t)0x00200000)
#define NVIC_IPR23_R_NVIC_CEC_IP3    	  	((uint32_t)0x00300000)
#define NVIC_IPR23_R_NVIC_CEC_IP4     	 	((uint32_t)0x00400000)
#define NVIC_IPR23_R_NVIC_CEC_IP5      		((uint32_t)0x00500000)
#define NVIC_IPR23_R_NVIC_CEC_IP6     	 	((uint32_t)0x00600000)
#define NVIC_IPR23_R_NVIC_CEC_IP7     	 	((uint32_t)0x00700000)
#define NVIC_IPR23_R_NVIC_CEC_IP8     	 	((uint32_t)0x00800000)
#define NVIC_IPR23_R_NVIC_CEC_IP9     	 	((uint32_t)0x00900000)
#define NVIC_IPR23_R_NVIC_CEC_IP10    	 	((uint32_t)0x00A00000)
#define NVIC_IPR23_R_NVIC_CEC_IP11	     	((uint32_t)0x00B00000)
#define NVIC_IPR23_R_NVIC_CEC_IP12    	 	((uint32_t)0x00C00000)
#define NVIC_IPR23_R_NVIC_CEC_IP13     		((uint32_t)0x00D00000)
#define NVIC_IPR23_R_NVIC_CEC_IP14 	    	((uint32_t)0x00E00000)
#define NVIC_IPR23_R_NVIC_CEC_IP15    	 	((uint32_t)0x00F00000)

#define NVIC_IPR23_NVIC_CEC_MASK	      		((uint32_t)0x0000000F)
#define NVIC_IPR23_NVIC_CEC_IP0   	   		((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_CEC_IP1      		((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_CEC_IP2      		((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_CEC_IP3 	     		((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_CEC_IP4   	   		((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_CEC_IP5      		((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_CEC_IP6      		((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_CEC_IP7 	     		((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_CEC_IP8   	   		((uint32_t)0x00000008)
#define NVIC_IPR23_NVIC_CEC_IP9      		((uint32_t)0x00000009)
#define NVIC_IPR23_NVIC_CEC_IP10     		((uint32_t)0x0000000A)
#define NVIC_IPR23_NVIC_CEC_IP11	    		((uint32_t)0x0000000B)
#define NVIC_IPR23_NVIC_CEC_IP12  	   		((uint32_t)0x0000000C)
#define NVIC_IPR23_NVIC_CEC_IP13     		((uint32_t)0x0000000D)
#define NVIC_IPR23_NVIC_CEC_IP14     		((uint32_t)0x0000000E)
#define NVIC_IPR23_NVIC_CEC_IP15     		((uint32_t)0x0000000F)
//--------

//--------
#define NVIC_IPR23_R_NVIC_I2C4_EV_MASK    			((uint32_t)0xF0000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_BIT     			(28)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP0    			((uint32_t)0x00000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP1   	 		((uint32_t)0x10000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP2   	 		((uint32_t)0x20000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP3    			((uint32_t)0x30000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP4    			((uint32_t)0x40000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP5    			((uint32_t)0x50000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP6  			((uint32_t)0x60000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP7  			((uint32_t)0x70000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP8  			((uint32_t)0x80000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP9  			((uint32_t)0x90000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP10 			((uint32_t)0xA0000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP11 			((uint32_t)0xB0000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP12    		((uint32_t)0xC0000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP13    		((uint32_t)0xD0000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP14    		((uint32_t)0xE0000000)
#define NVIC_IPR23_R_NVIC_I2C4_EV_IP15    		((uint32_t)0xF0000000)

#define NVIC_IPR23_NVIC_I2C4_EV_MASK     			((uint32_t)0x0000000F)
#define NVIC_IPR23_NVIC_I2C4_EV_IP0     			((uint32_t)0x00000000)
#define NVIC_IPR23_NVIC_I2C4_EV_IP1     			((uint32_t)0x00000001)
#define NVIC_IPR23_NVIC_I2C4_EV_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR23_NVIC_I2C4_EV_IP3 	    		((uint32_t)0x00000003)
#define NVIC_IPR23_NVIC_I2C4_EV_IP4     			((uint32_t)0x00000004)
#define NVIC_IPR23_NVIC_I2C4_EV_IP5 	     		((uint32_t)0x00000005)
#define NVIC_IPR23_NVIC_I2C4_EV_IP6     	 		((uint32_t)0x00000006)
#define NVIC_IPR23_NVIC_I2C4_EV_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR23_NVIC_I2C4_EV_IP8     	 		((uint32_t)0x00000008)
#define NVIC_IPR23_NVIC_I2C4_EV_IP9 	     		((uint32_t)0x00000009)
#define NVIC_IPR23_NVIC_I2C4_EV_IP10    	 		((uint32_t)0x0000000A)
#define NVIC_IPR23_NVIC_I2C4_EV_IP11     			((uint32_t)0x0000000B)
#define NVIC_IPR23_NVIC_I2C4_EV_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR23_NVIC_I2C4_EV_IP13   	  		((uint32_t)0x0000000D)
#define NVIC_IPR23_NVIC_I2C4_EV_IP14     			((uint32_t)0x0000000E)
#define NVIC_IPR23_NVIC_I2C4_EV_IP15     			((uint32_t)0x0000000F)
//--------


//Todo IPR24
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR24 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR24            (((IPR24_TypeDef*)(NVIC_BASE+NVIC_IPR24_OFFSET)))
#define NVIC_IPR24_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR24_OFFSET)))


//--------
#define NVIC_IPR24_R_NVIC_I2C4_ER_MASK	    	 	((uint32_t)0x000000F0)
#define NVIC_IPR24_R_NVIC_I2C4_ER_BIT  	     	(4)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP1   			((uint32_t)0x00000010)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP2 	  		((uint32_t)0x00000020)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP3   			((uint32_t)0x00000030)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP4   			((uint32_t)0x00000040)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP5		   		((uint32_t)0x00000050)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP6   			((uint32_t)0x00000060)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP7   			((uint32_t)0x00000070)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP8 	  		((uint32_t)0x00000080)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP9   			((uint32_t)0x00000090)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP10  			((uint32_t)0x000000A0)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP11	  		((uint32_t)0x000000B0)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP12  			((uint32_t)0x000000C0)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP13  			((uint32_t)0x000000D0)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP14 	 		((uint32_t)0x000000E0)
#define NVIC_IPR24_R_NVIC_I2C4_ER_IP15  			((uint32_t)0x000000F0)

#define NVIC_IPR24_NVIC_I2C4_ER_MASK  	   			((uint32_t)0x0000000F)
#define NVIC_IPR24_NVIC_I2C4_ER_IP0 	  	  		((uint32_t)0x00000000)
#define NVIC_IPR24_NVIC_I2C4_ER_IP1   	  		((uint32_t)0x00000001)
#define NVIC_IPR24_NVIC_I2C4_ER_IP2     			((uint32_t)0x00000002)
#define NVIC_IPR24_NVIC_I2C4_ER_IP3     			((uint32_t)0x00000003)
#define NVIC_IPR24_NVIC_I2C4_ER_IP4  	    		((uint32_t)0x00000004)
#define NVIC_IPR24_NVIC_I2C4_ER_IP5   	   		((uint32_t)0x00000005)
#define NVIC_IPR24_NVIC_I2C4_ER_IP6      			((uint32_t)0x00000006)
#define NVIC_IPR24_NVIC_I2C4_ER_IP7      			((uint32_t)0x00000007)
#define NVIC_IPR24_NVIC_I2C4_ER_IP8  	    		((uint32_t)0x00000008)
#define NVIC_IPR24_NVIC_I2C4_ER_IP9   	   		((uint32_t)0x00000009)
#define NVIC_IPR24_NVIC_I2C4_ER_IP10     			((uint32_t)0x0000000A)
#define NVIC_IPR24_NVIC_I2C4_ER_IP11  	   		((uint32_t)0x0000000B)
#define NVIC_IPR24_NVIC_I2C4_ER_IP12     			((uint32_t)0x0000000C)
#define NVIC_IPR24_NVIC_I2C4_ER_IP13     			((uint32_t)0x0000000D)
#define NVIC_IPR24_NVIC_I2C4_ER_IP14   	  		((uint32_t)0x0000000E)
#define NVIC_IPR24_NVIC_I2C4_ER_IP15     			((uint32_t)0x0000000F)
//--------


//--------
#define NVIC_IPR24_R_NVIC_SPDIF_RX_MASK     		((uint32_t)0x0000F000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_BIT  		   	(12)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP0 		   	((uint32_t)0x00000000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP1 		  	((uint32_t)0x00001000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP2 		  	((uint32_t)0x00002000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP3 			((uint32_t)0x00003000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP4 	 		((uint32_t)0x00004000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP5 			((uint32_t)0x00005000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP6 	 		((uint32_t)0x00006000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP7 			((uint32_t)0x00007000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP8 			((uint32_t)0x00008000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP9 			((uint32_t)0x00009000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP10			((uint32_t)0x0000A000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP11			((uint32_t)0x0000B000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP12			((uint32_t)0x0000C000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP13			((uint32_t)0x0000D000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP14			((uint32_t)0x0000E000)
#define NVIC_IPR24_R_NVIC_SPDIF_RX_IP15			((uint32_t)0x0000F000)

#define NVIC_IPR24_NVIC_SPDIF_RX_MASK   			((uint32_t)0x0000000F)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP0   			((uint32_t)0x00000000)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP1  	 		((uint32_t)0x00000001)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP2 	  		((uint32_t)0x00000002)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP3  	  		((uint32_t)0x00000003)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP4  	  		((uint32_t)0x00000004)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP5   			((uint32_t)0x00000005)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP6   	 		((uint32_t)0x00000006)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP7   			((uint32_t)0x00000007)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP8   			((uint32_t)0x00000008)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP9   			((uint32_t)0x00000009)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP10  			((uint32_t)0x0000000A)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP11  			((uint32_t)0x0000000B)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP12  			((uint32_t)0x0000000C)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP13  			((uint32_t)0x0000000D)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP14  			((uint32_t)0x0000000E)
#define NVIC_IPR24_NVIC_SPDIF_RX_IP15  			((uint32_t)0x0000000F)
//--------


//Todo STIR
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// STIR ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_STIR            (((STIR_TypeDef*)(NVIC_BASE+NVIC_STIR_OFFSET)))
#define NVIC_STIR_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_STIR_OFFSET)))



//--------
#define NVIC_STIR_R_INTID_MASK			       	((uint32_t)0x000000FF)
#define NVIC_STIR_R_INTID_BIT        			(0)
#define NVIC_STIR_R_INTID_WWDG      			((uint32_t)0x00000000)
#define NVIC_STIR_R_INTID_PVD			      	((uint32_t)0x00000001)
#define NVIC_STIR_R_INTID_TRAMP_STAMP	        ((uint32_t)0x00000002)
#define NVIC_STIR_R_INTID_RTC_WKUP      		((uint32_t)0x00000003)
#define NVIC_STIR_R_INTID_FLASH      			((uint32_t)0x00000004)
#define NVIC_STIR_R_INTID_RCC      				((uint32_t)0x00000005)
#define NVIC_STIR_R_INTID_EXTI0      			((uint32_t)0x00000006)
#define NVIC_STIR_R_INTID_EXTI1       			((uint32_t)0x00000007)
#define NVIC_STIR_R_INTID_EXTI2       			((uint32_t)0x00000008)
#define NVIC_STIR_R_INTID_EXTI3  				((uint32_t)0x00000009)
#define NVIC_STIR_R_INTID_EXTI4   				((uint32_t)0x0000000A)
#define NVIC_STIR_R_INTID_DMA1_Stream0   		((uint32_t)0x0000000B)
#define NVIC_STIR_R_INTID_DMA1_Stream1  		((uint32_t)0x0000000C)
#define NVIC_STIR_R_INTID_DMA1_Stream2  		((uint32_t)0x0000000D)
#define NVIC_STIR_R_INTID_DMA1_Stream3  		((uint32_t)0x0000000E)
#define NVIC_STIR_R_INTID_DMA1_Stream4  		((uint32_t)0x0000000F)
#define NVIC_STIR_R_INTID_DMA1_Stream5  		((uint32_t)0x00000010)
#define NVIC_STIR_R_INTID_DMA1_Stream6  		((uint32_t)0x00000011)
#define NVIC_STIR_R_INTID_ADC      				((uint32_t)0x00000012)
#define NVIC_STIR_R_INTID_CAN1_TX				((uint32_t)0x00000013)
#define NVIC_STIR_R_INTID_CAN1_RX0				((uint32_t)0x00000014)
#define NVIC_STIR_R_INTID_CAN1_RX1				((uint32_t)0x00000015)
#define NVIC_STIR_R_INTID_CAN1_SCE				((uint32_t)0x00000016)
#define NVIC_STIR_R_INTID_EXTI9_5				((uint32_t)0x00000017)
#define NVIC_STIR_R_INTID_TIM1_BRK_TIM9			((uint32_t)0x00000018)
#define NVIC_STIR_R_INTID_TIM1_UP_TIM10			((uint32_t)0x00000019)
#define NVIC_STIR_R_INTID_TIM1_TRG_COM_TIM11	((uint32_t)0x0000001A)
#define NVIC_STIR_R_INTID_TIM1_CC				((uint32_t)0x0000001B)
#define NVIC_STIR_R_INTID_TIM2					((uint32_t)0x0000001C)
#define NVIC_STIR_R_INTID_TIM3					((uint32_t)0x0000001D)
#define NVIC_STIR_R_INTID_TIM4					((uint32_t)0x0000001E)
#define NVIC_STIR_R_INTID_I2C1_EV				((uint32_t)0x0000001F)
#define NVIC_STIR_R_INTID_I2C1_ER				((uint32_t)0x00000020)
#define NVIC_STIR_R_INTID_I2C2_EV				((uint32_t)0x00000021)
#define NVIC_STIR_R_INTID_I2C2_ER				((uint32_t)0x00000022)
#define NVIC_STIR_R_INTID_SPI1					((uint32_t)0x00000023)
#define NVIC_STIR_R_INTID_SPI2					((uint32_t)0x00000024)
#define NVIC_STIR_R_INTID_USART1				((uint32_t)0x00000025)
#define NVIC_STIR_R_INTID_USART2				((uint32_t)0x00000026)
#define NVIC_STIR_R_INTID_USART3				((uint32_t)0x00000027)
#define NVIC_STIR_R_INTID_CEXTI15_10			((uint32_t)0x00000028)
#define NVIC_STIR_R_INTID_RTC_Alarm				((uint32_t)0x00000029)
#define NVIC_STIR_R_INTID_OTG_FS_WKUP			((uint32_t)0x0000002A)
#define NVIC_STIR_R_INTID_TIM8_BRK_TIM12		((uint32_t)0x0000002B)
#define NVIC_STIR_R_INTID_TIM8_UP_TIM13			((uint32_t)0x0000002C)
#define NVIC_STIR_R_INTID_TIM8_TRG_COM_TIM14	((uint32_t)0x0000002D)
#define NVIC_STIR_R_INTID_TIM8_CC				((uint32_t)0x0000002E)
#define NVIC_STIR_R_INTID_DMA1_Stream7			((uint32_t)0x0000002F)
#define NVIC_STIR_R_INTID_FMC					((uint32_t)0x00000030)
#define NVIC_STIR_R_INTID_SDIO					((uint32_t)0x00000031)
#define NVIC_STIR_R_INTID_TIM5					((uint32_t)0x00000032)
#define NVIC_STIR_R_INTID_SPI3					((uint32_t)0x00000033)
#define NVIC_STIR_R_INTID_UART4					((uint32_t)0x00000034)
#define NVIC_STIR_R_INTID_UART5					((uint32_t)0x00000035)
#define NVIC_STIR_R_INTID_TIM6_DAC				((uint32_t)0x00000036)
#define NVIC_STIR_R_INTID_TIM7					((uint32_t)0x00000037)
#define NVIC_STIR_R_INTID_DMA2_Stream0			((uint32_t)0x00000038)
#define NVIC_STIR_R_INTID_DMA2_Stream1			((uint32_t)0x00000039)
#define NVIC_STIR_R_INTID_DMA2_Stream2			((uint32_t)0x0000003A)
#define NVIC_STIR_R_INTID_DMA2_Stream3			((uint32_t)0x0000003B)
#define NVIC_STIR_R_INTID_DMA2_Stream4			((uint32_t)0x0000003C)
#define NVIC_STIR_R_INTID_ETH					((uint32_t)0x0000003D)
#define NVIC_STIR_R_INTID_ETH_WKUP				((uint32_t)0x0000003E)
#define NVIC_STIR_R_INTID_CAN2_TX				((uint32_t)0x0000003F)
#define NVIC_STIR_R_INTID_CAN2_RX0				((uint32_t)0x00000040)
#define NVIC_STIR_R_INTID_CAN2_RX1				((uint32_t)0x00000041)
#define NVIC_STIR_R_INTID_CAN2_SCE				((uint32_t)0x00000042)
#define NVIC_STIR_R_INTID_OTG_FS				((uint32_t)0x00000043)
#define NVIC_STIR_R_INTID_DMA2_Stream5			((uint32_t)0x00000044)
#define NVIC_STIR_R_INTID_DMA2_Stream6			((uint32_t)0x00000045)
#define NVIC_STIR_R_INTID_DMA2_Stream7			((uint32_t)0x00000046)
#define NVIC_STIR_R_INTID_USART6				((uint32_t)0x00000047)
#define NVIC_STIR_R_INTID_I2C3_EV				((uint32_t)0x00000048)
#define NVIC_STIR_R_INTID_I2C3_ER				((uint32_t)0x00000049)
#define NVIC_STIR_R_INTID_OTG_HS_EP1_OUT		((uint32_t)0x0000004A)
#define NVIC_STIR_R_INTID_OTG_HS_EP1_IN			((uint32_t)0x0000004B)
#define NVIC_STIR_R_INTID_OTG_HS_WKUP			((uint32_t)0x0000004C)
#define NVIC_STIR_R_INTID_OTG_HS				((uint32_t)0x0000004D)
#define NVIC_STIR_R_INTID_DCMI					((uint32_t)0x0000004E)
#define NVIC_STIR_R_INTID_reserved79			((uint32_t)0x0000004F)
#define NVIC_STIR_R_INTID_HASH_RNG				((uint32_t)0x00000050)
#define NVIC_STIR_R_INTID_FPU					((uint32_t)0x00000051)
#define NVIC_STIR_R_INTID_UART7					((uint32_t)0x00000052)
#define NVIC_STIR_R_INTID_UART8					((uint32_t)0x00000053)
#define NVIC_STIR_R_INTID_SPI4					((uint32_t)0x00000054)
#define NVIC_STIR_R_INTID_SPI5					((uint32_t)0x00000055)
#define NVIC_STIR_R_INTID_SPI6					((uint32_t)0x00000056)
#define NVIC_STIR_R_INTID_SAI1					((uint32_t)0x00000057)
#define NVIC_STIR_R_INTID_LTDC					((uint32_t)0x00000058)
#define NVIC_STIR_R_INTID_LTDC_ER				((uint32_t)0x00000059)
#define NVIC_STIR_R_INTID_DMA2D					((uint32_t)0x0000005A)
#define NVIC_STIR_R_INTID_SAI2  				((uint32_t)0x0000005B)
#define NVIC_STIR_R_INTID_QUADSPI				((uint32_t)0x0000005C)
#define NVIC_STIR_R_INTID_LPTIM1				((uint32_t)0x0000005D)
#define NVIC_STIR_R_INTID_CEC	 				((uint32_t)0x0000005E)
#define NVIC_STIR_R_INTID_I2C4_EV				((uint32_t)0x0000005F)
#define NVIC_STIR_R_INTID_I2C_ER				((uint32_t)0x00000060)
#define NVIC_STIR_R_INTID_SPDIF_RX				((uint32_t)0x00000061)

#define NVIC_STIR_INTID_MASK			       	((uint32_t)0x000000FF)
#define NVIC_STIR_INTID_WWDG      				((uint32_t)0x00000000)
#define NVIC_STIR_INTID_PVD				      	((uint32_t)0x00000001)
#define NVIC_STIR_INTID_TRAMP_STAMP	    	    ((uint32_t)0x00000002)
#define NVIC_STIR_INTID_RTC_WKUP      			((uint32_t)0x00000003)
#define NVIC_STIR_INTID_FLASH      				((uint32_t)0x00000004)
#define NVIC_STIR_INTID_RCC      				((uint32_t)0x00000005)
#define NVIC_STIR_INTID_EXTI0     	 			((uint32_t)0x00000006)
#define NVIC_STIR_INTID_EXTI1       			((uint32_t)0x00000007)
#define NVIC_STIR_INTID_EXTI2       			((uint32_t)0x00000008)
#define NVIC_STIR_INTID_EXTI3  					((uint32_t)0x00000009)
#define NVIC_STIR_INTID_EXTI4   				((uint32_t)0x0000000A)
#define NVIC_STIR_INTID_DMA1_Stream0	   		((uint32_t)0x0000000B)
#define NVIC_STIR_INTID_DMA1_Stream1  			((uint32_t)0x0000000C)
#define NVIC_STIR_INTID_DMA1_Stream2  			((uint32_t)0x0000000D)
#define NVIC_STIR_INTID_DMA1_Stream3  			((uint32_t)0x0000000E)
#define NVIC_STIR_INTID_DMA1_Stream4  			((uint32_t)0x0000000F)
#define NVIC_STIR_INTID_DMA1_Stream5  			((uint32_t)0x00000010)
#define NVIC_STIR_INTID_DMA1_Stream6  			((uint32_t)0x00000011)
#define NVIC_STIR_INTID_ADC      				((uint32_t)0x00000012)
#define NVIC_STIR_INTID_CAN1_TX					((uint32_t)0x00000013)
#define NVIC_STIR_INTID_CAN1_RX0				((uint32_t)0x00000014)
#define NVIC_STIR_INTID_CAN1_RX1				((uint32_t)0x00000015)
#define NVIC_STIR_INTID_CAN1_SCE				((uint32_t)0x00000016)
#define NVIC_STIR_INTID_EXTI9_5					((uint32_t)0x00000017)
#define NVIC_STIR_INTID_TIM1_BRK_TIM9			((uint32_t)0x00000018)
#define NVIC_STIR_INTID_TIM1_UP_TIM10			((uint32_t)0x00000019)
#define NVIC_STIR_INTID_TIM1_TRG_COM_TIM11		((uint32_t)0x0000001A)
#define NVIC_STIR_INTID_TIM1_CC					((uint32_t)0x0000001B)
#define NVIC_STIR_INTID_TIM2					((uint32_t)0x0000001C)
#define NVIC_STIR_INTID_TIM3					((uint32_t)0x0000001D)
#define NVIC_STIR_INTID_TIM4					((uint32_t)0x0000001E)
#define NVIC_STIR_INTID_I2C1_EV					((uint32_t)0x0000001F)
#define NVIC_STIR_INTID_I2C1_ER					((uint32_t)0x00000020)
#define NVIC_STIR_INTID_I2C2_EV					((uint32_t)0x00000021)
#define NVIC_STIR_INTID_I2C2_ER					((uint32_t)0x00000022)
#define NVIC_STIR_INTID_SPI1					((uint32_t)0x00000023)
#define NVIC_STIR_INTID_SPI2					((uint32_t)0x00000024)
#define NVIC_STIR_INTID_USART1					((uint32_t)0x00000025)
#define NVIC_STIR_INTID_USART2					((uint32_t)0x00000026)
#define NVIC_STIR_INTID_USART3					((uint32_t)0x00000027)
#define NVIC_STIR_INTID_CEXTI15_10				((uint32_t)0x00000028)
#define NVIC_STIR_INTID_RTC_Alarm				((uint32_t)0x00000029)
#define NVIC_STIR_INTID_OTG_FS_WKUP				((uint32_t)0x0000002A)
#define NVIC_STIR_INTID_TIM8_BRK_TIM12			((uint32_t)0x0000002B)
#define NVIC_STIR_INTID_TIM8_UP_TIM13			((uint32_t)0x0000002C)
#define NVIC_STIR_INTID_TIM8_TRG_COM_TIM14		((uint32_t)0x0000002D)
#define NVIC_STIR_INTID_TIM8_CC					((uint32_t)0x0000002E)
#define NVIC_STIR_INTID_DMA1_Stream7			((uint32_t)0x0000002F)
#define NVIC_STIR_INTID_FMC						((uint32_t)0x00000030)
#define NVIC_STIR_INTID_SDIO					((uint32_t)0x00000031)
#define NVIC_STIR_INTID_TIM5					((uint32_t)0x00000032)
#define NVIC_STIR_INTID_SPI3					((uint32_t)0x00000033)
#define NVIC_STIR_INTID_UART4					((uint32_t)0x00000034)
#define NVIC_STIR_INTID_UART5					((uint32_t)0x00000035)
#define NVIC_STIR_INTID_TIM6_DAC				((uint32_t)0x00000036)
#define NVIC_STIR_INTID_TIM7					((uint32_t)0x00000037)
#define NVIC_STIR_INTID_DMA2_Stream0			((uint32_t)0x00000038)
#define NVIC_STIR_INTID_DMA2_Stream1			((uint32_t)0x00000039)
#define NVIC_STIR_INTID_DMA2_Stream2			((uint32_t)0x0000003A)
#define NVIC_STIR_INTID_DMA2_Stream3			((uint32_t)0x0000003B)
#define NVIC_STIR_INTID_DMA2_Stream4			((uint32_t)0x0000003C)
#define NVIC_STIR_INTID_ETH						((uint32_t)0x0000003D)
#define NVIC_STIR_INTID_ETH_WKUP				((uint32_t)0x0000003E)
#define NVIC_STIR_INTID_CAN2_TX					((uint32_t)0x0000003F)
#define NVIC_STIR_INTID_CAN2_RX0				((uint32_t)0x00000040)
#define NVIC_STIR_INTID_CAN2_RX1				((uint32_t)0x00000041)
#define NVIC_STIR_INTID_CAN2_SCE				((uint32_t)0x00000042)
#define NVIC_STIR_INTID_OTG_FS					((uint32_t)0x00000043)
#define NVIC_STIR_INTID_DMA2_Stream5			((uint32_t)0x00000044)
#define NVIC_STIR_INTID_DMA2_Stream6			((uint32_t)0x00000045)
#define NVIC_STIR_INTID_DMA2_Stream7			((uint32_t)0x00000046)
#define NVIC_STIR_INTID_USART6					((uint32_t)0x00000047)
#define NVIC_STIR_INTID_I2C3_EV					((uint32_t)0x00000048)
#define NVIC_STIR_INTID_I2C3_ER					((uint32_t)0x00000049)
#define NVIC_STIR_INTID_OTG_HS_EP1_OUT			((uint32_t)0x0000004A)
#define NVIC_STIR_INTID_OTG_HS_EP1_IN			((uint32_t)0x0000004B)
#define NVIC_STIR_INTID_OTG_HS_WKUP				((uint32_t)0x0000004C)
#define NVIC_STIR_INTID_OTG_HS					((uint32_t)0x0000004D)
#define NVIC_STIR_INTID_DCMI					((uint32_t)0x0000004E)
#define NVIC_STIR_INTID_reserved79				((uint32_t)0x0000004F)
#define NVIC_STIR_INTID_HASH_RNG				((uint32_t)0x00000050)
#define NVIC_STIR_INTID_FPU						((uint32_t)0x00000051)
#define NVIC_STIR_INTID_UART7					((uint32_t)0x00000052)
#define NVIC_STIR_INTID_UART8					((uint32_t)0x00000053)
#define NVIC_STIR_INTID_SPI4					((uint32_t)0x00000054)
#define NVIC_STIR_INTID_SPI5					((uint32_t)0x00000055)
#define NVIC_STIR_INTID_SPI6					((uint32_t)0x00000056)
#define NVIC_STIR_INTID_SAI1					((uint32_t)0x00000057)
#define NVIC_STIR_INTID_LTDC					((uint32_t)0x00000058)
#define NVIC_STIR_INTID_LTDC_ER					((uint32_t)0x00000059)
#define NVIC_STIR_INTID_DMA2D					((uint32_t)0x0000005A)
#define NVIC_STIR_INTID_SAI2  					((uint32_t)0x0000005B)
#define NVIC_STIR_INTID_QUADSPI					((uint32_t)0x0000005C)
#define NVIC_STIR_INTID_LPTIM1					((uint32_t)0x0000005D)
#define NVIC_STIR_INTID_CEC	 					((uint32_t)0x0000005E)
#define NVIC_STIR_INTID_I2C4_EV					((uint32_t)0x0000005F)
#define NVIC_STIR_INTID_I2C_ER					((uint32_t)0x00000060)
#define NVIC_STIR_INTID_SPDIF_RX				((uint32_t)0x00000061)

//---------------

//todo functions

int32_t NVIC_SET_Priority(IRQn_Type IRQn,uint32_t priority);
int32_t NVIC_GET_Priority(IRQn_Type IRQn);
int32_t NVIC_EN(IRQn_Type IRQn, uint32_t priority);
int32_t NVIC_DIS(IRQn_Type IRQn);
int32_t NVIC_GET_PEND(IRQn_Type IRQn);
int32_t NVIC_PEND(IRQn_Type IRQn);
int32_t NVIC_UNPEND(IRQn_Type IRQn);
int32_t NVIC_GET_ACTIVE(IRQn_Type IRQn);
int32_t NVIC_SWTRIGGER(IRQn_Type IRQn);




#endif /* NVIC_H_ */
