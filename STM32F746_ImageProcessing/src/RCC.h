/*
 * RCC.h
 *
 *  Created on: 26 jul. 2018
 *      Author: InDev
 */

#ifndef RCC_H_
#define RCC_H_

#include "Core.h"
#include "MPU.h"
#include "CACHE.h"
#include "AccessControl.h"
#include "FPU.h"
#include "FLASH.h"
#include "GPIO.h"
#include "PWR.h"
#include "SCB.h"
#include "SYSCFG.h"
#include <stdint.h>


#define HSE_VALUE    ((uint32_t)8000000) /*!< Default value of the External oscillator in Hz */
#define HSI_VALUE    ((uint32_t)16000000) /*!< Value of the Internal oscillator in Hz*/
#define HSE_STARTUP_TIMEOUT    ((uint16_t)0x0500)   /*!< Time out for HSE start up */


/* #define VECT_TAB_SRAM */
#define VECT_TAB_OFFSET  0x00 /*!< Vector Table base offset field.*/


#define RCC_BASE            ((uint32_t)0x40023800)
#define RCC_OFFSET          ((uint32_t)0x00023800)

typedef __IO struct
{
    __IO uint32_t HSION      	:1;
    __I  uint32_t HSIRDY      	:1;
         uint32_t reserved     	:1;
    __IO uint32_t HSITRIM      	:5;
    __I  uint32_t HSICAL      	:8;
    __IO uint32_t HSEON      	:1;
    __I  uint32_t HSERDY      	:1;
    __IO uint32_t HSEBYP      	:1;
    __IO uint32_t CSSON      	:1;
         uint32_t reserved1	    :4;
    __IO uint32_t PLLON      	:1;
    __I  uint32_t PLLRDY      	:1;
    __IO uint32_t PLLI2SON     	:1;
    __I  uint32_t PLLI2SRDY   	:1;
    __IO uint32_t PLLSAION     	:1;
    __I  uint32_t PLLSAIRDY   	:1;
    	 uint32_t reserved2	    :2;
}RCC_CR_TypeDef;/*0x00000000*/

typedef __IO struct
{
    __IO uint32_t PLLM      	:6;
    __IO uint32_t PLLN      	:9;
         uint32_t reserved     	:1;
    __IO uint32_t PLLP      	:2;
         uint32_t reserved1	    :4;
    __IO uint32_t PLLSRC      	:1;
	     uint32_t reserved2	    :1;
    __IO uint32_t PLLQ      	:4;
    	 uint32_t reserved3	    :4;
}RCC_PLLCFGR_TypeDef;/*0x00000004*/

typedef __IO struct
{
    __IO uint32_t SW	      	:2;
    __I  uint32_t SWS	      	:2;
    __IO uint32_t HPRE      	:4;
         uint32_t reserved     	:2;
    __IO uint32_t PPRE1      	:3;
    __IO uint32_t PPRE2      	:3;
    __IO uint32_t RTCPRE      	:5;
    __IO uint32_t MCO1      	:2;
    __IO uint32_t I2SSCR      	:1;
    __IO uint32_t MCO1PRE      	:3;
    __IO uint32_t MCO2PRE      	:3;
    __IO uint32_t MCO2      	:2;
}RCC_CFGR_TypeDef;/*0x00000008*/

typedef __IO struct
{
    __I  uint32_t LSIRDYF	      	:1;
    __I  uint32_t LSERDYF	      	:1;
    __I  uint32_t HSIRDYF	      	:1;
    __I  uint32_t HSERDYF	      	:1;
    __I  uint32_t PLLRDYF	      	:1;
    __I  uint32_t PLLI2SRDYF	    :1;
    __I  uint32_t PLLSAIRDYF	    :1;
    __I  uint32_t CSSF	    		:1;
    __IO uint32_t LSIRDYE	      	:1;
    __IO uint32_t LSERDYE	      	:1;
    __IO uint32_t HSIRDYE	      	:1;
    __IO uint32_t HSERDYE	      	:1;
    __IO uint32_t PLLRDYE	      	:1;
    __IO uint32_t PLLI2SRDYE	    :1;
    __IO uint32_t PLLSAIRDYE	    :1;
         uint32_t reserved   		:1;
    __IO uint32_t LSIRDYC	      	:1;
    __IO uint32_t LSERDYC	      	:1;
    __IO uint32_t HSIRDYC	      	:1;
    __IO uint32_t HSERDYC	      	:1;
    __IO uint32_t PLLRDYC	      	:1;
    __IO uint32_t PLLI2SRDYC	    :1;
    __IO uint32_t PLLSAIRDYC	    :1;
    __IO uint32_t CSSC        		:1;
         uint32_t reserved1   		:8;



}RCC_CIR_TypeDef;/*0x0000000C*/

typedef __IO struct
{
    __IO  uint32_t GPIOARST	      	:1;
    __IO  uint32_t GPIOBRST	      	:1;
    __IO  uint32_t GPIOCRST	      	:1;
    __IO  uint32_t GPIODRST	      	:1;
    __IO  uint32_t GPIOERST	      	:1;
    __IO  uint32_t GPIOFRST	      	:1;
    __IO  uint32_t GPIOGRST	      	:1;
    __IO  uint32_t GPIOHRST	      	:1;
    __IO  uint32_t GPIOIRST	      	:1;
    __IO  uint32_t GPIOJRST	      	:1;
    __IO  uint32_t GPIOKRST	      	:1;
          uint32_t reserved	      	:1;
    __IO  uint32_t CRCRST	      	:1;
          uint32_t reserved1      	:8;
    __IO  uint32_t DMA1RST	      	:1;
    __IO  uint32_t DMA2RST	      	:1;
    __IO  uint32_t DMA2DRST	      	:1;
          uint32_t reserved2      	:1;
    __IO  uint32_t ETHMACRST      	:1;
          uint32_t reserved3      	:3;
    __IO  uint32_t OTGHSRST      	:1;
          uint32_t reserved4      	:2;
}RCC_AHB1RSTR_TypeDef;/*0x00000010*/


typedef __IO struct
{
    __IO  uint32_t DCMIRST	      	:1;
          uint32_t reserved	      	:3;
    __IO  uint32_t CRYPRST	      	:1;
    __IO  uint32_t HASHRST	      	:1;
    __IO  uint32_t RNGRST	      	:1;
    __IO  uint32_t OTGFSRST	      	:1;
          uint32_t reserved1      	:24;
}RCC_AHB2RSTR_TypeDef;/*0x00000014*/


typedef __IO struct
{
    __IO  uint32_t FMCRST	      	:1;
    __IO  uint32_t QSPIRST	      	:1;
          uint32_t reserved	      	:30;
}RCC_AHB3RSTR_TypeDef;/*0x00000018*/


typedef __IO struct
{
    __IO  uint32_t TIM2RST	      	:1;
    __IO  uint32_t TIM3RST	      	:1;
    __IO  uint32_t TIM4RST	      	:1;
    __IO  uint32_t TIM5RST	      	:1;
    __IO  uint32_t TIM6RST	      	:1;
    __IO  uint32_t TIM7RST	      	:1;
    __IO  uint32_t TIM12RST	      	:1;
    __IO  uint32_t TIM13RST	      	:1;
    __IO  uint32_t TIM14RST	      	:1;
    __IO  uint32_t LPTIM1RST	   	:1;
          uint32_t reserved	      	:1;
    __IO  uint32_t WWDGRST	      	:1;
          uint32_t reserved1      	:2;
    __IO  uint32_t SPI2RST	      	:1;
    __IO  uint32_t SPI3RST	      	:1;
    __IO  uint32_t SPDIFRXRST      	:1;
    __IO  uint32_t USART2RST      	:1;
    __IO  uint32_t USART3RST      	:1;
    __IO  uint32_t UART4RST      	:1;
    __IO  uint32_t UART5RST      	:1;
    __IO  uint32_t I2C1RST      	:1;
    __IO  uint32_t I2C2RST      	:1;
    __IO  uint32_t I2C3RST      	:1;
    __IO  uint32_t I2C4RST      	:1;
    __IO  uint32_t CAN1RST      	:1;
    __IO  uint32_t CAN2RST      	:1;
    __IO  uint32_t CECRST         	:1;
    __IO  uint32_t PWRRST      		:1;
    __IO  uint32_t DACRST      		:1;
    __IO  uint32_t UART7RST      	:1;
    __IO  uint32_t UART8RST    		:1;
}RCC_APB1RSTR_TypeDef;/*0x00000020*/

typedef __IO struct
{
    __IO  uint32_t TIM1RST	      	:1;
    __IO  uint32_t TIM8RST	      	:1;
          uint32_t reserved	      	:2;
    __IO  uint32_t USART1RST      	:1;
    __IO  uint32_t USART6RST      	:1;
          uint32_t reserved1      	:2;
    __IO  uint32_t ADC1RST	      	:1;
    __IO  uint32_t ADC2RST	      	:1;
    __IO  uint32_t ADC3RST	      	:1;
    __IO  uint32_t SDMMC1RST	   	:1;
    __IO  uint32_t SPI1RST	      	:1;
    __IO  uint32_t SPI4RST	      	:1;
    __IO  uint32_t SYSCFGRST      	:1;
          uint32_t reserved3      	:1;
    __IO  uint32_t TIM9RST	      	:1;
    __IO  uint32_t TIM10RST	      	:1;
    __IO  uint32_t TIM11RST      	:1;
          uint32_t reserved4      	:1;
    __IO  uint32_t SPI5RST      	:1;
    __IO  uint32_t SPI6RST      	:1;
    __IO  uint32_t SAI1RST      	:1;
    __IO  uint32_t SAI2RST      	:1;
          uint32_t reserved5      	:2;
    __IO  uint32_t LTDCRST      	:1;
          uint32_t reserved6      	:5;
}RCC_APB2RSTR_TypeDef;/*0x00000024*/



typedef __IO struct
{
    __IO  uint32_t GPIOAEN	      	:1;
    __IO  uint32_t GPIOBEN	      	:1;
    __IO  uint32_t GPIOCEN	      	:1;
    __IO  uint32_t GPIODEN	      	:1;
    __IO  uint32_t GPIOEEN	      	:1;
    __IO  uint32_t GPIOFEN	      	:1;
    __IO  uint32_t GPIOGEN	      	:1;
    __IO  uint32_t GPIOHEN	      	:1;
    __IO  uint32_t GPIOIEN	      	:1;
    __IO  uint32_t GPIOJEN	      	:1;
    __IO  uint32_t GPIOKEN	      	:1;
          uint32_t reserved	      	:1;
    __IO  uint32_t CRCEN	      	:1;
          uint32_t reserved1      	:5;
    __IO  uint32_t BKPSRAMEN      	:1;
          uint32_t reserved2      	:1;
    __IO  uint32_t DTCMRAMEN        :1;
    __IO  uint32_t DMA1EN	      	:1;
    __IO  uint32_t DMA2EN	      	:1;
    __IO  uint32_t DMA2DEN	      	:1;
          uint32_t reserved3      	:1;
    __IO  uint32_t ETHMACEN      	:1;
    __IO  uint32_t ETHMACTXEN      	:1;
    __IO  uint32_t ETHMACRXEN      	:1;
    __IO  uint32_t ETHMACPTPEN     	:1;
    __IO  uint32_t OTGHSEN      	:1;
    __IO  uint32_t OTGHSULPIEN     	:1;
          uint32_t reserved5      	:1;
}RCC_AHB1ENR_TypeDef;/*0x00000030*/


typedef __IO struct
{
    __IO  uint32_t DCMIEN	      	:1;
          uint32_t reserved	      	:3;
    __IO  uint32_t CRYPEN	      	:1;
    __IO  uint32_t HASHEN	      	:1;
    __IO  uint32_t RNGEN	      	:1;
    __IO  uint32_t OTGFSEN	      	:1;
          uint32_t reserved1      	:24;
}RCC_AHB2ENR_TypeDef;/*0x00000034*/


typedef __IO struct
{
    __IO  uint32_t FMCEN	      	:1;
    __IO  uint32_t QSPIEN	      	:1;
          uint32_t reserved	      	:30;
}RCC_AHB3ENR_TypeDef;/*0x00000038*/


typedef __IO struct
{
    __IO  uint32_t TIM2EN	      	:1;
    __IO  uint32_t TIM3EN	      	:1;
    __IO  uint32_t TIM4EN	      	:1;
    __IO  uint32_t TIM5EN	      	:1;
    __IO  uint32_t TIM6EN	      	:1;
    __IO  uint32_t TIM7EN	      	:1;
    __IO  uint32_t TIM12EN	      	:1;
    __IO  uint32_t TIM13EN	      	:1;
    __IO  uint32_t TIM14EN	      	:1;
    __IO  uint32_t LPTIM1EN	      	:1;
          uint32_t reserved	      	:1;
    __IO  uint32_t WWDGEN	      	:1;
          uint32_t reserved1      	:2;
    __IO  uint32_t SPI2EN	      	:1;
    __IO  uint32_t SPI3EN	      	:1;
    __IO  uint32_t SPDIFRXEN	    :1;
    __IO  uint32_t USART2EN      	:1;
    __IO  uint32_t USART3EN      	:1;
    __IO  uint32_t UART4EN      	:1;
    __IO  uint32_t UART5EN      	:1;
    __IO  uint32_t I2C1EN      		:1;
    __IO  uint32_t I2C2EN      		:1;
    __IO  uint32_t I2C3EN      		:1;
    __IO  uint32_t I2C4EN      		:1;
    __IO  uint32_t CAN1EN      		:1;
    __IO  uint32_t CAN2EN      		:1;
    __IO  uint32_t CECEN      		:1;
    __IO  uint32_t PWREN      		:1;
    __IO  uint32_t DACEN      		:1;
    __IO  uint32_t UART7EN      	:1;
    __IO  uint32_t UART8EN    		:1;
}RCC_APB1ENR_TypeDef;/*0x00000040*/

typedef __IO struct
{
    __IO  uint32_t TIM1EN	      	:1;
    __IO  uint32_t TIM8EN	      	:1;
          uint32_t reserved	      	:2;
    __IO  uint32_t USART1EN      	:1;
    __IO  uint32_t USART6EN      	:1;
          uint32_t reserved1      	:2;
    __IO  uint32_t ADC1EN	      	:1;
    __IO  uint32_t ADC2EN	      	:1;
    __IO  uint32_t ADC3EN	      	:1;
    __IO  uint32_t SDMMC1EN	      	:1;
    __IO  uint32_t SPI1EN	      	:1;
    __IO  uint32_t SPI4EN	      	:1;
    __IO  uint32_t SYSCFGEN      	:1;
          uint32_t reserved2      	:1;
    __IO  uint32_t TIM9EN	      	:1;
    __IO  uint32_t TIM10EN	      	:1;
    __IO  uint32_t TIM11EN      	:1;
          uint32_t reserved3      	:1;
    __IO  uint32_t SPI5EN      		:1;
    __IO  uint32_t SPI6EN      		:1;
    __IO  uint32_t SAI1EN      		:1;
    __IO  uint32_t SAI2EN      		:1;
          uint32_t reserved4      	:2;
    __IO  uint32_t LTDCEN      		:1;
          uint32_t reserved5      	:5;
}RCC_APB2ENR_TypeDef;/*0x00000044*/




typedef __IO struct
{
    __IO  uint32_t GPIOALPEN      	:1;
    __IO  uint32_t GPIOBLPEN      	:1;
    __IO  uint32_t GPIOCLPEN      	:1;
    __IO  uint32_t GPIODLPEN      	:1;
    __IO  uint32_t GPIOELPEN      	:1;
    __IO  uint32_t GPIOFLPEN      	:1;
    __IO  uint32_t GPIOGLPEN      	:1;
    __IO  uint32_t GPIOHLPEN      	:1;
    __IO  uint32_t GPIOILPEN      	:1;
    __IO  uint32_t GPIOJLPEN      	:1;
    __IO  uint32_t GPIOKLPEN      	:1;
          uint32_t reserved	      	:1;
    __IO  uint32_t CRCLPEN	      	:1;
    __IO  uint32_t AXILPEN	      	:1;
          uint32_t reserved1      	:1;
    __IO  uint32_t FLITFLPEN     	:1;
    __IO  uint32_t SRAM1LPEN      	:1;
    __IO  uint32_t SRAM2LPEN      	:1;
    __IO  uint32_t BKPSRAMLPEN     	:1;
          uint32_t reserved2      	:1;
    __IO  uint32_t DTCMLPEN      	:1;
    __IO  uint32_t DMA1LPEN	      	:1;
    __IO  uint32_t DMA2LPEN	      	:1;
    __IO  uint32_t DMA2DLPEN	   	:1;
          uint32_t reserved3      	:1;
    __IO  uint32_t ETHMACLPEN      	:1;
    __IO  uint32_t ETHTXLPEN      	:1;
    __IO  uint32_t ETHRXLPEN      	:1;
    __IO  uint32_t ETHPTPLPEN      	:1;
    __IO  uint32_t OTGHSLPEN      	:1;
    __IO  uint32_t OTGHSULPILPEN    :1;
          uint32_t reserved5      	:1;
}RCC_AHB1LPENR_TypeDef;/*0x00000050*/


typedef __IO struct
{
    __IO  uint32_t DCMILPEN	      	:1;
          uint32_t reserved	      	:3;
    __IO  uint32_t CRYPLPEN	      	:1;
    __IO  uint32_t HASHLPEN	      	:1;
    __IO  uint32_t RNGLPEN	      	:1;
    __IO  uint32_t OTGFSLPEN      	:1;
          uint32_t reserved1      	:24;
}RCC_AHB2LPENR_TypeDef;/*0x00000054*/


typedef __IO struct
{
    __IO  uint32_t FMCLPEN	      	:1;
    __IO  uint32_t QSPILPEN	      	:1;
          uint32_t reserved	      	:30;
}RCC_AHB3LPENR_TypeDef;/*0x00000058*/


typedef __IO struct
{
    __IO  uint32_t TIM2LPEN	      	:1;
    __IO  uint32_t TIM3LPEN	      	:1;
    __IO  uint32_t TIM4LPEN	      	:1;
    __IO  uint32_t TIM5LPEN	      	:1;
    __IO  uint32_t TIM6LPEN	      	:1;
    __IO  uint32_t TIM7LPEN	      	:1;
    __IO  uint32_t TIM12LPEN	   	:1;
    __IO  uint32_t TIM13LPEN	   	:1;
    __IO  uint32_t TIM14LPEN	   	:1;
    __IO  uint32_t LPTMI1LPEN	   	:1;
          uint32_t reserved	      	:1;
    __IO  uint32_t WWDGLPEN	      	:1;
          uint32_t reserved1      	:2;
    __IO  uint32_t SPI2LPEN	      	:1;
    __IO  uint32_t SPI3LPEN	      	:1;
    __IO  uint32_t SPDIFRXLPEN	   	:1;
    __IO  uint32_t USART2LPEN      	:1;
    __IO  uint32_t USART3LPEN      	:1;
    __IO  uint32_t UART4LPEN      	:1;
    __IO  uint32_t UART5LPEN      	:1;
    __IO  uint32_t I2C1LPEN      	:1;
    __IO  uint32_t I2C2LPEN      	:1;
    __IO  uint32_t I2C3LPEN      	:1;
    __IO  uint32_t I2C4LPEN      	:1;
    __IO  uint32_t CAN1LPEN      	:1;
    __IO  uint32_t CAN2LPEN      	:1;
    __IO  uint32_t CECLPEN      	:1;
    __IO  uint32_t PWRLPEN     		:1;
    __IO  uint32_t DACLPEN     		:1;
    __IO  uint32_t UART7LPEN      	:1;
    __IO  uint32_t UART8LPEN    	:1;
}RCC_APB1LPENR_TypeDef;/*0x00000060*/

typedef __IO struct
{
    __IO  uint32_t TIM1LPEN	      	:1;
    __IO  uint32_t TIM8LPEN	      	:1;
          uint32_t reserved	      	:2;
    __IO  uint32_t USART1LPEN      	:1;
    __IO  uint32_t USART6LPEN      	:1;
          uint32_t reserved1      	:2;
    __IO  uint32_t ADC1LPEN	      	:1;
    __IO  uint32_t ADC2LPEN	      	:1;
    __IO  uint32_t ADC3LPEN	      	:1;
    __IO  uint32_t SDMMC1LPEN	   	:1;
    __IO  uint32_t SPI1LPEN	      	:1;
    __IO  uint32_t SPI4LPEN	      	:1;
    __IO  uint32_t SYSCFGLPEN      	:1;
          uint32_t reserved3      	:1;
    __IO  uint32_t TIM9LPEN	      	:1;
    __IO  uint32_t TIM10LPEN	   	:1;
    __IO  uint32_t TIM11LPEN      	:1;
          uint32_t reserved4      	:1;
    __IO  uint32_t SPI5LPEN      	:1;
    __IO  uint32_t SPI6LPEN      	:1;
    __IO  uint32_t SAI1LPEN      	:1;
    __IO  uint32_t SAI2LPEN      	:1;
          uint32_t reserved5      	:2;
    __IO  uint32_t LTDCLPEN      	:1;
          uint32_t reserved6      	:5;
}RCC_APB2LPENR_TypeDef;/*0x00000064*/

typedef __IO struct
{
    __IO  uint32_t LSEON	      	:1;
    __I   uint32_t LSERDY	      	:1;
    __IO  uint32_t LSEBYP	      	:1;
    __IO  uint32_t LSEDRV	      	:2;
          uint32_t reserved	      	:3;
    __IO  uint32_t RTCSEL	      	:2;
          uint32_t reserved1      	:5;
    __IO  uint32_t RTCEN	      	:1;
    __IO  uint32_t BDRST	      	:1;
          uint32_t reserved2      	:15;
}RCC_BDCR_TypeDef;/*0x00000070*/

typedef __IO struct
{
    __IO  uint32_t LSION	      	:1;
    __I   uint32_t LSIRDY	      	:1;
          uint32_t reserved	      	:22;
    __IO  uint32_t RMVF		      	:1;
    __I   uint32_t BORRSTF		   	:1;
    __I   uint32_t PINRSTF		   	:1;
    __I   uint32_t PORRSTF		   	:1;
    __I   uint32_t SFTRSTF		   	:1;
    __I   uint32_t IWDGRSTF		   	:1;
    __I   uint32_t WWDGRSTF		   	:1;
    __I   uint32_t LPWRRSTF		   	:1;
}RCC_CSR_TypeDef;/*0x00000074*/

typedef __IO struct
{
    __IO  uint32_t MODPER	      	:13;
    __IO  uint32_t INCSTEP	      	:15;
          uint32_t reserved	      	:2;
    __IO  uint32_t SPREADSEL      	:1;
    __IO  uint32_t SSCGEN		   	:1;
}RCC_SSCGR_TypeDef;/*0x00000080*/


typedef __IO struct
{
          uint32_t reserved	      	:6;
    __IO  uint32_t PLLI2SN	      	:9;
          uint32_t reserved1      	:1;
    __IO  uint32_t PLLI2SP	      	:2;
          uint32_t reserved2      	:6;
    __IO  uint32_t PLLI2SQ	      	:4;
    __IO  uint32_t PLLI2SR      	:3;
          uint32_t reserved3	   	:1;
}RCC_PLLI2SCFGR_TypeDef;/*0x00000084*/

typedef __IO struct
{
          uint32_t reserved	      	:6;
    __IO  uint32_t PLLSAIN	      	:9;
          uint32_t reserved1      	:1;
    __IO  uint32_t PLLSAIP	      	:2;
          uint32_t reserved2      	:6;
    __IO  uint32_t PLLSAIQ	      	:4;
    __IO  uint32_t PLLSAIR      	:3;
          uint32_t reserved3	   	:1;
}RCC_PLLSAICFGR_TypeDef;/*0x00000088*/


typedef __IO struct
{
    __IO  uint32_t PLLI2SDIVQ      	:5;
          uint32_t reserved	      	:3;
    __IO  uint32_t PLLSAIDIVQ      	:5;
          uint32_t reserved1      	:3;
    __IO  uint32_t PLLSAIDIVR     	:2;
          uint32_t reserved2      	:2;
    __IO  uint32_t SAI1ASRC      	:2;
    __IO  uint32_t SAI1BSRC      	:2;
    __IO  uint32_t TIMPRE	      	:1;
          uint32_t reserved3	   	:7;
}RCC_DKCFGR1_TypeDef;/*0x0000008C*/


typedef __IO struct
{
    __IO  uint32_t UART1SEL      	:2;
    __IO  uint32_t UART2SEL      	:2;
    __IO  uint32_t UART3SEL      	:2;
    __IO  uint32_t UART4SEL      	:2;
    __IO  uint32_t UART5SEL      	:2;
    __IO  uint32_t USART6SEL      	:2;
    __IO  uint32_t UART7SEL      	:2;
    __IO  uint32_t UART8SEL      	:2;
    __IO  uint32_t I2C1SEL      	:2;
    __IO  uint32_t I2C2SEL      	:2;
    __IO  uint32_t I2C3SEL      	:2;
    __IO  uint32_t I2C4SEL      	:2;
    __IO  uint32_t LPTIM1SEL      	:2;
    __IO  uint32_t CECSEL      	    :1;
    __IO  uint32_t CK48MSEL    	    :1;
    __IO  uint32_t SDMMC1SEL   	    :1;
          uint32_t reserved	      	:3;
}RCC_DCKCFGR2_TypeDef;/*0x00000090*/

typedef struct
{
	union
	{
		__IO uint32_t 			CR;            /*!< RCC clock control register,                                  Address offset: 0x00 */
		RCC_CR_TypeDef 			CR_Bit;
	};
	union
	{
		__IO uint32_t 			PLLCFGR;            /*!< RCC clock control register,                                  Address offset: 0x00 */
		RCC_PLLCFGR_TypeDef 	PLLCFGR_Bit;
	};
	union
	{
		__IO uint32_t 			CFGR;          /*!< RCC clock configuration register,                            Address offset: 0x08 */
		RCC_CFGR_TypeDef 		CFGR_Bit;
	};
	union
	{
		__IO uint32_t 			CIR;           /*!< RCC clock interrupt register,                                Address offset: 0x0C */
		RCC_CIR_TypeDef 		CIR_Bit;
	};
	union
	{
		 __IO uint32_t 			AHB1RSTR;      /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
		RCC_AHB1RSTR_TypeDef 	AHB1RSTR_Bit;
	};
	union
	{
		__IO uint32_t 			AHB2RSTR;      /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
		RCC_AHB2RSTR_TypeDef 	AHB2RSTR_Bit;
	};
	union
	{
		__IO uint32_t 			AHB3RSTR;      /*!< RCC AHB3 peripheral reset register,                          Address offset: 0x18 */
		RCC_AHB3RSTR_TypeDef 	AHB3RSTR_Bit;
	};
    uint32_t      				reserved;     /*!< Reserved, 0x1C                                                                    */
    union
	{
    	__IO uint32_t 			APB1RSTR;      /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
		RCC_APB1RSTR_TypeDef 	APB1RSTR_Bit;
	};
    union
	{
    	__IO uint32_t 			APB2RSTR;      /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
		RCC_APB2RSTR_TypeDef 	APB2RSTR_Bit;
	};
    uint32_t      				reserved1[2];  /*!< Reserved, 0x28-0x2C                                                               */
	union
	{
		 __IO uint32_t 			AHB1ENR;      /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x10 */
		RCC_AHB1ENR_TypeDef 	AHB1ENR_Bit;
	};
	union
	{
		__IO uint32_t 			AHB2ENR;      /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x14 */
		RCC_AHB2ENR_TypeDef 	AHB2ENR_Bit;
	};
	union
	{
		__IO uint32_t 			AHB3ENR;      /*!< RCC AHB3 peripheral clock register,                          Address offset: 0x18 */
		RCC_AHB3ENR_TypeDef 	AHB3ENR_Bit;
	};
    uint32_t      				reserved2;     /*!< Reserved, 0x1C                                                                    */
    union
	{
    	__IO uint32_t 			APB1ENR;      /*!< RCC APB1 peripheral clock register,                          Address offset: 0x20 */
		RCC_APB1ENR_TypeDef 	APB1ENR_Bit;
	};
    union
	{
    	__IO uint32_t 			APB2ENR;      /*!< RCC APB2 peripheral clock register,                          Address offset: 0x24 */
		RCC_APB2ENR_TypeDef 	APB2ENR_Bit;
	};
    uint32_t      				reserved3[2];  /*!< Reserved, 0x48-0x4C                                                               */
	union
	{
		 __IO uint32_t 			AHB1LPENR;      /*!< RCC AHB1 peripheral clock enable in low power mode register,                          Address offset: 0x10 */
		RCC_AHB1LPENR_TypeDef 	AHB1LPENR_Bit;
	};
	union
	{
		__IO uint32_t 			AHB2LPENR;      /*!< RCC AHB2 peripheral clock enable in low power mode register,                          Address offset: 0x14 */
		RCC_AHB2LPENR_TypeDef 	AHB2LPENR_Bit;
	};
	union
	{
		__IO uint32_t 			AHB3LPENR;      /*!< RCC AHB3 peripheral clock enable in low power mode register,                          Address offset: 0x18 */
		RCC_AHB3LPENR_TypeDef 	AHB3LPENR_Bit;
	};
    uint32_t      				reserved4;     /*!< Reserved, 0x1C                                                                    */
    union
	{
    	__IO uint32_t 			APB1LPENR;      /*!< RCC APB1 peripheral clock enable in low power mode register,                          Address offset: 0x20 */
		RCC_APB1LPENR_TypeDef 	APB1LPENR_Bit;
	};
    union
	{
    	__IO uint32_t 			APB2LPENR;      /*!< RCC APB2 peripheral clock enable in low power mode register,                          Address offset: 0x24 */
		RCC_APB2LPENR_TypeDef 	APB2LPENR_Bit;
	};
    uint32_t     				reserved5[2];  /*!< Reserved, 0x68-0x6C                                                               */
    union
	{
        __IO uint32_t 			BDCR;          /*!< RCC Backup domain control register,                          Address offset: 0x70 */
        RCC_BDCR_TypeDef		BDCR_Bit;
	};
    union
	{
    	__IO uint32_t 			CSR;           /*!< RCC clock control & status register,                         Address offset: 0x74 */
    	RCC_CSR_TypeDef    		CSR_Bit;
	};
    uint32_t      				reserved6[2];  /*!< Reserved, 0x78-0x7C                                                               */
    union
	{
        __IO uint32_t 			SSCGR;         /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
        RCC_SSCGR_TypeDef		SSCGR_Bit;
	};
    union
	{
    	 __IO uint32_t 			PLLI2SCFGR;    /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
    	 RCC_PLLI2SCFGR_TypeDef PLLI2SCFGR_Bit;
	};
    union
	{
    	__IO uint32_t 			PLLSAICFGR;    /*!< RCC PLLSAI configuration register,                           Address offset: 0x88 */
    	RCC_PLLSAICFGR_TypeDef  PLLSAICFGR_Bit;
	};
    union
	{
    	__IO uint32_t 			DKCFGR1;       /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
    	RCC_DKCFGR1_TypeDef	DKCFGR1_Bit;
	};
    union
	{
    	__IO uint32_t 			DCKCFGR2;       /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
    	RCC_DCKCFGR2_TypeDef	DCKCFGR2_Bit;
	};

} RCC_TypeDef;

#define RCC                 				((RCC_TypeDef *) RCC_BASE)

#define	RCC_CR_OFFSET						((uint32_t)0x00000000)
#define	RCC_PLLCFGR_OFFSET					((uint32_t)0x00000004)
#define	RCC_CFGR_OFFSET						((uint32_t)0x00000008)
#define	RCC_CIR_OFFSET						((uint32_t)0x0000000C)
#define	RCC_AHB1RSTR_OFFSET					((uint32_t)0x00000010)
#define	RCC_AHB2RSTR_OFFSET					((uint32_t)0x00000014)
#define	RCC_AHB3RSTR_OFFSET					((uint32_t)0x00000018)
#define	RCC_APB1RSTR_OFFSET					((uint32_t)0x00000020)
#define	RCC_APB2RSTR_OFFSET					((uint32_t)0x00000024)
#define	RCC_AHB1ENR_OFFSET					((uint32_t)0x00000030)
#define	RCC_AHB2ENR_OFFSET					((uint32_t)0x00000034)
#define	RCC_AHB3ENR_OFFSET					((uint32_t)0x00000038)
#define	RCC_APB1ENR_OFFSET					((uint32_t)0x00000040)
#define	RCC_APB2ENR_OFFSET					((uint32_t)0x00000044)
#define	RCC_AHB1LPENR_OFFSET				((uint32_t)0x00000050)
#define	RCC_AHB2LPENR_OFFSET				((uint32_t)0x00000054)
#define	RCC_AHB3LPENR_OFFSET				((uint32_t)0x00000058)
#define	RCC_APB1LPENR_OFFSET				((uint32_t)0x00000060)
#define	RCC_APB2LPENR_OFFSET				((uint32_t)0x00000064)
#define	RCC_BDCR_OFFSET						((uint32_t)0x00000070)
#define	RCC_CSR_OFFSET						((uint32_t)0x00000074)
#define	RCC_SSCGR_OFFSET					((uint32_t)0x00000080)
#define	RCC_PLLI2SCFGR_OFFSET				((uint32_t)0x00000084)
#define	RCC_PLLSAICFGR_OFFSET				((uint32_t)0x00000088)
#define	RCC_DKCFGR1_OFFSET					((uint32_t)0x0000008C)
#define	RCC_DCKCFGR2_OFFSET					((uint32_t)0x00000090)


/* TODO CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_CR            					(((RCC_CR_TypeDef*)(RCC_BASE+RCC_CR_OFFSET )))
#define RCC_CR_R          					(*((__IO uint32_t *)(RCC_BASE+RCC_CR_OFFSET)))

/*--------*/
#define RCC_CR_R_HSION_MASK    		((uint32_t)0x00000001)
#define RCC_CR_R_HSION_BIT     		(0)
#define RCC_CR_R_HSION_OFF    		((uint32_t)0x00000000)
#define RCC_CR_R_HSION_ON  	   		((uint32_t)0x00000001)

#define RCC_CR_HSION_MASK    		((uint32_t)0x00000001)
#define RCC_CR_HSION_OFF    		((uint32_t)0x00000000)
#define RCC_CR_HSION_ON		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_HSIRDY_MASK    	((uint32_t)0x00000002)
#define RCC_CR_R_HSIRDY_BIT     	(1)
#define RCC_CR_R_HSIRDY_NORDY    	((uint32_t)0x00000000)
#define RCC_CR_R_HSIRDY_RDY  	   	((uint32_t)0x00000002)

#define RCC_CR_HSIRDY_MASK    		((uint32_t)0x00000001)
#define RCC_CR_HSIRDY_NORDY    		((uint32_t)0x00000000)
#define RCC_CR_HSIRDY_RDY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_HSITRIM_MASK    	((uint32_t)0x000000F8)
#define RCC_CR_R_HSITRIM_BIT     	(3)

#define RCC_CR_HSITRIM_MASK    		((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define RCC_CR_R_HSICAL_MASK    	((uint32_t)0x0000FF00)
#define RCC_CR_R_HSICAL_BIT     	(8)

#define RCC_CR_HSICAL_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define RCC_CR_R_HSEON_MASK    		((uint32_t)0x00010000)
#define RCC_CR_R_HSEON_BIT     		(16)
#define RCC_CR_R_HSEON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_R_HSEON_ON  	   		((uint32_t)0x00010000)

#define RCC_CR_HSEON_MASK    		((uint32_t)0x00000001)
#define RCC_CR_HSEON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_HSEON_ON		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_HSERDY_MASK    	((uint32_t)0x00020000)
#define RCC_CR_R_HSERDY_BIT     	(17)
#define RCC_CR_R_HSERDY_NORDY    	((uint32_t)0x00000000)
#define RCC_CR_R_HSERDY_RDY  	   	((uint32_t)0x00020000)

#define RCC_CR_HSERDY_MASK    		((uint32_t)0x00000001)
#define RCC_CR_HSERDY_NORDY    		((uint32_t)0x00000000)
#define RCC_CR_HSERDY_RDY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_HSEBYP_MASK    	((uint32_t)0x00040000)
#define RCC_CR_R_HSEBYP_BIT     	(18)
#define RCC_CR_R_HSEBYP_NOBYP    	((uint32_t)0x00000000)
#define RCC_CR_R_HSEBYP_BYP  	   	((uint32_t)0x00040000)

#define RCC_CR_HSEBYP_MASK    		((uint32_t)0x00000001)
#define RCC_CR_HSEBYP_NOBYP    		((uint32_t)0x00000000)
#define RCC_CR_HSEBYP_BYP		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_CSSON_MASK    		((uint32_t)0x00080000)
#define RCC_CR_R_CSSON_BIT     		(19)
#define RCC_CR_R_CSSON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_R_CSSON_ON  	   		((uint32_t)0x00080000)

#define RCC_CR_CSSON_MASK    		((uint32_t)0x00000001)
#define RCC_CR_CSSON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_CSSON_ON		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_PLLON_MASK    		((uint32_t)0x01000000)
#define RCC_CR_R_PLLON_BIT     		(24)
#define RCC_CR_R_PLLON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_R_PLLON_ON  	   		((uint32_t)0x01000000)

#define RCC_CR_PLLON_MASK    		((uint32_t)0x00000001)
#define RCC_CR_PLLON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_PLLON_ON		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_PLLRDY_MASK    	((uint32_t)0x02000000)
#define RCC_CR_R_PLLRDY_BIT     	(25)
#define RCC_CR_R_PLLRDY_UNLOCK    	((uint32_t)0x00000000)
#define RCC_CR_R_PLLRDY_LOCK  	   	((uint32_t)0x02000000)

#define RCC_CR_PLLRDY_MASK    		((uint32_t)0x00000001)
#define RCC_CR_PLLRDY_UNLOCK    	((uint32_t)0x00000000)
#define RCC_CR_PLLRDY_LOCK		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_PLLI2SON_MASK    	((uint32_t)0x04000000)
#define RCC_CR_R_PLLI2SON_BIT     	(26)
#define RCC_CR_R_PLLI2SON_OFF    	((uint32_t)0x00000000)
#define RCC_CR_R_PLLI2SON_ON  	   	((uint32_t)0x04000000)

#define RCC_CR_PLLI2SON_MASK    	((uint32_t)0x00000001)
#define RCC_CR_PLLI2SON_OFF    		((uint32_t)0x00000000)
#define RCC_CR_PLLI2SON_ON		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_PLLI2SRDY_MASK    	((uint32_t)0x08000000)
#define RCC_CR_R_PLLI2SRDY_BIT     	(27)
#define RCC_CR_R_PLLI2SRDY_UNLOCK   ((uint32_t)0x00000000)
#define RCC_CR_R_PLLI2SRDY_LOCK  	((uint32_t)0x08000000)

#define RCC_CR_PLLI2SRDY_MASK    	((uint32_t)0x00000001)
#define RCC_CR_PLLI2SRDY_UNLOCK    	((uint32_t)0x00000000)
#define RCC_CR_PLLI2SRDY_LOCK		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_PLLSAION_MASK    	((uint32_t)0x10000000)
#define RCC_CR_R_PLLSAION_BIT     	(28)
#define RCC_CR_R_PLLSAION_OFF    	((uint32_t)0x00000000)
#define RCC_CR_R_PLLSAION_ON  	   	((uint32_t)0x10000000)

#define RCC_CR_PLLSAION_MASK    	((uint32_t)0x00000001)
#define RCC_CR_PLLSAION_OFF    		((uint32_t)0x00000000)
#define RCC_CR_PLLSAION_ON		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CR_R_PLLSAIRDY_MASK    	((uint32_t)0x20000000)
#define RCC_CR_R_PLLSAIRDY_BIT     	(29)
#define RCC_CR_R_PLLSAIRDY_UNLOCK   ((uint32_t)0x00000000)
#define RCC_CR_R_PLLSAIRDY_LOCK  	((uint32_t)0x20000000)

#define RCC_CR_PLLSAIRDY_MASK    	((uint32_t)0x00000001)
#define RCC_CR_PLLSAIRDY_UNLOCK    	((uint32_t)0x00000000)
#define RCC_CR_PLLSAIRDY_LOCK		((uint32_t)0x00000001)
/*--------*/

/* TODO PLLCFGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 PLLCFGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_PLLCFGR            					(((RCC_PLLCFGR_TypeDef*)(RCC_BASE+RCC_PLLCFGR_OFFSET )))
#define RCC_PLLCFGR_R          					(*((__IO uint32_t *)(RCC_BASE+RCC_PLLCFGR_OFFSET)))


/*--------*/
#define RCC_PLLCFGR_R_PLLM_MASK    	((uint32_t)0x0000003F)
#define RCC_PLLCFGR_R_PLLM_BIT     	(0)

#define RCC_PLLCFGR_PLLM_MASK    	((uint32_t)0x0000003F)
/*--------*/

/*--------*/
#define RCC_PLLCFGR_R_PLLN_MASK    	((uint32_t)0x00007FC0)
#define RCC_PLLCFGR_R_PLLN_BIT     	(6)

#define RCC_PLLCFGR_PLLN_MASK    	((uint32_t)0x000001FF)
/*--------*/

/*--------*/
#define RCC_PLLCFGR_R_PLLP_MASK    	((uint32_t)0x00030000)
#define RCC_PLLCFGR_R_PLLP_BIT     	(16)
#define RCC_PLLCFGR_R_PLLP_2    	((uint32_t)0x00000000)
#define RCC_PLLCFGR_R_PLLP_4    	((uint32_t)0x00010000)
#define RCC_PLLCFGR_R_PLLP_6    	((uint32_t)0x00020000)
#define RCC_PLLCFGR_R_PLLP_8    	((uint32_t)0x00030000)

#define RCC_PLLCFGR_PLLP_MASK    	((uint32_t)0x00000003)
#define RCC_PLLCFGR_PLLP_2	    	((uint32_t)0x00000000)
#define RCC_PLLCFGR_PLLP_4	    	((uint32_t)0x00000001)
#define RCC_PLLCFGR_PLLP_6	    	((uint32_t)0x00000002)
#define RCC_PLLCFGR_PLLP_8	    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_PLLCFGR_R_PLLSRC_MASK   ((uint32_t)0x00400000)
#define RCC_PLLCFGR_R_PLLSRC_BIT    (22)
#define RCC_PLLCFGR_R_PLLSRC_HSI   	((uint32_t)0x00000000)
#define RCC_PLLCFGR_R_PLLSRC_HSE  	((uint32_t)0x00400000)

#define RCC_PLLCFGR_PLLSRC_MASK    	((uint32_t)0x00000001)
#define RCC_PLLCFGR_PLLSRC_HSI      ((uint32_t)0x00000000)
#define RCC_PLLCFGR_PLLSRC_HSE	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_PLLCFGR_R_PLLQ_MASK    	((uint32_t)0x0F000000)
#define RCC_PLLCFGR_R_PLLQ_BIT     	(24)

#define RCC_PLLCFGR_PLLQ_MASK    	((uint32_t)0x0000000F)
/*--------*/

/* TODO CFGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 CFGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_CFGR            					(((RCC_CFGR_TypeDef*)(RCC_BASE+RCC_CFGR_OFFSET )))
#define RCC_CFGR_R          					(*((__IO uint32_t *)(RCC_BASE+RCC_CFGR_OFFSET)))


/*--------*/
#define RCC_CFGR_R_SW_MASK    		((uint32_t)0x00000003)
#define RCC_CFGR_R_SW_BIT     		(0)
#define RCC_CFGR_R_SW_HSI    		((uint32_t)0x00000000)
#define RCC_CFGR_R_SW_HSE    		((uint32_t)0x00000001)
#define RCC_CFGR_R_SW_PLL    		((uint32_t)0x00000002)

#define RCC_CFGR_SW_MASK    		((uint32_t)0x00000003)
#define RCC_CFGR_SW_HSI 	   		((uint32_t)0x00000000)
#define RCC_CFGR_SW_HSE	    		((uint32_t)0x00000001)
#define RCC_CFGR_SW_PLL	    		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_CFGR_R_SWS_MASK    		((uint32_t)0x0000000C)
#define RCC_CFGR_R_SWS_BIT     		(2)
#define RCC_CFGR_R_SWS_HSI    		((uint32_t)0x00000000)
#define RCC_CFGR_R_SWS_HSE    		((uint32_t)0x00000004)
#define RCC_CFGR_R_SWS_PLL    		((uint32_t)0x00000008)

#define RCC_CFGR_SWS_MASK    		((uint32_t)0x00000003)
#define RCC_CFGR_SWS_HSI 	   		((uint32_t)0x00000000)
#define RCC_CFGR_SWS_HSE	    	((uint32_t)0x00000001)
#define RCC_CFGR_SWS_PLL	    	((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_CFGR_R_HPRE_MASK    	((uint32_t)0x000000F0)
#define RCC_CFGR_R_HPRE_BIT     	(4)
#define RCC_CFGR_R_HPRE_1    		((uint32_t)0x00000000)
#define RCC_CFGR_R_HPRE_2    		((uint32_t)0x00000080)
#define RCC_CFGR_R_HPRE_4    		((uint32_t)0x00000090)
#define RCC_CFGR_R_HPRE_8    		((uint32_t)0x000000A0)
#define RCC_CFGR_R_HPRE_16    		((uint32_t)0x000000B0)
#define RCC_CFGR_R_HPRE_64    		((uint32_t)0x000000C0)
#define RCC_CFGR_R_HPRE_128  		((uint32_t)0x000000D0)
#define RCC_CFGR_R_HPRE_256  		((uint32_t)0x000000E0)
#define RCC_CFGR_R_HPRE_512  		((uint32_t)0x000000F0)

#define RCC_CFGR_HPRE_MASK    		((uint32_t)0x0000000F)
#define RCC_CFGR_HPRE_1 	   		((uint32_t)0x00000000)
#define RCC_CFGR_HPRE_2		    	((uint32_t)0x00000008)
#define RCC_CFGR_HPRE_4		    	((uint32_t)0x00000009)
#define RCC_CFGR_HPRE_8		    	((uint32_t)0x0000000A)
#define RCC_CFGR_HPRE_16			((uint32_t)0x0000000B)
#define RCC_CFGR_HPRE_64			((uint32_t)0x0000000C)
#define RCC_CFGR_HPRE_128			((uint32_t)0x0000000D)
#define RCC_CFGR_HPRE_256	    	((uint32_t)0x0000000E)
#define RCC_CFGR_HPRE_512	    	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define RCC_CFGR_R_PPRE1_MASK   	((uint32_t)0x00001C00)
#define RCC_CFGR_R_PPRE1_BIT    	(10)
#define RCC_CFGR_R_PPRE1_1    		((uint32_t)0x00000000)
#define RCC_CFGR_R_PPRE1_2    		((uint32_t)0x00001000)
#define RCC_CFGR_R_PPRE1_4    		((uint32_t)0x00001400)
#define RCC_CFGR_R_PPRE1_8    		((uint32_t)0x00001800)
#define RCC_CFGR_R_PPRE1_16    		((uint32_t)0x00001C00)

#define RCC_CFGR_PPRE1_MASK    		((uint32_t)0x00000007)
#define RCC_CFGR_PPRE1_1 	   		((uint32_t)0x00000000)
#define RCC_CFGR_PPRE1_2			((uint32_t)0x00000004)
#define RCC_CFGR_PPRE1_4			((uint32_t)0x00000005)
#define RCC_CFGR_PPRE1_8			((uint32_t)0x00000006)
#define RCC_CFGR_PPRE1_16			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define RCC_CFGR_R_PPRE2_MASK   	((uint32_t)0x0000E000)
#define RCC_CFGR_R_PPRE2_BIT    	(13)
#define RCC_CFGR_R_PPRE2_1    		((uint32_t)0x00000000)
#define RCC_CFGR_R_PPRE2_2    		((uint32_t)0x00008000)
#define RCC_CFGR_R_PPRE2_4    		((uint32_t)0x0000A000)
#define RCC_CFGR_R_PPRE2_8    		((uint32_t)0x0000C000)
#define RCC_CFGR_R_PPRE2_16   		((uint32_t)0x0000E000)

#define RCC_CFGR_PPRE2_MASK    		((uint32_t)0x00000007)
#define RCC_CFGR_PPRE2_1 	   		((uint32_t)0x00000000)
#define RCC_CFGR_PPRE2_2			((uint32_t)0x00000004)
#define RCC_CFGR_PPRE2_4			((uint32_t)0x00000005)
#define RCC_CFGR_PPRE2_8			((uint32_t)0x00000006)
#define RCC_CFGR_PPRE2_16			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define RCC_CFGR_R_RTCPRE_MASK  	((uint32_t)0x001F0000)
#define RCC_CFGR_R_RTCPRE_BIT   	(16)

#define RCC_CFGR_RTCPRE_MASK   		((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define RCC_CFGR_R_MCO1_MASK   		((uint32_t)0x00600000)
#define RCC_CFGR_R_MCO1_BIT    		(21)
#define RCC_CFGR_R_MCO1_HSI    		((uint32_t)0x00000000)
#define RCC_CFGR_R_MCO1_LSE  		((uint32_t)0x00200000)
#define RCC_CFGR_R_MCO1_HSE  		((uint32_t)0x00400000)
#define RCC_CFGR_R_MCO1_PLL  		((uint32_t)0x00600000)

#define RCC_CFGR_MCO1_MASK    		((uint32_t)0x00000003)
#define RCC_CFGR_MCO1_HSI	   		((uint32_t)0x00000000)
#define RCC_CFGR_MCO1_LSE			((uint32_t)0x00000001)
#define RCC_CFGR_MCO1_HSE			((uint32_t)0x00000002)
#define RCC_CFGR_MCO1_PLL			((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_CFGR_R_I2SSRC_MASK   	((uint32_t)0x00800000)
#define RCC_CFGR_R_I2SSRC_BIT    	(23)
#define RCC_CFGR_R_I2SSRC_PLLI2S  	((uint32_t)0x00000000)
#define RCC_CFGR_R_I2SSRC_EXT	  	((uint32_t)0x00800000)

#define RCC_CFGR_I2SSRC_MASK    	((uint32_t)0x00000001)
#define RCC_CFGR_I2SSRC_PLLI2S  	((uint32_t)0x00000000)
#define RCC_CFGR_I2SSRC_EXT			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CFGR_R_MCO1PRE_MASK		((uint32_t)0x07000000)
#define RCC_CFGR_R_MCO1PRE_BIT  	(24)
#define RCC_CFGR_R_MCO1PRE_1    	((uint32_t)0x00000000)
#define RCC_CFGR_R_MCO1PRE_2    	((uint32_t)0x04000000)
#define RCC_CFGR_R_MCO1PRE_3    	((uint32_t)0x05000000)
#define RCC_CFGR_R_MCO1PRE_4    	((uint32_t)0x06000000)
#define RCC_CFGR_R_MCO1PRE_5   		((uint32_t)0x07000000)

#define RCC_CFGR_MCO1PRE_MASK   	((uint32_t)0x00000007)
#define RCC_CFGR_MCO1PRE_1 	   		((uint32_t)0x00000000)
#define RCC_CFGR_MCO1PRE_2			((uint32_t)0x00000004)
#define RCC_CFGR_MCO1PRE_3			((uint32_t)0x00000005)
#define RCC_CFGR_MCO1PRE_4			((uint32_t)0x00000006)
#define RCC_CFGR_MCO1PRE_5			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define RCC_CFGR_R_MCO2PRE_MASK		((uint32_t)0x38000000)
#define RCC_CFGR_R_MCO2PRE_BIT  	(27)
#define RCC_CFGR_R_MCO2PRE_1    	((uint32_t)0x00000000)
#define RCC_CFGR_R_MCO2PRE_2    	((uint32_t)0x20000000)
#define RCC_CFGR_R_MCO2PRE_3    	((uint32_t)0x28000000)
#define RCC_CFGR_R_MCO2PRE_4    	((uint32_t)0x30000000)
#define RCC_CFGR_R_MCO2PRE_5   		((uint32_t)0x38000000)

#define RCC_CFGR_MCO2PRE_MASK   	((uint32_t)0x00000007)
#define RCC_CFGR_MCO2PRE_1 	   		((uint32_t)0x00000000)
#define RCC_CFGR_MCO2PRE_2			((uint32_t)0x00000004)
#define RCC_CFGR_MCO2PRE_3			((uint32_t)0x00000005)
#define RCC_CFGR_MCO2PRE_4			((uint32_t)0x00000006)
#define RCC_CFGR_MCO2PRE_5			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define RCC_CFGR_R_MCO2_MASK   		((uint32_t)0xC0000000)
#define RCC_CFGR_R_MCO2_BIT    		(30)
#define RCC_CFGR_R_MCO2_SYSCLK 		((uint32_t)0x00000000)
#define RCC_CFGR_R_MCO2_PLLI2S 		((uint32_t)0x40000000)
#define RCC_CFGR_R_MCO2_HSE			((uint32_t)0x80000000)
#define RCC_CFGR_R_MCO2_PLL  		((uint32_t)0xC0000000)

#define RCC_CFGR_MCO2_MASK    		((uint32_t)0x00000003)
#define RCC_CFGR_MCO2_SYSCLK   		((uint32_t)0x00000000)
#define RCC_CFGR_MCO2_PLLI2S		((uint32_t)0x00000001)
#define RCC_CFGR_MCO2_HSE			((uint32_t)0x00000002)
#define RCC_CFGR_MCO2_PLL			((uint32_t)0x00000003)
/*--------*/

/* TODO CIR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 CIR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_CIR            					(((RCC_CIR_TypeDef*)(RCC_BASE+RCC_CIR_OFFSET )))
#define RCC_CIR_R          					(*((__IO uint32_t *)(RCC_BASE+RCC_CIR_OFFSET)))

/*--------*/
#define RCC_CIR_R_LSIRDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_R_LSIRDYF_BIT     		(0)
#define RCC_CIR_R_LSIRDYF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CIR_R_LSIRDYF_OCCUR    		((uint32_t)0x00000001)

#define RCC_CIR_LSIRDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_LSIRDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_LSIRDYF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_LSERDYF_MASK    		((uint32_t)0x00000002)
#define RCC_CIR_R_LSERDYF_BIT     		(1)
#define RCC_CIR_R_LSERDYF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CIR_R_LSERDYF_OCCUR    		((uint32_t)0x00000002)

#define RCC_CIR_LSERDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_LSERDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_LSERDYF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_HSIRDYF_MASK    		((uint32_t)0x00000004)
#define RCC_CIR_R_HSIRDYF_BIT     		(2)
#define RCC_CIR_R_HSIRDYF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CIR_R_HSIRDYF_OCCUR    		((uint32_t)0x00000004)

#define RCC_CIR_HSIRDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_HSIRDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_HSIRDYF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_HSERDYF_MASK    		((uint32_t)0x00000008)
#define RCC_CIR_R_HSERDYF_BIT     		(3)
#define RCC_CIR_R_HSERDYF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CIR_R_HSERDYF_OCCUR    		((uint32_t)0x00000008)

#define RCC_CIR_HSERDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_HSERDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_HSERDYF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLRDYF_MASK    		((uint32_t)0x00000010)
#define RCC_CIR_R_PLLRDYF_BIT     		(4)
#define RCC_CIR_R_PLLRDYF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CIR_R_PLLRDYF_OCCUR    		((uint32_t)0x00000010)

#define RCC_CIR_PLLRDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLRDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_PLLRDYF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLI2SRDYF_MASK    	((uint32_t)0x00000020)
#define RCC_CIR_R_PLLI2SRDYF_BIT     	(5)
#define RCC_CIR_R_PLLI2SRDYF_NOOCCUR    ((uint32_t)0x00000000)
#define RCC_CIR_R_PLLI2SRDYF_OCCUR    	((uint32_t)0x00000020)

#define RCC_CIR_PLLI2SRDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLI2SRDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_PLLI2SRDYF_OCCUR	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLSAIRDYF_MASK    	((uint32_t)0x00000040)
#define RCC_CIR_R_PLLSAIRDYF_BIT     	(6)
#define RCC_CIR_R_PLLSAIRDYF_NOOCCUR    ((uint32_t)0x00000000)
#define RCC_CIR_R_PLLSAIRDYF_OCCUR    	((uint32_t)0x00000040)

#define RCC_CIR_PLLSAIRDYF_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLSAIRDYF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CIR_PLLSAIRDYF_OCCUR	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_CSSF_MASK    			((uint32_t)0x00000080)
#define RCC_CIR_R_CSSF_BIT     			(7)
#define RCC_CIR_R_CSSF_NOOCCUR    		((uint32_t)0x00000000)
#define RCC_CIR_R_CSSF_OCCUR    		((uint32_t)0x00000080)

#define RCC_CIR_CSSF_MASK    			((uint32_t)0x00000001)
#define RCC_CIR_CSSF_NOOCCUR 	   		((uint32_t)0x00000000)
#define RCC_CIR_CSSF_OCCUR	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_LSIRDYIE_MASK    		((uint32_t)0x00000100)
#define RCC_CIR_R_LSIRDYIE_BIT     		(8)
#define RCC_CIR_R_LSIRDYIE_DIS    		((uint32_t)0x00000000)
#define RCC_CIR_R_LSIRDYIE_EN    		((uint32_t)0x00000100)

#define RCC_CIR_LSIRDYIE_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_LSIRDYIE_DIS 	   		((uint32_t)0x00000000)
#define RCC_CIR_LSIRDYIE_EN	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_LSERDYIE_MASK    		((uint32_t)0x00000200)
#define RCC_CIR_R_LSERDYIE_BIT     		(9)
#define RCC_CIR_R_LSERDYIE_DIS    		((uint32_t)0x00000000)
#define RCC_CIR_R_LSERDYIE_EN    		((uint32_t)0x00000200)

#define RCC_CIR_LSERDYIE_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_LSERDYIE_DIS 	   		((uint32_t)0x00000000)
#define RCC_CIR_LSERDYIE_EN	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_HSIRDYIE_MASK    		((uint32_t)0x00000400)
#define RCC_CIR_R_HSIRDYIE_BIT     		(10)
#define RCC_CIR_R_HSIRDYIE_DIS    		((uint32_t)0x00000000)
#define RCC_CIR_R_HSIRDYIE_EN    		((uint32_t)0x00000400)

#define RCC_CIR_HSIRDYIE_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_HSIRDYIE_DIS 	   		((uint32_t)0x00000000)
#define RCC_CIR_HSIRDYIE_EN	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_HSERDYIE_MASK    		((uint32_t)0x00000800)
#define RCC_CIR_R_HSERDYIE_BIT     		(11)
#define RCC_CIR_R_HSERDYIE_DIS    		((uint32_t)0x00000000)
#define RCC_CIR_R_HSERDYIE_EN    		((uint32_t)0x00000800)

#define RCC_CIR_HSERDYIE_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_HSERDYIE_DIS 	   		((uint32_t)0x00000000)
#define RCC_CIR_HSERDYIE_EN	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLRDYIE_MASK    		((uint32_t)0x00001000)
#define RCC_CIR_R_PLLRDYIE_BIT     		(12)
#define RCC_CIR_R_PLLRDYIE_DIS    		((uint32_t)0x00000000)
#define RCC_CIR_R_PLLRDYIE_EN    		((uint32_t)0x00001000)

#define RCC_CIR_PLLRDYIE_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLRDYIE_DIS 	   		((uint32_t)0x00000000)
#define RCC_CIR_PLLRDYIE_EN	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLI2SRDYIE_MASK    	((uint32_t)0x00002000)
#define RCC_CIR_R_PLLI2SRDYIE_BIT     	(13)
#define RCC_CIR_R_PLLI2SRDYIE_DIS    	((uint32_t)0x00000000)
#define RCC_CIR_R_PLLI2SRDYIE_EN    	((uint32_t)0x00002000)

#define RCC_CIR_PLLI2SRDYIE_MASK    	((uint32_t)0x00000001)
#define RCC_CIR_PLLI2SRDYIE_DIS 	   	((uint32_t)0x00000000)
#define RCC_CIR_PLLI2SRDYIE_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLSAIRDYIE_MASK    	((uint32_t)0x00004000)
#define RCC_CIR_R_PLLSAIRDYIE_BIT     	(14)
#define RCC_CIR_R_PLLSAIRDYIE_DIS    	((uint32_t)0x00000000)
#define RCC_CIR_R_PLLSAIRDYIE_EN    	((uint32_t)0x00000040)

#define RCC_CIR_PLLSAIRDYIE_MASK    	((uint32_t)0x00000001)
#define RCC_CIR_PLLSAIRDYIE_DIS 	   	((uint32_t)0x00000000)
#define RCC_CIR_PLLSAIRDYIE_EN	    	((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define RCC_CIR_R_LSIRDYC_MASK    		((uint32_t)0x00010000)
#define RCC_CIR_R_LSIRDYC_BIT     		(16)
#define RCC_CIR_R_LSIRDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_LSIRDYC_CLEAR    		((uint32_t)0x00010000)

#define RCC_CIR_LSIRDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_LSIRDYC_NA 	   			((uint32_t)0x00000000)
#define RCC_CIR_LSIRDYC_CLEAR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_LSERDYC_MASK    		((uint32_t)0x00020000)
#define RCC_CIR_R_LSERDYC_BIT     		(17)
#define RCC_CIR_R_LSERDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_LSERDYC_CLEAR    		((uint32_t)0x00020000)

#define RCC_CIR_LSERDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_LSERDYC_NA 	   			((uint32_t)0x00000000)
#define RCC_CIR_LSERDYC_CLEAR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_HSIRDYC_MASK    		((uint32_t)0x00040000)
#define RCC_CIR_R_HSIRDYC_BIT     		(18)
#define RCC_CIR_R_HSIRDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_HSIRDYC_CLEAR    		((uint32_t)0x00040000)

#define RCC_CIR_HSIRDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_HSIRDYC_NA 	   			((uint32_t)0x00000000)
#define RCC_CIR_HSIRDYC_CLEAR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_HSERDYC_MASK    		((uint32_t)0x00080000)
#define RCC_CIR_R_HSERDYC_BIT     		(19)
#define RCC_CIR_R_HSERDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_HSERDYC_CLEAR    		((uint32_t)0x00080000)

#define RCC_CIR_HSERDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_HSERDYC_NA 	   			((uint32_t)0x00000000)
#define RCC_CIR_HSERDYC_CLEAR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLRDYC_MASK    		((uint32_t)0x00100000)
#define RCC_CIR_R_PLLRDYC_BIT     		(20)
#define RCC_CIR_R_PLLRDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_PLLRDYC_CLEAR    		((uint32_t)0x00100000)

#define RCC_CIR_PLLRDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLRDYC_NA 	   			((uint32_t)0x00000000)
#define RCC_CIR_PLLRDYC_CLEAR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLI2SRDYC_MASK    	((uint32_t)0x00200000)
#define RCC_CIR_R_PLLI2SRDYC_BIT     	(21)
#define RCC_CIR_R_PLLI2SRDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_PLLI2SRDYC_CLEAR    	((uint32_t)0x00200000)

#define RCC_CIR_PLLI2SRDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLI2SRDYC_NA 	   		((uint32_t)0x00000000)
#define RCC_CIR_PLLI2SRDYC_CLEAR	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_PLLSAIRDYC_MASK    	((uint32_t)0x00400000)
#define RCC_CIR_R_PLLSAIRDYC_BIT     	(22)
#define RCC_CIR_R_PLLSAIRDYC_NA    		((uint32_t)0x00000000)
#define RCC_CIR_R_PLLSAIRDYC_CLEAR    	((uint32_t)0x00400000)

#define RCC_CIR_PLLSAIRDYC_MASK    		((uint32_t)0x00000001)
#define RCC_CIR_PLLSAIRDYC_NA 	   		((uint32_t)0x00000000)
#define RCC_CIR_PLLSAIRDYC_CLEAR	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CIR_R_CSSC_MASK    			((uint32_t)0x00800000)
#define RCC_CIR_R_CSSC_BIT     			(23)
#define RCC_CIR_R_CSSC_NA    			((uint32_t)0x00000000)
#define RCC_CIR_R_CSSC_CLEAR    		((uint32_t)0x00800000)

#define RCC_CIR_CSSC_MASK    			((uint32_t)0x00000001)
#define RCC_CIR_CSSC_NA 	   			((uint32_t)0x00000000)
#define RCC_CIR_CSSC_CLEAR	    		((uint32_t)0x00000001)
/*--------*/


/* TODO AHB1RSTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 AHB1RSTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB1RSTR           				(((RCC_AHB1RSTR_TypeDef*)(RCC_BASE+RCC_AHB1RSTR_OFFSET )))
#define RCC_AHB1RSTR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB1RSTR_OFFSET)))


/*--------*/
#define RCC_AHB1RSTR_R_GPIOARST_MASK    ((uint32_t)0x00000001)
#define RCC_AHB1RSTR_R_GPIOARST_BIT     (0)
#define RCC_AHB1RSTR_R_GPIOARST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOARST_RST    	((uint32_t)0x00000001)

#define RCC_AHB1RSTR_GPIOARST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOARST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOARST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOBRST_MASK    ((uint32_t)0x00000002)
#define RCC_AHB1RSTR_R_GPIOBRST_BIT     (1)
#define RCC_AHB1RSTR_R_GPIOBRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOBRST_RST    	((uint32_t)0x00000002)

#define RCC_AHB1RSTR_GPIOBRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOBRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOBRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOCRST_MASK    ((uint32_t)0x00000004)
#define RCC_AHB1RSTR_R_GPIOCRST_BIT     (2)
#define RCC_AHB1RSTR_R_GPIOCRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOCRST_RST    	((uint32_t)0x00000004)

#define RCC_AHB1RSTR_GPIOCRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOCRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOCRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIODRST_MASK    ((uint32_t)0x00000008)
#define RCC_AHB1RSTR_R_GPIODRST_BIT     (3)
#define RCC_AHB1RSTR_R_GPIODRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIODRST_RST    	((uint32_t)0x00000008)

#define RCC_AHB1RSTR_GPIODRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIODRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIODRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOERST_MASK    ((uint32_t)0x00000010)
#define RCC_AHB1RSTR_R_GPIOERST_BIT     (4)
#define RCC_AHB1RSTR_R_GPIOERST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOERST_RST    	((uint32_t)0x00000010)

#define RCC_AHB1RSTR_GPIOERST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOERST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOERST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOFRST_MASK    ((uint32_t)0x00000020)
#define RCC_AHB1RSTR_R_GPIOFRST_BIT     (5)
#define RCC_AHB1RSTR_R_GPIOFRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOFRST_RST    	((uint32_t)0x00000020)

#define RCC_AHB1RSTR_GPIOFRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOFRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOFRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOGRST_MASK    ((uint32_t)0x00000040)
#define RCC_AHB1RSTR_R_GPIOGRST_BIT     (6)
#define RCC_AHB1RSTR_R_GPIOGRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOGRST_RST    	((uint32_t)0x00000040)

#define RCC_AHB1RSTR_GPIOGRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOGRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOGRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOHRST_MASK    ((uint32_t)0x00000080)
#define RCC_AHB1RSTR_R_GPIOHRST_BIT     (7)
#define RCC_AHB1RSTR_R_GPIOHRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOHRST_RST    	((uint32_t)0x00000080)

#define RCC_AHB1RSTR_GPIOHRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOHRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOHRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOIRST_MASK    ((uint32_t)0x00000100)
#define RCC_AHB1RSTR_R_GPIOIRST_BIT     (8)
#define RCC_AHB1RSTR_R_GPIOIRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOIRST_RST    	((uint32_t)0x00000100)

#define RCC_AHB1RSTR_GPIOIRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOIRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOIRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOJRST_MASK    ((uint32_t)0x00000200)
#define RCC_AHB1RSTR_R_GPIOJRST_BIT     (9)
#define RCC_AHB1RSTR_R_GPIOJRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOJRST_RST    	((uint32_t)0x00000200)

#define RCC_AHB1RSTR_GPIOJRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOJRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOJRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_GPIOKRST_MASK    ((uint32_t)0x00000400)
#define RCC_AHB1RSTR_R_GPIOKRST_BIT     (10)
#define RCC_AHB1RSTR_R_GPIOKRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_GPIOKRST_RST    	((uint32_t)0x00000400)

#define RCC_AHB1RSTR_GPIOKRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_GPIOKRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_GPIOKRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_CRCRST_MASK    	((uint32_t)0x00001000)
#define RCC_AHB1RSTR_R_CRCRST_BIT     	(12)
#define RCC_AHB1RSTR_R_CRCRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_CRCRST_RST    	((uint32_t)0x00001000)

#define RCC_AHB1RSTR_CRCRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_CRCRST_NA 	   		((uint32_t)0x00000000)
#define RCC_AHB1RSTR_CRCRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_DMA1RST_MASK    	((uint32_t)0x00200000)
#define RCC_AHB1RSTR_R_DMA1RST_BIT     	(21)
#define RCC_AHB1RSTR_R_DMA1RST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_DMA1RST_RST    	((uint32_t)0x00200000)

#define RCC_AHB1RSTR_DMA1RST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_DMA1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_DMA1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_DMA2RST_MASK    	((uint32_t)0x00400000)
#define RCC_AHB1RSTR_R_DMA2RST_BIT     	(22)
#define RCC_AHB1RSTR_R_DMA2RST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_DMA2RST_RST    	((uint32_t)0x00400000)

#define RCC_AHB1RSTR_DMA2RST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_DMA2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_DMA2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_DMA2DRST_MASK    ((uint32_t)0x00800000)
#define RCC_AHB1RSTR_R_DMA2DRST_BIT     (23)
#define RCC_AHB1RSTR_R_DMA2DRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_DMA2DRST_RST    	((uint32_t)0x00800000)

#define RCC_AHB1RSTR_DMA2DRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_DMA2DRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_DMA2DRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_ETHMACRST_MASK   ((uint32_t)0x02000000)
#define RCC_AHB1RSTR_R_ETHMACRST_BIT    (25)
#define RCC_AHB1RSTR_R_ETHMACRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_ETHMACRST_RST    ((uint32_t)0x02000000)

#define RCC_AHB1RSTR_ETHMACRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_ETHMACRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_ETHMACRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1RSTR_R_OTGHSRST_MASK   	((uint32_t)0x20000000)
#define RCC_AHB1RSTR_R_OTGHSRST_BIT    	(29)
#define RCC_AHB1RSTR_R_OTGHSRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_R_OTGHSRST_RST    	((uint32_t)0x20000000)

#define RCC_AHB1RSTR_OTGHSRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1RSTR_OTGHSRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB1RSTR_OTGHSRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/* TODO AHB2RSTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 AHB2RSTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB2RSTR           				(((RCC_AHB2RSTR_TypeDef*)(RCC_BASE+RCC_AHB2RSTR_OFFSET )))
#define RCC_AHB2RSTR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB2RSTR_OFFSET)))


/*--------*/
#define RCC_AHB2RSTR_R_DCMIRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2RSTR_R_DCMIRST_BIT     	(0)
#define RCC_AHB2RSTR_R_DCMIRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_R_DCMIRST_RST    	((uint32_t)0x00000001)

#define RCC_AHB2RSTR_DCMIRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2RSTR_DCMIRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_DCMIRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2RSTR_R_CRYPRST_MASK    	((uint32_t)0x00000010)
#define RCC_AHB2RSTR_R_CRYPRST_BIT     	(4)
#define RCC_AHB2RSTR_R_CRYPRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_R_CRYPRST_RST    	((uint32_t)0x00000010)

#define RCC_AHB2RSTR_CRYPRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2RSTR_CRYPRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_CRYPRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2RSTR_R_HASHRST_MASK    	((uint32_t)0x00000020)
#define RCC_AHB2RSTR_R_HASHRST_BIT     	(5)
#define RCC_AHB2RSTR_R_HASHRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_R_HASHRST_RST    	((uint32_t)0x00000020)

#define RCC_AHB2RSTR_HASHRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2RSTR_HASHRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_HASHRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2RSTR_R_RNGRST_MASK    	((uint32_t)0x00000040)
#define RCC_AHB2RSTR_R_RNGRST_BIT     	(6)
#define RCC_AHB2RSTR_R_RNGRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_R_RNGRST_RST    	((uint32_t)0x00000040)

#define RCC_AHB2RSTR_RNGRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2RSTR_RNGRST_NA 	   		((uint32_t)0x00000000)
#define RCC_AHB2RSTR_RNGRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2RSTR_R_OTGFSRST_MASK    ((uint32_t)0x00000080)
#define RCC_AHB2RSTR_R_OTGFSRST_BIT     (7)
#define RCC_AHB2RSTR_R_OTGFSRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_R_OTGFSRST_RST    	((uint32_t)0x00000080)

#define RCC_AHB2RSTR_OTGFSRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2RSTR_OTGFSRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB2RSTR_OTGFSRST_RST	    ((uint32_t)0x00000001)
/*--------*/


/* TODO AHB3RSTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 AHB3RSTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB3RSTR           				(((RCC_AHB3RSTR_TypeDef*)(RCC_BASE+RCC_AHB3RSTR_OFFSET )))
#define RCC_AHB3RSTR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB3RSTR_OFFSET)))

/*--------*/
#define RCC_AHB3RSTR_R_FMCRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB3RSTR_R_FMCRST_BIT     	(0)
#define RCC_AHB3RSTR_R_FMCRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB3RSTR_R_FMCRST_RST    	((uint32_t)0x00000001)

#define RCC_AHB3RSTR_FMCRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB3RSTR_FMCRST_NA 	   		((uint32_t)0x00000000)
#define RCC_AHB3RSTR_FMCRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB3RSTR_R_QSPIRST_MASK    	((uint32_t)0x00000002)
#define RCC_AHB3RSTR_R_QSPIRST_BIT     	(1)
#define RCC_AHB3RSTR_R_QSPIRST_NA    	((uint32_t)0x00000000)
#define RCC_AHB3RSTR_R_QSPIRST_RST    	((uint32_t)0x00000002)

#define RCC_AHB3RSTR_QSPIRST_MASK    	((uint32_t)0x00000001)
#define RCC_AHB3RSTR_QSPIRST_NA 	   	((uint32_t)0x00000000)
#define RCC_AHB3RSTR_QSPIRST_RST	    ((uint32_t)0x00000001)
/*--------*/


/* TODO APB1RSTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 APB1RSTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_APB1RSTR           				(((RCC_APB1RSTR_TypeDef*)(RCC_BASE+RCC_APB1RSTR_OFFSET )))
#define RCC_APB1RSTR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_APB1RSTR_OFFSET)))

/*--------*/
#define RCC_APB1RSTR_R_TIM2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_R_TIM2RST_BIT     	(0)
#define RCC_APB1RSTR_R_TIM2RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM2RST_RST    	((uint32_t)0x00000001)

#define RCC_APB1RSTR_TIM2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM3RST_MASK    	((uint32_t)0x00000002)
#define RCC_APB1RSTR_R_TIM3RST_BIT     	(1)
#define RCC_APB1RSTR_R_TIM3RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM3RST_RST    	((uint32_t)0x00000002)

#define RCC_APB1RSTR_TIM3RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM3RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM3RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM4RST_MASK    	((uint32_t)0x00000004)
#define RCC_APB1RSTR_R_TIM4RST_BIT     	(2)
#define RCC_APB1RSTR_R_TIM4RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM4RST_RST    	((uint32_t)0x00000004)

#define RCC_APB1RSTR_TIM4RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM4RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM4RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM5RST_MASK    	((uint32_t)0x00000008)
#define RCC_APB1RSTR_R_TIM5RST_BIT     	(3)
#define RCC_APB1RSTR_R_TIM5RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM5RST_RST    	((uint32_t)0x00000008)

#define RCC_APB1RSTR_TIM5RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM5RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM5RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM6RST_MASK    	((uint32_t)0x00000010)
#define RCC_APB1RSTR_R_TIM6RST_BIT     	(4)
#define RCC_APB1RSTR_R_TIM6RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM6RST_RST    	((uint32_t)0x00000010)

#define RCC_APB1RSTR_TIM6RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM6RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM6RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM7RST_MASK    	((uint32_t)0x00000020)
#define RCC_APB1RSTR_R_TIM7RST_BIT     	(5)
#define RCC_APB1RSTR_R_TIM7RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM7RST_RST    	((uint32_t)0x00000020)

#define RCC_APB1RSTR_TIM7RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM7RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM7RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM12RST_MASK    ((uint32_t)0x00000040)
#define RCC_APB1RSTR_R_TIM12RST_BIT     (6)
#define RCC_APB1RSTR_R_TIM12RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM12RST_RST    	((uint32_t)0x00000040)

#define RCC_APB1RSTR_TIM12RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM12RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM12RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM13RST_MASK    ((uint32_t)0x00000080)
#define RCC_APB1RSTR_R_TIM13RST_BIT     (7)
#define RCC_APB1RSTR_R_TIM13RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM13RST_RST    	((uint32_t)0x00000080)

#define RCC_APB1RSTR_TIM13RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM13RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM13RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_TIM14RST_MASK    ((uint32_t)0x00000100)
#define RCC_APB1RSTR_R_TIM14RST_BIT     (8)
#define RCC_APB1RSTR_R_TIM14RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_TIM14RST_RST    	((uint32_t)0x00000100)

#define RCC_APB1RSTR_TIM14RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_TIM14RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_TIM14RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_LPTIM1RST_MASK   ((uint32_t)0x00000200)
#define RCC_APB1RSTR_R_LPTIM1RST_BIT    (9)
#define RCC_APB1RSTR_R_LPTIM1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_LPTIM1RST_RST    ((uint32_t)0x00000200)

#define RCC_APB1RSTR_LPTIM1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_LPTIM1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_LPTIM1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_WWDGRST_MASK   	((uint32_t)0x00000800)
#define RCC_APB1RSTR_R_WWDGRST_BIT    	(11)
#define RCC_APB1RSTR_R_WWDGRST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_WWDGRST_RST    	((uint32_t)0x00000800)

#define RCC_APB1RSTR_WWDGRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_WWDGRST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_WWDGRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_SPI2RST_MASK   	((uint32_t)0x00004000)
#define RCC_APB1RSTR_R_SPI2RST_BIT    	(14)
#define RCC_APB1RSTR_R_SPI2RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_SPI2RST_RST    	((uint32_t)0x00004000)

#define RCC_APB1RSTR_SPI2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_SPI2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_SPI2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_SPI3RST_MASK   	((uint32_t)0x00008000)
#define RCC_APB1RSTR_R_SPI3RST_BIT    	(15)
#define RCC_APB1RSTR_R_SPI3RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_SPI3RST_RST    	((uint32_t)0x00008000)

#define RCC_APB1RSTR_SPI3RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_SPI3RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_SPI3RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_SPDIFRXRST_MASK  ((uint32_t)0x00010000)
#define RCC_APB1RSTR_R_SPDIFRXRST_BIT   (16)
#define RCC_APB1RSTR_R_SPDIFRXRST_NA    ((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_SPDIFRXRST_RST   ((uint32_t)0x00010000)

#define RCC_APB1RSTR_SPDIFRXRST_MASK    ((uint32_t)0x00000001)
#define RCC_APB1RSTR_SPDIFRXRST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_SPDIFRXRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_USART2RST_MASK  	((uint32_t)0x00020000)
#define RCC_APB1RSTR_R_USART2RST_BIT   	(17)
#define RCC_APB1RSTR_R_USART2RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_USART2RST_RST   	((uint32_t)0x00020000)

#define RCC_APB1RSTR_USART2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_USART2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_USART2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_USART3RST_MASK  	((uint32_t)0x00040000)
#define RCC_APB1RSTR_R_USART3RST_BIT   	(18)
#define RCC_APB1RSTR_R_USART3RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_USART3RST_RST   	((uint32_t)0x00040000)

#define RCC_APB1RSTR_USART3RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_USART3RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_USART3RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_UART4RST_MASK  	((uint32_t)0x00080000)
#define RCC_APB1RSTR_R_UART4RST_BIT   	(19)
#define RCC_APB1RSTR_R_UART4RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_UART4RST_RST   	((uint32_t)0x00080000)

#define RCC_APB1RSTR_UART4RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_UART4RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_UART4RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_UART5RST_MASK  	((uint32_t)0x00100000)
#define RCC_APB1RSTR_R_UART5RST_BIT   	(20)
#define RCC_APB1RSTR_R_UART5RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_UART5RST_RST   	((uint32_t)0x00100000)

#define RCC_APB1RSTR_UART5RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_UART5RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_UART5RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_I2C1RST_MASK  	((uint32_t)0x00200000)
#define RCC_APB1RSTR_R_I2C1RST_BIT   	(21)
#define RCC_APB1RSTR_R_I2C1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_I2C1RST_RST   	((uint32_t)0x00200000)

#define RCC_APB1RSTR_I2C1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_I2C1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_I2C1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_I2C2RST_MASK  	((uint32_t)0x00400000)
#define RCC_APB1RSTR_R_I2C2RST_BIT   	(22)
#define RCC_APB1RSTR_R_I2C2RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_I2C2RST_RST   	((uint32_t)0x00400000)

#define RCC_APB1RSTR_I2C2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_I2C2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_I2C2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_I2C3RST_MASK  	((uint32_t)0x00800000)
#define RCC_APB1RSTR_R_I2C3RST_BIT   	(23)
#define RCC_APB1RSTR_R_I2C3RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_I2C3RST_RST   	((uint32_t)0x00800000)

#define RCC_APB1RSTR_I2C3RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_I2C3RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_I2C3RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_I2C4RST_MASK  	((uint32_t)0x01000000)
#define RCC_APB1RSTR_R_I2C4RST_BIT   	(24)
#define RCC_APB1RSTR_R_I2C4RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_I2C4RST_RST   	((uint32_t)0x01000000)

#define RCC_APB1RSTR_I2C4RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_I2C4RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_I2C4RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_CAN1RST_MASK  	((uint32_t)0x02000000)
#define RCC_APB1RSTR_R_CAN1RST_BIT   	(25)
#define RCC_APB1RSTR_R_CAN1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_CAN1RST_RST   	((uint32_t)0x02000000)

#define RCC_APB1RSTR_CAN1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_CAN1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_CAN1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_CAN2RST_MASK  	((uint32_t)0x04000000)
#define RCC_APB1RSTR_R_CAN2RST_BIT   	(26)
#define RCC_APB1RSTR_R_CAN2RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_CAN2RST_RST   	((uint32_t)0x04000000)

#define RCC_APB1RSTR_CAN2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_CAN2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_CAN2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_CECRST_MASK  	((uint32_t)0x08000000)
#define RCC_APB1RSTR_R_CECRST_BIT   	(27)
#define RCC_APB1RSTR_R_CECRST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_CECRST_RST   	((uint32_t)0x08000000)

#define RCC_APB1RSTR_CECRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_CECRST_NA 	   		((uint32_t)0x00000000)
#define RCC_APB1RSTR_CECRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_PWRRST_MASK  	((uint32_t)0x10000000)
#define RCC_APB1RSTR_R_PWRRST_BIT   	(28)
#define RCC_APB1RSTR_R_PWRRST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_PWRRST_RST   	((uint32_t)0x10000000)

#define RCC_APB1RSTR_PWRRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_PWRRST_NA 	   		((uint32_t)0x00000000)
#define RCC_APB1RSTR_PWRRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_DACRST_MASK  	((uint32_t)0x20000000)
#define RCC_APB1RSTR_R_DACRST_BIT   	(29)
#define RCC_APB1RSTR_R_DACRST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_DACRST_RST   	((uint32_t)0x20000000)

#define RCC_APB1RSTR_DACRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_DACRST_NA 	   		((uint32_t)0x00000000)
#define RCC_APB1RSTR_DACRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_UART7RST_MASK  	((uint32_t)0x40000000)
#define RCC_APB1RSTR_R_UART7RST_BIT   	(30)
#define RCC_APB1RSTR_R_UART7RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_UART7RST_RST   	((uint32_t)0x40000000)

#define RCC_APB1RSTR_UART7RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_UART7RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_UART7RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1RSTR_R_UART8RST_MASK  	((uint32_t)0x80000000)
#define RCC_APB1RSTR_R_UART8RST_BIT   	(31)
#define RCC_APB1RSTR_R_UART8RST_NA    	((uint32_t)0x00000000)
#define RCC_APB1RSTR_R_UART8RST_RST   	((uint32_t)0x80000000)

#define RCC_APB1RSTR_UART8RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB1RSTR_UART8RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB1RSTR_UART8RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/* TODO APB2RSTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 APB2RSTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_APB2RSTR           				(((RCC_APB2RSTR_TypeDef*)(RCC_BASE+RCC_APB2RSTR_OFFSET )))
#define RCC_APB2RSTR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_APB2RSTR_OFFSET)))


/*--------*/
#define RCC_APB2RSTR_R_TIM1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_R_TIM1RST_BIT     	(0)
#define RCC_APB2RSTR_R_TIM1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_TIM1RST_RST    	((uint32_t)0x00000001)

#define RCC_APB2RSTR_TIM1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_TIM1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_TIM1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_TIM8RST_MASK    	((uint32_t)0x00000002)
#define RCC_APB2RSTR_R_TIM8RST_BIT     	(1)
#define RCC_APB2RSTR_R_TIM8RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_TIM8RST_RST    	((uint32_t)0x00000002)

#define RCC_APB2RSTR_TIM8RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_TIM8RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_TIM8RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_USART1RST_MASK   ((uint32_t)0x00000010)
#define RCC_APB2RSTR_R_USART1RST_BIT    (4)
#define RCC_APB2RSTR_R_USART1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_USART1RST_RST    ((uint32_t)0x00000010)

#define RCC_APB2RSTR_USART1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_USART1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_USART1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_USART6RST_MASK   ((uint32_t)0x00000020)
#define RCC_APB2RSTR_R_USART6RST_BIT    (5)
#define RCC_APB2RSTR_R_USART6RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_USART6RST_RST    ((uint32_t)0x00000020)

#define RCC_APB2RSTR_USART6RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_USART6RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_USART6RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_ADCRST_MASK   	((uint32_t)0x00000100)
#define RCC_APB2RSTR_R_ADCRST_BIT    	(8)
#define RCC_APB2RSTR_R_ADCRST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_ADCRST_RST    	((uint32_t)0x00000100)

#define RCC_APB2RSTR_ADCRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_ADCRST_NA 	   		((uint32_t)0x00000000)
#define RCC_APB2RSTR_ADCRST_RST	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SDMMC1RST_MASK   ((uint32_t)0x00000800)
#define RCC_APB2RSTR_R_SDMMC1RST_BIT    (11)
#define RCC_APB2RSTR_R_SDMMC1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SDMMC1RST_RST    ((uint32_t)0x00000800)

#define RCC_APB2RSTR_SDMMC1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SDMMC1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SDMMC1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SPI1RST_MASK   	((uint32_t)0x00001000)
#define RCC_APB2RSTR_R_SPI1RST_BIT    	(12)
#define RCC_APB2RSTR_R_SPI1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SPI1RST_RST    	((uint32_t)0x00001000)

#define RCC_APB2RSTR_SPI1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SPI1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SPI1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SPI4RST_MASK   	((uint32_t)0x00002000)
#define RCC_APB2RSTR_R_SPI4RST_BIT    	(13)
#define RCC_APB2RSTR_R_SPI4RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SPI4RST_RST    	((uint32_t)0x00002000)

#define RCC_APB2RSTR_SPI4RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SPI4RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SPI4RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SYSCFGRST_MASK   ((uint32_t)0x00004000)
#define RCC_APB2RSTR_R_SYSCFGRST_BIT    (14)
#define RCC_APB2RSTR_R_SYSCFGRST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SYSCFGRST_RST    ((uint32_t)0x00004000)

#define RCC_APB2RSTR_SYSCFGRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SYSCFGRST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SYSCFGRST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_TIM9RST_MASK   	((uint32_t)0x00010000)
#define RCC_APB2RSTR_R_TIM9RST_BIT    	(16)
#define RCC_APB2RSTR_R_TIM9RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_TIM9RST_RST    	((uint32_t)0x00010000)

#define RCC_APB2RSTR_TIM9RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_TIM9RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_TIM9RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_TIM10RST_MASK   	((uint32_t)0x00020000)
#define RCC_APB2RSTR_R_TIM10RST_BIT    	(17)
#define RCC_APB2RSTR_R_TIM10RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_TIM10RST_RST    	((uint32_t)0x00020000)

#define RCC_APB2RSTR_TIM10RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_TIM10RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_TIM10RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_TIM11RST_MASK   	((uint32_t)0x00040000)
#define RCC_APB2RSTR_R_TIM11RST_BIT    	(18)
#define RCC_APB2RSTR_R_TIM11RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_TIM11RST_RST    	((uint32_t)0x00040000)

#define RCC_APB2RSTR_TIM11RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_TIM11RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_TIM11RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SPI5RST_MASK   	((uint32_t)0x00100000)
#define RCC_APB2RSTR_R_SPI5RST_BIT    	(20)
#define RCC_APB2RSTR_R_SPI5RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SPI5RST_RST    	((uint32_t)0x00100000)

#define RCC_APB2RSTR_SPI5RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SPI5RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SPI5RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SPI6RST_MASK   	((uint32_t)0x00200000)
#define RCC_APB2RSTR_R_SPI6RST_BIT    	(21)
#define RCC_APB2RSTR_R_SPI6RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SPI6RST_RST    	((uint32_t)0x00200000)

#define RCC_APB2RSTR_SPI6RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SPI6RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SPI6RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SAI1RST_MASK   	((uint32_t)0x00400000)
#define RCC_APB2RSTR_R_SAI1RST_BIT    	(22)
#define RCC_APB2RSTR_R_SAI1RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SAI1RST_RST    	((uint32_t)0x00400000)

#define RCC_APB2RSTR_SAI1RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SAI1RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SAI1RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_SAI2RST_MASK   	((uint32_t)0x00800000)
#define RCC_APB2RSTR_R_SAI2RST_BIT    	(23)
#define RCC_APB2RSTR_R_SAI2RST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_SAI2RST_RST    	((uint32_t)0x00800000)

#define RCC_APB2RSTR_SAI2RST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_SAI2RST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_SAI2RST_RST	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2RSTR_R_LTDCRST_MASK   	((uint32_t)0x04000000)
#define RCC_APB2RSTR_R_LTDCRST_BIT    	(26)
#define RCC_APB2RSTR_R_LTDCRST_NA    	((uint32_t)0x00000000)
#define RCC_APB2RSTR_R_LTDCRST_RST    	((uint32_t)0x04000000)

#define RCC_APB2RSTR_LTDCRST_MASK    	((uint32_t)0x00000001)
#define RCC_APB2RSTR_LTDCRST_NA 	   	((uint32_t)0x00000000)
#define RCC_APB2RSTR_LTDCRST_RST	    ((uint32_t)0x00000001)
/*--------*/


/* TODO AHB1ENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 AHB1ENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB1ENR           				(((RCC_AHB1ENR_TypeDef*)(RCC_BASE+RCC_AHB1ENR_OFFSET )))
#define RCC_AHB1ENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB1ENR_OFFSET)))


/*--------*/
#define RCC_AHB1ENR_R_GPIOAEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_R_GPIOAEN_BIT     	(0)
#define RCC_AHB1ENR_R_GPIOAEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOAEN_EN    	((uint32_t)0x00000001)

#define RCC_AHB1ENR_GPIOAEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOAEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOAEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOBEN_MASK    	((uint32_t)0x00000002)
#define RCC_AHB1ENR_R_GPIOBEN_BIT     	(1)
#define RCC_AHB1ENR_R_GPIOBEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOBEN_EN    	((uint32_t)0x00000002)

#define RCC_AHB1ENR_GPIOBEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOBEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOBEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOCEN_MASK    	((uint32_t)0x00000004)
#define RCC_AHB1ENR_R_GPIOCEN_BIT     	(2)
#define RCC_AHB1ENR_R_GPIOCEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOCEN_EN    	((uint32_t)0x00000004)

#define RCC_AHB1ENR_GPIOCEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOCEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOCEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIODEN_MASK    	((uint32_t)0x00000008)
#define RCC_AHB1ENR_R_GPIODEN_BIT     	(3)
#define RCC_AHB1ENR_R_GPIODEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIODEN_EN    	((uint32_t)0x00000008)

#define RCC_AHB1ENR_GPIODEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIODEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIODEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOEEN_MASK    	((uint32_t)0x00000010)
#define RCC_AHB1ENR_R_GPIOEEN_BIT     	(4)
#define RCC_AHB1ENR_R_GPIOEEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOEEN_EN    	((uint32_t)0x00000010)

#define RCC_AHB1ENR_GPIOEEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOEEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOEEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOFEN_MASK    	((uint32_t)0x00000020)
#define RCC_AHB1ENR_R_GPIOFEN_BIT     	(5)
#define RCC_AHB1ENR_R_GPIOFEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOFEN_EN    	((uint32_t)0x00000020)

#define RCC_AHB1ENR_GPIOFEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOFEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOFEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOGEN_MASK    	((uint32_t)0x00000040)
#define RCC_AHB1ENR_R_GPIOGEN_BIT     	(6)
#define RCC_AHB1ENR_R_GPIOGEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOGEN_EN    	((uint32_t)0x00000040)

#define RCC_AHB1ENR_GPIOGEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOGEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOGEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOHEN_MASK    	((uint32_t)0x00000080)
#define RCC_AHB1ENR_R_GPIOHEN_BIT     	(7)
#define RCC_AHB1ENR_R_GPIOHEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOHEN_EN    	((uint32_t)0x00000080)

#define RCC_AHB1ENR_GPIOHEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOHEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOHEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOIEN_MASK    	((uint32_t)0x00000100)
#define RCC_AHB1ENR_R_GPIOIEN_BIT     	(8)
#define RCC_AHB1ENR_R_GPIOIEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOIEN_EN    	((uint32_t)0x00000100)

#define RCC_AHB1ENR_GPIOIEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOIEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOIEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOJEN_MASK    	((uint32_t)0x00000200)
#define RCC_AHB1ENR_R_GPIOJEN_BIT     	(9)
#define RCC_AHB1ENR_R_GPIOJEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOJEN_EN    	((uint32_t)0x00000200)

#define RCC_AHB1ENR_GPIOJEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOJEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOJEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_GPIOKEN_MASK    	((uint32_t)0x00000400)
#define RCC_AHB1ENR_R_GPIOKEN_BIT     	(10)
#define RCC_AHB1ENR_R_GPIOKEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_GPIOKEN_EN    	((uint32_t)0x00000400)

#define RCC_AHB1ENR_GPIOKEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_GPIOKEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_GPIOKEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_CRCEN_MASK    	((uint32_t)0x00001000)
#define RCC_AHB1ENR_R_CRCEN_BIT     	(12)
#define RCC_AHB1ENR_R_CRCEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_CRCEN_EN    		((uint32_t)0x00001000)

#define RCC_AHB1ENR_CRCEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1ENR_CRCEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1ENR_CRCEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_BKPSRAMEN_MASK    ((uint32_t)0x00040000)
#define RCC_AHB1ENR_R_BKPSRAMEN_BIT     (18)
#define RCC_AHB1ENR_R_BKPSRAMEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_BKPSRAMEN_EN    	((uint32_t)0x00040000)

#define RCC_AHB1ENR_BKPSRAMEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_BKPSRAMEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_BKPSRAMEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_DTCMRAMEN_MASK    ((uint32_t)0x00100000)
#define RCC_AHB1ENR_R_DTCMRAMEN_BIT     (20)
#define RCC_AHB1ENR_R_DTCMRAMEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_DTCMRAMEN_EN    	((uint32_t)0x00100000)

#define RCC_AHB1ENR_DTCMRAMEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_DTCMRAMEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_DTCMRAMEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_DMA1EN_MASK    	((uint32_t)0x00200000)
#define RCC_AHB1ENR_R_DMA1EN_BIT     	(21)
#define RCC_AHB1ENR_R_DMA1EN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_DMA1EN_EN    		((uint32_t)0x00200000)

#define RCC_AHB1ENR_DMA1EN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1ENR_DMA1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1ENR_DMA1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_DMA2EN_MASK    	((uint32_t)0x00400000)
#define RCC_AHB1ENR_R_DMA2EN_BIT     	(22)
#define RCC_AHB1ENR_R_DMA2EN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_DMA2EN_EN    		((uint32_t)0x00400000)

#define RCC_AHB1ENR_DMA2EN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1ENR_DMA2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1ENR_DMA2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_DMA2DEN_MASK    	((uint32_t)0x00800000)
#define RCC_AHB1ENR_R_DMA2DEN_BIT     	(23)
#define RCC_AHB1ENR_R_DMA2DEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_DMA2DEN_EN    	((uint32_t)0x00800000)

#define RCC_AHB1ENR_DMA2DEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_DMA2DEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_DMA2DEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_ETHMACEN_MASK   	((uint32_t)0x02000000)
#define RCC_AHB1ENR_R_ETHMACEN_BIT    	(25)
#define RCC_AHB1ENR_R_ETHMACEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_ETHMACEN_EN    	((uint32_t)0x02000000)

#define RCC_AHB1ENR_ETHMACEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_ETHMACEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_ETHMACEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_ETHMACTXEN_MASK   ((uint32_t)0x04000000)
#define RCC_AHB1ENR_R_ETHMACTXEN_BIT    (26)
#define RCC_AHB1ENR_R_ETHMACTXEN_DIS    ((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_ETHMACTXEN_EN    	((uint32_t)0x04000000)

#define RCC_AHB1ENR_ETHMACTXEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_ETHMACTXEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_ETHMACTXEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_ETHMACRXEN_MASK   ((uint32_t)0x08000000)
#define RCC_AHB1ENR_R_ETHMACRXEN_BIT    (27)
#define RCC_AHB1ENR_R_ETHMACRXEN_DIS    ((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_ETHMACRXEN_EN    	((uint32_t)0x08000000)

#define RCC_AHB1ENR_ETHMACRXEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_ETHMACRXEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_ETHMACRXEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_ETHMACCPTPEN_MASK	((uint32_t)0x10000000)
#define RCC_AHB1ENR_R_ETHMACCPTPEN_BIT  (28)
#define RCC_AHB1ENR_R_ETHMACCPTPEN_DIS  ((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_ETHMACCPTPEN_EN   ((uint32_t)0x10000000)

#define RCC_AHB1ENR_ETHMACCPTPEN_MASK   ((uint32_t)0x00000001)
#define RCC_AHB1ENR_ETHMACCPTPEN_DIS 	((uint32_t)0x00000000)
#define RCC_AHB1ENR_ETHMACCPTPEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_OTGHSEN_MASK   	((uint32_t)0x20000000)
#define RCC_AHB1ENR_R_OTGHSEN_BIT    	(29)
#define RCC_AHB1ENR_R_OTGHSEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_OTGHSEN_EN    	((uint32_t)0x20000000)

#define RCC_AHB1ENR_OTGHSEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1ENR_OTGHSEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1ENR_OTGHSEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1ENR_R_OTGHSULPIEN_MASK	((uint32_t)0x40000000)
#define RCC_AHB1ENR_R_OTGHSULPIEN_BIT   (30)
#define RCC_AHB1ENR_R_OTGHSULPIEN_DIS   ((uint32_t)0x00000000)
#define RCC_AHB1ENR_R_OTGHSULPIEN_EN   	((uint32_t)0x40000000)

#define RCC_AHB1ENR_OTGHSULPIEN_MASK   	((uint32_t)0x00000001)
#define RCC_AHB1ENR_OTGHSULPIEN_DIS 	((uint32_t)0x00000000)
#define RCC_AHB1ENR_OTGHSULPIEN_EN	   	((uint32_t)0x00000001)
/*--------*/


/* TODO AHB2ENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 AHB2ENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB2ENR           				(((RCC_AHB2ENR_TypeDef*)(RCC_BASE+RCC_AHB2ENR_OFFSET )))
#define RCC_AHB2ENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB2ENR_OFFSET)))


/*--------*/
#define RCC_AHB2ENR_R_DCMIEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2ENR_R_DCMIEN_BIT     	(0)
#define RCC_AHB2ENR_R_DCMIEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2ENR_R_DCMIEN_EN    		((uint32_t)0x00000001)

#define RCC_AHB2ENR_DCMIEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2ENR_DCMIEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2ENR_DCMIEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2ENR_R_CRYPEN_MASK    	((uint32_t)0x00000010)
#define RCC_AHB2ENR_R_CRYPEN_BIT     	(4)
#define RCC_AHB2ENR_R_CRYPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2ENR_R_CRYPEN_EN    		((uint32_t)0x00000010)

#define RCC_AHB2ENR_CRYPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2ENR_CRYPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2ENR_CRYPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2ENR_R_HASHEN_MASK    	((uint32_t)0x00000020)
#define RCC_AHB2ENR_R_HASHEN_BIT     	(5)
#define RCC_AHB2ENR_R_HASHEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2ENR_R_HASHEN_EN    		((uint32_t)0x00000020)

#define RCC_AHB2ENR_HASHEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2ENR_HASHEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2ENR_HASHEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2ENR_R_RNGEN_MASK    	((uint32_t)0x00000040)
#define RCC_AHB2ENR_R_RNGEN_BIT     	(6)
#define RCC_AHB2ENR_R_RNGEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB2ENR_R_RNGEN_EN    		((uint32_t)0x00000040)

#define RCC_AHB2ENR_RNGEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2ENR_RNGEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2ENR_RNGEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2ENR_R_OTGFSEN_MASK    	((uint32_t)0x00000080)
#define RCC_AHB2ENR_R_OTGFSEN_BIT     	(7)
#define RCC_AHB2ENR_R_OTGFSEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2ENR_R_OTGFSEN_EN    	((uint32_t)0x00000080)

#define RCC_AHB2ENR_OTGFSEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2ENR_OTGFSEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB2ENR_OTGFSEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/* TODO AHB3ENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 AHB3ENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB3ENR           				(((RCC_AHB3ENR_TypeDef*)(RCC_BASE+RCC_AHB3ENR_OFFSET )))
#define RCC_AHB3ENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB3ENR_OFFSET)))


/*--------*/
#define RCC_AHB3ENR_R_FMCEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB3ENR_R_FMCEN_BIT     	(0)
#define RCC_AHB3ENR_R_FMCEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB3ENR_R_FMCEN_EN    		((uint32_t)0x00000001)

#define RCC_AHB3ENR_FMCEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB3ENR_FMCEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB3ENR_FMCEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB3ENR_R_QSPIEN_MASK    	((uint32_t)0x00000002)
#define RCC_AHB3ENR_R_QSPIEN_BIT     	(1)
#define RCC_AHB3ENR_R_QSPIEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB3ENR_R_QSPIEN_EN    		((uint32_t)0x00000002)

#define RCC_AHB3ENR_QSPIEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB3ENR_QSPIEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB3ENR_QSPIEN_EN	    	((uint32_t)0x00000001)
/*--------*/


/* TODO APB1ENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 APB1ENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_APB1ENR           				(((RCC_APB1ENR_TypeDef*)(RCC_BASE+RCC_APB1ENR_OFFSET )))
#define RCC_APB1ENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_APB1ENR_OFFSET)))


/*--------*/
#define RCC_APB1ENR_R_TIM2EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_R_TIM2EN_BIT     	(0)
#define RCC_APB1ENR_R_TIM2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM2EN_EN    		((uint32_t)0x00000001)

#define RCC_APB1ENR_TIM2EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM3EN_MASK    	((uint32_t)0x00000002)
#define RCC_APB1ENR_R_TIM3EN_BIT     	(1)
#define RCC_APB1ENR_R_TIM3EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM3EN_EN    		((uint32_t)0x00000002)

#define RCC_APB1ENR_TIM3EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM3EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM3EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM4EN_MASK    	((uint32_t)0x00000004)
#define RCC_APB1ENR_R_TIM4EN_BIT     	(2)
#define RCC_APB1ENR_R_TIM4EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM4EN_EN    		((uint32_t)0x00000004)

#define RCC_APB1ENR_TIM4EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM4EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM4EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM5EN_MASK    	((uint32_t)0x00000008)
#define RCC_APB1ENR_R_TIM5EN_BIT     	(3)
#define RCC_APB1ENR_R_TIM5EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM5EN_EN    		((uint32_t)0x00000008)

#define RCC_APB1ENR_TIM5EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM5EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM5EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM6EN_MASK    	((uint32_t)0x00000010)
#define RCC_APB1ENR_R_TIM6EN_BIT     	(4)
#define RCC_APB1ENR_R_TIM6EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM6EN_EN    		((uint32_t)0x00000010)

#define RCC_APB1ENR_TIM6EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM6EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM6EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM7EN_MASK    	((uint32_t)0x00000020)
#define RCC_APB1ENR_R_TIM7EN_BIT     	(5)
#define RCC_APB1ENR_R_TIM7EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM7EN_EN    		((uint32_t)0x00000020)

#define RCC_APB1ENR_TIM7EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM7EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM7EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM12EN_MASK    	((uint32_t)0x00000040)
#define RCC_APB1ENR_R_TIM12EN_BIT     	(6)
#define RCC_APB1ENR_R_TIM12EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM12EN_EN    	((uint32_t)0x00000040)

#define RCC_APB1ENR_TIM12EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM12EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM12EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM13EN_MASK    	((uint32_t)0x00000080)
#define RCC_APB1ENR_R_TIM13EN_BIT     	(7)
#define RCC_APB1ENR_R_TIM13EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM13EN_EN    	((uint32_t)0x00000080)

#define RCC_APB1ENR_TIM13EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM13EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM13EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_TIM14EN_MASK    	((uint32_t)0x00000100)
#define RCC_APB1ENR_R_TIM14EN_BIT     	(8)
#define RCC_APB1ENR_R_TIM14EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_TIM14EN_EN    	((uint32_t)0x00000100)

#define RCC_APB1ENR_TIM14EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM14EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_TIM14EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_LPTIM1EN_MASK   	((uint32_t)0x00000200)
#define RCC_APB1ENR_R_LPTIM1EN_BIT    	(9)
#define RCC_APB1ENR_R_LPTIM1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_LPTIM1EN_EN    	((uint32_t)0x00000200)

#define RCC_APB1ENR_LPTIM1EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_LPTIM1EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_LPTIM1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_WWDGEN_MASK   	((uint32_t)0x00000800)
#define RCC_APB1ENR_R_WWDGEN_BIT    	(11)
#define RCC_APB1ENR_R_WWDGEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_WWDGEN_EN    		((uint32_t)0x00000800)

#define RCC_APB1ENR_WWDGEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_WWDGEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_WWDGEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_SPI2EN_MASK   	((uint32_t)0x00004000)
#define RCC_APB1ENR_R_SPI2EN_BIT    	(14)
#define RCC_APB1ENR_R_SPI2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_SPI2EN_EN    		((uint32_t)0x00004000)

#define RCC_APB1ENR_SPI2EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_SPI2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_SPI2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_SPI3EN_MASK   	((uint32_t)0x00008000)
#define RCC_APB1ENR_R_SPI3EN_BIT    	(15)
#define RCC_APB1ENR_R_SPI3EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_SPI3EN_EN    		((uint32_t)0x00008000)

#define RCC_APB1ENR_SPI3EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_SPI3EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_SPI3EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_SPDIFRXEN_MASK  	((uint32_t)0x00010000)
#define RCC_APB1ENR_R_SPDIFRXEN_BIT   	(16)
#define RCC_APB1ENR_R_SPDIFRXEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_SPDIFRXEN_EN   	((uint32_t)0x00010000)

#define RCC_APB1ENR_SPDIFRXEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_SPDIFRXEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_SPDIFRXEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_USART2EN_MASK  	((uint32_t)0x00020000)
#define RCC_APB1ENR_R_USART2EN_BIT   	(17)
#define RCC_APB1ENR_R_USART2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_USART2EN_EN   	((uint32_t)0x00020000)

#define RCC_APB1ENR_USART2EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_USART2EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_USART2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_USART3EN_MASK  	((uint32_t)0x00040000)
#define RCC_APB1ENR_R_USART3EN_BIT   	(18)
#define RCC_APB1ENR_R_USART3EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_USART3EN_EN   	((uint32_t)0x00040000)

#define RCC_APB1ENR_USART3EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_USART3EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_USART3EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_UART4EN_MASK  	((uint32_t)0x00080000)
#define RCC_APB1ENR_R_UART4EN_BIT   	(19)
#define RCC_APB1ENR_R_UART4EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_UART4EN_EN   		((uint32_t)0x00080000)

#define RCC_APB1ENR_UART4EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_UART4EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_UART4EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_UART5EN_MASK  	((uint32_t)0x00100000)
#define RCC_APB1ENR_R_UART5EN_BIT   	(20)
#define RCC_APB1ENR_R_UART5EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_UART5EN_EN   		((uint32_t)0x00100000)

#define RCC_APB1ENR_UART5EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_UART5EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_UART5EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_I2C1EN_MASK  		((uint32_t)0x00200000)
#define RCC_APB1ENR_R_I2C1EN_BIT   		(21)
#define RCC_APB1ENR_R_I2C1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_I2C1EN_EN   		((uint32_t)0x00200000)

#define RCC_APB1ENR_I2C1EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_I2C1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_I2C1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_I2C2EN_MASK  		((uint32_t)0x00400000)
#define RCC_APB1ENR_R_I2C2EN_BIT   		(22)
#define RCC_APB1ENR_R_I2C2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_I2C2EN_EN   		((uint32_t)0x00400000)

#define RCC_APB1ENR_I2C2EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_I2C2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_I2C2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_I2C3EN_MASK  		((uint32_t)0x00800000)
#define RCC_APB1ENR_R_I2C3EN_BIT   		(23)
#define RCC_APB1ENR_R_I2C3EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_I2C3EN_EN   		((uint32_t)0x00800000)

#define RCC_APB1ENR_I2C3EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_I2C3EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_I2C3EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_I2C4EN_MASK  		((uint32_t)0x01000000)
#define RCC_APB1ENR_R_I2C4EN_BIT   		(24)
#define RCC_APB1ENR_R_I2C4EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_I2C4EN_EN   		((uint32_t)0x01000000)

#define RCC_APB1ENR_I2C4EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_I2C4EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_I2C4EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_CAN1EN_MASK  		((uint32_t)0x02000000)
#define RCC_APB1ENR_R_CAN1EN_BIT   		(25)
#define RCC_APB1ENR_R_CAN1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_CAN1EN_EN   		((uint32_t)0x02000000)

#define RCC_APB1ENR_CAN1EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_CAN1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_CAN1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_CAN2EN_MASK  		((uint32_t)0x04000000)
#define RCC_APB1ENR_R_CAN2EN_BIT   		(26)
#define RCC_APB1ENR_R_CAN2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_CAN2EN_EN   		((uint32_t)0x04000000)

#define RCC_APB1ENR_CAN2EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_CAN2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_CAN2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_CECEN_MASK  		((uint32_t)0x08000000)
#define RCC_APB1ENR_R_CECEN_BIT   		(27)
#define RCC_APB1ENR_R_CECEN_DIS    		((uint32_t)0x00000000)
#define RCC_APB1ENR_R_CECEN_EN   		((uint32_t)0x08000000)

#define RCC_APB1ENR_CECEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_CECEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_CECEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_PWREN_MASK  		((uint32_t)0x10000000)
#define RCC_APB1ENR_R_PWREN_BIT   		(28)
#define RCC_APB1ENR_R_PWREN_DIS    		((uint32_t)0x00000000)
#define RCC_APB1ENR_R_PWREN_EN   		((uint32_t)0x10000000)

#define RCC_APB1ENR_PWREN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_PWREN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_PWREN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_DACEN_MASK  		((uint32_t)0x20000000)
#define RCC_APB1ENR_R_DACEN_BIT   		(29)
#define RCC_APB1ENR_R_DACEN_DIS    		((uint32_t)0x00000000)
#define RCC_APB1ENR_R_DACEN_EN   		((uint32_t)0x20000000)

#define RCC_APB1ENR_DACEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1ENR_DACEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1ENR_DACEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_UART7EN_MASK  	((uint32_t)0x40000000)
#define RCC_APB1ENR_R_UART7EN_BIT   	(30)
#define RCC_APB1ENR_R_UART7EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_UART7EN_EN   		((uint32_t)0x40000000)

#define RCC_APB1ENR_UART7EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_UART7EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_UART7EN_EN	    (	(uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1ENR_R_UART8EN_MASK  	((uint32_t)0x80000000)
#define RCC_APB1ENR_R_UART8EN_BIT   	(31)
#define RCC_APB1ENR_R_UART8EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1ENR_R_UART8EN_EN   		((uint32_t)0x80000000)

#define RCC_APB1ENR_UART8EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1ENR_UART8EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1ENR_UART8EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/* TODO APB2ENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 APB2ENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_APB2ENR           				(((RCC_APB2ENR_TypeDef*)(RCC_BASE+RCC_APB2ENR_OFFSET )))
#define RCC_APB2ENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_APB2ENR_OFFSET)))

/*--------*/
#define RCC_APB2ENR_R_TIM1EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_R_TIM1EN_BIT     	(0)
#define RCC_APB2ENR_R_TIM1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_TIM1EN_EN    		((uint32_t)0x00000001)

#define RCC_APB2ENR_TIM1EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_TIM1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_TIM1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_TIM8EN_MASK    	((uint32_t)0x00000002)
#define RCC_APB2ENR_R_TIM8EN_BIT     	(1)
#define RCC_APB2ENR_R_TIM8EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_TIM8EN_EN    		((uint32_t)0x00000002)

#define RCC_APB2ENR_TIM8EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_TIM8EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_TIM8EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_USART1EN_MASK   	((uint32_t)0x00000010)
#define RCC_APB2ENR_R_USART1EN_BIT    	(4)
#define RCC_APB2ENR_R_USART1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_USART1EN_EN    	((uint32_t)0x00000010)

#define RCC_APB2ENR_USART1EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_USART1EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2ENR_USART1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_USART6EN_MASK   	((uint32_t)0x00000020)
#define RCC_APB2ENR_R_USART6EN_BIT    	(5)
#define RCC_APB2ENR_R_USART6EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_USART6EN_EN    	((uint32_t)0x00000020)

#define RCC_APB2ENR_USART6EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_USART6EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2ENR_USART6EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_ADC1EN_MASK   	((uint32_t)0x00000100)
#define RCC_APB2ENR_R_ADC1EN_BIT    	(8)
#define RCC_APB2ENR_R_ADC1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_ADC1EN_EN    		((uint32_t)0x00000100)

#define RCC_APB2ENR_ADC1EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_ADC1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_ADC1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_ADC2EN_MASK   	((uint32_t)0x00000200)
#define RCC_APB2ENR_R_ADC2EN_BIT    	(9)
#define RCC_APB2ENR_R_ADC2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_ADC2EN_EN    		((uint32_t)0x00000200)

#define RCC_APB2ENR_ADC2EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_ADC2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_ADC2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_ADC3EN_MASK   	((uint32_t)0x00000400)
#define RCC_APB2ENR_R_ADC3EN_BIT    	(10)
#define RCC_APB2ENR_R_ADC3EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_ADC3EN_EN    		((uint32_t)0x00000400)

#define RCC_APB2ENR_ADC3EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_ADC3EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_ADC3EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SDMMC1EN_MASK   	((uint32_t)0x00000800)
#define RCC_APB2ENR_R_SDMMC1EN_BIT    	(11)
#define RCC_APB2ENR_R_SDMMC1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SDMMC1EN_EN    	((uint32_t)0x00000800)

#define RCC_APB2ENR_SDMMC1EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_SDMMC1EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2ENR_SDMMC1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SPI1EN_MASK   	((uint32_t)0x00001000)
#define RCC_APB2ENR_R_SPI1EN_BIT    	(12)
#define RCC_APB2ENR_R_SPI1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SPI1EN_EN    		((uint32_t)0x00001000)

#define RCC_APB2ENR_SPI1EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_SPI1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_SPI1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SPI4EN_MASK   	((uint32_t)0x00002000)
#define RCC_APB2ENR_R_SPI4EN_BIT    	(13)
#define RCC_APB2ENR_R_SPI4EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SPI4EN_EN    		((uint32_t)0x00002000)

#define RCC_APB2ENR_SPI4EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_SPI4EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_SPI4EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SYSCFGEN_MASK   	((uint32_t)0x00004000)
#define RCC_APB2ENR_R_SYSCFGEN_BIT    	(14)
#define RCC_APB2ENR_R_SYSCFGEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SYSCFGEN_EN    	((uint32_t)0x00004000)

#define RCC_APB2ENR_SYSCFGEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_SYSCFGEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2ENR_SYSCFGEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_TIM9EN_MASK   	((uint32_t)0x00010000)
#define RCC_APB2ENR_R_TIM9EN_BIT    	(16)
#define RCC_APB2ENR_R_TIM9EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_TIM9EN_EN    		((uint32_t)0x00010000)

#define RCC_APB2ENR_TIM9EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_TIM9EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_TIM9EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_TIM10EN_MASK   	((uint32_t)0x00020000)
#define RCC_APB2ENR_R_TIM10EN_BIT    	(17)
#define RCC_APB2ENR_R_TIM10EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_TIM10EN_EN    	((uint32_t)0x00020000)

#define RCC_APB2ENR_TIM10EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_TIM10EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2ENR_TIM10EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_TIM11EN_MASK   	((uint32_t)0x00040000)
#define RCC_APB2ENR_R_TIM11EN_BIT    	(18)
#define RCC_APB2ENR_R_TIM11EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_TIM11EN_EN    	((uint32_t)0x00040000)

#define RCC_APB2ENR_TIM11EN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2ENR_TIM11EN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2ENR_TIM11EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SPI5EN_MASK   	((uint32_t)0x00100000)
#define RCC_APB2ENR_R_SPI5EN_BIT    	(20)
#define RCC_APB2ENR_R_SPI5EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SPI5EN_EN    		((uint32_t)0x00100000)

#define RCC_APB2ENR_SPI5EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_SPI5EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_SPI5EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SPI6EN_MASK   	((uint32_t)0x00200000)
#define RCC_APB2ENR_R_SPI6EN_BIT    	(21)
#define RCC_APB2ENR_R_SPI6EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SPI6EN_EN    		((uint32_t)0x00200000)

#define RCC_APB2ENR_SPI6EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_SPI6EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_SPI6EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SAI1EN_MASK   	((uint32_t)0x00400000)
#define RCC_APB2ENR_R_SAI1EN_BIT    	(22)
#define RCC_APB2ENR_R_SAI1EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SAI1EN_EN    		((uint32_t)0x00400000)

#define RCC_APB2ENR_SAI1EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_SAI1EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_SAI1EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_SAI2EN_MASK   	((uint32_t)0x00800000)
#define RCC_APB2ENR_R_SAI2EN_BIT    	(23)
#define RCC_APB2ENR_R_SAI2EN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_SAI2EN_EN    		((uint32_t)0x00800000)

#define RCC_APB2ENR_SAI2EN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_SAI2EN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_SAI2EN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2ENR_R_LTDCEN_MASK   	((uint32_t)0x04000000)
#define RCC_APB2ENR_R_LTDCEN_BIT    	(26)
#define RCC_APB2ENR_R_LTDCEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2ENR_R_LTDCEN_EN    		((uint32_t)0x04000000)

#define RCC_APB2ENR_LTDCEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2ENR_LTDCEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2ENR_LTDCEN_EN	    	((uint32_t)0x00000001)
/*--------*/


/* TODO AHB1LPENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 AHB1LPENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB1LPENR           				(((RCC_AHB1LPENR_TypeDef*)(RCC_BASE+RCC_AHB1LPENR_OFFSET )))
#define RCC_AHB1LPENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB1LPENR_OFFSET)))


/*--------*/
#define RCC_AHB1LPENR_R_GPIOALPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_R_GPIOALPEN_BIT     	(0)
#define RCC_AHB1LPENR_R_GPIOALPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOALPEN_EN    	((uint32_t)0x00000001)

#define RCC_AHB1LPENR_GPIOALPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOALPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOALPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOBLPEN_MASK    	((uint32_t)0x00000002)
#define RCC_AHB1LPENR_R_GPIOBLPEN_BIT     	(1)
#define RCC_AHB1LPENR_R_GPIOBLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOBLPEN_EN    	((uint32_t)0x00000002)

#define RCC_AHB1LPENR_GPIOBLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOBLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOBLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOCLPEN_MASK    	((uint32_t)0x00000004)
#define RCC_AHB1LPENR_R_GPIOCLPEN_BIT     	(2)
#define RCC_AHB1LPENR_R_GPIOCLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOCLPEN_EN    	((uint32_t)0x00000004)

#define RCC_AHB1LPENR_GPIOCLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOCLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOCLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIODLPEN_MASK    	((uint32_t)0x00000008)
#define RCC_AHB1LPENR_R_GPIODLPEN_BIT     	(3)
#define RCC_AHB1LPENR_R_GPIODLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIODLPEN_EN    	((uint32_t)0x00000008)

#define RCC_AHB1LPENR_GPIODLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIODLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIODLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOELPEN_MASK    	((uint32_t)0x00000010)
#define RCC_AHB1LPENR_R_GPIOELPEN_BIT     	(4)
#define RCC_AHB1LPENR_R_GPIOELPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOELPEN_EN    	((uint32_t)0x00000010)

#define RCC_AHB1LPENR_GPIOELPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOELPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOELPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOFLPEN_MASK    	((uint32_t)0x00000020)
#define RCC_AHB1LPENR_R_GPIOFLPEN_BIT     	(5)
#define RCC_AHB1LPENR_R_GPIOFLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOFLPEN_EN    	((uint32_t)0x00000020)

#define RCC_AHB1LPENR_GPIOFLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOFLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOFLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOGLPEN_MASK    	((uint32_t)0x00000040)
#define RCC_AHB1LPENR_R_GPIOGLPEN_BIT     	(6)
#define RCC_AHB1LPENR_R_GPIOGLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOGLPEN_EN    	((uint32_t)0x00000040)

#define RCC_AHB1LPENR_GPIOGLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOGLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOGLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOHLPEN_MASK    	((uint32_t)0x00000080)
#define RCC_AHB1LPENR_R_GPIOHLPEN_BIT     	(7)
#define RCC_AHB1LPENR_R_GPIOHLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOHLPEN_EN    	((uint32_t)0x00000080)

#define RCC_AHB1LPENR_GPIOHLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOHLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOHLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOILPEN_MASK    	((uint32_t)0x00000100)
#define RCC_AHB1LPENR_R_GPIOILPEN_BIT     	(8)
#define RCC_AHB1LPENR_R_GPIOILPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOILPEN_EN    	((uint32_t)0x00000100)

#define RCC_AHB1LPENR_GPIOILPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOILPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOILPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOJLPEN_MASK    	((uint32_t)0x00000200)
#define RCC_AHB1LPENR_R_GPIOJLPEN_BIT     	(9)
#define RCC_AHB1LPENR_R_GPIOJLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOJLPEN_EN    	((uint32_t)0x00000200)

#define RCC_AHB1LPENR_GPIOJLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOJLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOJLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_GPIOKLPEN_MASK    	((uint32_t)0x00000400)
#define RCC_AHB1LPENR_R_GPIOKLPEN_BIT     	(10)
#define RCC_AHB1LPENR_R_GPIOKLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_GPIOKLPEN_EN    	((uint32_t)0x00000400)

#define RCC_AHB1LPENR_GPIOKLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_GPIOKLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_GPIOKLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_CRCLPEN_MASK    	((uint32_t)0x00001000)
#define RCC_AHB1LPENR_R_CRCLPEN_BIT     	(12)
#define RCC_AHB1LPENR_R_CRCLPEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_CRCLPEN_EN    		((uint32_t)0x00001000)

#define RCC_AHB1LPENR_CRCLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1LPENR_CRCLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_CRCLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_AXILPEN_MASK    	((uint32_t)0x00002000)
#define RCC_AHB1LPENR_R_AXILPEN_BIT     	(13)
#define RCC_AHB1LPENR_R_AXILPEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_AXILPEN_EN    		((uint32_t)0x00002000)

#define RCC_AHB1LPENR_AXILPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1LPENR_AXILPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_AXILPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_FLITFLPEN_MASK    	((uint32_t)0x00008000)
#define RCC_AHB1LPENR_R_FLITFLPEN_BIT     	(15)
#define RCC_AHB1LPENR_R_FLITFLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_FLITFLPEN_EN    	((uint32_t)0x00008000)

#define RCC_AHB1LPENR_FLITFLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_FLITFLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_FLITFLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_SRAM1LPEN_MASK    	((uint32_t)0x00010000)
#define RCC_AHB1LPENR_R_SRAM1LPEN_BIT     	(16)
#define RCC_AHB1LPENR_R_SRAM1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_SRAM1LPEN_EN    	((uint32_t)0x00010000)

#define RCC_AHB1LPENR_SRAM1LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_SRAM1LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_SRAM1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_SRAM2LPEN_MASK    	((uint32_t)0x00020000)
#define RCC_AHB1LPENR_R_SRAM2LPEN_BIT     	(17)
#define RCC_AHB1LPENR_R_SRAM2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_SRAM2LPEN_EN    	((uint32_t)0x00020000)

#define RCC_AHB1LPENR_SRAM2LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_SRAM2LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_SRAM2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_BKPSRAMLPEN_MASK    ((uint32_t)0x00040000)
#define RCC_AHB1LPENR_R_BKPSRAMLPEN_BIT     (18)
#define RCC_AHB1LPENR_R_BKPSRAMLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_BKPSRAMLPEN_EN    	((uint32_t)0x00040000)

#define RCC_AHB1LPENR_BKPSRAMLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_BKPSRAMLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_BKPSRAMLPEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_DTCMLPEN_MASK    	((uint32_t)0x00100000)
#define RCC_AHB1LPENR_R_DTCMLPEN_BIT     	(20)
#define RCC_AHB1LPENR_R_DTCMLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_DTCMLPEN_EN    		((uint32_t)0x00100000)

#define RCC_AHB1LPENR_DTCMLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1LPENR_DTCMLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_DTCMLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_DMA1LPEN_MASK    	((uint32_t)0x00200000)
#define RCC_AHB1LPENR_R_DMA1LPEN_BIT     	(21)
#define RCC_AHB1LPENR_R_DMA1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_DMA1LPEN_EN    		((uint32_t)0x00200000)

#define RCC_AHB1LPENR_DMA1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1LPENR_DMA1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_DMA1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_DMA2LPEN_MASK    	((uint32_t)0x00400000)
#define RCC_AHB1LPENR_R_DMA2LPEN_BIT     	(22)
#define RCC_AHB1LPENR_R_DMA2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_DMA2LPEN_EN    		((uint32_t)0x00400000)

#define RCC_AHB1LPENR_DMA2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB1LPENR_DMA2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB1LPENR_DMA2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_DMA2DLPEN_MASK    	((uint32_t)0x00800000)
#define RCC_AHB1LPENR_R_DMA2DLPEN_BIT     	(23)
#define RCC_AHB1LPENR_R_DMA2DLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_DMA2DLPEN_EN    	((uint32_t)0x00800000)

#define RCC_AHB1LPENR_DMA2DLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_DMA2DLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_DMA2DLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_ETHMACLPEN_MASK   	((uint32_t)0x02000000)
#define RCC_AHB1LPENR_R_ETHMACLPEN_BIT    	(25)
#define RCC_AHB1LPENR_R_ETHMACLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_ETHMACLPEN_EN    	((uint32_t)0x02000000)

#define RCC_AHB1LPENR_ETHMACLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_ETHMACLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_ETHMACLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_ETHMACTXLPEN_MASK   ((uint32_t)0x04000000)
#define RCC_AHB1LPENR_R_ETHMACTXLPEN_BIT    (26)
#define RCC_AHB1LPENR_R_ETHMACTXLPEN_DIS    ((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_ETHMACTXLPEN_EN    	((uint32_t)0x04000000)

#define RCC_AHB1LPENR_ETHMACTXLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_ETHMACTXLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_ETHMACTXLPEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_ETHMACRXLPEN_MASK   ((uint32_t)0x08000000)
#define RCC_AHB1LPENR_R_ETHMACRXLPEN_BIT    (27)
#define RCC_AHB1LPENR_R_ETHMACRXLPEN_DIS    ((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_ETHMACRXLPEN_EN    	((uint32_t)0x08000000)

#define RCC_AHB1LPENR_ETHMACRXLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_ETHMACRXLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_ETHMACRXLPEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_ETHMACCPTPLPEN_MASK	((uint32_t)0x10000000)
#define RCC_AHB1LPENR_R_ETHMACCPTPLPEN_BIT  (28)
#define RCC_AHB1LPENR_R_ETHMACCPTPLPEN_DIS  ((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_ETHMACCPTPLPEN_EN   ((uint32_t)0x10000000)

#define RCC_AHB1LPENR_ETHMACCPTPLPEN_MASK   ((uint32_t)0x00000001)
#define RCC_AHB1LPENR_ETHMACCPTPLPEN_DIS 	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_ETHMACCPTPLPEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_OTGHSLPEN_MASK   	((uint32_t)0x20000000)
#define RCC_AHB1LPENR_R_OTGHSLPEN_BIT    	(29)
#define RCC_AHB1LPENR_R_OTGHSLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_OTGHSLPEN_EN    	((uint32_t)0x20000000)

#define RCC_AHB1LPENR_OTGHSLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_OTGHSLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_OTGHSLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB1LPENR_R_OTGHSULPILPEN_MASK	((uint32_t)0x40000000)
#define RCC_AHB1LPENR_R_OTGHSULPILPEN_BIT   (30)
#define RCC_AHB1LPENR_R_OTGHSULPILPEN_DIS   ((uint32_t)0x00000000)
#define RCC_AHB1LPENR_R_OTGHSULPILPEN_EN   	((uint32_t)0x40000000)

#define RCC_AHB1LPENR_OTGHSULPILPEN_MASK   	((uint32_t)0x00000001)
#define RCC_AHB1LPENR_OTGHSULPILPEN_DIS 	((uint32_t)0x00000000)
#define RCC_AHB1LPENR_OTGHSULPILPEN_EN	   	((uint32_t)0x00000001)
/*--------*/

/* TODO AHB2LPENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 AHB2LPENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB2LPENR           				(((RCC_AHB2LPENR_TypeDef*)(RCC_BASE+RCC_AHB2LPENR_OFFSET )))
#define RCC_AHB2LPENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB2LPENR_OFFSET)))


/*--------*/
#define RCC_AHB2LPENR_R_DCMILPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2LPENR_R_DCMILPEN_BIT     	(0)
#define RCC_AHB2LPENR_R_DCMILPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2LPENR_R_DCMILPEN_EN    		((uint32_t)0x00000001)

#define RCC_AHB2LPENR_DCMILPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2LPENR_DCMILPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2LPENR_DCMILPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2LPENR_R_CRYPLPEN_MASK    	((uint32_t)0x00000010)
#define RCC_AHB2LPENR_R_CRYPLPEN_BIT     	(4)
#define RCC_AHB2LPENR_R_CRYPLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2LPENR_R_CRYPLPEN_EN    		((uint32_t)0x00000010)

#define RCC_AHB2LPENR_CRYPLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2LPENR_CRYPLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2LPENR_CRYPLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2LPENR_R_HASHLPEN_MASK    	((uint32_t)0x00000020)
#define RCC_AHB2LPENR_R_HASHLPEN_BIT     	(5)
#define RCC_AHB2LPENR_R_HASHLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2LPENR_R_HASHLPEN_EN    		((uint32_t)0x00000020)

#define RCC_AHB2LPENR_HASHLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2LPENR_HASHLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2LPENR_HASHLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2LPENR_R_RNGLPEN_MASK    	((uint32_t)0x00000040)
#define RCC_AHB2LPENR_R_RNGLPEN_BIT     	(6)
#define RCC_AHB2LPENR_R_RNGLPEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB2LPENR_R_RNGLPEN_EN    		((uint32_t)0x00000040)

#define RCC_AHB2LPENR_RNGLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB2LPENR_RNGLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB2LPENR_RNGLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB2LPENR_R_OTGFSLPEN_MASK    	((uint32_t)0x00000080)
#define RCC_AHB2LPENR_R_OTGFSLPEN_BIT     	(7)
#define RCC_AHB2LPENR_R_OTGFSLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB2LPENR_R_OTGFSLPEN_EN    	((uint32_t)0x00000080)

#define RCC_AHB2LPENR_OTGFSLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB2LPENR_OTGFSLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_AHB2LPENR_OTGFSLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/* TODO AHB3LPENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 AHB3LPENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_AHB3LPENR           				(((RCC_AHB3LPENR_TypeDef*)(RCC_BASE+RCC_AHB3LPENR_OFFSET )))
#define RCC_AHB3LPENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_AHB3LPENR_OFFSET)))

/*--------*/
#define RCC_AHB3LPENR_R_FMCLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_AHB3LPENR_R_FMCLPEN_BIT     	(0)
#define RCC_AHB3LPENR_R_FMCLPEN_DIS    		((uint32_t)0x00000000)
#define RCC_AHB3LPENR_R_FMCLPEN_EN    		((uint32_t)0x00000001)

#define RCC_AHB3LPENR_FMCLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB3LPENR_FMCLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB3LPENR_FMCLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_AHB3LPENR_R_QSPILPEN_MASK    	((uint32_t)0x00000002)
#define RCC_AHB3LPENR_R_QSPILPEN_BIT     	(1)
#define RCC_AHB3LPENR_R_QSPILPEN_DIS    	((uint32_t)0x00000000)
#define RCC_AHB3LPENR_R_QSPILPEN_EN    		((uint32_t)0x00000002)

#define RCC_AHB3LPENR_QSPILPEN_MASK    		((uint32_t)0x00000001)
#define RCC_AHB3LPENR_QSPILPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_AHB3LPENR_QSPILPEN_EN	    	((uint32_t)0x00000001)
/*--------*/


/* TODO APB1LPENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 APB1LPENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_APB1LPENR           				(((RCC_APB1LPENR_TypeDef*)(RCC_BASE+RCC_APB1LPENR_OFFSET )))
#define RCC_APB1LPENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_APB1LPENR_OFFSET)))



/*--------*/
#define RCC_APB1LPENR_R_TIM2LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_R_TIM2LPEN_BIT     	(0)
#define RCC_APB1LPENR_R_TIM2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM2LPEN_EN    		((uint32_t)0x00000001)

#define RCC_APB1LPENR_TIM2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM3LPEN_MASK    	((uint32_t)0x00000002)
#define RCC_APB1LPENR_R_TIM3LPEN_BIT     	(1)
#define RCC_APB1LPENR_R_TIM3LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM3LPEN_EN    		((uint32_t)0x00000002)

#define RCC_APB1LPENR_TIM3LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM3LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM3LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM4LPEN_MASK    	((uint32_t)0x00000004)
#define RCC_APB1LPENR_R_TIM4LPEN_BIT     	(2)
#define RCC_APB1LPENR_R_TIM4LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM4LPEN_EN    		((uint32_t)0x00000004)

#define RCC_APB1LPENR_TIM4LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM4LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM4LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM5LPEN_MASK    	((uint32_t)0x00000008)
#define RCC_APB1LPENR_R_TIM5LPEN_BIT     	(3)
#define RCC_APB1LPENR_R_TIM5LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM5LPEN_EN    		((uint32_t)0x00000008)

#define RCC_APB1LPENR_TIM5LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM5LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM5LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM6LPEN_MASK    	((uint32_t)0x00000010)
#define RCC_APB1LPENR_R_TIM6LPEN_BIT     	(4)
#define RCC_APB1LPENR_R_TIM6LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM6LPEN_EN    		((uint32_t)0x00000010)

#define RCC_APB1LPENR_TIM6LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM6LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM6LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM7LPEN_MASK    	((uint32_t)0x00000020)
#define RCC_APB1LPENR_R_TIM7LPEN_BIT     	(5)
#define RCC_APB1LPENR_R_TIM7LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM7LPEN_EN    		((uint32_t)0x00000020)

#define RCC_APB1LPENR_TIM7LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM7LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM7LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM12LPEN_MASK    	((uint32_t)0x00000040)
#define RCC_APB1LPENR_R_TIM12LPEN_BIT     	(6)
#define RCC_APB1LPENR_R_TIM12LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM12LPEN_EN    	((uint32_t)0x00000040)

#define RCC_APB1LPENR_TIM12LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM12LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM12LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM13LPEN_MASK    	((uint32_t)0x00000080)
#define RCC_APB1LPENR_R_TIM13LPEN_BIT     	(7)
#define RCC_APB1LPENR_R_TIM13LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM13LPEN_EN    	((uint32_t)0x00000080)

#define RCC_APB1LPENR_TIM13LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM13LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM13LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_TIM14LPEN_MASK    	((uint32_t)0x00000100)
#define RCC_APB1LPENR_R_TIM14LPEN_BIT     	(8)
#define RCC_APB1LPENR_R_TIM14LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_TIM14LPEN_EN    	((uint32_t)0x00000100)

#define RCC_APB1LPENR_TIM14LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_TIM14LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_TIM14LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_LPTIM1LPEN_MASK   	((uint32_t)0x00000200)
#define RCC_APB1LPENR_R_LPTIM1LPEN_BIT    	(9)
#define RCC_APB1LPENR_R_LPTIM1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_LPTIM1LPEN_EN    	((uint32_t)0x00000200)

#define RCC_APB1LPENR_LPTIM1LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_LPTIM1LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_LPTIM1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_WWDGLPEN_MASK   	((uint32_t)0x00000800)
#define RCC_APB1LPENR_R_WWDGLPEN_BIT    	(11)
#define RCC_APB1LPENR_R_WWDGLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_WWDGLPEN_EN    		((uint32_t)0x00000800)

#define RCC_APB1LPENR_WWDGLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_WWDGLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_WWDGLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_SPI2LPEN_MASK   	((uint32_t)0x00004000)
#define RCC_APB1LPENR_R_SPI2LPEN_BIT    	(14)
#define RCC_APB1LPENR_R_SPI2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_SPI2LPEN_EN    		((uint32_t)0x00004000)

#define RCC_APB1LPENR_SPI2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_SPI2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_SPI2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_SPI3LPEN_MASK   	((uint32_t)0x00008000)
#define RCC_APB1LPENR_R_SPI3LPEN_BIT    	(15)
#define RCC_APB1LPENR_R_SPI3LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_SPI3LPEN_EN    		((uint32_t)0x00008000)

#define RCC_APB1LPENR_SPI3LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_SPI3LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_SPI3LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_SPDIFRXLPEN_MASK  	((uint32_t)0x00010000)
#define RCC_APB1LPENR_R_SPDIFRXLPEN_BIT   	(16)
#define RCC_APB1LPENR_R_SPDIFRXLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_SPDIFRXLPEN_EN   	((uint32_t)0x00010000)

#define RCC_APB1LPENR_SPDIFRXLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_SPDIFRXLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_SPDIFRXLPEN_EN	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_USART2LPEN_MASK  	((uint32_t)0x00020000)
#define RCC_APB1LPENR_R_USART2LPEN_BIT   	(17)
#define RCC_APB1LPENR_R_USART2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_USART2LPEN_EN   	((uint32_t)0x00020000)

#define RCC_APB1LPENR_USART2LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_USART2LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_USART2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_USART3LPEN_MASK  	((uint32_t)0x00040000)
#define RCC_APB1LPENR_R_USART3LPEN_BIT   	(18)
#define RCC_APB1LPENR_R_USART3LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_USART3LPEN_EN   	((uint32_t)0x00040000)

#define RCC_APB1LPENR_USART3LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_USART3LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_USART3LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_UART4LPEN_MASK  	((uint32_t)0x00080000)
#define RCC_APB1LPENR_R_UART4LPEN_BIT   	(19)
#define RCC_APB1LPENR_R_UART4LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_UART4LPEN_EN   		((uint32_t)0x00080000)

#define RCC_APB1LPENR_UART4LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_UART4LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_UART4LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_UART5LPEN_MASK  	((uint32_t)0x00100000)
#define RCC_APB1LPENR_R_UART5LPEN_BIT   	(20)
#define RCC_APB1LPENR_R_UART5LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_UART5LPEN_EN   		((uint32_t)0x00100000)

#define RCC_APB1LPENR_UART5LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_UART5LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_UART5LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_I2C1LPEN_MASK  		((uint32_t)0x00200000)
#define RCC_APB1LPENR_R_I2C1LPEN_BIT   		(21)
#define RCC_APB1LPENR_R_I2C1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_I2C1LPEN_EN   		((uint32_t)0x00200000)

#define RCC_APB1LPENR_I2C1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_I2C1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_I2C1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_I2C2LPEN_MASK  		((uint32_t)0x00400000)
#define RCC_APB1LPENR_R_I2C2LPEN_BIT   		(22)
#define RCC_APB1LPENR_R_I2C2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_I2C2LPEN_EN   		((uint32_t)0x00400000)

#define RCC_APB1LPENR_I2C2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_I2C2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_I2C2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_I2C3LPEN_MASK  		((uint32_t)0x00800000)
#define RCC_APB1LPENR_R_I2C3LPEN_BIT   		(23)
#define RCC_APB1LPENR_R_I2C3LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_I2C3LPEN_EN   		((uint32_t)0x00800000)

#define RCC_APB1LPENR_I2C3LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_I2C3LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_I2C3LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_I2C4LPEN_MASK  		((uint32_t)0x01000000)
#define RCC_APB1LPENR_R_I2C4LPEN_BIT   		(24)
#define RCC_APB1LPENR_R_I2C4LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_I2C4LPEN_EN   		((uint32_t)0x01000000)

#define RCC_APB1LPENR_I2C4LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_I2C4LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_I2C4LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_CAN1LPEN_MASK  		((uint32_t)0x02000000)
#define RCC_APB1LPENR_R_CAN1LPEN_BIT   		(25)
#define RCC_APB1LPENR_R_CAN1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_CAN1LPEN_EN   		((uint32_t)0x02000000)

#define RCC_APB1LPENR_CAN1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_CAN1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_CAN1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_CAN2LPEN_MASK  		((uint32_t)0x04000000)
#define RCC_APB1LPENR_R_CAN2LPEN_BIT   		(26)
#define RCC_APB1LPENR_R_CAN2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_CAN2LPEN_EN   		((uint32_t)0x04000000)

#define RCC_APB1LPENR_CAN2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_CAN2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_CAN2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_CECLPEN_MASK  		((uint32_t)0x08000000)
#define RCC_APB1LPENR_R_CECLPEN_BIT   		(27)
#define RCC_APB1LPENR_R_CECLPEN_DIS    		((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_CECLPEN_EN   		((uint32_t)0x08000000)

#define RCC_APB1LPENR_CECLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_CECLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_CECLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_PWRLPEN_MASK  		((uint32_t)0x10000000)
#define RCC_APB1LPENR_R_PWRLPEN_BIT   		(28)
#define RCC_APB1LPENR_R_PWRLPEN_DIS    		((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_PWRLPEN_EN   		((uint32_t)0x10000000)

#define RCC_APB1LPENR_PWRLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_PWRLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_PWRLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_DACLPEN_MASK  		((uint32_t)0x20000000)
#define RCC_APB1LPENR_R_DACLPEN_BIT   		(29)
#define RCC_APB1LPENR_R_DACLPEN_DIS    		((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_DACLPEN_EN   		((uint32_t)0x20000000)

#define RCC_APB1LPENR_DACLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB1LPENR_DACLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB1LPENR_DACLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_UART7LPEN_MASK  	((uint32_t)0x40000000)
#define RCC_APB1LPENR_R_UART7LPEN_BIT   	(30)
#define RCC_APB1LPENR_R_UART7LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_UART7LPEN_EN   		((uint32_t)0x40000000)

#define RCC_APB1LPENR_UART7LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_UART7LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_UART7LPEN_EN	    (	(uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB1LPENR_R_UART8LPEN_MASK  	((uint32_t)0x80000000)
#define RCC_APB1LPENR_R_UART8LPEN_BIT   	(31)
#define RCC_APB1LPENR_R_UART8LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB1LPENR_R_UART8LPEN_EN   		((uint32_t)0x80000000)

#define RCC_APB1LPENR_UART8LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB1LPENR_UART8LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB1LPENR_UART8LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/* TODO APB2LPENR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 APB2LPENR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_APB2LPENR           				(((RCC_APB2LPENR_TypeDef*)(RCC_BASE+RCC_APB2LPENR_OFFSET )))
#define RCC_APB2LPENR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_APB2LPENR_OFFSET)))


/*--------*/
#define RCC_APB2LPENR_R_TIM1LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_R_TIM1LPEN_BIT     	(0)
#define RCC_APB2LPENR_R_TIM1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_TIM1LPEN_EN    		((uint32_t)0x00000001)

#define RCC_APB2LPENR_TIM1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_TIM1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_TIM1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_TIM8LPEN_MASK    	((uint32_t)0x00000002)
#define RCC_APB2LPENR_R_TIM8LPEN_BIT     	(1)
#define RCC_APB2LPENR_R_TIM8LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_TIM8LPEN_EN    		((uint32_t)0x00000002)

#define RCC_APB2LPENR_TIM8LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_TIM8LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_TIM8LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_USART1LPEN_MASK   	((uint32_t)0x00000010)
#define RCC_APB2LPENR_R_USART1LPEN_BIT    	(4)
#define RCC_APB2LPENR_R_USART1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_USART1LPEN_EN    	((uint32_t)0x00000010)

#define RCC_APB2LPENR_USART1LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_USART1LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2LPENR_USART1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_USART6LPEN_MASK   	((uint32_t)0x00000020)
#define RCC_APB2LPENR_R_USART6LPEN_BIT    	(5)
#define RCC_APB2LPENR_R_USART6LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_USART6LPEN_EN    	((uint32_t)0x00000020)

#define RCC_APB2LPENR_USART6LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_USART6LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2LPENR_USART6LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_ADC1LPEN_MASK   	((uint32_t)0x00000100)
#define RCC_APB2LPENR_R_ADC1LPEN_BIT    	(8)
#define RCC_APB2LPENR_R_ADC1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_ADC1LPEN_EN    		((uint32_t)0x00000100)

#define RCC_APB2LPENR_ADC1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_ADC1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_ADC1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_ADC2LPEN_MASK   	((uint32_t)0x00000200)
#define RCC_APB2LPENR_R_ADC2LPEN_BIT    	(9)
#define RCC_APB2LPENR_R_ADC2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_ADC2LPEN_EN    		((uint32_t)0x00000200)

#define RCC_APB2LPENR_ADC2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_ADC2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_ADC2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_ADC3LPEN_MASK   	((uint32_t)0x00000400)
#define RCC_APB2LPENR_R_ADC3LPEN_BIT    	(10)
#define RCC_APB2LPENR_R_ADC3LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_ADC3LPEN_EN    		((uint32_t)0x00000400)

#define RCC_APB2LPENR_ADC3LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_ADC3LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_ADC3LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SDMMC1LPEN_MASK   	((uint32_t)0x00000800)
#define RCC_APB2LPENR_R_SDMMC1LPEN_BIT    	(11)
#define RCC_APB2LPENR_R_SDMMC1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SDMMC1LPEN_EN    	((uint32_t)0x00000800)

#define RCC_APB2LPENR_SDMMC1LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_SDMMC1LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2LPENR_SDMMC1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SPI1LPEN_MASK   	((uint32_t)0x00001000)
#define RCC_APB2LPENR_R_SPI1LPEN_BIT    	(12)
#define RCC_APB2LPENR_R_SPI1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SPI1LPEN_EN    		((uint32_t)0x00001000)

#define RCC_APB2LPENR_SPI1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_SPI1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_SPI1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SPI4LPEN_MASK   	((uint32_t)0x00002000)
#define RCC_APB2LPENR_R_SPI4LPEN_BIT    	(13)
#define RCC_APB2LPENR_R_SPI4LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SPI4LPEN_EN    		((uint32_t)0x00002000)

#define RCC_APB2LPENR_SPI4LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_SPI4LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_SPI4LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SYSCFGLPEN_MASK   	((uint32_t)0x00004000)
#define RCC_APB2LPENR_R_SYSCFGLPEN_BIT    	(14)
#define RCC_APB2LPENR_R_SYSCFGLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SYSCFGLPEN_EN    	((uint32_t)0x00004000)

#define RCC_APB2LPENR_SYSCFGLPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_SYSCFGLPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2LPENR_SYSCFGLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_TIM9LPEN_MASK   	((uint32_t)0x00010000)
#define RCC_APB2LPENR_R_TIM9LPEN_BIT    	(16)
#define RCC_APB2LPENR_R_TIM9LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_TIM9LPEN_EN    		((uint32_t)0x00010000)

#define RCC_APB2LPENR_TIM9LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_TIM9LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_TIM9LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_TIM10LPEN_MASK   	((uint32_t)0x00020000)
#define RCC_APB2LPENR_R_TIM10LPEN_BIT    	(17)
#define RCC_APB2LPENR_R_TIM10LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_TIM10LPEN_EN    	((uint32_t)0x00020000)

#define RCC_APB2LPENR_TIM10LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_TIM10LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2LPENR_TIM10LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_TIM11LPEN_MASK   	((uint32_t)0x00040000)
#define RCC_APB2LPENR_R_TIM11LPEN_BIT    	(18)
#define RCC_APB2LPENR_R_TIM11LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_TIM11LPEN_EN    	((uint32_t)0x00040000)

#define RCC_APB2LPENR_TIM11LPEN_MASK    	((uint32_t)0x00000001)
#define RCC_APB2LPENR_TIM11LPEN_DIS 	   	((uint32_t)0x00000000)
#define RCC_APB2LPENR_TIM11LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SPI5LPEN_MASK   	((uint32_t)0x00100000)
#define RCC_APB2LPENR_R_SPI5LPEN_BIT    	(20)
#define RCC_APB2LPENR_R_SPI5LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SPI5LPEN_EN    		((uint32_t)0x00100000)

#define RCC_APB2LPENR_SPI5LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_SPI5LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_SPI5LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SPI6LPEN_MASK   	((uint32_t)0x00200000)
#define RCC_APB2LPENR_R_SPI6LPEN_BIT    	(21)
#define RCC_APB2LPENR_R_SPI6LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SPI6LPEN_EN    		((uint32_t)0x00200000)

#define RCC_APB2LPENR_SPI6LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_SPI6LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_SPI6LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SAI1LPEN_MASK   	((uint32_t)0x00400000)
#define RCC_APB2LPENR_R_SAI1LPEN_BIT    	(22)
#define RCC_APB2LPENR_R_SAI1LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SAI1LPEN_EN    		((uint32_t)0x00400000)

#define RCC_APB2LPENR_SAI1LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_SAI1LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_SAI1LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_SAI2LPEN_MASK   	((uint32_t)0x00800000)
#define RCC_APB2LPENR_R_SAI2LPEN_BIT    	(23)
#define RCC_APB2LPENR_R_SAI2LPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_SAI2LPEN_EN    		((uint32_t)0x00800000)

#define RCC_APB2LPENR_SAI2LPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_SAI2LPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_SAI2LPEN_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_APB2LPENR_R_LTDCLPEN_MASK   	((uint32_t)0x04000000)
#define RCC_APB2LPENR_R_LTDCLPEN_BIT    	(26)
#define RCC_APB2LPENR_R_LTDCLPEN_DIS    	((uint32_t)0x00000000)
#define RCC_APB2LPENR_R_LTDCLPEN_EN    		((uint32_t)0x04000000)

#define RCC_APB2LPENR_LTDCLPEN_MASK    		((uint32_t)0x00000001)
#define RCC_APB2LPENR_LTDCLPEN_DIS 	   		((uint32_t)0x00000000)
#define RCC_APB2LPENR_LTDCLPEN_EN	    	((uint32_t)0x00000001)
/*--------*/


/* TODO BDCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 BDCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_BDCR           				(((RCC_BDCR_TypeDef*)(RCC_BASE+RCC_BDCR_OFFSET )))
#define RCC_BDCR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_BDCR_OFFSET)))


/*--------*/
#define RCC_BDCR_R_LSEON_MASK    		((uint32_t)0x00000001)
#define RCC_BDCR_R_LSEON_BIT     		(0)
#define RCC_BDCR_R_LSEON_OFF    		((uint32_t)0x00000000)
#define RCC_BDCR_R_LSEON_ON    			((uint32_t)0x00000001)

#define RCC_BDCR_LSEON_MASK    			((uint32_t)0x00000001)
#define RCC_BDCR_LSEON_OFF 	   			((uint32_t)0x00000000)
#define RCC_BDCR_LSEON_ON	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_BDCR_R_LSERDY_MASK    		((uint32_t)0x00000002)
#define RCC_BDCR_R_LSERDY_BIT     		(1)
#define RCC_BDCR_R_LSERDY_NORDY    		((uint32_t)0x00000000)
#define RCC_BDCR_R_LSERDY_RDY    		((uint32_t)0x00000002)

#define RCC_BDCR_LSERDY_MASK    		((uint32_t)0x00000001)
#define RCC_BDCR_LSERDY_NORDY 	   		((uint32_t)0x00000000)
#define RCC_BDCR_LSERDY_RDY	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_BDCR_R_LSEBYP_MASK    		((uint32_t)0x00000004)
#define RCC_BDCR_R_LSEBYP_BIT     		(2)
#define RCC_BDCR_R_LSEBYP_NOBYP    		((uint32_t)0x00000000)
#define RCC_BDCR_R_LSEBYP_BYP    		((uint32_t)0x00000004)

#define RCC_BDCR_LSEBYP_MASK    		((uint32_t)0x00000001)
#define RCC_BDCR_LSEBYP_NOBYP 	   		((uint32_t)0x00000000)
#define RCC_BDCR_LSEBYP_BYP	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_BDCR_R_LSEDRV_MASK    		((uint32_t)0x00000018)
#define RCC_BDCR_R_LSEDRV_BIT     		(3)
#define RCC_BDCR_R_LSEDRV_LOW    		((uint32_t)0x00000000)
#define RCC_BDCR_R_LSEDRV_MED_HIGH 		((uint32_t)0x00000008)
#define RCC_BDCR_R_LSEDRV_MED_LOW 		((uint32_t)0x00000010)
#define RCC_BDCR_R_LSEDRV_HIGH	 		((uint32_t)0x00000018)

#define RCC_BDCR_LSEDRV_MASK    		((uint32_t)0x00000003)
#define RCC_BDCR_LSEDRV_LOW 	   		((uint32_t)0x00000000)
#define RCC_BDCR_LSEDRV_MED_HIGH   		((uint32_t)0x00000001)
#define RCC_BDCR_LSEDRV_MED_LOW   		((uint32_t)0x00000002)
#define RCC_BDCR_LSEDRV_HIGH    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_BDCR_R_RTCSEL_MASK    		((uint32_t)0x00000300)
#define RCC_BDCR_R_RTCSEL_BIT     		(8)
#define RCC_BDCR_R_RTCSEL_NOCLOCK 		((uint32_t)0x00000000)
#define RCC_BDCR_R_RTCSEL_LSE	 		((uint32_t)0x00000100)
#define RCC_BDCR_R_RTCSEL_LSI	 		((uint32_t)0x00000200)
#define RCC_BDCR_R_RTCSEL_HSE	 		((uint32_t)0x00000300)

#define RCC_BDCR_RTCSEL_MASK    		((uint32_t)0x00000003)
#define RCC_BDCR_RTCSEL_NOCLOCK	   		((uint32_t)0x00000000)
#define RCC_BDCR_RTCSEL_LSE		   		((uint32_t)0x00000001)
#define RCC_BDCR_RTCSEL_LSI		  		((uint32_t)0x00000002)
#define RCC_BDCR_RTCSEL_HSE		   		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_BDCR_R_RTCEN_MASK    		((uint32_t)0x00008000)
#define RCC_BDCR_R_RTCEN_BIT     		(15)
#define RCC_BDCR_R_RTCEN_DIS    		((uint32_t)0x00000000)
#define RCC_BDCR_R_RTCEN_EN    			((uint32_t)0x00008000)

#define RCC_BDCR_RTCEN_MASK    			((uint32_t)0x00000001)
#define RCC_BDCR_RTCEN_DIS 	   			((uint32_t)0x00000000)
#define RCC_BDCR_RTCEN_EN	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_BDCR_R_BDRST_MASK    		((uint32_t)0x00010000)
#define RCC_BDCR_R_BDRST_BIT     		(16)
#define RCC_BDCR_R_BDRST_DIS    		((uint32_t)0x00000000)
#define RCC_BDCR_R_BDRST_EN    			((uint32_t)0x00010000)

#define RCC_BDCR_BDRST_MASK    			((uint32_t)0x00000001)
#define RCC_BDCR_BDRST_DIS 	   			((uint32_t)0x00000000)
#define RCC_BDCR_BDRST_EN	    		((uint32_t)0x00000001)
/*--------*/


/* TODO CSR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 CSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_CSR           				(((RCC_CSR_TypeDef*)(RCC_BASE+RCC_CSR_OFFSET )))
#define RCC_CSR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_CSR_OFFSET)))

/*--------*/
#define RCC_CSR_R_LSION_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_R_LSION_BIT     		(0)
#define RCC_CSR_R_LSION_OFF    			((uint32_t)0x00000000)
#define RCC_CSR_R_LSION_ON    			((uint32_t)0x00000001)

#define RCC_CSR_LSION_MASK    			((uint32_t)0x00000001)
#define RCC_CSR_LSION_OFF 	   			((uint32_t)0x00000000)
#define RCC_CSR_LSION_ON	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_LSIRDY_MASK    		((uint32_t)0x00000002)
#define RCC_CSR_R_LSIRDY_BIT     		(1)
#define RCC_CSR_R_LSIRDY_NORDY    		((uint32_t)0x00000000)
#define RCC_CSR_R_LSIRDY_RDY    		((uint32_t)0x00000002)

#define RCC_CSR_LSIRDY_MASK    			((uint32_t)0x00000001)
#define RCC_CSR_LSIRDY_NORDY 	   		((uint32_t)0x00000000)
#define RCC_CSR_LSIRDY_RDY	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_RMVF_MASK    			((uint32_t)0x01000000)
#define RCC_CSR_R_RMVF_BIT     			(24)
#define RCC_CSR_R_RMVF_NA    			((uint32_t)0x00000000)
#define RCC_CSR_R_RMVF_CLEAR    		((uint32_t)0x01000000)

#define RCC_CSR_RMVF_MASK    			((uint32_t)0x00000001)
#define RCC_CSR_RMVF_NA 	   			((uint32_t)0x00000000)
#define RCC_CSR_RMVF_CLEAR	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_BORRSTF_MASK    		((uint32_t)0x02000000)
#define RCC_CSR_R_BORRSTF_BIT     		(25)
#define RCC_CSR_R_BORRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_BORRSTF_OCCUR    		((uint32_t)0x02000000)

#define RCC_CSR_BORRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_BORRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_BORRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_PINRSTF_MASK    		((uint32_t)0x04000000)
#define RCC_CSR_R_PINRSTF_BIT     		(26)
#define RCC_CSR_R_PINRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_PINRSTF_OCCUR    		((uint32_t)0x04000000)

#define RCC_CSR_PINRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_PINRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_PINRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_PORRSTF_MASK    		((uint32_t)0x08000000)
#define RCC_CSR_R_PORRSTF_BIT     		(27)
#define RCC_CSR_R_PORRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_PORRSTF_OCCUR    		((uint32_t)0x08000000)

#define RCC_CSR_PORRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_PORRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_PORRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_SFTRSTF_MASK    		((uint32_t)0x10000000)
#define RCC_CSR_R_SFTRSTF_BIT     		(28)
#define RCC_CSR_R_SFTRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_SFTRSTF_OCCUR    		((uint32_t)0x10000000)

#define RCC_CSR_SFTRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_SFTRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_SFTRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_IWDGRSTF_MASK    		((uint32_t)0x20000000)
#define RCC_CSR_R_IWDGRSTF_BIT     		(29)
#define RCC_CSR_R_IWDGRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_IWDGRSTF_OCCUR    	((uint32_t)0x20000000)

#define RCC_CSR_IWDGRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_IWDGRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_IWDGRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_WWDGRSTF_MASK    		((uint32_t)0x40000000)
#define RCC_CSR_R_WWDGRSTF_BIT     		(30)
#define RCC_CSR_R_WWDGRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_WWDGRSTF_OCCUR    	((uint32_t)0x40000000)

#define RCC_CSR_WWDGRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_WWDGRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_WWDGRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_CSR_R_LPWRRSTF_MASK    		((uint32_t)0x80000000)
#define RCC_CSR_R_LPWRRSTF_BIT     		(31)
#define RCC_CSR_R_LPWRRSTF_NOOCCUR    	((uint32_t)0x00000000)
#define RCC_CSR_R_LPWRRSTF_OCCUR    	((uint32_t)0x80000000)

#define RCC_CSR_LPWRRSTF_MASK    		((uint32_t)0x00000001)
#define RCC_CSR_LPWRRSTF_NOOCCUR 	   	((uint32_t)0x00000000)
#define RCC_CSR_LPWRRSTF_OCCUR	    	((uint32_t)0x00000001)
/*--------*/

/* TODO SSCGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 SSCGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_SSCGR           				(((RCC_SSCGR_TypeDef*)(RCC_BASE+RCC_SSCGR_OFFSET )))
#define RCC_SSCGR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_SSCGR_OFFSET)))

/*--------*/
#define RCC_SSCGR_R_MODPER_MASK    		((uint32_t)0x00001FFF)
#define RCC_SSCGR_R_MODPER_BIT     		(0)

#define RCC_SSCGR_MODPER_MASK    		((uint32_t)0x00001FFF)
/*--------*/

/*--------*/
#define RCC_SSCGR_R_INCSTEP_MASK    	((uint32_t)0x0FFFE000)
#define RCC_SSCGR_R_INCSTEP_BIT     	(13)

#define RCC_SSCGR_INCSTEP_MASK    		((uint32_t)0x00007FFF)
/*--------*/

/*--------*/
#define RCC_SSCGR_R_SPREADSEL_MASK    	((uint32_t)0x40000000)
#define RCC_SSCGR_R_SPREADSEL_BIT     	(30)
#define RCC_SSCGR_R_SPREADSEL_CENTER   	((uint32_t)0x00000000)
#define RCC_SSCGR_R_SPREADSEL_DOWN   	((uint32_t)0x40000000)

#define RCC_SSCGR_SPREADSEL_MASK    	((uint32_t)0x00000001)
#define RCC_SSCGR_SPREADSEL_CENTER  	((uint32_t)0x00000000)
#define RCC_SSCGR_SPREADSEL_DOWN	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_SSCGR_R_SSCGEN_MASK    		((uint32_t)0x80000000)
#define RCC_SSCGR_R_SSCGEN_BIT     		(31)
#define RCC_SSCGR_R_SSCGEN_DIS   		((uint32_t)0x00000000)
#define RCC_SSCGR_R_SSCGEN_EN   		((uint32_t)0x80000000)

#define RCC_SSCGR_SSCGEN_MASK    		((uint32_t)0x00000001)
#define RCC_SSCGR_SSCGEN_DIS  			((uint32_t)0x00000000)
#define RCC_SSCGR_SSCGEN_EN	  			((uint32_t)0x00000001)
/*--------*/

/* TODO PLLI2SCFGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 PLLI2SCFGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_PLLI2SCFGR           				(((RCC_PLLI2SCFGR_TypeDef*)(RCC_BASE+RCC_PLLI2SCFGR_OFFSET )))
#define RCC_PLLI2SCFGR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_PLLI2SCFGR_OFFSET)))


/*--------*/
#define RCC_PLLI2SCFGR_R_PLLI2SN_MASK    	((uint32_t)0x00007FC0)
#define RCC_PLLI2SCFGR_R_PLLI2SN_BIT     	(6)

#define RCC_PLLI2SCFGR_PLLI2SN_MASK    		((uint32_t)0x000001FF)
/*--------*/

/*--------*/
#define RCC_PLLI2SCFGR_R_PLLI2SP_MASK    	((uint32_t)0x00030000)
#define RCC_PLLI2SCFGR_R_PLLI2SP_BIT     	(16)
#define RCC_PLLI2SCFGR_R_PLLI2SP_2    		((uint32_t)0x00000000)
#define RCC_PLLI2SCFGR_R_PLLI2SP_4    		((uint32_t)0x00010000)
#define RCC_PLLI2SCFGR_R_PLLI2SP_6    		((uint32_t)0x00020000)
#define RCC_PLLI2SCFGR_R_PLLI2SP_8    		((uint32_t)0x00030000)

#define RCC_PLLI2SCFGR_PLLI2SP_MASK    		((uint32_t)0x00000003)
#define RCC_PLLI2SCFGR_PLLI2SP_2	    	((uint32_t)0x00000000)
#define RCC_PLLI2SCFGR_PLLI2SP_4	    	((uint32_t)0x00000001)
#define RCC_PLLI2SCFGR_PLLI2SP_6	    	((uint32_t)0x00000002)
#define RCC_PLLI2SCFGR_PLLI2SP_8	    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_PLLI2SCFGR_R_PLLI2SQ_MASK    	((uint32_t)0x0F000000)
#define RCC_PLLI2SCFGR_R_PLLI2SQ_BIT     	(24)

#define RCC_PLLI2SCFGR_PLLI2SQ_MASK    		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define RCC_PLLI2SCFGR_R_PLLI2SR_MASK    	((uint32_t)0x70000000)
#define RCC_PLLI2SCFGR_R_PLLI2SR_BIT     	(24)
#define RCC_PLLI2SCFGR_R_PLLI2SR_2	    	((uint32_t)0x20000000)
#define RCC_PLLI2SCFGR_R_PLLI2SR_3	    	((uint32_t)0x30000000)
#define RCC_PLLI2SCFGR_R_PLLI2SR_4	    	((uint32_t)0x40000000)
#define RCC_PLLI2SCFGR_R_PLLI2SR_5	    	((uint32_t)0x50000000)
#define RCC_PLLI2SCFGR_R_PLLI2SR_6	    	((uint32_t)0x60000000)
#define RCC_PLLI2SCFGR_R_PLLI2SR_7	    	((uint32_t)0x70000000)

#define RCC_PLLI2SCFGR_PLLI2SR_MASK    		((uint32_t)0x00000007)
#define RCC_PLLI2SCFGR_PLLI2SR_2    		((uint32_t)0x00000002)
#define RCC_PLLI2SCFGR_PLLI2SR_3    		((uint32_t)0x00000003)
#define RCC_PLLI2SCFGR_PLLI2SR_4	   		((uint32_t)0x00000004)
#define RCC_PLLI2SCFGR_PLLI2SR_5    		((uint32_t)0x00000005)
#define RCC_PLLI2SCFGR_PLLI2SR_6    		((uint32_t)0x00000006)
#define RCC_PLLI2SCFGR_PLLI2SR_7    		((uint32_t)0x00000007)
/*--------*/

/* TODO PLLSAICFGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 PLLSAICFGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_PLLSAICFGR           				(((RCC_PLLSAICFGR_TypeDef*)(RCC_BASE+RCC_PLLSAICFGR_OFFSET )))
#define RCC_PLLSAICFGR_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_PLLSAICFGR_OFFSET)))

/*--------*/
#define RCC_PLLSAICFGR_R_PLLSAIN_MASK    	((uint32_t)0x00007FC0)
#define RCC_PLLSAICFGR_R_PLLSAIN_BIT     	(6)

#define RCC_PLLSAICFGR_PLLSAIN_MASK    		((uint32_t)0x000001FF)
/*--------*/

/*--------*/
#define RCC_PLLSAICFGR_R_PLLSAIP_MASK    	((uint32_t)0x00030000)
#define RCC_PLLSAICFGR_R_PLLSAIP_BIT     	(16)
#define RCC_PLLSAICFGR_R_PLLSAIP_2    		((uint32_t)0x00000000)
#define RCC_PLLSAICFGR_R_PLLSAIP_4    		((uint32_t)0x00010000)
#define RCC_PLLSAICFGR_R_PLLSAIP_6    		((uint32_t)0x00020000)
#define RCC_PLLSAICFGR_R_PLLSAIP_8    		((uint32_t)0x00030000)

#define RCC_PLLSAICFGR_PLLSAIP_MASK    		((uint32_t)0x00000003)
#define RCC_PLLSAICFGR_PLLSAIP_2	    	((uint32_t)0x00000000)
#define RCC_PLLSAICFGR_PLLSAIP_4	    	((uint32_t)0x00000001)
#define RCC_PLLSAICFGR_PLLSAIP_6	    	((uint32_t)0x00000002)
#define RCC_PLLSAICFGR_PLLSAIP_8	    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_PLLSAICFGR_R_PLLSAIQ_MASK    	((uint32_t)0x0F000000)
#define RCC_PLLSAICFGR_R_PLLSAIQ_BIT     	(24)

#define RCC_PLLSAICFGR_PLLSAIQ_MASK    		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define RCC_PLLSAICFGR_R_PLLSAIR_MASK    	((uint32_t)0x70000000)
#define RCC_PLLSAICFGR_R_PLLSAIR_BIT     	(24)
#define RCC_PLLSAICFGR_R_PLLSAIR_2	    	((uint32_t)0x20000000)
#define RCC_PLLSAICFGR_R_PLLSAIR_3	    	((uint32_t)0x30000000)
#define RCC_PLLSAICFGR_R_PLLSAIR_4	    	((uint32_t)0x40000000)
#define RCC_PLLSAICFGR_R_PLLSAIR_5	    	((uint32_t)0x50000000)
#define RCC_PLLSAICFGR_R_PLLSAIR_6	    	((uint32_t)0x60000000)
#define RCC_PLLSAICFGR_R_PLLSAIR_7	    	((uint32_t)0x70000000)

#define RCC_PLLSAICFGR_PLLSAIR_MASK    		((uint32_t)0x00000007)
#define RCC_PLLSAICFGR_PLLSAIR_2    		((uint32_t)0x00000002)
#define RCC_PLLSAICFGR_PLLSAIR_3    		((uint32_t)0x00000003)
#define RCC_PLLSAICFGR_PLLSAIR_4	   		((uint32_t)0x00000004)
#define RCC_PLLSAICFGR_PLLSAIR_5    		((uint32_t)0x00000005)
#define RCC_PLLSAICFGR_PLLSAIR_6    		((uint32_t)0x00000006)
#define RCC_PLLSAICFGR_PLLSAIR_7    		((uint32_t)0x00000007)
/*--------*/


/* TODO DKCFGR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 DKCFGR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_DKCFGR1           				(((RCC_DKCFGR1_TypeDef*)(RCC_BASE+RCC_DKCFGR1_OFFSET )))
#define RCC_DKCFGR1_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_DKCFGR1_OFFSET)))

/*--------*/
#define RCC_DKCFGR1_R_PLLI2SDIVQ_MASK    	((uint32_t)0x0000001F)
#define RCC_DKCFGR1_R_PLLI2SDIVQ_BIT     	(0)

#define RCC_DKCFGR1_PLLI2SDIVQ_MASK   		((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define RCC_DKCFGR1_R_PLLSAIDIVQ_MASK    	((uint32_t)0x00001F00)
#define RCC_DKCFGR1_R_PLLSAIDIVQ_BIT     	(8)

#define RCC_DKCFGR1_PLLSAIDIVQ_MASK    	((uint32_t)0x0000001F)
/*--------*/

/*--------*/
#define RCC_DKCFGR1_R_PLLSAIDIVR_MASK    	((uint32_t)0x00030000)
#define RCC_DKCFGR1_R_PLLSAIDIVR_BIT     	(16)
#define RCC_DKCFGR1_R_PLLSAIDIVR_2   		((uint32_t)0x00000000)
#define RCC_DKCFGR1_R_PLLSAIDIVR_4   		((uint32_t)0x00010000)
#define RCC_DKCFGR1_R_PLLSAIDIVR_8		  	((uint32_t)0x00020000)
#define RCC_DKCFGR1_R_PLLSAIDIVR_16	  	((uint32_t)0x00040000)

#define RCC_DKCFGR1_PLLSAIDIVR_MASK    	((uint32_t)0x00000003)
#define RCC_DKCFGR1_PLLSAIDIVR_2	    	((uint32_t)0x00000000)
#define RCC_DKCFGR1_PLLSAIDIVR_4		  	((uint32_t)0x00000001)
#define RCC_DKCFGR1_PLLSAIDIVR_8		 	((uint32_t)0x00000002)
#define RCC_DKCFGR1_PLLSAIDIVR_16		 	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DKCFGR1_R_SAI1SEL_MASK    		((uint32_t)0x00300000)
#define RCC_DKCFGR1_R_SAI1SEL_BIT     		(20)
#define RCC_DKCFGR1_R_SAI1SEL_PLLSAI   	((uint32_t)0x00000000)
#define RCC_DKCFGR1_R_SAI1SEL_PLLI2S   	((uint32_t)0x00100000)
#define RCC_DKCFGR1_R_SAI1SEL_CLOCKIN  	((uint32_t)0x00200000)

#define RCC_DKCFGR1_SAI1SEL_MASK    		((uint32_t)0x00000003)
#define RCC_DKCFGR1_SAI1SEL_PLLSAI    		((uint32_t)0x00000000)
#define RCC_DKCFGR1_SAI1SEL_PLLI2S  		((uint32_t)0x00000001)
#define RCC_DKCFGR1_SAI1SEL_CLOCKIN  		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_DKCFGR1_R_SAI2SEL_MASK    		((uint32_t)0x00C00000)
#define RCC_DKCFGR1_R_SAI2SEL_BIT     		(22)
#define RCC_DKCFGR1_R_SAI2SEL_PLLSAI   	((uint32_t)0x00000000)
#define RCC_DKCFGR1_R_SAI2SEL_PLLI2S   	((uint32_t)0x00400000)
#define RCC_DKCFGR1_R_SAI2SEL_CLOCKIN  	((uint32_t)0x00800000)

#define RCC_DKCFGR1_SAI2SEL_MASK    		((uint32_t)0x00000003)
#define RCC_DKCFGR1_SAI2SEL_PLLSAI    		((uint32_t)0x00000000)
#define RCC_DKCFGR1_SAI2SEL_PLLI2S  		((uint32_t)0x00000001)
#define RCC_DKCFGR1_SAI2SEL_CLOCKIN  		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_DKCFGR1_R_TIMPRE_MASK    		((uint32_t)0x01000000)
#define RCC_DKCFGR1_R_TIMPRE_BIT     		(24)
#define RCC_DKCFGR1_R_TIMPRE_PCLK   		((uint32_t)0x00000000)
#define RCC_DKCFGR1_R_TIMPRE_HCLK		   	((uint32_t)0x01000000)

#define RCC_DKCFGR1_TIMPRE_MASK    		((uint32_t)0x00000001)
#define RCC_DKCFGR1_TIMPRE_PCLK    		((uint32_t)0x00000000)
#define RCC_DKCFGR1_TIMPRE_HCLK  			((uint32_t)0x00000001)
/*--------*/


/* TODO DCKCFGR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 DCKCFGR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RCC_DCKCFGR2           				(((RCC_DCKCFGR2_TypeDef*)(RCC_BASE+RCC_DCKCFGR2_OFFSET )))
#define RCC_DCKCFGR2_R     					(*((__IO uint32_t *)(RCC_BASE+RCC_DCKCFGR2_OFFSET)))


/*--------*/
#define RCC_DCKCFGR2_R_USART1SEL_MASK    	((uint32_t)0x00000003)
#define RCC_DCKCFGR2_R_USART1SEL_BIT     	(0)
#define RCC_DCKCFGR2_R_USART1SEL_APB2    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_USART1SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_R_USART1SEL_HSI	   	((uint32_t)0x00000002)
#define RCC_DCKCFGR2_R_USART1SEL_LSE    	((uint32_t)0x00000003)

#define RCC_DCKCFGR2_USART1SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_USART1SEL_APB2    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_USART1SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_USART1SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_USART1SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_USART2SEL_MASK    	((uint32_t)0x0000000C)
#define RCC_DCKCFGR2_R_USART2SEL_BIT     	(2)
#define RCC_DCKCFGR2_R_USART2SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_USART2SEL_SYSCLK    	((uint32_t)0x00000004)
#define RCC_DCKCFGR2_R_USART2SEL_HSI	   	((uint32_t)0x00000008)
#define RCC_DCKCFGR2_R_USART2SEL_LSE    	((uint32_t)0x0000000C)

#define RCC_DCKCFGR2_USART2SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_USART2SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_USART2SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_USART2SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_USART2SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_USART3SEL_MASK    	((uint32_t)0x00000030)
#define RCC_DCKCFGR2_R_USART3SEL_BIT     	(4)
#define RCC_DCKCFGR2_R_USART3SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_USART3SEL_SYSCLK    	((uint32_t)0x00000010)
#define RCC_DCKCFGR2_R_USART3SEL_HSI	   	((uint32_t)0x00000020)
#define RCC_DCKCFGR2_R_USART3SEL_LSE    	((uint32_t)0x00000030)

#define RCC_DCKCFGR2_USART3SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_USART3SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_USART3SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_USART3SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_USART3SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_UART4SEL_MASK    	((uint32_t)0x000000C0)
#define RCC_DCKCFGR2_R_UART4SEL_BIT     	(6)
#define RCC_DCKCFGR2_R_UART4SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_UART4SEL_SYSCLK    	((uint32_t)0x00000040)
#define RCC_DCKCFGR2_R_UART4SEL_HSI	   		((uint32_t)0x00000080)
#define RCC_DCKCFGR2_R_UART4SEL_LSE    		((uint32_t)0x000000C0)

#define RCC_DCKCFGR2_UART4SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_UART4SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_UART4SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_UART4SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_UART4SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_UART5SEL_MASK    	((uint32_t)0x00000300)
#define RCC_DCKCFGR2_R_UART5SEL_BIT     	(8)
#define RCC_DCKCFGR2_R_UART5SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_UART5SEL_SYSCLK    	((uint32_t)0x00000100)
#define RCC_DCKCFGR2_R_UART5SEL_HSI	   		((uint32_t)0x00000200)
#define RCC_DCKCFGR2_R_UART5SEL_LSE    		((uint32_t)0x00000300)

#define RCC_DCKCFGR2_UART5SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_UART5SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_UART5SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_UART5SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_UART5SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_USART6SEL_MASK    	((uint32_t)0x00000C00)
#define RCC_DCKCFGR2_R_USART6SEL_BIT     	(10)
#define RCC_DCKCFGR2_R_USART6SEL_APB2    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_USART6SEL_SYSCLK    	((uint32_t)0x00000400)
#define RCC_DCKCFGR2_R_USART6SEL_HSI	   	((uint32_t)0x00000800)
#define RCC_DCKCFGR2_R_USART6SEL_LSE    	((uint32_t)0x00000C00)

#define RCC_DCKCFGR2_USART6SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_USART6SEL_APB2    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_USART6SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_USART6SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_USART6SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_UART7SEL_MASK    	((uint32_t)0x00003000)
#define RCC_DCKCFGR2_R_UART7SEL_BIT     	(12)
#define RCC_DCKCFGR2_R_UART7SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_UART7SEL_SYSCLK    	((uint32_t)0x00001000)
#define RCC_DCKCFGR2_R_UART7SEL_HSI	   		((uint32_t)0x00002000)
#define RCC_DCKCFGR2_R_UART7SEL_LSE    		((uint32_t)0x00003000)

#define RCC_DCKCFGR2_UART7SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_UART7SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_UART7SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_UART7SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_UART7SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_UART8SEL_MASK    	((uint32_t)0x0000C000)
#define RCC_DCKCFGR2_R_UART8SEL_BIT     	(14)
#define RCC_DCKCFGR2_R_UART8SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_UART8SEL_SYSCLK    	((uint32_t)0x00004000)
#define RCC_DCKCFGR2_R_UART8SEL_HSI	   		((uint32_t)0x00008000)
#define RCC_DCKCFGR2_R_UART8SEL_LSE    		((uint32_t)0x0000C000)

#define RCC_DCKCFGR2_UART8SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_UART8SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_UART8SEL_SYSCLK    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_UART8SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_UART8SEL_LSE    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_I2C1SEL_MASK    		((uint32_t)0x00030000)
#define RCC_DCKCFGR2_R_I2C1SEL_BIT     		(16)
#define RCC_DCKCFGR2_R_I2C1SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_I2C1SEL_SYSCLK    	((uint32_t)0x00010000)
#define RCC_DCKCFGR2_R_I2C1SEL_HSI	   		((uint32_t)0x00020000)

#define RCC_DCKCFGR2_I2C1SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_I2C1SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_I2C1SEL_SYSCLK    		((uint32_t)0x00000001)
#define RCC_DCKCFGR2_I2C1SEL_HSI	   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_I2C2SEL_MASK    		((uint32_t)0x000C0000)
#define RCC_DCKCFGR2_R_I2C2SEL_BIT     		(18)
#define RCC_DCKCFGR2_R_I2C2SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_I2C2SEL_SYSCLK    	((uint32_t)0x00040000)
#define RCC_DCKCFGR2_R_I2C2SEL_HSI	   		((uint32_t)0x00080000)

#define RCC_DCKCFGR2_I2C2SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_I2C2SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_I2C2SEL_SYSCLK    		((uint32_t)0x00000001)
#define RCC_DCKCFGR2_I2C2SEL_HSI	   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_I2C3SEL_MASK    		((uint32_t)0x00300000)
#define RCC_DCKCFGR2_R_I2C3SEL_BIT     		(20)
#define RCC_DCKCFGR2_R_I2C3SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_I2C3SEL_SYSCLK    	((uint32_t)0x00100000)
#define RCC_DCKCFGR2_R_I2C3SEL_HSI	   		((uint32_t)0x00200000)

#define RCC_DCKCFGR2_I2C3SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_I2C3SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_I2C3SEL_SYSCLK    		((uint32_t)0x00000001)
#define RCC_DCKCFGR2_I2C3SEL_HSI	   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_I2C4SEL_MASK    		((uint32_t)0x00C00000)
#define RCC_DCKCFGR2_R_I2C4SEL_BIT     		(22)
#define RCC_DCKCFGR2_R_I2C4SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_I2C4SEL_SYSCLK    	((uint32_t)0x00400000)
#define RCC_DCKCFGR2_R_I2C4SEL_HSI	   		((uint32_t)0x00800000)

#define RCC_DCKCFGR2_I2C4SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_I2C4SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_I2C4SEL_SYSCLK    		((uint32_t)0x00000001)
#define RCC_DCKCFGR2_I2C4SEL_HSI	   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_LPTIM1SEL_MASK    	((uint32_t)0x03000000)
#define RCC_DCKCFGR2_R_LPTIM1SEL_BIT     	(24)
#define RCC_DCKCFGR2_R_LPTIM1SEL_APB1    	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_LPTIM1SEL_LSI    	((uint32_t)0x01000000)
#define RCC_DCKCFGR2_R_LPTIM1SEL_HSI	   	((uint32_t)0x02000000)
#define RCC_DCKCFGR2_R_LPTIM1SEL_LSE	   	((uint32_t)0x03000000)

#define RCC_DCKCFGR2_LPTIM1SEL_MASK   		((uint32_t)0x00000003)
#define RCC_DCKCFGR2_LPTIM1SEL_APB1    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_LPTIM1SEL_LSI	    	((uint32_t)0x00000001)
#define RCC_DCKCFGR2_LPTIM1SEL_HSI	   		((uint32_t)0x00000002)
#define RCC_DCKCFGR2_LPTIM1SEL_LSE	   		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_CECSEL_MASK    		((uint32_t)0x04000000)
#define RCC_DCKCFGR2_R_CECSEL_BIT     		(26)
#define RCC_DCKCFGR2_R_CECSEL_LSE    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_CECSEL_HSI    		((uint32_t)0x04000000)

#define RCC_DCKCFGR2_CECSEL_MASK   			((uint32_t)0x00000001)
#define RCC_DCKCFGR2_CECSEL_LSE    			((uint32_t)0x00000000)
#define RCC_DCKCFGR2_CECSEL_HSI	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_CK48MSEL_MASK   		((uint32_t)0x08000000)
#define RCC_DCKCFGR2_R_CK48MSEL_BIT    		(27)
#define RCC_DCKCFGR2_R_CK48MSEL_PLL    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_CK48MSEL_PLLSAI 		((uint32_t)0x08000000)

#define RCC_DCKCFGR2_CK48MSEL_MASK   		((uint32_t)0x00000001)
#define RCC_DCKCFGR2_CK48MSEL_PLL    		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_CK48MSEL_PLLSAI   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define RCC_DCKCFGR2_R_SDMMC1SEL_MASK   	((uint32_t)0x10000000)
#define RCC_DCKCFGR2_R_SDMMC1SEL_BIT    	(28)
#define RCC_DCKCFGR2_R_SDMMC1SEL_48MHZ  	((uint32_t)0x00000000)
#define RCC_DCKCFGR2_R_SDMMC1SEL_SYSCLK 	((uint32_t)0x10000000)

#define RCC_DCKCFGR2_SDMMC1SEL_MASK   		((uint32_t)0x00000001)
#define RCC_DCKCFGR2_SDMMC1SEL_48MHZ   		((uint32_t)0x00000000)
#define RCC_DCKCFGR2_SDMMC1SEL_SYSCLK   	((uint32_t)0x00000001)
/*--------*/

extern uint32_t SystemCoreClock;
extern uint32_t HCLKFreq;
extern uint32_t PCLK1Freq;
extern uint32_t PCLK2Freq;

void 	 RCC_SystemInit(void);
uint32_t RCC_GetSysClockFreq(void);
uint32_t RCC_GetHCLKFreq(void);
uint32_t RCC_GetPCLK1Freq(void);
uint32_t RCC_GetPCLK2Freq(void);


#endif /* RCC_H_ */
