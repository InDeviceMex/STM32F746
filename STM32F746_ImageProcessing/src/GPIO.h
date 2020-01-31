/*
 * GPIO.h
 *
 *  Created on: 27 jul. 2018
 *      Author: InDev
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "Core.h"
#include <stdint.h>

#define GPIO_BASE            ((uint32_t)0x40020000)
#define GPIO_OFFSET          ((uint32_t)0x00020000)

typedef __IO struct
{
    __IO uint32_t MODER0    	:2;
    __IO uint32_t MODER1    	:2;
    __IO uint32_t MODER2    	:2;
    __IO uint32_t MODER3    	:2;
    __IO uint32_t MODER4    	:2;
    __IO uint32_t MODER5    	:2;
    __IO uint32_t MODER6    	:2;
    __IO uint32_t MODER7    	:2;
    __IO uint32_t MODER8    	:2;
    __IO uint32_t MODER9    	:2;
    __IO uint32_t MODER10    	:2;
    __IO uint32_t MODER11    	:2;
    __IO uint32_t MODER12    	:2;
    __IO uint32_t MODER13    	:2;
    __IO uint32_t MODER14    	:2;
    __IO uint32_t MODER15    	:2;
}GPIO_MODER_TypeDef;


typedef __IO struct
{
    __IO uint32_t OTYPER0    	:1;
    __IO uint32_t OTYPER1    	:1;
    __IO uint32_t OTYPER2    	:1;
    __IO uint32_t OTYPER3    	:1;
    __IO uint32_t OTYPER4    	:1;
    __IO uint32_t OTYPER5    	:1;
    __IO uint32_t OTYPER6    	:1;
    __IO uint32_t OTYPER7    	:1;
    __IO uint32_t OTYPER8    	:1;
    __IO uint32_t OTYPER9    	:1;
    __IO uint32_t OTYPER10    	:1;
    __IO uint32_t OTYPER11    	:1;
    __IO uint32_t OTYPER12    	:1;
    __IO uint32_t OTYPER13    	:1;
    __IO uint32_t OTYPER14    	:1;
    __IO uint32_t OTYPER15    	:1;
    	 uint32_t reserved    	:16;
}GPIO_OTYPER_TypeDef;

typedef __IO struct
{
    __IO uint32_t OSPEEDR0    	:2;
    __IO uint32_t OSPEEDR1    	:2;
    __IO uint32_t OSPEEDR2    	:2;
    __IO uint32_t OSPEEDR3    	:2;
    __IO uint32_t OSPEEDR4    	:2;
    __IO uint32_t OSPEEDR5    	:2;
    __IO uint32_t OSPEEDR6    	:2;
    __IO uint32_t OSPEEDR7    	:2;
    __IO uint32_t OSPEEDR8    	:2;
    __IO uint32_t OSPEEDR9    	:2;
    __IO uint32_t OSPEEDR10    	:2;
    __IO uint32_t OSPEEDR11    	:2;
    __IO uint32_t OSPEEDR12    	:2;
    __IO uint32_t OSPEEDR13    	:2;
    __IO uint32_t OSPEEDR14    	:2;
    __IO uint32_t OSPEEDR15    	:2;
}GPIO_OSPEEDR_TypeDef;

typedef __IO struct
{
    __IO uint32_t PUPDR0    	:2;
    __IO uint32_t PUPDR1    	:2;
    __IO uint32_t PUPDR2    	:2;
    __IO uint32_t PUPDR3    	:2;
    __IO uint32_t PUPDR4    	:2;
    __IO uint32_t PUPDR5    	:2;
    __IO uint32_t PUPDR6    	:2;
    __IO uint32_t PUPDR7    	:2;
    __IO uint32_t PUPDR8    	:2;
    __IO uint32_t PUPDR9    	:2;
    __IO uint32_t PUPDR10    	:2;
    __IO uint32_t PUPDR11    	:2;
    __IO uint32_t PUPDR12    	:2;
    __IO uint32_t PUPDR13    	:2;
    __IO uint32_t PUPDR14    	:2;
    __IO uint32_t PUPDR15    	:2;
}GPIO_PUPDR_TypeDef;

typedef __IO struct
{
    __IO uint32_t ODR0    		:1;
    __IO uint32_t ODR1    		:1;
    __IO uint32_t ODR2    		:1;
    __IO uint32_t ODR3    		:1;
    __IO uint32_t ODR4    		:1;
    __IO uint32_t ODR5    		:1;
    __IO uint32_t ODR6    		:1;
    __IO uint32_t ODR7    		:1;
    __IO uint32_t ODR8    		:1;
    __IO uint32_t ODR9    		:1;
    __IO uint32_t ODR10    		:1;
    __IO uint32_t ODR11    		:1;
    __IO uint32_t ODR12    		:1;
    __IO uint32_t ODR13    		:1;
    __IO uint32_t ODR14    		:1;
    __IO uint32_t ODR15    		:1;
    	 uint32_t reserved    	:16;
}GPIO_ODR_TypeDef;

typedef __IO struct
{
    __IO uint32_t IDR0    		:1;
    __IO uint32_t IDR1    		:1;
    __IO uint32_t IDR2    		:1;
    __IO uint32_t IDR3    		:1;
    __IO uint32_t IDR4    		:1;
    __IO uint32_t IDR5    		:1;
    __IO uint32_t IDR6    		:1;
    __IO uint32_t IDR7    		:1;
    __IO uint32_t IDR8    		:1;
    __IO uint32_t IDR9    		:1;
    __IO uint32_t IDR10    		:1;
    __IO uint32_t IDR11    		:1;
    __IO uint32_t IDR12    		:1;
    __IO uint32_t IDR13    		:1;
    __IO uint32_t IDR14    		:1;
    __IO uint32_t IDR15    		:1;
    	 uint32_t reserved    	:16;
}GPIO_IDR_TypeDef;


typedef __IO struct
{
    __IO uint16_t SET0    		:1;
    __IO uint16_t SET1    		:1;
    __IO uint16_t SET2    		:1;
    __IO uint16_t SET3    		:1;
    __IO uint16_t SET4    		:1;
    __IO uint16_t SET5    		:1;
    __IO uint16_t SET6    		:1;
    __IO uint16_t SET7    		:1;
    __IO uint16_t SET8    		:1;
    __IO uint16_t SET9    		:1;
    __IO uint16_t SET10    		:1;
    __IO uint16_t SET11    		:1;
    __IO uint16_t SET12    		:1;
    __IO uint16_t SET13    		:1;
    __IO uint16_t SET14    		:1;
    __IO uint16_t SET15    		:1;
}GPIO_SET_TypeDef;


typedef __IO struct
{
    __IO uint16_t RESET0    		:1;
    __IO uint16_t RESET1    		:1;
    __IO uint16_t RESET2    		:1;
    __IO uint16_t RESET3    		:1;
    __IO uint16_t RESET4    		:1;
    __IO uint16_t RESET5    		:1;
    __IO uint16_t RESET6    		:1;
    __IO uint16_t RESET7    		:1;
    __IO uint16_t RESET8    		:1;
    __IO uint16_t RESET9    		:1;
    __IO uint16_t RESET10    		:1;
    __IO uint16_t RESET11    		:1;
    __IO uint16_t RESET12    		:1;
    __IO uint16_t RESET13    		:1;
    __IO uint16_t RESET14    		:1;
    __IO uint16_t RESET15    		:1;
}GPIO_RESET_TypeDef;

typedef __IO struct
{
    __IO uint32_t LCK0    		:1;
    __IO uint32_t LCK1    		:1;
    __IO uint32_t LCK2    		:1;
    __IO uint32_t LCK3    		:1;
    __IO uint32_t LCK4    		:1;
    __IO uint32_t LCK5    		:1;
    __IO uint32_t LCK6    		:1;
    __IO uint32_t LCK7    		:1;
    __IO uint32_t LCK8    		:1;
    __IO uint32_t LCK9    		:1;
    __IO uint32_t LCK10    		:1;
    __IO uint32_t LCK11    		:1;
    __IO uint32_t LCK12    		:1;
    __IO uint32_t LCK13    		:1;
    __IO uint32_t LCK14    		:1;
    __IO uint32_t LCK15    		:1;
    __IO uint32_t LCKK    		:1;
    	 uint32_t reserved    	:15;
}GPIO_LCKR_TypeDef;

typedef __IO struct
{
    __IO uint32_t AFR0    	:4;
    __IO uint32_t AFR1    	:4;
    __IO uint32_t AFR2    	:4;
    __IO uint32_t AFR3    	:4;
    __IO uint32_t AFR4    	:4;
    __IO uint32_t AFR5    	:4;
    __IO uint32_t AFR6    	:4;
    __IO uint32_t AFR7    	:4;
}GPIO_AFRL_TypeDef;
typedef __IO struct
{
	__IO uint32_t AFR8    	:4;
	__IO uint32_t AFR9    	:4;
	__IO uint32_t AFR10    	:4;
	__IO uint32_t AFR11    	:4;
	__IO uint32_t AFR12    	:4;
	__IO uint32_t AFR13    	:4;
	__IO uint32_t AFR14    	:4;
	__IO uint32_t AFR15    	:4;
}GPIO_AFRH_TypeDef;

typedef struct
{
	union
	{
		__IO uint32_t 			MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
		GPIO_MODER_TypeDef		MODER_Bit;
	};
	union
	{
		__IO uint32_t 			OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
		GPIO_OTYPER_TypeDef		OTYPER_Bit;
	};
	union
	{
		__IO uint32_t 			OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
		GPIO_OSPEEDR_TypeDef	OSPEEDR_Bit;
	};
	union
	{
		__IO uint32_t 			PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
		GPIO_PUPDR_TypeDef		PUPDR_Bit;

	};
	union
	{
		__IO uint32_t 			IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
		GPIO_IDR_TypeDef		IDR_Bit;
	};
	union
	{
		__IO uint32_t 			ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
		GPIO_ODR_TypeDef		ODR_Bit;
	};
	union
	{
		__IO uint16_t 			SET;      /*!< GPIO port bit set/reset low register,  Address offset: 0x18      */
		GPIO_SET_TypeDef 		SET_Bit;
	};
	union
	{
		 __IO uint16_t 			RESET;    /*!< GPIO port bit set/reset high register, Address offset: 0x1A      */
		 GPIO_RESET_TypeDef 	RESET_Bit;
	};
	union
	{
		__IO uint32_t 			LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
		GPIO_LCKR_TypeDef 		LCKR_Bit;
	};
	union
	{
		__IO uint32_t 			AFRL;      /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
		GPIO_AFRL_TypeDef 		AFRL_Bit;
	};
	union
	{
		__IO uint32_t 			AFRH;      /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
		GPIO_AFRH_TypeDef 		AFRH_Bit;
	};
	uint32_t 					reserved[1014];
 } GPIO_TypeDef;



#define PIN0   0x000000001
#define PIN1   0x000000002
#define PIN2   0x000000004
#define PIN3   0x000000008
#define PIN4   0x000000010
#define PIN5   0x000000020
#define PIN6   0x000000040
#define PIN7   0x000000080
#define PIN8   0x000000100
#define PIN9   0x000000200
#define PIN10  0x000000400
#define PIN11  0x000000800
#define PIN12  0x000001000
#define PIN13  0x000002000
#define PIN14  0x000004000
#define PIN15  0x000008000
#define PIN16  0x000100000
#define PIN17  0x000200000
#define PIN18  0x000400000
#define PIN19  0x000800000
#define PIN20  0x001000000
#define PIN21  0x002000000
#define PIN22  0x004000000
#define PIN23  0x008000000
#define PIN24  0x010000000
#define PIN25  0x020000000
#define PIN26  0x040000000
#define PIN27  0x080000000
#define PIN28  0x100000000
#define PIN29  0x200000000
#define PIN30  0x400000000
#define PIN31  0x800000000


#define BIT0   0x000000001
#define BIT1   0x000000002
#define BIT2   0x000000004
#define BIT3   0x000000008
#define BIT4   0x000000010
#define BIT5   0x000000020
#define BIT6   0x000000040
#define BIT7   0x000000080
#define BIT8   0x000000100
#define BIT9   0x000000200
#define BIT10  0x000000400
#define BIT11  0x000000800
#define BIT12  0x000001000
#define BIT13  0x000002000
#define BIT14  0x000004000
#define BIT15  0x000008000
#define BIT16  0x000100000
#define BIT17  0x000200000
#define BIT18  0x000400000
#define BIT19  0x000800000
#define BIT20  0x001000000
#define BIT21  0x002000000
#define BIT22  0x004000000
#define BIT23  0x008000000
#define BIT24  0x010000000
#define BIT25  0x020000000
#define BIT26  0x040000000
#define BIT27  0x080000000
#define BIT28  0x100000000
#define BIT29  0x200000000
#define BIT30  0x400000000
#define BIT31  0x800000000

#define GPIOA_BASE            ((uint32_t)0x40020000)
#define GPIOA_OFFSET          ((uint32_t)0x00020000)
#define GPIOB_BASE            ((uint32_t)0x40020400)
#define GPIOB_OFFSET          ((uint32_t)0x00020400)
#define GPIOC_BASE            ((uint32_t)0x40020800)
#define GPIOC_OFFSET          ((uint32_t)0x00020800)
#define GPIOD_BASE            ((uint32_t)0x40020C00)
#define GPIOD_OFFSET          ((uint32_t)0x00020C00)
#define GPIOE_BASE            ((uint32_t)0x40021000)
#define GPIOE_OFFSET          ((uint32_t)0x00021000)
#define GPIOF_BASE            ((uint32_t)0x40021400)
#define GPIOF_OFFSET          ((uint32_t)0x00021400)
#define GPIOG_BASE            ((uint32_t)0x40021800)
#define GPIOG_OFFSET          ((uint32_t)0x00021800)
#define GPIOH_BASE            ((uint32_t)0x40021C00)
#define GPIOH_OFFSET          ((uint32_t)0x00021C00)
#define GPIOI_BASE            ((uint32_t)0x40022000)
#define GPIOI_OFFSET          ((uint32_t)0x00022000)
#define GPIOJ_BASE            ((uint32_t)0x40022400)
#define GPIOJ_OFFSET          ((uint32_t)0x00022400)
#define GPIOK_BASE            ((uint32_t)0x40022800)
#define GPIOK_OFFSET          ((uint32_t)0x00022800)

#define GPIOA               ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB               ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC               ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD               ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE               ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF               ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG               ((GPIO_TypeDef *) GPIOG_BASE)
#define GPIOH               ((GPIO_TypeDef *) GPIOH_BASE)
#define GPIOI               ((GPIO_TypeDef *) GPIOI_BASE)
#define GPIOJ               ((GPIO_TypeDef *) GPIOJ_BASE)
#define GPIOK               ((GPIO_TypeDef *) GPIOK_BASE)


#define GPIO_MODER_OFFSET      		((uint32_t)0x00000000)
#define GPIO_OTYPER_OFFSET          ((uint32_t)0x00000004)
#define GPIO_OSPEEDR_OFFSET         ((uint32_t)0x00000008)
#define GPIO_PUPDR_OFFSET           ((uint32_t)0x0000000C)
#define GPIO_IDR_OFFSET            	((uint32_t)0x00000010)
#define GPIO_ODR_OFFSET            	((uint32_t)0x00000014)
#define GPIO_SET_OFFSET             ((uint32_t)0x00000018)
#define GPIO_RESET_OFFSET           ((uint32_t)0x0000001A)
#define GPIO_LCKR_OFFSET            ((uint32_t)0x0000001C)
#define GPIO_AFRL_OFFSET            ((uint32_t)0x00000020)
#define GPIO_AFRH_OFFSET            ((uint32_t)0x00000024)

/* TODO GPIOA*/
 /* TODO MODER */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_MODER            					(((GPIO_MODER_TypeDef*)(GPIOA_BASE+GPIO_MODER_OFFSET )))
 #define GPIOA_MODER_R          					(*((__IO uint32_t *)(GPIOA_BASE+GPIO_MODER_OFFSET)))


 /*--------*/
 #define GPIOA_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_R_MODER0_BIT     		(0)
 #define GPIOA_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
 #define GPIOA_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
 #define GPIOA_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

 #define GPIOA_MODER_MODER0_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER0_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER0_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER0_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER0_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
 #define GPIOA_MODER_R_MODER1_BIT     		(2)
 #define GPIOA_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
 #define GPIOA_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
 #define GPIOA_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

 #define GPIOA_MODER_MODER1_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER1_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER1_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER1_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER1_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
 #define GPIOA_MODER_R_MODER2_BIT     		(4)
 #define GPIOA_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
 #define GPIOA_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
 #define GPIOA_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

 #define GPIOA_MODER_MODER2_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER2_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER2_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER2_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER2_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
 #define GPIOA_MODER_R_MODER3_BIT     		(6)
 #define GPIOA_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
 #define GPIOA_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
 #define GPIOA_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

 #define GPIOA_MODER_MODER3_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER3_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER3_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER3_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER3_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
 #define GPIOA_MODER_R_MODER4_BIT     		(8)
 #define GPIOA_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
 #define GPIOA_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
 #define GPIOA_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

 #define GPIOA_MODER_MODER4_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER4_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER4_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER4_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER4_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
 #define GPIOA_MODER_R_MODER5_BIT     		(10)
 #define GPIOA_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
 #define GPIOA_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
 #define GPIOA_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

 #define GPIOA_MODER_MODER5_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER5_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER5_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER5_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER5_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
 #define GPIOA_MODER_R_MODER6_BIT     		(12)
 #define GPIOA_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
 #define GPIOA_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
 #define GPIOA_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

 #define GPIOA_MODER_MODER6_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER6_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER6_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER6_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER6_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
 #define GPIOA_MODER_R_MODER7_BIT     		(14)
 #define GPIOA_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
 #define GPIOA_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
 #define GPIOA_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

 #define GPIOA_MODER_MODER7_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER7_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER7_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER7_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER7_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
 #define GPIOA_MODER_R_MODER8_BIT     		(16)
 #define GPIOA_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
 #define GPIOA_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
 #define GPIOA_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

 #define GPIOA_MODER_MODER8_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER8_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER8_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER8_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER8_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
 #define GPIOA_MODER_R_MODER9_BIT     		(18)
 #define GPIOA_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
 #define GPIOA_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
 #define GPIOA_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

 #define GPIOA_MODER_MODER9_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER9_IN 				((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER9_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER9_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER9_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
 #define GPIOA_MODER_R_MODER10_BIT     		(20)
 #define GPIOA_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
 #define GPIOA_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
 #define GPIOA_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

 #define GPIOA_MODER_MODER10_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER10_IN 			((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER10_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER10_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER10_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
 #define GPIOA_MODER_R_MODER11_BIT     		(22)
 #define GPIOA_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
 #define GPIOA_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
 #define GPIOA_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

 #define GPIOA_MODER_MODER11_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER11_IN 			((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER11_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER11_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER11_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
 #define GPIOA_MODER_R_MODER12_BIT     		(24)
 #define GPIOA_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
 #define GPIOA_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
 #define GPIOA_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

 #define GPIOA_MODER_MODER12_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER12_IN 			((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER12_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER12_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER12_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
 #define GPIOA_MODER_R_MODER13_BIT     		(26)
 #define GPIOA_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
 #define GPIOA_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
 #define GPIOA_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

 #define GPIOA_MODER_MODER13_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER13_IN 			((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER13_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER13_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER13_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
 #define GPIOA_MODER_R_MODER14_BIT     		(28)
 #define GPIOA_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
 #define GPIOA_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
 #define GPIOA_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

 #define GPIOA_MODER_MODER14_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER14_IN 			((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER14_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER14_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER14_AN   			((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
 #define GPIOA_MODER_R_MODER15_BIT     		(30)
 #define GPIOA_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
 #define GPIOA_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
 #define GPIOA_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
 #define GPIOA_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

 #define GPIOA_MODER_MODER15_MASK    		((uint32_t)0x00000003)
 #define GPIOA_MODER_MODER15_IN 			((uint32_t)0x00000000)
 #define GPIOA_MODER_MODER15_OUT   			((uint32_t)0x00000001)
 #define GPIOA_MODER_MODER15_ALT   			((uint32_t)0x00000002)
 #define GPIOA_MODER_MODER15_AN   			((uint32_t)0x00000003)
 /*--------*/


 /* TODO OTYPER */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOA_BASE+GPIO_OTYPER_OFFSET )))
 #define GPIOA_OTYPER_R          					(*((__IO uint32_t *)(GPIOA_BASE+GPIO_OTYPER_OFFSET)))


 /*--------*/
 #define GPIOA_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_OTYPER_R_OT0_BIT     		(0)
 #define GPIOA_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

 #define GPIOA_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT0_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT0_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
 #define GPIOA_OTYPER_R_OT1_BIT     		(1)
 #define GPIOA_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

 #define GPIOA_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT1_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT1_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
 #define GPIOA_OTYPER_R_OT2_BIT     		(2)
 #define GPIOA_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

 #define GPIOA_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT2_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT2_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
 #define GPIOA_OTYPER_R_OT3_BIT     		(3)
 #define GPIOA_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

 #define GPIOA_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT3_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT3_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
 #define GPIOA_OTYPER_R_OT4_BIT     		(4)
 #define GPIOA_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

 #define GPIOA_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT4_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT4_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
 #define GPIOA_OTYPER_R_OT5_BIT     		(5)
 #define GPIOA_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

 #define GPIOA_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT5_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT5_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
 #define GPIOA_OTYPER_R_OT6_BIT     		(6)
 #define GPIOA_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

 #define GPIOA_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT6_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT6_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
 #define GPIOA_OTYPER_R_OT7_BIT     		(7)
 #define GPIOA_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

 #define GPIOA_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT7_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT7_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
 #define GPIOA_OTYPER_R_OT8_BIT     		(8)
 #define GPIOA_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

 #define GPIOA_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT8_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT8_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
 #define GPIOA_OTYPER_R_OT9_BIT     		(9)
 #define GPIOA_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

 #define GPIOA_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT9_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT9_OP   				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
 #define GPIOA_OTYPER_R_OT10_BIT     		(10)
 #define GPIOA_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

 #define GPIOA_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT10_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT10_OP   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
 #define GPIOA_OTYPER_R_OT11_BIT     		(11)
 #define GPIOA_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

 #define GPIOA_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT11_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT11_OP   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
 #define GPIOA_OTYPER_R_OT12_BIT     		(12)
 #define GPIOA_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

 #define GPIOA_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT12_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT12_OP   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
 #define GPIOA_OTYPER_R_OT13_BIT     		(13)
 #define GPIOA_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

 #define GPIOA_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT13_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT13_OP   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
 #define GPIOA_OTYPER_R_OT14_BIT     		(14)
 #define GPIOA_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

 #define GPIOA_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT14_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT14_OP   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
 #define GPIOA_OTYPER_R_OT15_BIT     		(15)
 #define GPIOA_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
 #define GPIOA_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

 #define GPIOA_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
 #define GPIOA_OTYPER_OT15_PP 				((uint32_t)0x00000000)
 #define GPIOA_OTYPER_OT15_OP   			((uint32_t)0x00000001)
 /*--------*/




 /* TODO OSPEEDR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOA_BASE+GPIO_OSPEEDR_OFFSET )))
 #define GPIOA_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOA_BASE+GPIO_OSPEEDR_OFFSET)))


 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_R_OSPEEDR0_BIT     		(0)
 #define GPIOA_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

 #define GPIOA_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
 #define GPIOA_OSPEEDR_R_OSPEEDR1_BIT     		(2)
 #define GPIOA_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
 #define GPIOA_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
 #define GPIOA_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

 #define GPIOA_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
 #define GPIOA_OSPEEDR_R_OSPEEDR2_BIT     		(4)
 #define GPIOA_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
 #define GPIOA_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
 #define GPIOA_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

 #define GPIOA_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
 #define GPIOA_OSPEEDR_R_OSPEEDR3_BIT     		(6)
 #define GPIOA_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
 #define GPIOA_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
 #define GPIOA_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

 #define GPIOA_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
 #define GPIOA_OSPEEDR_R_OSPEEDR4_BIT     		(8)
 #define GPIOA_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
 #define GPIOA_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
 #define GPIOA_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

 #define GPIOA_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
 #define GPIOA_OSPEEDR_R_OSPEEDR5_BIT     		(10)
 #define GPIOA_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
 #define GPIOA_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
 #define GPIOA_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

 #define GPIOA_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
 #define GPIOA_OSPEEDR_R_OSPEEDR6_BIT     		(12)
 #define GPIOA_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
 #define GPIOA_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
 #define GPIOA_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

 #define GPIOA_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
 #define GPIOA_OSPEEDR_R_OSPEEDR7_BIT     		(14)
 #define GPIOA_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
 #define GPIOA_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
 #define GPIOA_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

 #define GPIOA_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
 #define GPIOA_OSPEEDR_R_OSPEEDR8_BIT     		(16)
 #define GPIOA_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
 #define GPIOA_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
 #define GPIOA_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

 #define GPIOA_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
 #define GPIOA_OSPEEDR_R_OSPEEDR9_BIT     		(18)
 #define GPIOA_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
 #define GPIOA_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
 #define GPIOA_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

 #define GPIOA_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
 #define GPIOA_OSPEEDR_R_OSPEEDR10_BIT     		(20)
 #define GPIOA_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
 #define GPIOA_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
 #define GPIOA_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

 #define GPIOA_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
 #define GPIOA_OSPEEDR_R_OSPEEDR11_BIT     		(22)
 #define GPIOA_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
 #define GPIOA_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
 #define GPIOA_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

 #define GPIOA_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR12_BIT     		(24)
 #define GPIOA_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

 #define GPIOA_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR13_BIT     		(26)
 #define GPIOA_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

 #define GPIOA_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR14_BIT     		(28)
 #define GPIOA_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

 #define GPIOA_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
 /*--------*/

 /*--------*/
 #define GPIOA_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR15_BIT     		(30)
 #define GPIOA_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
 #define GPIOA_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

 #define GPIOA_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
 #define GPIOA_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
 #define GPIOA_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
 #define GPIOA_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
 #define GPIOA_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
 /*--------*/



 /* TODO PUPDR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOA_BASE+GPIO_PUPDR_OFFSET )))
 #define GPIOA_PUPDR_R          					(*((__IO uint32_t *)(GPIOA_BASE+GPIO_PUPDR_OFFSET)))


 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_R_PUPDR0_BIT     		(0)
 #define GPIOA_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

 #define GPIOA_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
 #define GPIOA_PUPDR_R_PUPDR1_BIT     		(2)
 #define GPIOA_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
 #define GPIOA_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

 #define GPIOA_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
 #define GPIOA_PUPDR_R_PUPDR2_BIT     		(4)
 #define GPIOA_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
 #define GPIOA_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

 #define GPIOA_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
 #define GPIOA_PUPDR_R_PUPDR3_BIT     		(6)
 #define GPIOA_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
 #define GPIOA_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

 #define GPIOA_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
 #define GPIOA_PUPDR_R_PUPDR4_BIT     		(8)
 #define GPIOA_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
 #define GPIOA_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

 #define GPIOA_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
 #define GPIOA_PUPDR_R_PUPDR5_BIT     		(10)
 #define GPIOA_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
 #define GPIOA_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

 #define GPIOA_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
 #define GPIOA_PUPDR_R_PUPDR6_BIT     		(12)
 #define GPIOA_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
 #define GPIOA_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

 #define GPIOA_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
 #define GPIOA_PUPDR_R_PUPDR7_BIT     		(14)
 #define GPIOA_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
 #define GPIOA_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

 #define GPIOA_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
 #define GPIOA_PUPDR_R_PUPDR8_BIT     		(16)
 #define GPIOA_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
 #define GPIOA_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

 #define GPIOA_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
 #define GPIOA_PUPDR_R_PUPDR9_BIT     		(18)
 #define GPIOA_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
 #define GPIOA_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

 #define GPIOA_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
 #define GPIOA_PUPDR_R_PUPDR10_BIT     		(20)
 #define GPIOA_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
 #define GPIOA_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

 #define GPIOA_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
 #define GPIOA_PUPDR_R_PUPDR11_BIT     		(22)
 #define GPIOA_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
 #define GPIOA_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

 #define GPIOA_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
 #define GPIOA_PUPDR_R_PUPDR12_BIT     		(24)
 #define GPIOA_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
 #define GPIOA_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

 #define GPIOA_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
 #define GPIOA_PUPDR_R_PUPDR13_BIT     		(26)
 #define GPIOA_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
 #define GPIOA_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

 #define GPIOA_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
 #define GPIOA_PUPDR_R_PUPDR14_BIT     		(28)
 #define GPIOA_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
 #define GPIOA_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

 #define GPIOA_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
 /*--------*/

 /*--------*/
 #define GPIOA_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
 #define GPIOA_PUPDR_R_PUPDR15_BIT     		(30)
 #define GPIOA_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
 #define GPIOA_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
 #define GPIOA_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

 #define GPIOA_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
 #define GPIOA_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
 #define GPIOA_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
 #define GPIOA_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
 /*--------*/



 /* TODO IDR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_IDR            					(((GPIO_IDR_TypeDef*)(GPIOA_BASE+GPIO_IDR_OFFSET )))
 #define GPIOA_IDR_R          					(*((__I uint32_t *)(GPIOA_BASE+GPIO_IDR_OFFSET)))

 /*--------*/
 #define GPIOA_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_R_IDR0_BIT     		(0)
 #define GPIOA_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

 #define GPIOA_IDR_IDR0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR0_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
 #define GPIOA_IDR_R_IDR1_BIT     		(1)
 #define GPIOA_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

 #define GPIOA_IDR_IDR1_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR1_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
 #define GPIOA_IDR_R_IDR2_BIT     		(2)
 #define GPIOA_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

 #define GPIOA_IDR_IDR2_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR2_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
 #define GPIOA_IDR_R_IDR3_BIT     		(3)
 #define GPIOA_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

 #define GPIOA_IDR_IDR3_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR3_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
 #define GPIOA_IDR_R_IDR4_BIT     		(4)
 #define GPIOA_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

 #define GPIOA_IDR_IDR4_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR4_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
 #define GPIOA_IDR_R_IDR5_BIT     		(5)
 #define GPIOA_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

 #define GPIOA_IDR_IDR5_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR5_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
 #define GPIOA_IDR_R_IDR6_BIT     		(6)
 #define GPIOA_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

 #define GPIOA_IDR_IDR6_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR6_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
 #define GPIOA_IDR_R_IDR7_BIT     		(7)
 #define GPIOA_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

 #define GPIOA_IDR_IDR7_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR7_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
 #define GPIOA_IDR_R_IDR8_BIT     		(8)
 #define GPIOA_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

 #define GPIOA_IDR_IDR8_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR8_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
 #define GPIOA_IDR_R_IDR9_BIT     		(9)
 #define GPIOA_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

 #define GPIOA_IDR_IDR9_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR9_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
 #define GPIOA_IDR_R_IDR10_BIT     		(10)
 #define GPIOA_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

 #define GPIOA_IDR_IDR10_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR10_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
 #define GPIOA_IDR_R_IDR11_BIT     		(11)
 #define GPIOA_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

 #define GPIOA_IDR_IDR11_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR11_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
 #define GPIOA_IDR_R_IDR12_BIT     		(12)
 #define GPIOA_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

 #define GPIOA_IDR_IDR12_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR12_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
 #define GPIOA_IDR_R_IDR13_BIT     		(13)
 #define GPIOA_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

 #define GPIOA_IDR_IDR13_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR13_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
 #define GPIOA_IDR_R_IDR14_BIT     		(14)
 #define GPIOA_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

 #define GPIOA_IDR_IDR14_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR14_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
 #define GPIOA_IDR_R_IDR15_BIT     		(15)
 #define GPIOA_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
 #define GPIOA_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

 #define GPIOA_IDR_IDR15_MASK    		((uint32_t)0x00000001)
 #define GPIOA_IDR_IDR15_LOW 			((uint32_t)0x00000000)
 #define GPIOA_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
 /*--------*/



 /* TODO ODR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_ODR            					(((GPIO_ODR_TypeDef*)(GPIOA_BASE+GPIO_ODR_OFFSET )))
 #define GPIOA_ODR_R          					(*((__IO uint32_t *)(GPIOA_BASE+GPIO_ODR_OFFSET)))

 /*--------*/
 #define GPIOA_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_R_ODR0_BIT     		(0)
 #define GPIOA_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

 #define GPIOA_ODR_ODR0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR0_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
 #define GPIOA_ODR_R_ODR1_BIT     		(1)
 #define GPIOA_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

 #define GPIOA_ODR_ODR1_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR1_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
 #define GPIOA_ODR_R_ODR2_BIT     		(2)
 #define GPIOA_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

 #define GPIOA_ODR_ODR2_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR2_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
 #define GPIOA_ODR_R_ODR3_BIT     		(3)
 #define GPIOA_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

 #define GPIOA_ODR_ODR3_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR3_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
 #define GPIOA_ODR_R_ODR4_BIT     		(4)
 #define GPIOA_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

 #define GPIOA_ODR_ODR4_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR4_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
 #define GPIOA_ODR_R_ODR5_BIT     		(5)
 #define GPIOA_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

 #define GPIOA_ODR_ODR5_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR5_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
 #define GPIOA_ODR_R_ODR6_BIT     		(6)
 #define GPIOA_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

 #define GPIOA_ODR_ODR6_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR6_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
 #define GPIOA_ODR_R_ODR7_BIT     		(7)
 #define GPIOA_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

 #define GPIOA_ODR_ODR7_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR7_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
 #define GPIOA_ODR_R_ODR8_BIT     		(8)
 #define GPIOA_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

 #define GPIOA_ODR_ODR8_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR8_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
 #define GPIOA_ODR_R_ODR9_BIT     		(9)
 #define GPIOA_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

 #define GPIOA_ODR_ODR9_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR9_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
 #define GPIOA_ODR_R_ODR10_BIT     		(10)
 #define GPIOA_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

 #define GPIOA_ODR_ODR10_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR10_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
 #define GPIOA_ODR_R_ODR11_BIT     		(11)
 #define GPIOA_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

 #define GPIOA_ODR_ODR11_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR11_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
 #define GPIOA_ODR_R_ODR12_BIT     		(12)
 #define GPIOA_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

 #define GPIOA_ODR_ODR12_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR12_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
 #define GPIOA_ODR_R_ODR13_BIT     		(13)
 #define GPIOA_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

 #define GPIOA_ODR_ODR13_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR13_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
 #define GPIOA_ODR_R_ODR14_BIT     		(14)
 #define GPIOA_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

 #define GPIOA_ODR_ODR14_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR14_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
 #define GPIOA_ODR_R_ODR15_BIT     		(15)
 #define GPIOA_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
 #define GPIOA_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

 #define GPIOA_ODR_ODR15_MASK    		((uint32_t)0x00000001)
 #define GPIOA_ODR_ODR15_LOW 			((uint32_t)0x00000000)
 #define GPIOA_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
 /*--------*/



 /* TODO SET */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_SET            					(((GPIO_SET_TypeDef*)(GPIOA_BASE+GPIO_SET_OFFSET )))
 #define GPIOA_SET_R          					(*((__IO uint16_t *)(GPIOA_BASE+GPIO_SET_OFFSET)))

 /*--------*/
 #define GPIOA_SET_R_SET0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_R_SET0_BIT     		(0)
 #define GPIOA_SET_R_SET0_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET0_SET   		((uint32_t)0x00000001)

 #define GPIOA_SET_SET0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET0_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET0_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET1_MASK    		((uint32_t)0x00000002)
 #define GPIOA_SET_R_SET1_BIT     		(1)
 #define GPIOA_SET_R_SET1_NA   			((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET1_SET  			((uint32_t)0x00000002)

 #define GPIOA_SET_SET1_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET1_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET1_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET2_MASK    		((uint32_t)0x00000004)
 #define GPIOA_SET_R_SET2_BIT     		(2)
 #define GPIOA_SET_R_SET2_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET2_SET   		((uint32_t)0x00000004)

 #define GPIOA_SET_SET2_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET2_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET2_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET3_MASK    		((uint32_t)0x00000008)
 #define GPIOA_SET_R_SET3_BIT     		(3)
 #define GPIOA_SET_R_SET3_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET3_SET   		((uint32_t)0x00000008)

 #define GPIOA_SET_SET3_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET3_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET3_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET4_MASK    		((uint32_t)0x00000010)
 #define GPIOA_SET_R_SET4_BIT     		(4)
 #define GPIOA_SET_R_SET4_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET4_SET   		((uint32_t)0x00000010)

 #define GPIOA_SET_SET4_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET4_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET4_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET5_MASK    		((uint32_t)0x00000020)
 #define GPIOA_SET_R_SET5_BIT     		(5)
 #define GPIOA_SET_R_SET5_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET5_SET   		((uint32_t)0x00000020)

 #define GPIOA_SET_SET5_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET5_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET5_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET6_MASK    		((uint32_t)0x00000040)
 #define GPIOA_SET_R_SET6_BIT     		(6)
 #define GPIOA_SET_R_SET6_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET6_SET   		((uint32_t)0x00000040)

 #define GPIOA_SET_SET6_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET6_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET6_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET7_MASK    		((uint32_t)0x00000080)
 #define GPIOA_SET_R_SET7_BIT     		(7)
 #define GPIOA_SET_R_SET7_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET7_SET   		((uint32_t)0x00000080)

 #define GPIOA_SET_SET7_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET7_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET7_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET8_MASK    		((uint32_t)0x00000100)
 #define GPIOA_SET_R_SET8_BIT     		(8)
 #define GPIOA_SET_R_SET8_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET8_SET   		((uint32_t)0x00000100)

 #define GPIOA_SET_SET8_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET8_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET8_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET9_MASK    		((uint32_t)0x00000200)
 #define GPIOA_SET_R_SET9_BIT     		(9)
 #define GPIOA_SET_R_SET9_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET9_SET   		((uint32_t)0x00000200)

 #define GPIOA_SET_SET9_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET9_NA 				((uint32_t)0x00000000)
 #define GPIOA_SET_SET9_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET10_MASK    		((uint32_t)0x00000400)
 #define GPIOA_SET_R_SET10_BIT     		(10)
 #define GPIOA_SET_R_SET10_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET10_SET   		((uint32_t)0x00000400)

 #define GPIOA_SET_SET10_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET10_NA 			((uint32_t)0x00000000)
 #define GPIOA_SET_SET10_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET11_MASK    		((uint32_t)0x00000800)
 #define GPIOA_SET_R_SET11_BIT     		(11)
 #define GPIOA_SET_R_SET11_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET11_SET   		((uint32_t)0x00000800)

 #define GPIOA_SET_SET11_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET11_NA 			((uint32_t)0x00000000)
 #define GPIOA_SET_SET11_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET12_MASK    		((uint32_t)0x00001000)
 #define GPIOA_SET_R_SET12_BIT     		(12)
 #define GPIOA_SET_R_SET12_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET12_SET   		((uint32_t)0x00001000)

 #define GPIOA_SET_SET12_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET12_NA 			((uint32_t)0x00000000)
 #define GPIOA_SET_SET12_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET13_MASK    		((uint32_t)0x00002000)
 #define GPIOA_SET_R_SET13_BIT     		(13)
 #define GPIOA_SET_R_SET13_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET13_SET   		((uint32_t)0x00002000)

 #define GPIOA_SET_SET13_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET13_NA 			((uint32_t)0x00000000)
 #define GPIOA_SET_SET13_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET14_MASK    		((uint32_t)0x00004000)
 #define GPIOA_SET_R_SET14_BIT     		(14)
 #define GPIOA_SET_R_SET14_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET14_SET   		((uint32_t)0x00004000)

 #define GPIOA_SET_SET14_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET14_NA 			((uint32_t)0x00000000)
 #define GPIOA_SET_SET14_SET   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_SET_R_SET15_MASK    		((uint32_t)0x00008000)
 #define GPIOA_SET_R_SET15_BIT     		(15)
 #define GPIOA_SET_R_SET15_NA    		((uint32_t)0x00000000)
 #define GPIOA_SET_R_SET15_SET   		((uint32_t)0x00008000)

 #define GPIOA_SET_SET15_MASK    		((uint32_t)0x00000001)
 #define GPIOA_SET_SET15_NA 			((uint32_t)0x00000000)
 #define GPIOA_SET_SET15_SET   			((uint32_t)0x00000001)
 /*--------*/


 /* TODO RESET */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_RESET            					(((GPIO_RESET_TypeDef*)(GPIOA_BASE+GPIO_RESET_OFFSET )))
 #define GPIOA_RESET_R          					(*((__IO uint16_t *)(GPIOA_BASE+GPIO_RESET_OFFSET)))


 /*--------*/
 #define GPIOA_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_R_RESET0_BIT     		(0)
 #define GPIOA_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

 #define GPIOA_RESET_RESET0_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET0_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET0_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
 #define GPIOA_RESET_R_RESET1_BIT     		(1)
 #define GPIOA_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

 #define GPIOA_RESET_RESET1_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET1_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET1_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
 #define GPIOA_RESET_R_RESET2_BIT     		(2)
 #define GPIOA_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

 #define GPIOA_RESET_RESET2_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET2_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET2_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
 #define GPIOA_RESET_R_RESET3_BIT     		(3)
 #define GPIOA_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

 #define GPIOA_RESET_RESET3_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET3_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET3_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
 #define GPIOA_RESET_R_RESET4_BIT     		(4)
 #define GPIOA_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

 #define GPIOA_RESET_RESET4_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET4_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET4_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
 #define GPIOA_RESET_R_RESET5_BIT     		(5)
 #define GPIOA_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

 #define GPIOA_RESET_RESET5_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET5_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET5_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
 #define GPIOA_RESET_R_RESET6_BIT     		(6)
 #define GPIOA_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

 #define GPIOA_RESET_RESET6_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET6_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET6_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
 #define GPIOA_RESET_R_RESET7_BIT     		(7)
 #define GPIOA_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

 #define GPIOA_RESET_RESET7_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET7_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET7_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
 #define GPIOA_RESET_R_RESET8_BIT     		(8)
 #define GPIOA_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

 #define GPIOA_RESET_RESET8_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET8_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET8_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
 #define GPIOA_RESET_R_RESET9_BIT     		(9)
 #define GPIOA_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

 #define GPIOA_RESET_RESET9_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET9_NA 				((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET9_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
 #define GPIOA_RESET_R_RESET10_BIT     		(10)
 #define GPIOA_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

 #define GPIOA_RESET_RESET10_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET10_NA 			((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET10_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
 #define GPIOA_RESET_R_RESET11_BIT     		(11)
 #define GPIOA_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

 #define GPIOA_RESET_RESET11_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET11_NA 			((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET11_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
 #define GPIOA_RESET_R_RESET12_BIT     		(12)
 #define GPIOA_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

 #define GPIOA_RESET_RESET12_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET12_NA 			((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET12_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
 #define GPIOA_RESET_R_RESET13_BIT     		(13)
 #define GPIOA_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

 #define GPIOA_RESET_RESET13_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET13_NA 			((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET13_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
 #define GPIOA_RESET_R_RESET14_BIT     		(14)
 #define GPIOA_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

 #define GPIOA_RESET_RESET14_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET14_NA 			((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET14_RESET   		((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
 #define GPIOA_RESET_R_RESET15_BIT     		(15)
 #define GPIOA_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
 #define GPIOA_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

 #define GPIOA_RESET_RESET15_MASK    		((uint32_t)0x00000001)
 #define GPIOA_RESET_RESET15_NA 			((uint32_t)0x00000000)
 #define GPIOA_RESET_RESET15_RESET   		((uint32_t)0x00000001)
 /*--------*/


 /* TODO LCKR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOA_BASE+GPIO_LCKR_OFFSET )))
 #define GPIOA_LCKR_R          					(*((__IO uint16_t *)(GPIOA_BASE+GPIO_LCKR_OFFSET)))

 /*--------*/
 #define GPIOA_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_R_LCK0_BIT     			(0)
 #define GPIOA_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

 #define GPIOA_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
 #define GPIOA_LCKR_R_LCK1_BIT     			(1)
 #define GPIOA_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

 #define GPIOA_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
 #define GPIOA_LCKR_R_LCK2_BIT     			(2)
 #define GPIOA_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

 #define GPIOA_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
 #define GPIOA_LCKR_R_LCK3_BIT     			(3)
 #define GPIOA_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

 #define GPIOA_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
 #define GPIOA_LCKR_R_LCK4_BIT     			(4)
 #define GPIOA_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

 #define GPIOA_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
 #define GPIOA_LCKR_R_LCK5_BIT     			(5)
 #define GPIOA_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

 #define GPIOA_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
 #define GPIOA_LCKR_R_LCK6_BIT     			(6)
 #define GPIOA_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

 #define GPIOA_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
 #define GPIOA_LCKR_R_LCK7_BIT    	 		(7)
 #define GPIOA_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

 #define GPIOA_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
 #define GPIOA_LCKR_R_LCK8_BIT     			(8)
 #define GPIOA_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

 #define GPIOA_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
 #define GPIOA_LCKR_R_LCK9_BIT     			(9)
 #define GPIOA_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

 #define GPIOA_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
 #define GPIOA_LCKR_R_LCK10_BIT     		(10)
 #define GPIOA_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

 #define GPIOA_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
 #define GPIOA_LCKR_R_LCK11_BIT     		(11)
 #define GPIOA_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

 #define GPIOA_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
 #define GPIOA_LCKR_R_LCK12_BIT     		(12)
 #define GPIOA_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

 #define GPIOA_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
 #define GPIOA_LCKR_R_LCK13_BIT     		(13)
 #define GPIOA_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

 #define GPIOA_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
 #define GPIOA_LCKR_R_LCK14_BIT     		(14)
 #define GPIOA_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

 #define GPIOA_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
 #define GPIOA_LCKR_R_LCK15_BIT     		(15)
 #define GPIOA_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

 #define GPIOA_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /*--------*/
 #define GPIOA_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
 #define GPIOA_LCKR_R_LCKK_BIT     			(16)
 #define GPIOA_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
 #define GPIOA_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

 #define GPIOA_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
 #define GPIOA_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
 #define GPIOA_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
 /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOA_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOA_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOA_AFRL_R          		(*((__IO uint32_t *)(GPIOA_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOA_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOA_AFRL_R_AFR0_BIT     			(0)

 #define GPIOA_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOA_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOA_BASE+GPIO_AFRH_OFFSET )))
#define GPIOA_AFRH_R          		(*((__IO uint32_t *)(GPIOA_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOA_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOA_AFRH_R_AFR8_BIT     			(0)

#define GPIOA_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/


 /* TODO GPIOB*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_MODER            					(((GPIO_MODER_TypeDef*)(GPIOB_BASE+GPIO_MODER_OFFSET )))
  #define GPIOB_MODER_R          					(*((__IO uint32_t *)(GPIOB_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOB_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_R_MODER0_BIT     		(0)
  #define GPIOB_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOB_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOB_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOB_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOB_MODER_R_MODER1_BIT     		(2)
  #define GPIOB_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOB_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOB_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOB_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOB_MODER_R_MODER2_BIT     		(4)
  #define GPIOB_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOB_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOB_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOB_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOB_MODER_R_MODER3_BIT     		(6)
  #define GPIOB_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOB_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOB_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOB_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOB_MODER_R_MODER4_BIT     		(8)
  #define GPIOB_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOB_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOB_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOB_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOB_MODER_R_MODER5_BIT     		(10)
  #define GPIOB_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOB_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOB_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOB_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOB_MODER_R_MODER6_BIT     		(12)
  #define GPIOB_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOB_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOB_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOB_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOB_MODER_R_MODER7_BIT     		(14)
  #define GPIOB_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOB_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOB_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOB_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOB_MODER_R_MODER8_BIT     		(16)
  #define GPIOB_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOB_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOB_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOB_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOB_MODER_R_MODER9_BIT     		(18)
  #define GPIOB_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOB_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOB_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOB_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOB_MODER_R_MODER10_BIT     		(20)
  #define GPIOB_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOB_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOB_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOB_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOB_MODER_R_MODER11_BIT     		(22)
  #define GPIOB_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOB_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOB_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOB_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOB_MODER_R_MODER12_BIT     		(24)
  #define GPIOB_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOB_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOB_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOB_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOB_MODER_R_MODER13_BIT     		(26)
  #define GPIOB_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOB_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOB_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOB_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOB_MODER_R_MODER14_BIT     		(28)
  #define GPIOB_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOB_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOB_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOB_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOB_MODER_R_MODER15_BIT     		(30)
  #define GPIOB_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOB_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOB_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOB_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOB_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOB_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOB_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOB_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOB_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOB_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOB_OTYPER_R          					(*((__IO uint32_t *)(GPIOB_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOB_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_OTYPER_R_OT0_BIT     		(0)
  #define GPIOB_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOB_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOB_OTYPER_R_OT1_BIT     		(1)
  #define GPIOB_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOB_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOB_OTYPER_R_OT2_BIT     		(2)
  #define GPIOB_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOB_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOB_OTYPER_R_OT3_BIT     		(3)
  #define GPIOB_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOB_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOB_OTYPER_R_OT4_BIT     		(4)
  #define GPIOB_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOB_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOB_OTYPER_R_OT5_BIT     		(5)
  #define GPIOB_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOB_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOB_OTYPER_R_OT6_BIT     		(6)
  #define GPIOB_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOB_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOB_OTYPER_R_OT7_BIT     		(7)
  #define GPIOB_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOB_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOB_OTYPER_R_OT8_BIT     		(8)
  #define GPIOB_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOB_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOB_OTYPER_R_OT9_BIT     		(9)
  #define GPIOB_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOB_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOB_OTYPER_R_OT10_BIT     		(10)
  #define GPIOB_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOB_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOB_OTYPER_R_OT11_BIT     		(11)
  #define GPIOB_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOB_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOB_OTYPER_R_OT12_BIT     		(12)
  #define GPIOB_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOB_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOB_OTYPER_R_OT13_BIT     		(13)
  #define GPIOB_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOB_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOB_OTYPER_R_OT14_BIT     		(14)
  #define GPIOB_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOB_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOB_OTYPER_R_OT15_BIT     		(15)
  #define GPIOB_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOB_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOB_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOB_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOB_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOB_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOB_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOB_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOB_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOB_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOB_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOB_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOB_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOB_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOB_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOB_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOB_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOB_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOB_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOB_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOB_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOB_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOB_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOB_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOB_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOB_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOB_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOB_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOB_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOB_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOB_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOB_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOB_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOB_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOB_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOB_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOB_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOB_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOB_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOB_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOB_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOB_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOB_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOB_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOB_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOB_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOB_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOB_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOB_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOB_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOB_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOB_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOB_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOB_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOB_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOB_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOB_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOB_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOB_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOB_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOB_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOB_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOB_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOB_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOB_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOB_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOB_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOB_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOB_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOB_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOB_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOB_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOB_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOB_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOB_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOB_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOB_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOB_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOB_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOB_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOB_PUPDR_R          					(*((__IO uint32_t *)(GPIOB_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOB_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOB_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOB_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOB_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOB_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOB_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOB_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOB_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOB_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOB_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOB_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOB_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOB_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOB_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOB_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOB_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOB_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOB_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOB_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOB_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOB_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOB_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOB_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOB_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOB_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOB_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOB_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOB_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOB_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOB_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOB_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOB_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOB_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOB_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOB_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOB_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOB_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOB_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOB_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOB_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOB_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOB_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOB_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOB_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOB_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOB_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOB_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOB_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOB_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOB_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOB_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOB_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOB_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOB_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOB_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOB_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOB_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOB_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOB_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOB_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOB_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOB_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOB_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOB_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOB_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOB_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOB_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_IDR            					(((GPIO_IDR_TypeDef*)(GPIOB_BASE+GPIO_IDR_OFFSET )))
  #define GPIOB_IDR_R          					(*((__I uint32_t *)(GPIOB_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOB_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_R_IDR0_BIT     		(0)
  #define GPIOB_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOB_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOB_IDR_R_IDR1_BIT     		(1)
  #define GPIOB_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOB_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOB_IDR_R_IDR2_BIT     		(2)
  #define GPIOB_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOB_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOB_IDR_R_IDR3_BIT     		(3)
  #define GPIOB_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOB_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOB_IDR_R_IDR4_BIT     		(4)
  #define GPIOB_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOB_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOB_IDR_R_IDR5_BIT     		(5)
  #define GPIOB_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOB_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOB_IDR_R_IDR6_BIT     		(6)
  #define GPIOB_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOB_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOB_IDR_R_IDR7_BIT     		(7)
  #define GPIOB_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOB_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOB_IDR_R_IDR8_BIT     		(8)
  #define GPIOB_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOB_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOB_IDR_R_IDR9_BIT     		(9)
  #define GPIOB_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOB_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOB_IDR_R_IDR10_BIT     		(10)
  #define GPIOB_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOB_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOB_IDR_R_IDR11_BIT     		(11)
  #define GPIOB_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOB_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOB_IDR_R_IDR12_BIT     		(12)
  #define GPIOB_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOB_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOB_IDR_R_IDR13_BIT     		(13)
  #define GPIOB_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOB_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOB_IDR_R_IDR14_BIT     		(14)
  #define GPIOB_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOB_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOB_IDR_R_IDR15_BIT     		(15)
  #define GPIOB_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOB_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOB_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOB_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOB_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_ODR            					(((GPIO_ODR_TypeDef*)(GPIOB_BASE+GPIO_ODR_OFFSET )))
  #define GPIOB_ODR_R          					(*((__IO uint32_t *)(GPIOB_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOB_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_R_ODR0_BIT     		(0)
  #define GPIOB_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOB_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOB_ODR_R_ODR1_BIT     		(1)
  #define GPIOB_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOB_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOB_ODR_R_ODR2_BIT     		(2)
  #define GPIOB_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOB_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOB_ODR_R_ODR3_BIT     		(3)
  #define GPIOB_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOB_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOB_ODR_R_ODR4_BIT     		(4)
  #define GPIOB_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOB_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOB_ODR_R_ODR5_BIT     		(5)
  #define GPIOB_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOB_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOB_ODR_R_ODR6_BIT     		(6)
  #define GPIOB_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOB_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOB_ODR_R_ODR7_BIT     		(7)
  #define GPIOB_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOB_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOB_ODR_R_ODR8_BIT     		(8)
  #define GPIOB_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOB_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOB_ODR_R_ODR9_BIT     		(9)
  #define GPIOB_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOB_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOB_ODR_R_ODR10_BIT     		(10)
  #define GPIOB_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOB_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOB_ODR_R_ODR11_BIT     		(11)
  #define GPIOB_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOB_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOB_ODR_R_ODR12_BIT     		(12)
  #define GPIOB_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOB_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOB_ODR_R_ODR13_BIT     		(13)
  #define GPIOB_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOB_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOB_ODR_R_ODR14_BIT     		(14)
  #define GPIOB_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOB_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOB_ODR_R_ODR15_BIT     		(15)
  #define GPIOB_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOB_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOB_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOB_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOB_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_SET            					(((GPIO_SET_TypeDef*)(GPIOB_BASE+GPIO_SET_OFFSET )))
  #define GPIOB_SET_R          					(*((__IO uint16_t *)(GPIOB_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOB_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_R_SET0_BIT     		(0)
  #define GPIOB_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOB_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOB_SET_R_SET1_BIT     		(1)
  #define GPIOB_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOB_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOB_SET_R_SET2_BIT     		(2)
  #define GPIOB_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOB_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOB_SET_R_SET3_BIT     		(3)
  #define GPIOB_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOB_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOB_SET_R_SET4_BIT     		(4)
  #define GPIOB_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOB_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOB_SET_R_SET5_BIT     		(5)
  #define GPIOB_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOB_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOB_SET_R_SET6_BIT     		(6)
  #define GPIOB_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOB_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOB_SET_R_SET7_BIT     		(7)
  #define GPIOB_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOB_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOB_SET_R_SET8_BIT     		(8)
  #define GPIOB_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOB_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOB_SET_R_SET9_BIT     		(9)
  #define GPIOB_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOB_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOB_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOB_SET_R_SET10_BIT     		(10)
  #define GPIOB_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOB_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOB_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOB_SET_R_SET11_BIT     		(11)
  #define GPIOB_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOB_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOB_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOB_SET_R_SET12_BIT     		(12)
  #define GPIOB_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOB_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOB_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOB_SET_R_SET13_BIT     		(13)
  #define GPIOB_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOB_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOB_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOB_SET_R_SET14_BIT     		(14)
  #define GPIOB_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOB_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOB_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOB_SET_R_SET15_BIT     		(15)
  #define GPIOB_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOB_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOB_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOB_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOB_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_RESET            					(((GPIO_RESET_TypeDef*)(GPIOB_BASE+GPIO_RESET_OFFSET )))
  #define GPIOB_RESET_R          					(*((__IO uint16_t *)(GPIOB_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOB_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_R_RESET0_BIT     		(0)
  #define GPIOB_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOB_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOB_RESET_R_RESET1_BIT     		(1)
  #define GPIOB_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOB_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOB_RESET_R_RESET2_BIT     		(2)
  #define GPIOB_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOB_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOB_RESET_R_RESET3_BIT     		(3)
  #define GPIOB_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOB_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOB_RESET_R_RESET4_BIT     		(4)
  #define GPIOB_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOB_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOB_RESET_R_RESET5_BIT     		(5)
  #define GPIOB_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOB_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOB_RESET_R_RESET6_BIT     		(6)
  #define GPIOB_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOB_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOB_RESET_R_RESET7_BIT     		(7)
  #define GPIOB_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOB_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOB_RESET_R_RESET8_BIT     		(8)
  #define GPIOB_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOB_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOB_RESET_R_RESET9_BIT     		(9)
  #define GPIOB_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOB_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOB_RESET_R_RESET10_BIT     		(10)
  #define GPIOB_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOB_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOB_RESET_R_RESET11_BIT     		(11)
  #define GPIOB_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOB_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOB_RESET_R_RESET12_BIT     		(12)
  #define GPIOB_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOB_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOB_RESET_R_RESET13_BIT     		(13)
  #define GPIOB_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOB_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOB_RESET_R_RESET14_BIT     		(14)
  #define GPIOB_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOB_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOB_RESET_R_RESET15_BIT     		(15)
  #define GPIOB_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOB_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOB_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOB_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOB_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOB_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOB_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOB_LCKR_R          					(*((__IO uint16_t *)(GPIOB_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOB_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_R_LCK0_BIT     			(0)
  #define GPIOB_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOB_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOB_LCKR_R_LCK1_BIT     			(1)
  #define GPIOB_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOB_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOB_LCKR_R_LCK2_BIT     			(2)
  #define GPIOB_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOB_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOB_LCKR_R_LCK3_BIT     			(3)
  #define GPIOB_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOB_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOB_LCKR_R_LCK4_BIT     			(4)
  #define GPIOB_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOB_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOB_LCKR_R_LCK5_BIT     			(5)
  #define GPIOB_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOB_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOB_LCKR_R_LCK6_BIT     			(6)
  #define GPIOB_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOB_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOB_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOB_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOB_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOB_LCKR_R_LCK8_BIT     			(8)
  #define GPIOB_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOB_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOB_LCKR_R_LCK9_BIT     			(9)
  #define GPIOB_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOB_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOB_LCKR_R_LCK10_BIT     		(10)
  #define GPIOB_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOB_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOB_LCKR_R_LCK11_BIT     		(11)
  #define GPIOB_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOB_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOB_LCKR_R_LCK12_BIT     		(12)
  #define GPIOB_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOB_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOB_LCKR_R_LCK13_BIT     		(13)
  #define GPIOB_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOB_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOB_LCKR_R_LCK14_BIT     		(14)
  #define GPIOB_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOB_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOB_LCKR_R_LCK15_BIT     		(15)
  #define GPIOB_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOB_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOB_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOB_LCKR_R_LCKK_BIT     			(16)
  #define GPIOB_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOB_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOB_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOB_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOB_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/


 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOB_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOB_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOB_AFRL_R          		(*((__IO uint32_t *)(GPIOB_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOB_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOB_AFRL_R_AFR0_BIT     			(0)

 #define GPIOB_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOB_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOB_BASE+GPIO_AFRH_OFFSET )))
#define GPIOB_AFRH_R          		(*((__IO uint32_t *)(GPIOB_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOB_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOB_AFRH_R_AFR8_BIT     			(0)

#define GPIOB_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/



 /* TODO GPIOC*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_MODER            					(((GPIO_MODER_TypeDef*)(GPIOC_BASE+GPIO_MODER_OFFSET )))
  #define GPIOC_MODER_R          					(*((__IO uint32_t *)(GPIOC_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOC_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_R_MODER0_BIT     		(0)
  #define GPIOC_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOC_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOC_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOC_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOC_MODER_R_MODER1_BIT     		(2)
  #define GPIOC_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOC_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOC_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOC_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOC_MODER_R_MODER2_BIT     		(4)
  #define GPIOC_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOC_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOC_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOC_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOC_MODER_R_MODER3_BIT     		(6)
  #define GPIOC_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOC_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOC_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOC_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOC_MODER_R_MODER4_BIT     		(8)
  #define GPIOC_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOC_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOC_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOC_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOC_MODER_R_MODER5_BIT     		(10)
  #define GPIOC_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOC_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOC_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOC_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOC_MODER_R_MODER6_BIT     		(12)
  #define GPIOC_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOC_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOC_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOC_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOC_MODER_R_MODER7_BIT     		(14)
  #define GPIOC_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOC_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOC_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOC_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOC_MODER_R_MODER8_BIT     		(16)
  #define GPIOC_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOC_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOC_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOC_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOC_MODER_R_MODER9_BIT     		(18)
  #define GPIOC_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOC_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOC_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOC_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOC_MODER_R_MODER10_BIT     		(20)
  #define GPIOC_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOC_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOC_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOC_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOC_MODER_R_MODER11_BIT     		(22)
  #define GPIOC_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOC_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOC_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOC_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOC_MODER_R_MODER12_BIT     		(24)
  #define GPIOC_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOC_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOC_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOC_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOC_MODER_R_MODER13_BIT     		(26)
  #define GPIOC_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOC_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOC_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOC_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOC_MODER_R_MODER14_BIT     		(28)
  #define GPIOC_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOC_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOC_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOC_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOC_MODER_R_MODER15_BIT     		(30)
  #define GPIOC_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOC_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOC_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOC_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOC_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOC_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOC_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOC_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOC_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOC_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOC_OTYPER_R          					(*((__IO uint32_t *)(GPIOC_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOC_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_OTYPER_R_OT0_BIT     		(0)
  #define GPIOC_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOC_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOC_OTYPER_R_OT1_BIT     		(1)
  #define GPIOC_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOC_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOC_OTYPER_R_OT2_BIT     		(2)
  #define GPIOC_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOC_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOC_OTYPER_R_OT3_BIT     		(3)
  #define GPIOC_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOC_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOC_OTYPER_R_OT4_BIT     		(4)
  #define GPIOC_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOC_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOC_OTYPER_R_OT5_BIT     		(5)
  #define GPIOC_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOC_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOC_OTYPER_R_OT6_BIT     		(6)
  #define GPIOC_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOC_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOC_OTYPER_R_OT7_BIT     		(7)
  #define GPIOC_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOC_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOC_OTYPER_R_OT8_BIT     		(8)
  #define GPIOC_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOC_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOC_OTYPER_R_OT9_BIT     		(9)
  #define GPIOC_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOC_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOC_OTYPER_R_OT10_BIT     		(10)
  #define GPIOC_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOC_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOC_OTYPER_R_OT11_BIT     		(11)
  #define GPIOC_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOC_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOC_OTYPER_R_OT12_BIT     		(12)
  #define GPIOC_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOC_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOC_OTYPER_R_OT13_BIT     		(13)
  #define GPIOC_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOC_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOC_OTYPER_R_OT14_BIT     		(14)
  #define GPIOC_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOC_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOC_OTYPER_R_OT15_BIT     		(15)
  #define GPIOC_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOC_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOC_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOC_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOC_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOC_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOC_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOC_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOC_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOC_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOC_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOC_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOC_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOC_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOC_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOC_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOC_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOC_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOC_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOC_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOC_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOC_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOC_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOC_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOC_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOC_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOC_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOC_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOC_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOC_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOC_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOC_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOC_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOC_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOC_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOC_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOC_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOC_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOC_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOC_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOC_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOC_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOC_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOC_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOC_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOC_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOC_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOC_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOC_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOC_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOC_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOC_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOC_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOC_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOC_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOC_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOC_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOC_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOC_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOC_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOC_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOC_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOC_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOC_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOC_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOC_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOC_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOC_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOC_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOC_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOC_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOC_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOC_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOC_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOC_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOC_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOC_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOC_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOC_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOC_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOC_PUPDR_R          					(*((__IO uint32_t *)(GPIOC_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOC_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOC_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOC_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOC_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOC_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOC_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOC_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOC_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOC_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOC_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOC_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOC_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOC_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOC_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOC_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOC_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOC_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOC_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOC_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOC_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOC_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOC_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOC_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOC_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOC_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOC_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOC_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOC_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOC_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOC_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOC_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOC_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOC_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOC_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOC_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOC_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOC_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOC_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOC_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOC_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOC_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOC_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOC_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOC_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOC_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOC_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOC_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOC_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOC_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOC_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOC_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOC_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOC_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOC_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOC_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOC_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOC_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOC_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOC_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOC_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOC_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOC_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOC_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOC_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOC_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOC_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOC_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_IDR            					(((GPIO_IDR_TypeDef*)(GPIOC_BASE+GPIO_IDR_OFFSET )))
  #define GPIOC_IDR_R          					(*((__I uint32_t *)(GPIOC_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOC_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_R_IDR0_BIT     		(0)
  #define GPIOC_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOC_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOC_IDR_R_IDR1_BIT     		(1)
  #define GPIOC_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOC_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOC_IDR_R_IDR2_BIT     		(2)
  #define GPIOC_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOC_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOC_IDR_R_IDR3_BIT     		(3)
  #define GPIOC_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOC_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOC_IDR_R_IDR4_BIT     		(4)
  #define GPIOC_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOC_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOC_IDR_R_IDR5_BIT     		(5)
  #define GPIOC_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOC_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOC_IDR_R_IDR6_BIT     		(6)
  #define GPIOC_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOC_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOC_IDR_R_IDR7_BIT     		(7)
  #define GPIOC_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOC_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOC_IDR_R_IDR8_BIT     		(8)
  #define GPIOC_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOC_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOC_IDR_R_IDR9_BIT     		(9)
  #define GPIOC_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOC_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOC_IDR_R_IDR10_BIT     		(10)
  #define GPIOC_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOC_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOC_IDR_R_IDR11_BIT     		(11)
  #define GPIOC_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOC_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOC_IDR_R_IDR12_BIT     		(12)
  #define GPIOC_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOC_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOC_IDR_R_IDR13_BIT     		(13)
  #define GPIOC_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOC_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOC_IDR_R_IDR14_BIT     		(14)
  #define GPIOC_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOC_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOC_IDR_R_IDR15_BIT     		(15)
  #define GPIOC_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOC_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOC_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOC_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOC_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_ODR            					(((GPIO_ODR_TypeDef*)(GPIOC_BASE+GPIO_ODR_OFFSET )))
  #define GPIOC_ODR_R          					(*((__IO uint32_t *)(GPIOC_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOC_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_R_ODR0_BIT     		(0)
  #define GPIOC_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOC_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOC_ODR_R_ODR1_BIT     		(1)
  #define GPIOC_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOC_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOC_ODR_R_ODR2_BIT     		(2)
  #define GPIOC_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOC_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOC_ODR_R_ODR3_BIT     		(3)
  #define GPIOC_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOC_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOC_ODR_R_ODR4_BIT     		(4)
  #define GPIOC_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOC_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOC_ODR_R_ODR5_BIT     		(5)
  #define GPIOC_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOC_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOC_ODR_R_ODR6_BIT     		(6)
  #define GPIOC_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOC_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOC_ODR_R_ODR7_BIT     		(7)
  #define GPIOC_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOC_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOC_ODR_R_ODR8_BIT     		(8)
  #define GPIOC_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOC_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOC_ODR_R_ODR9_BIT     		(9)
  #define GPIOC_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOC_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOC_ODR_R_ODR10_BIT     		(10)
  #define GPIOC_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOC_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOC_ODR_R_ODR11_BIT     		(11)
  #define GPIOC_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOC_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOC_ODR_R_ODR12_BIT     		(12)
  #define GPIOC_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOC_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOC_ODR_R_ODR13_BIT     		(13)
  #define GPIOC_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOC_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOC_ODR_R_ODR14_BIT     		(14)
  #define GPIOC_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOC_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOC_ODR_R_ODR15_BIT     		(15)
  #define GPIOC_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOC_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOC_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOC_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOC_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_SET            					(((GPIO_SET_TypeDef*)(GPIOC_BASE+GPIO_SET_OFFSET )))
  #define GPIOC_SET_R          					(*((__IO uint16_t *)(GPIOC_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOC_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_R_SET0_BIT     		(0)
  #define GPIOC_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOC_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOC_SET_R_SET1_BIT     		(1)
  #define GPIOC_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOC_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOC_SET_R_SET2_BIT     		(2)
  #define GPIOC_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOC_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOC_SET_R_SET3_BIT     		(3)
  #define GPIOC_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOC_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOC_SET_R_SET4_BIT     		(4)
  #define GPIOC_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOC_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOC_SET_R_SET5_BIT     		(5)
  #define GPIOC_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOC_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOC_SET_R_SET6_BIT     		(6)
  #define GPIOC_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOC_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOC_SET_R_SET7_BIT     		(7)
  #define GPIOC_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOC_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOC_SET_R_SET8_BIT     		(8)
  #define GPIOC_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOC_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOC_SET_R_SET9_BIT     		(9)
  #define GPIOC_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOC_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOC_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOC_SET_R_SET10_BIT     		(10)
  #define GPIOC_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOC_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOC_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOC_SET_R_SET11_BIT     		(11)
  #define GPIOC_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOC_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOC_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOC_SET_R_SET12_BIT     		(12)
  #define GPIOC_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOC_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOC_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOC_SET_R_SET13_BIT     		(13)
  #define GPIOC_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOC_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOC_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOC_SET_R_SET14_BIT     		(14)
  #define GPIOC_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOC_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOC_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOC_SET_R_SET15_BIT     		(15)
  #define GPIOC_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOC_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOC_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOC_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOC_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_RESET            					(((GPIO_RESET_TypeDef*)(GPIOC_BASE+GPIO_RESET_OFFSET )))
  #define GPIOC_RESET_R          					(*((__IO uint16_t *)(GPIOC_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOC_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_R_RESET0_BIT     		(0)
  #define GPIOC_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOC_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOC_RESET_R_RESET1_BIT     		(1)
  #define GPIOC_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOC_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOC_RESET_R_RESET2_BIT     		(2)
  #define GPIOC_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOC_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOC_RESET_R_RESET3_BIT     		(3)
  #define GPIOC_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOC_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOC_RESET_R_RESET4_BIT     		(4)
  #define GPIOC_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOC_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOC_RESET_R_RESET5_BIT     		(5)
  #define GPIOC_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOC_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOC_RESET_R_RESET6_BIT     		(6)
  #define GPIOC_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOC_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOC_RESET_R_RESET7_BIT     		(7)
  #define GPIOC_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOC_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOC_RESET_R_RESET8_BIT     		(8)
  #define GPIOC_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOC_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOC_RESET_R_RESET9_BIT     		(9)
  #define GPIOC_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOC_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOC_RESET_R_RESET10_BIT     		(10)
  #define GPIOC_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOC_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOC_RESET_R_RESET11_BIT     		(11)
  #define GPIOC_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOC_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOC_RESET_R_RESET12_BIT     		(12)
  #define GPIOC_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOC_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOC_RESET_R_RESET13_BIT     		(13)
  #define GPIOC_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOC_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOC_RESET_R_RESET14_BIT     		(14)
  #define GPIOC_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOC_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOC_RESET_R_RESET15_BIT     		(15)
  #define GPIOC_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOC_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOC_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOC_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOC_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOC_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOC_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOC_LCKR_R          					(*((__IO uint16_t *)(GPIOC_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOC_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_R_LCK0_BIT     			(0)
  #define GPIOC_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOC_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOC_LCKR_R_LCK1_BIT     			(1)
  #define GPIOC_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOC_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOC_LCKR_R_LCK2_BIT     			(2)
  #define GPIOC_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOC_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOC_LCKR_R_LCK3_BIT     			(3)
  #define GPIOC_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOC_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOC_LCKR_R_LCK4_BIT     			(4)
  #define GPIOC_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOC_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOC_LCKR_R_LCK5_BIT     			(5)
  #define GPIOC_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOC_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOC_LCKR_R_LCK6_BIT     			(6)
  #define GPIOC_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOC_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOC_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOC_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOC_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOC_LCKR_R_LCK8_BIT     			(8)
  #define GPIOC_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOC_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOC_LCKR_R_LCK9_BIT     			(9)
  #define GPIOC_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOC_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOC_LCKR_R_LCK10_BIT     		(10)
  #define GPIOC_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOC_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOC_LCKR_R_LCK11_BIT     		(11)
  #define GPIOC_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOC_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOC_LCKR_R_LCK12_BIT     		(12)
  #define GPIOC_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOC_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOC_LCKR_R_LCK13_BIT     		(13)
  #define GPIOC_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOC_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOC_LCKR_R_LCK14_BIT     		(14)
  #define GPIOC_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOC_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOC_LCKR_R_LCK15_BIT     		(15)
  #define GPIOC_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOC_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOC_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOC_LCKR_R_LCKK_BIT     			(16)
  #define GPIOC_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOC_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOC_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOC_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOC_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/


 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOC_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOC_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOC_AFRL_R          		(*((__IO uint32_t *)(GPIOC_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOC_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOC_AFRL_R_AFR0_BIT     			(0)

 #define GPIOC_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOC_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOC_BASE+GPIO_AFRH_OFFSET )))
#define GPIOC_AFRH_R          		(*((__IO uint32_t *)(GPIOC_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOC_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOC_AFRH_R_AFR8_BIT     			(0)

#define GPIOC_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/


 /* TODO GPIOD*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_MODER            					(((GPIO_MODER_TypeDef*)(GPIOD_BASE+GPIO_MODER_OFFSET )))
  #define GPIOD_MODER_R          					(*((__IO uint32_t *)(GPIOD_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOD_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_R_MODER0_BIT     		(0)
  #define GPIOD_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOD_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOD_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOD_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOD_MODER_R_MODER1_BIT     		(2)
  #define GPIOD_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOD_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOD_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOD_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOD_MODER_R_MODER2_BIT     		(4)
  #define GPIOD_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOD_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOD_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOD_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOD_MODER_R_MODER3_BIT     		(6)
  #define GPIOD_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOD_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOD_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOD_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOD_MODER_R_MODER4_BIT     		(8)
  #define GPIOD_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOD_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOD_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOD_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOD_MODER_R_MODER5_BIT     		(10)
  #define GPIOD_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOD_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOD_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOD_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOD_MODER_R_MODER6_BIT     		(12)
  #define GPIOD_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOD_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOD_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOD_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOD_MODER_R_MODER7_BIT     		(14)
  #define GPIOD_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOD_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOD_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOD_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOD_MODER_R_MODER8_BIT     		(16)
  #define GPIOD_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOD_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOD_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOD_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOD_MODER_R_MODER9_BIT     		(18)
  #define GPIOD_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOD_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOD_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOD_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOD_MODER_R_MODER10_BIT     		(20)
  #define GPIOD_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOD_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOD_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOD_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOD_MODER_R_MODER11_BIT     		(22)
  #define GPIOD_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOD_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOD_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOD_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOD_MODER_R_MODER12_BIT     		(24)
  #define GPIOD_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOD_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOD_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOD_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOD_MODER_R_MODER13_BIT     		(26)
  #define GPIOD_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOD_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOD_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOD_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOD_MODER_R_MODER14_BIT     		(28)
  #define GPIOD_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOD_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOD_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOD_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOD_MODER_R_MODER15_BIT     		(30)
  #define GPIOD_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOD_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOD_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOD_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOD_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOD_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOD_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOD_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOD_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOD_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOD_OTYPER_R          					(*((__IO uint32_t *)(GPIOD_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOD_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_OTYPER_R_OT0_BIT     		(0)
  #define GPIOD_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOD_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOD_OTYPER_R_OT1_BIT     		(1)
  #define GPIOD_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOD_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOD_OTYPER_R_OT2_BIT     		(2)
  #define GPIOD_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOD_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOD_OTYPER_R_OT3_BIT     		(3)
  #define GPIOD_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOD_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOD_OTYPER_R_OT4_BIT     		(4)
  #define GPIOD_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOD_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOD_OTYPER_R_OT5_BIT     		(5)
  #define GPIOD_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOD_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOD_OTYPER_R_OT6_BIT     		(6)
  #define GPIOD_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOD_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOD_OTYPER_R_OT7_BIT     		(7)
  #define GPIOD_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOD_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOD_OTYPER_R_OT8_BIT     		(8)
  #define GPIOD_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOD_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOD_OTYPER_R_OT9_BIT     		(9)
  #define GPIOD_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOD_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOD_OTYPER_R_OT10_BIT     		(10)
  #define GPIOD_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOD_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOD_OTYPER_R_OT11_BIT     		(11)
  #define GPIOD_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOD_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOD_OTYPER_R_OT12_BIT     		(12)
  #define GPIOD_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOD_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOD_OTYPER_R_OT13_BIT     		(13)
  #define GPIOD_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOD_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOD_OTYPER_R_OT14_BIT     		(14)
  #define GPIOD_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOD_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOD_OTYPER_R_OT15_BIT     		(15)
  #define GPIOD_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOD_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOD_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOD_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOD_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOD_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOD_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOD_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOD_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOD_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOD_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOD_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOD_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOD_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOD_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOD_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOD_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOD_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOD_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOD_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOD_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOD_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOD_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOD_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOD_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOD_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOD_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOD_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOD_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOD_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOD_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOD_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOD_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOD_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOD_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOD_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOD_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOD_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOD_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOD_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOD_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOD_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOD_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOD_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOD_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOD_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOD_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOD_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOD_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOD_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOD_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOD_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOD_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOD_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOD_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOD_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOD_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOD_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOD_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOD_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOD_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOD_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOD_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOD_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOD_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOD_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOD_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOD_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOD_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOD_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOD_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOD_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOD_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOD_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOD_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOD_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOD_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOD_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOD_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOD_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOD_PUPDR_R          					(*((__IO uint32_t *)(GPIOD_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOD_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOD_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOD_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOD_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOD_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOD_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOD_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOD_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOD_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOD_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOD_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOD_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOD_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOD_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOD_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOD_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOD_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOD_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOD_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOD_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOD_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOD_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOD_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOD_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOD_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOD_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOD_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOD_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOD_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOD_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOD_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOD_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOD_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOD_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOD_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOD_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOD_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOD_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOD_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOD_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOD_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOD_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOD_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOD_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOD_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOD_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOD_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOD_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOD_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOD_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOD_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOD_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOD_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOD_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOD_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOD_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOD_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOD_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOD_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOD_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOD_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOD_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOD_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOD_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOD_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOD_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOD_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_IDR            					(((GPIO_IDR_TypeDef*)(GPIOD_BASE+GPIO_IDR_OFFSET )))
  #define GPIOD_IDR_R          					(*((__I uint32_t *)(GPIOD_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOD_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_R_IDR0_BIT     		(0)
  #define GPIOD_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOD_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOD_IDR_R_IDR1_BIT     		(1)
  #define GPIOD_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOD_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOD_IDR_R_IDR2_BIT     		(2)
  #define GPIOD_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOD_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOD_IDR_R_IDR3_BIT     		(3)
  #define GPIOD_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOD_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOD_IDR_R_IDR4_BIT     		(4)
  #define GPIOD_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOD_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOD_IDR_R_IDR5_BIT     		(5)
  #define GPIOD_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOD_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOD_IDR_R_IDR6_BIT     		(6)
  #define GPIOD_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOD_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOD_IDR_R_IDR7_BIT     		(7)
  #define GPIOD_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOD_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOD_IDR_R_IDR8_BIT     		(8)
  #define GPIOD_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOD_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOD_IDR_R_IDR9_BIT     		(9)
  #define GPIOD_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOD_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOD_IDR_R_IDR10_BIT     		(10)
  #define GPIOD_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOD_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOD_IDR_R_IDR11_BIT     		(11)
  #define GPIOD_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOD_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOD_IDR_R_IDR12_BIT     		(12)
  #define GPIOD_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOD_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOD_IDR_R_IDR13_BIT     		(13)
  #define GPIOD_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOD_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOD_IDR_R_IDR14_BIT     		(14)
  #define GPIOD_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOD_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOD_IDR_R_IDR15_BIT     		(15)
  #define GPIOD_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOD_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOD_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOD_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOD_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_ODR            					(((GPIO_ODR_TypeDef*)(GPIOD_BASE+GPIO_ODR_OFFSET )))
  #define GPIOD_ODR_R          					(*((__IO uint32_t *)(GPIOD_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOD_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_R_ODR0_BIT     		(0)
  #define GPIOD_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOD_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOD_ODR_R_ODR1_BIT     		(1)
  #define GPIOD_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOD_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOD_ODR_R_ODR2_BIT     		(2)
  #define GPIOD_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOD_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOD_ODR_R_ODR3_BIT     		(3)
  #define GPIOD_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOD_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOD_ODR_R_ODR4_BIT     		(4)
  #define GPIOD_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOD_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOD_ODR_R_ODR5_BIT     		(5)
  #define GPIOD_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOD_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOD_ODR_R_ODR6_BIT     		(6)
  #define GPIOD_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOD_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOD_ODR_R_ODR7_BIT     		(7)
  #define GPIOD_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOD_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOD_ODR_R_ODR8_BIT     		(8)
  #define GPIOD_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOD_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOD_ODR_R_ODR9_BIT     		(9)
  #define GPIOD_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOD_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOD_ODR_R_ODR10_BIT     		(10)
  #define GPIOD_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOD_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOD_ODR_R_ODR11_BIT     		(11)
  #define GPIOD_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOD_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOD_ODR_R_ODR12_BIT     		(12)
  #define GPIOD_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOD_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOD_ODR_R_ODR13_BIT     		(13)
  #define GPIOD_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOD_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOD_ODR_R_ODR14_BIT     		(14)
  #define GPIOD_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOD_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOD_ODR_R_ODR15_BIT     		(15)
  #define GPIOD_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOD_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOD_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOD_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOD_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_SET            					(((GPIO_SET_TypeDef*)(GPIOD_BASE+GPIO_SET_OFFSET )))
  #define GPIOD_SET_R          					(*((__IO uint16_t *)(GPIOD_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOD_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_R_SET0_BIT     		(0)
  #define GPIOD_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOD_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOD_SET_R_SET1_BIT     		(1)
  #define GPIOD_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOD_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOD_SET_R_SET2_BIT     		(2)
  #define GPIOD_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOD_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOD_SET_R_SET3_BIT     		(3)
  #define GPIOD_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOD_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOD_SET_R_SET4_BIT     		(4)
  #define GPIOD_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOD_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOD_SET_R_SET5_BIT     		(5)
  #define GPIOD_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOD_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOD_SET_R_SET6_BIT     		(6)
  #define GPIOD_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOD_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOD_SET_R_SET7_BIT     		(7)
  #define GPIOD_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOD_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOD_SET_R_SET8_BIT     		(8)
  #define GPIOD_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOD_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOD_SET_R_SET9_BIT     		(9)
  #define GPIOD_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOD_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOD_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOD_SET_R_SET10_BIT     		(10)
  #define GPIOD_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOD_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOD_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOD_SET_R_SET11_BIT     		(11)
  #define GPIOD_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOD_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOD_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOD_SET_R_SET12_BIT     		(12)
  #define GPIOD_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOD_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOD_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOD_SET_R_SET13_BIT     		(13)
  #define GPIOD_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOD_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOD_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOD_SET_R_SET14_BIT     		(14)
  #define GPIOD_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOD_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOD_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOD_SET_R_SET15_BIT     		(15)
  #define GPIOD_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOD_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOD_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOD_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOD_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_RESET            					(((GPIO_RESET_TypeDef*)(GPIOD_BASE+GPIO_RESET_OFFSET )))
  #define GPIOD_RESET_R          					(*((__IO uint16_t *)(GPIOD_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOD_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_R_RESET0_BIT     		(0)
  #define GPIOD_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOD_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOD_RESET_R_RESET1_BIT     		(1)
  #define GPIOD_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOD_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOD_RESET_R_RESET2_BIT     		(2)
  #define GPIOD_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOD_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOD_RESET_R_RESET3_BIT     		(3)
  #define GPIOD_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOD_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOD_RESET_R_RESET4_BIT     		(4)
  #define GPIOD_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOD_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOD_RESET_R_RESET5_BIT     		(5)
  #define GPIOD_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOD_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOD_RESET_R_RESET6_BIT     		(6)
  #define GPIOD_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOD_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOD_RESET_R_RESET7_BIT     		(7)
  #define GPIOD_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOD_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOD_RESET_R_RESET8_BIT     		(8)
  #define GPIOD_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOD_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOD_RESET_R_RESET9_BIT     		(9)
  #define GPIOD_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOD_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOD_RESET_R_RESET10_BIT     		(10)
  #define GPIOD_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOD_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOD_RESET_R_RESET11_BIT     		(11)
  #define GPIOD_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOD_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOD_RESET_R_RESET12_BIT     		(12)
  #define GPIOD_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOD_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOD_RESET_R_RESET13_BIT     		(13)
  #define GPIOD_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOD_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOD_RESET_R_RESET14_BIT     		(14)
  #define GPIOD_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOD_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOD_RESET_R_RESET15_BIT     		(15)
  #define GPIOD_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOD_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOD_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOD_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOD_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOD_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOD_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOD_LCKR_R          					(*((__IO uint16_t *)(GPIOD_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOD_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_R_LCK0_BIT     			(0)
  #define GPIOD_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOD_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOD_LCKR_R_LCK1_BIT     			(1)
  #define GPIOD_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOD_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOD_LCKR_R_LCK2_BIT     			(2)
  #define GPIOD_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOD_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOD_LCKR_R_LCK3_BIT     			(3)
  #define GPIOD_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOD_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOD_LCKR_R_LCK4_BIT     			(4)
  #define GPIOD_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOD_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOD_LCKR_R_LCK5_BIT     			(5)
  #define GPIOD_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOD_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOD_LCKR_R_LCK6_BIT     			(6)
  #define GPIOD_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOD_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOD_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOD_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOD_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOD_LCKR_R_LCK8_BIT     			(8)
  #define GPIOD_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOD_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOD_LCKR_R_LCK9_BIT     			(9)
  #define GPIOD_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOD_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOD_LCKR_R_LCK10_BIT     		(10)
  #define GPIOD_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOD_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOD_LCKR_R_LCK11_BIT     		(11)
  #define GPIOD_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOD_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOD_LCKR_R_LCK12_BIT     		(12)
  #define GPIOD_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOD_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOD_LCKR_R_LCK13_BIT     		(13)
  #define GPIOD_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOD_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOD_LCKR_R_LCK14_BIT     		(14)
  #define GPIOD_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOD_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOD_LCKR_R_LCK15_BIT     		(15)
  #define GPIOD_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOD_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOD_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOD_LCKR_R_LCKK_BIT     			(16)
  #define GPIOD_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOD_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOD_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOD_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOD_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOD_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOD_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOD_AFRL_R          		(*((__IO uint32_t *)(GPIOD_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOD_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOD_AFRL_R_AFR0_BIT     			(0)

 #define GPIOD_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOD_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOD_BASE+GPIO_AFRH_OFFSET )))
#define GPIOD_AFRH_R          		(*((__IO uint32_t *)(GPIOD_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOD_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOD_AFRH_R_AFR8_BIT     			(0)

#define GPIOD_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/


 /* TODO GPIOE*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_MODER            					(((GPIO_MODER_TypeDef*)(GPIOE_BASE+GPIO_MODER_OFFSET )))
  #define GPIOE_MODER_R          					(*((__IO uint32_t *)(GPIOE_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOE_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_R_MODER0_BIT     		(0)
  #define GPIOE_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOE_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOE_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOE_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOE_MODER_R_MODER1_BIT     		(2)
  #define GPIOE_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOE_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOE_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOE_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOE_MODER_R_MODER2_BIT     		(4)
  #define GPIOE_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOE_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOE_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOE_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOE_MODER_R_MODER3_BIT     		(6)
  #define GPIOE_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOE_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOE_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOE_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOE_MODER_R_MODER4_BIT     		(8)
  #define GPIOE_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOE_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOE_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOE_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOE_MODER_R_MODER5_BIT     		(10)
  #define GPIOE_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOE_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOE_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOE_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOE_MODER_R_MODER6_BIT     		(12)
  #define GPIOE_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOE_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOE_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOE_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOE_MODER_R_MODER7_BIT     		(14)
  #define GPIOE_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOE_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOE_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOE_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOE_MODER_R_MODER8_BIT     		(16)
  #define GPIOE_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOE_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOE_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOE_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOE_MODER_R_MODER9_BIT     		(18)
  #define GPIOE_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOE_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOE_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOE_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOE_MODER_R_MODER10_BIT     		(20)
  #define GPIOE_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOE_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOE_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOE_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOE_MODER_R_MODER11_BIT     		(22)
  #define GPIOE_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOE_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOE_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOE_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOE_MODER_R_MODER12_BIT     		(24)
  #define GPIOE_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOE_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOE_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOE_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOE_MODER_R_MODER13_BIT     		(26)
  #define GPIOE_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOE_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOE_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOE_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOE_MODER_R_MODER14_BIT     		(28)
  #define GPIOE_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOE_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOE_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOE_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOE_MODER_R_MODER15_BIT     		(30)
  #define GPIOE_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOE_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOE_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOE_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOE_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOE_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOE_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOE_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOE_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOE_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOE_OTYPER_R          					(*((__IO uint32_t *)(GPIOE_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOE_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_OTYPER_R_OT0_BIT     		(0)
  #define GPIOE_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOE_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOE_OTYPER_R_OT1_BIT     		(1)
  #define GPIOE_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOE_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOE_OTYPER_R_OT2_BIT     		(2)
  #define GPIOE_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOE_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOE_OTYPER_R_OT3_BIT     		(3)
  #define GPIOE_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOE_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOE_OTYPER_R_OT4_BIT     		(4)
  #define GPIOE_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOE_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOE_OTYPER_R_OT5_BIT     		(5)
  #define GPIOE_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOE_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOE_OTYPER_R_OT6_BIT     		(6)
  #define GPIOE_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOE_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOE_OTYPER_R_OT7_BIT     		(7)
  #define GPIOE_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOE_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOE_OTYPER_R_OT8_BIT     		(8)
  #define GPIOE_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOE_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOE_OTYPER_R_OT9_BIT     		(9)
  #define GPIOE_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOE_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOE_OTYPER_R_OT10_BIT     		(10)
  #define GPIOE_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOE_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOE_OTYPER_R_OT11_BIT     		(11)
  #define GPIOE_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOE_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOE_OTYPER_R_OT12_BIT     		(12)
  #define GPIOE_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOE_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOE_OTYPER_R_OT13_BIT     		(13)
  #define GPIOE_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOE_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOE_OTYPER_R_OT14_BIT     		(14)
  #define GPIOE_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOE_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOE_OTYPER_R_OT15_BIT     		(15)
  #define GPIOE_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOE_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOE_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOE_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOE_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOE_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOE_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOE_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOE_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOE_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOE_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOE_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOE_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOE_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOE_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOE_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOE_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOE_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOE_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOE_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOE_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOE_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOE_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOE_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOE_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOE_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOE_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOE_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOE_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOE_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOE_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOE_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOE_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOE_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOE_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOE_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOE_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOE_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOE_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOE_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOE_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOE_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOE_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOE_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOE_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOE_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOE_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOE_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOE_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOE_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOE_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOE_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOE_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOE_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOE_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOE_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOE_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOE_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOE_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOE_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOE_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOE_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOE_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOE_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOE_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOE_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOE_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOE_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOE_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOE_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOE_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOE_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOE_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOE_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOE_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOE_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOE_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOE_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOE_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOE_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOE_PUPDR_R          					(*((__IO uint32_t *)(GPIOE_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOE_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOE_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOE_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOE_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOE_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOE_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOE_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOE_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOE_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOE_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOE_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOE_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOE_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOE_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOE_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOE_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOE_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOE_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOE_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOE_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOE_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOE_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOE_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOE_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOE_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOE_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOE_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOE_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOE_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOE_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOE_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOE_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOE_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOE_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOE_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOE_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOE_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOE_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOE_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOE_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOE_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOE_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOE_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOE_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOE_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOE_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOE_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOE_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOE_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOE_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOE_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOE_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOE_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOE_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOE_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOE_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOE_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOE_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOE_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOE_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOE_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOE_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOE_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOE_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOE_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOE_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOE_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_IDR            					(((GPIO_IDR_TypeDef*)(GPIOE_BASE+GPIO_IDR_OFFSET )))
  #define GPIOE_IDR_R          					(*((__I uint32_t *)(GPIOE_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOE_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_R_IDR0_BIT     		(0)
  #define GPIOE_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOE_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOE_IDR_R_IDR1_BIT     		(1)
  #define GPIOE_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOE_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOE_IDR_R_IDR2_BIT     		(2)
  #define GPIOE_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOE_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOE_IDR_R_IDR3_BIT     		(3)
  #define GPIOE_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOE_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOE_IDR_R_IDR4_BIT     		(4)
  #define GPIOE_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOE_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOE_IDR_R_IDR5_BIT     		(5)
  #define GPIOE_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOE_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOE_IDR_R_IDR6_BIT     		(6)
  #define GPIOE_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOE_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOE_IDR_R_IDR7_BIT     		(7)
  #define GPIOE_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOE_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOE_IDR_R_IDR8_BIT     		(8)
  #define GPIOE_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOE_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOE_IDR_R_IDR9_BIT     		(9)
  #define GPIOE_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOE_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOE_IDR_R_IDR10_BIT     		(10)
  #define GPIOE_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOE_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOE_IDR_R_IDR11_BIT     		(11)
  #define GPIOE_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOE_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOE_IDR_R_IDR12_BIT     		(12)
  #define GPIOE_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOE_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOE_IDR_R_IDR13_BIT     		(13)
  #define GPIOE_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOE_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOE_IDR_R_IDR14_BIT     		(14)
  #define GPIOE_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOE_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOE_IDR_R_IDR15_BIT     		(15)
  #define GPIOE_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOE_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOE_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOE_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOE_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_ODR            					(((GPIO_ODR_TypeDef*)(GPIOE_BASE+GPIO_ODR_OFFSET )))
  #define GPIOE_ODR_R          					(*((__IO uint32_t *)(GPIOE_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOE_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_R_ODR0_BIT     		(0)
  #define GPIOE_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOE_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOE_ODR_R_ODR1_BIT     		(1)
  #define GPIOE_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOE_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOE_ODR_R_ODR2_BIT     		(2)
  #define GPIOE_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOE_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOE_ODR_R_ODR3_BIT     		(3)
  #define GPIOE_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOE_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOE_ODR_R_ODR4_BIT     		(4)
  #define GPIOE_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOE_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOE_ODR_R_ODR5_BIT     		(5)
  #define GPIOE_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOE_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOE_ODR_R_ODR6_BIT     		(6)
  #define GPIOE_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOE_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOE_ODR_R_ODR7_BIT     		(7)
  #define GPIOE_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOE_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOE_ODR_R_ODR8_BIT     		(8)
  #define GPIOE_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOE_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOE_ODR_R_ODR9_BIT     		(9)
  #define GPIOE_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOE_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOE_ODR_R_ODR10_BIT     		(10)
  #define GPIOE_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOE_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOE_ODR_R_ODR11_BIT     		(11)
  #define GPIOE_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOE_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOE_ODR_R_ODR12_BIT     		(12)
  #define GPIOE_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOE_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOE_ODR_R_ODR13_BIT     		(13)
  #define GPIOE_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOE_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOE_ODR_R_ODR14_BIT     		(14)
  #define GPIOE_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOE_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOE_ODR_R_ODR15_BIT     		(15)
  #define GPIOE_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOE_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOE_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOE_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOE_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_SET            					(((GPIO_SET_TypeDef*)(GPIOE_BASE+GPIO_SET_OFFSET )))
  #define GPIOE_SET_R          					(*((__IO uint16_t *)(GPIOE_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOE_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_R_SET0_BIT     		(0)
  #define GPIOE_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOE_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOE_SET_R_SET1_BIT     		(1)
  #define GPIOE_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOE_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOE_SET_R_SET2_BIT     		(2)
  #define GPIOE_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOE_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOE_SET_R_SET3_BIT     		(3)
  #define GPIOE_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOE_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOE_SET_R_SET4_BIT     		(4)
  #define GPIOE_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOE_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOE_SET_R_SET5_BIT     		(5)
  #define GPIOE_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOE_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOE_SET_R_SET6_BIT     		(6)
  #define GPIOE_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOE_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOE_SET_R_SET7_BIT     		(7)
  #define GPIOE_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOE_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOE_SET_R_SET8_BIT     		(8)
  #define GPIOE_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOE_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOE_SET_R_SET9_BIT     		(9)
  #define GPIOE_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOE_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOE_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOE_SET_R_SET10_BIT     		(10)
  #define GPIOE_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOE_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOE_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOE_SET_R_SET11_BIT     		(11)
  #define GPIOE_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOE_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOE_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOE_SET_R_SET12_BIT     		(12)
  #define GPIOE_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOE_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOE_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOE_SET_R_SET13_BIT     		(13)
  #define GPIOE_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOE_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOE_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOE_SET_R_SET14_BIT     		(14)
  #define GPIOE_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOE_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOE_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOE_SET_R_SET15_BIT     		(15)
  #define GPIOE_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOE_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOE_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOE_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOE_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_RESET            					(((GPIO_RESET_TypeDef*)(GPIOE_BASE+GPIO_RESET_OFFSET )))
  #define GPIOE_RESET_R          					(*((__IO uint16_t *)(GPIOE_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOE_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_R_RESET0_BIT     		(0)
  #define GPIOE_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOE_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOE_RESET_R_RESET1_BIT     		(1)
  #define GPIOE_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOE_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOE_RESET_R_RESET2_BIT     		(2)
  #define GPIOE_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOE_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOE_RESET_R_RESET3_BIT     		(3)
  #define GPIOE_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOE_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOE_RESET_R_RESET4_BIT     		(4)
  #define GPIOE_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOE_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOE_RESET_R_RESET5_BIT     		(5)
  #define GPIOE_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOE_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOE_RESET_R_RESET6_BIT     		(6)
  #define GPIOE_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOE_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOE_RESET_R_RESET7_BIT     		(7)
  #define GPIOE_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOE_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOE_RESET_R_RESET8_BIT     		(8)
  #define GPIOE_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOE_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOE_RESET_R_RESET9_BIT     		(9)
  #define GPIOE_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOE_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOE_RESET_R_RESET10_BIT     		(10)
  #define GPIOE_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOE_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOE_RESET_R_RESET11_BIT     		(11)
  #define GPIOE_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOE_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOE_RESET_R_RESET12_BIT     		(12)
  #define GPIOE_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOE_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOE_RESET_R_RESET13_BIT     		(13)
  #define GPIOE_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOE_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOE_RESET_R_RESET14_BIT     		(14)
  #define GPIOE_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOE_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOE_RESET_R_RESET15_BIT     		(15)
  #define GPIOE_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOE_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOE_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOE_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOE_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOE_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOE_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOE_LCKR_R          					(*((__IO uint16_t *)(GPIOE_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOE_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_R_LCK0_BIT     			(0)
  #define GPIOE_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOE_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOE_LCKR_R_LCK1_BIT     			(1)
  #define GPIOE_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOE_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOE_LCKR_R_LCK2_BIT     			(2)
  #define GPIOE_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOE_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOE_LCKR_R_LCK3_BIT     			(3)
  #define GPIOE_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOE_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOE_LCKR_R_LCK4_BIT     			(4)
  #define GPIOE_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOE_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOE_LCKR_R_LCK5_BIT     			(5)
  #define GPIOE_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOE_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOE_LCKR_R_LCK6_BIT     			(6)
  #define GPIOE_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOE_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOE_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOE_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOE_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOE_LCKR_R_LCK8_BIT     			(8)
  #define GPIOE_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOE_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOE_LCKR_R_LCK9_BIT     			(9)
  #define GPIOE_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOE_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOE_LCKR_R_LCK10_BIT     		(10)
  #define GPIOE_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOE_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOE_LCKR_R_LCK11_BIT     		(11)
  #define GPIOE_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOE_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOE_LCKR_R_LCK12_BIT     		(12)
  #define GPIOE_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOE_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOE_LCKR_R_LCK13_BIT     		(13)
  #define GPIOE_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOE_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOE_LCKR_R_LCK14_BIT     		(14)
  #define GPIOE_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOE_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOE_LCKR_R_LCK15_BIT     		(15)
  #define GPIOE_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOE_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOE_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOE_LCKR_R_LCKK_BIT     			(16)
  #define GPIOE_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOE_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOE_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOE_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOE_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOE_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOE_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOE_AFRL_R          		(*((__IO uint32_t *)(GPIOE_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOE_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOE_AFRL_R_AFR0_BIT     			(0)

 #define GPIOE_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOE_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOE_BASE+GPIO_AFRH_OFFSET )))
#define GPIOE_AFRH_R          		(*((__IO uint32_t *)(GPIOE_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOE_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOE_AFRH_R_AFR8_BIT     			(0)

#define GPIOE_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/



 /* TODO GPIOF*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_MODER            					(((GPIO_MODER_TypeDef*)(GPIOF_BASE+GPIO_MODER_OFFSET )))
  #define GPIOF_MODER_R          					(*((__IO uint32_t *)(GPIOF_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOF_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_R_MODER0_BIT     		(0)
  #define GPIOF_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOF_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOF_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOF_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOF_MODER_R_MODER1_BIT     		(2)
  #define GPIOF_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOF_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOF_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOF_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOF_MODER_R_MODER2_BIT     		(4)
  #define GPIOF_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOF_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOF_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOF_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOF_MODER_R_MODER3_BIT     		(6)
  #define GPIOF_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOF_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOF_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOF_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOF_MODER_R_MODER4_BIT     		(8)
  #define GPIOF_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOF_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOF_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOF_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOF_MODER_R_MODER5_BIT     		(10)
  #define GPIOF_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOF_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOF_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOF_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOF_MODER_R_MODER6_BIT     		(12)
  #define GPIOF_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOF_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOF_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOF_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOF_MODER_R_MODER7_BIT     		(14)
  #define GPIOF_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOF_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOF_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOF_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOF_MODER_R_MODER8_BIT     		(16)
  #define GPIOF_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOF_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOF_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOF_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOF_MODER_R_MODER9_BIT     		(18)
  #define GPIOF_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOF_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOF_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOF_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOF_MODER_R_MODER10_BIT     		(20)
  #define GPIOF_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOF_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOF_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOF_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOF_MODER_R_MODER11_BIT     		(22)
  #define GPIOF_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOF_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOF_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOF_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOF_MODER_R_MODER12_BIT     		(24)
  #define GPIOF_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOF_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOF_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOF_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOF_MODER_R_MODER13_BIT     		(26)
  #define GPIOF_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOF_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOF_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOF_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOF_MODER_R_MODER14_BIT     		(28)
  #define GPIOF_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOF_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOF_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOF_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOF_MODER_R_MODER15_BIT     		(30)
  #define GPIOF_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOF_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOF_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOF_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOF_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOF_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOF_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOF_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOF_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOF_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOF_OTYPER_R          					(*((__IO uint32_t *)(GPIOF_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOF_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_OTYPER_R_OT0_BIT     		(0)
  #define GPIOF_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOF_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOF_OTYPER_R_OT1_BIT     		(1)
  #define GPIOF_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOF_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOF_OTYPER_R_OT2_BIT     		(2)
  #define GPIOF_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOF_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOF_OTYPER_R_OT3_BIT     		(3)
  #define GPIOF_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOF_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOF_OTYPER_R_OT4_BIT     		(4)
  #define GPIOF_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOF_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOF_OTYPER_R_OT5_BIT     		(5)
  #define GPIOF_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOF_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOF_OTYPER_R_OT6_BIT     		(6)
  #define GPIOF_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOF_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOF_OTYPER_R_OT7_BIT     		(7)
  #define GPIOF_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOF_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOF_OTYPER_R_OT8_BIT     		(8)
  #define GPIOF_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOF_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOF_OTYPER_R_OT9_BIT     		(9)
  #define GPIOF_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOF_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOF_OTYPER_R_OT10_BIT     		(10)
  #define GPIOF_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOF_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOF_OTYPER_R_OT11_BIT     		(11)
  #define GPIOF_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOF_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOF_OTYPER_R_OT12_BIT     		(12)
  #define GPIOF_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOF_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOF_OTYPER_R_OT13_BIT     		(13)
  #define GPIOF_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOF_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOF_OTYPER_R_OT14_BIT     		(14)
  #define GPIOF_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOF_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOF_OTYPER_R_OT15_BIT     		(15)
  #define GPIOF_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOF_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOF_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOF_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOF_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOF_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOF_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOF_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOF_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOF_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOF_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOF_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOF_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOF_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOF_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOF_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOF_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOF_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOF_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOF_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOF_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOF_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOF_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOF_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOF_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOF_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOF_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOF_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOF_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOF_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOF_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOF_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOF_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOF_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOF_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOF_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOF_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOF_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOF_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOF_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOF_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOF_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOF_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOF_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOF_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOF_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOF_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOF_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOF_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOF_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOF_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOF_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOF_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOF_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOF_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOF_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOF_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOF_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOF_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOF_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOF_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOF_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOF_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOF_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOF_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOF_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOF_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOF_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOF_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOF_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOF_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOF_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOF_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOF_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOF_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOF_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOF_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOF_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOF_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOF_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOF_PUPDR_R          					(*((__IO uint32_t *)(GPIOF_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOF_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOF_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOF_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOF_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOF_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOF_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOF_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOF_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOF_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOF_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOF_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOF_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOF_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOF_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOF_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOF_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOF_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOF_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOF_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOF_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOF_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOF_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOF_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOF_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOF_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOF_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOF_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOF_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOF_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOF_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOF_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOF_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOF_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOF_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOF_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOF_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOF_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOF_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOF_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOF_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOF_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOF_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOF_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOF_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOF_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOF_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOF_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOF_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOF_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOF_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOF_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOF_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOF_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOF_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOF_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOF_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOF_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOF_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOF_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOF_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOF_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOF_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOF_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOF_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOF_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOF_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOF_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_IDR            					(((GPIO_IDR_TypeDef*)(GPIOF_BASE+GPIO_IDR_OFFSET )))
  #define GPIOF_IDR_R          					(*((__I uint32_t *)(GPIOF_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOF_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_R_IDR0_BIT     		(0)
  #define GPIOF_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOF_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOF_IDR_R_IDR1_BIT     		(1)
  #define GPIOF_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOF_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOF_IDR_R_IDR2_BIT     		(2)
  #define GPIOF_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOF_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOF_IDR_R_IDR3_BIT     		(3)
  #define GPIOF_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOF_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOF_IDR_R_IDR4_BIT     		(4)
  #define GPIOF_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOF_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOF_IDR_R_IDR5_BIT     		(5)
  #define GPIOF_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOF_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOF_IDR_R_IDR6_BIT     		(6)
  #define GPIOF_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOF_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOF_IDR_R_IDR7_BIT     		(7)
  #define GPIOF_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOF_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOF_IDR_R_IDR8_BIT     		(8)
  #define GPIOF_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOF_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOF_IDR_R_IDR9_BIT     		(9)
  #define GPIOF_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOF_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOF_IDR_R_IDR10_BIT     		(10)
  #define GPIOF_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOF_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOF_IDR_R_IDR11_BIT     		(11)
  #define GPIOF_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOF_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOF_IDR_R_IDR12_BIT     		(12)
  #define GPIOF_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOF_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOF_IDR_R_IDR13_BIT     		(13)
  #define GPIOF_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOF_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOF_IDR_R_IDR14_BIT     		(14)
  #define GPIOF_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOF_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOF_IDR_R_IDR15_BIT     		(15)
  #define GPIOF_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOF_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOF_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOF_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOF_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_ODR            					(((GPIO_ODR_TypeDef*)(GPIOF_BASE+GPIO_ODR_OFFSET )))
  #define GPIOF_ODR_R          					(*((__IO uint32_t *)(GPIOF_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOF_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_R_ODR0_BIT     		(0)
  #define GPIOF_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOF_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOF_ODR_R_ODR1_BIT     		(1)
  #define GPIOF_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOF_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOF_ODR_R_ODR2_BIT     		(2)
  #define GPIOF_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOF_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOF_ODR_R_ODR3_BIT     		(3)
  #define GPIOF_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOF_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOF_ODR_R_ODR4_BIT     		(4)
  #define GPIOF_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOF_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOF_ODR_R_ODR5_BIT     		(5)
  #define GPIOF_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOF_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOF_ODR_R_ODR6_BIT     		(6)
  #define GPIOF_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOF_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOF_ODR_R_ODR7_BIT     		(7)
  #define GPIOF_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOF_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOF_ODR_R_ODR8_BIT     		(8)
  #define GPIOF_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOF_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOF_ODR_R_ODR9_BIT     		(9)
  #define GPIOF_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOF_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOF_ODR_R_ODR10_BIT     		(10)
  #define GPIOF_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOF_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOF_ODR_R_ODR11_BIT     		(11)
  #define GPIOF_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOF_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOF_ODR_R_ODR12_BIT     		(12)
  #define GPIOF_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOF_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOF_ODR_R_ODR13_BIT     		(13)
  #define GPIOF_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOF_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOF_ODR_R_ODR14_BIT     		(14)
  #define GPIOF_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOF_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOF_ODR_R_ODR15_BIT     		(15)
  #define GPIOF_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOF_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOF_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOF_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOF_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_SET            					(((GPIO_SET_TypeDef*)(GPIOF_BASE+GPIO_SET_OFFSET )))
  #define GPIOF_SET_R          					(*((__IO uint16_t *)(GPIOF_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOF_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_R_SET0_BIT     		(0)
  #define GPIOF_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOF_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOF_SET_R_SET1_BIT     		(1)
  #define GPIOF_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOF_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOF_SET_R_SET2_BIT     		(2)
  #define GPIOF_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOF_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOF_SET_R_SET3_BIT     		(3)
  #define GPIOF_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOF_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOF_SET_R_SET4_BIT     		(4)
  #define GPIOF_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOF_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOF_SET_R_SET5_BIT     		(5)
  #define GPIOF_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOF_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOF_SET_R_SET6_BIT     		(6)
  #define GPIOF_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOF_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOF_SET_R_SET7_BIT     		(7)
  #define GPIOF_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOF_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOF_SET_R_SET8_BIT     		(8)
  #define GPIOF_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOF_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOF_SET_R_SET9_BIT     		(9)
  #define GPIOF_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOF_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOF_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOF_SET_R_SET10_BIT     		(10)
  #define GPIOF_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOF_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOF_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOF_SET_R_SET11_BIT     		(11)
  #define GPIOF_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOF_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOF_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOF_SET_R_SET12_BIT     		(12)
  #define GPIOF_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOF_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOF_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOF_SET_R_SET13_BIT     		(13)
  #define GPIOF_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOF_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOF_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOF_SET_R_SET14_BIT     		(14)
  #define GPIOF_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOF_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOF_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOF_SET_R_SET15_BIT     		(15)
  #define GPIOF_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOF_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOF_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOF_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOF_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_RESET            					(((GPIO_RESET_TypeDef*)(GPIOF_BASE+GPIO_RESET_OFFSET )))
  #define GPIOF_RESET_R          					(*((__IO uint16_t *)(GPIOF_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOF_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_R_RESET0_BIT     		(0)
  #define GPIOF_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOF_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOF_RESET_R_RESET1_BIT     		(1)
  #define GPIOF_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOF_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOF_RESET_R_RESET2_BIT     		(2)
  #define GPIOF_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOF_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOF_RESET_R_RESET3_BIT     		(3)
  #define GPIOF_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOF_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOF_RESET_R_RESET4_BIT     		(4)
  #define GPIOF_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOF_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOF_RESET_R_RESET5_BIT     		(5)
  #define GPIOF_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOF_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOF_RESET_R_RESET6_BIT     		(6)
  #define GPIOF_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOF_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOF_RESET_R_RESET7_BIT     		(7)
  #define GPIOF_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOF_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOF_RESET_R_RESET8_BIT     		(8)
  #define GPIOF_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOF_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOF_RESET_R_RESET9_BIT     		(9)
  #define GPIOF_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOF_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOF_RESET_R_RESET10_BIT     		(10)
  #define GPIOF_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOF_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOF_RESET_R_RESET11_BIT     		(11)
  #define GPIOF_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOF_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOF_RESET_R_RESET12_BIT     		(12)
  #define GPIOF_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOF_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOF_RESET_R_RESET13_BIT     		(13)
  #define GPIOF_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOF_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOF_RESET_R_RESET14_BIT     		(14)
  #define GPIOF_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOF_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOF_RESET_R_RESET15_BIT     		(15)
  #define GPIOF_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOF_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOF_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOF_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOF_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOF_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOF_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOF_LCKR_R          					(*((__IO uint16_t *)(GPIOF_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOF_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_R_LCK0_BIT     			(0)
  #define GPIOF_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOF_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOF_LCKR_R_LCK1_BIT     			(1)
  #define GPIOF_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOF_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOF_LCKR_R_LCK2_BIT     			(2)
  #define GPIOF_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOF_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOF_LCKR_R_LCK3_BIT     			(3)
  #define GPIOF_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOF_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOF_LCKR_R_LCK4_BIT     			(4)
  #define GPIOF_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOF_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOF_LCKR_R_LCK5_BIT     			(5)
  #define GPIOF_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOF_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOF_LCKR_R_LCK6_BIT     			(6)
  #define GPIOF_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOF_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOF_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOF_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOF_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOF_LCKR_R_LCK8_BIT     			(8)
  #define GPIOF_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOF_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOF_LCKR_R_LCK9_BIT     			(9)
  #define GPIOF_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOF_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOF_LCKR_R_LCK10_BIT     		(10)
  #define GPIOF_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOF_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOF_LCKR_R_LCK11_BIT     		(11)
  #define GPIOF_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOF_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOF_LCKR_R_LCK12_BIT     		(12)
  #define GPIOF_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOF_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOF_LCKR_R_LCK13_BIT     		(13)
  #define GPIOF_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOF_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOF_LCKR_R_LCK14_BIT     		(14)
  #define GPIOF_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOF_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOF_LCKR_R_LCK15_BIT     		(15)
  #define GPIOF_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOF_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOF_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOF_LCKR_R_LCKK_BIT     			(16)
  #define GPIOF_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOF_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOF_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOF_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOF_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOF_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOF_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOF_AFRL_R          		(*((__IO uint32_t *)(GPIOF_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOF_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOF_AFRL_R_AFR0_BIT     			(0)

 #define GPIOF_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOF_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOF_BASE+GPIO_AFRH_OFFSET )))
#define GPIOF_AFRH_R          		(*((__IO uint32_t *)(GPIOF_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOF_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOF_AFRH_R_AFR8_BIT     			(0)

#define GPIOF_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/




 /* TODO GPIOG*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_MODER            					(((GPIO_MODER_TypeDef*)(GPIOG_BASE+GPIO_MODER_OFFSET )))
  #define GPIOG_MODER_R          					(*((__IO uint32_t *)(GPIOG_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOG_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_R_MODER0_BIT     		(0)
  #define GPIOG_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOG_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOG_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOG_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOG_MODER_R_MODER1_BIT     		(2)
  #define GPIOG_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOG_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOG_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOG_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOG_MODER_R_MODER2_BIT     		(4)
  #define GPIOG_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOG_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOG_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOG_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOG_MODER_R_MODER3_BIT     		(6)
  #define GPIOG_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOG_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOG_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOG_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOG_MODER_R_MODER4_BIT     		(8)
  #define GPIOG_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOG_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOG_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOG_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOG_MODER_R_MODER5_BIT     		(10)
  #define GPIOG_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOG_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOG_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOG_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOG_MODER_R_MODER6_BIT     		(12)
  #define GPIOG_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOG_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOG_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOG_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOG_MODER_R_MODER7_BIT     		(14)
  #define GPIOG_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOG_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOG_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOG_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOG_MODER_R_MODER8_BIT     		(16)
  #define GPIOG_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOG_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOG_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOG_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOG_MODER_R_MODER9_BIT     		(18)
  #define GPIOG_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOG_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOG_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOG_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOG_MODER_R_MODER10_BIT     		(20)
  #define GPIOG_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOG_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOG_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOG_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOG_MODER_R_MODER11_BIT     		(22)
  #define GPIOG_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOG_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOG_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOG_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOG_MODER_R_MODER12_BIT     		(24)
  #define GPIOG_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOG_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOG_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOG_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOG_MODER_R_MODER13_BIT     		(26)
  #define GPIOG_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOG_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOG_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOG_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOG_MODER_R_MODER14_BIT     		(28)
  #define GPIOG_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOG_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOG_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOG_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOG_MODER_R_MODER15_BIT     		(30)
  #define GPIOG_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOG_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOG_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOG_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOG_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOG_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOG_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOG_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOG_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOG_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOG_OTYPER_R          					(*((__IO uint32_t *)(GPIOG_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOG_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_OTYPER_R_OT0_BIT     		(0)
  #define GPIOG_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOG_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOG_OTYPER_R_OT1_BIT     		(1)
  #define GPIOG_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOG_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOG_OTYPER_R_OT2_BIT     		(2)
  #define GPIOG_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOG_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOG_OTYPER_R_OT3_BIT     		(3)
  #define GPIOG_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOG_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOG_OTYPER_R_OT4_BIT     		(4)
  #define GPIOG_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOG_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOG_OTYPER_R_OT5_BIT     		(5)
  #define GPIOG_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOG_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOG_OTYPER_R_OT6_BIT     		(6)
  #define GPIOG_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOG_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOG_OTYPER_R_OT7_BIT     		(7)
  #define GPIOG_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOG_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOG_OTYPER_R_OT8_BIT     		(8)
  #define GPIOG_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOG_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOG_OTYPER_R_OT9_BIT     		(9)
  #define GPIOG_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOG_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOG_OTYPER_R_OT10_BIT     		(10)
  #define GPIOG_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOG_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOG_OTYPER_R_OT11_BIT     		(11)
  #define GPIOG_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOG_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOG_OTYPER_R_OT12_BIT     		(12)
  #define GPIOG_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOG_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOG_OTYPER_R_OT13_BIT     		(13)
  #define GPIOG_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOG_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOG_OTYPER_R_OT14_BIT     		(14)
  #define GPIOG_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOG_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOG_OTYPER_R_OT15_BIT     		(15)
  #define GPIOG_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOG_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOG_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOG_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOG_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOG_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOG_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOG_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOG_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOG_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOG_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOG_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOG_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOG_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOG_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOG_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOG_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOG_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOG_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOG_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOG_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOG_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOG_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOG_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOG_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOG_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOG_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOG_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOG_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOG_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOG_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOG_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOG_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOG_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOG_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOG_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOG_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOG_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOG_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOG_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOG_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOG_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOG_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOG_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOG_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOG_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOG_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOG_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOG_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOG_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOG_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOG_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOG_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOG_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOG_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOG_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOG_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOG_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOG_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOG_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOG_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOG_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOG_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOG_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOG_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOG_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOG_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOG_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOG_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOG_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOG_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOG_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOG_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOG_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOG_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOG_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOG_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOG_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOG_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOG_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOG_PUPDR_R          					(*((__IO uint32_t *)(GPIOG_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOG_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOG_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOG_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOG_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOG_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOG_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOG_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOG_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOG_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOG_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOG_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOG_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOG_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOG_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOG_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOG_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOG_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOG_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOG_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOG_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOG_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOG_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOG_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOG_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOG_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOG_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOG_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOG_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOG_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOG_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOG_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOG_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOG_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOG_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOG_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOG_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOG_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOG_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOG_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOG_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOG_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOG_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOG_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOG_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOG_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOG_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOG_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOG_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOG_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOG_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOG_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOG_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOG_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOG_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOG_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOG_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOG_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOG_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOG_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOG_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOG_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOG_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOG_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOG_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOG_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOG_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOG_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_IDR            					(((GPIO_IDR_TypeDef*)(GPIOG_BASE+GPIO_IDR_OFFSET )))
  #define GPIOG_IDR_R          					(*((__I uint32_t *)(GPIOG_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOG_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_R_IDR0_BIT     		(0)
  #define GPIOG_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOG_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOG_IDR_R_IDR1_BIT     		(1)
  #define GPIOG_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOG_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOG_IDR_R_IDR2_BIT     		(2)
  #define GPIOG_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOG_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOG_IDR_R_IDR3_BIT     		(3)
  #define GPIOG_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOG_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOG_IDR_R_IDR4_BIT     		(4)
  #define GPIOG_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOG_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOG_IDR_R_IDR5_BIT     		(5)
  #define GPIOG_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOG_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOG_IDR_R_IDR6_BIT     		(6)
  #define GPIOG_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOG_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOG_IDR_R_IDR7_BIT     		(7)
  #define GPIOG_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOG_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOG_IDR_R_IDR8_BIT     		(8)
  #define GPIOG_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOG_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOG_IDR_R_IDR9_BIT     		(9)
  #define GPIOG_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOG_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOG_IDR_R_IDR10_BIT     		(10)
  #define GPIOG_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOG_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOG_IDR_R_IDR11_BIT     		(11)
  #define GPIOG_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOG_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOG_IDR_R_IDR12_BIT     		(12)
  #define GPIOG_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOG_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOG_IDR_R_IDR13_BIT     		(13)
  #define GPIOG_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOG_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOG_IDR_R_IDR14_BIT     		(14)
  #define GPIOG_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOG_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOG_IDR_R_IDR15_BIT     		(15)
  #define GPIOG_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOG_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOG_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOG_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOG_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_ODR            					(((GPIO_ODR_TypeDef*)(GPIOG_BASE+GPIO_ODR_OFFSET )))
  #define GPIOG_ODR_R          					(*((__IO uint32_t *)(GPIOG_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOG_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_R_ODR0_BIT     		(0)
  #define GPIOG_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOG_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOG_ODR_R_ODR1_BIT     		(1)
  #define GPIOG_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOG_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOG_ODR_R_ODR2_BIT     		(2)
  #define GPIOG_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOG_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOG_ODR_R_ODR3_BIT     		(3)
  #define GPIOG_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOG_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOG_ODR_R_ODR4_BIT     		(4)
  #define GPIOG_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOG_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOG_ODR_R_ODR5_BIT     		(5)
  #define GPIOG_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOG_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOG_ODR_R_ODR6_BIT     		(6)
  #define GPIOG_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOG_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOG_ODR_R_ODR7_BIT     		(7)
  #define GPIOG_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOG_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOG_ODR_R_ODR8_BIT     		(8)
  #define GPIOG_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOG_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOG_ODR_R_ODR9_BIT     		(9)
  #define GPIOG_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOG_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOG_ODR_R_ODR10_BIT     		(10)
  #define GPIOG_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOG_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOG_ODR_R_ODR11_BIT     		(11)
  #define GPIOG_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOG_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOG_ODR_R_ODR12_BIT     		(12)
  #define GPIOG_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOG_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOG_ODR_R_ODR13_BIT     		(13)
  #define GPIOG_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOG_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOG_ODR_R_ODR14_BIT     		(14)
  #define GPIOG_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOG_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOG_ODR_R_ODR15_BIT     		(15)
  #define GPIOG_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOG_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOG_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOG_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOG_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_SET            					(((GPIO_SET_TypeDef*)(GPIOG_BASE+GPIO_SET_OFFSET )))
  #define GPIOG_SET_R          					(*((__IO uint16_t *)(GPIOG_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOG_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_R_SET0_BIT     		(0)
  #define GPIOG_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOG_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOG_SET_R_SET1_BIT     		(1)
  #define GPIOG_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOG_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOG_SET_R_SET2_BIT     		(2)
  #define GPIOG_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOG_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOG_SET_R_SET3_BIT     		(3)
  #define GPIOG_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOG_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOG_SET_R_SET4_BIT     		(4)
  #define GPIOG_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOG_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOG_SET_R_SET5_BIT     		(5)
  #define GPIOG_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOG_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOG_SET_R_SET6_BIT     		(6)
  #define GPIOG_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOG_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOG_SET_R_SET7_BIT     		(7)
  #define GPIOG_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOG_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOG_SET_R_SET8_BIT     		(8)
  #define GPIOG_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOG_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOG_SET_R_SET9_BIT     		(9)
  #define GPIOG_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOG_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOG_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOG_SET_R_SET10_BIT     		(10)
  #define GPIOG_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOG_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOG_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOG_SET_R_SET11_BIT     		(11)
  #define GPIOG_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOG_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOG_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOG_SET_R_SET12_BIT     		(12)
  #define GPIOG_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOG_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOG_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOG_SET_R_SET13_BIT     		(13)
  #define GPIOG_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOG_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOG_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOG_SET_R_SET14_BIT     		(14)
  #define GPIOG_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOG_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOG_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOG_SET_R_SET15_BIT     		(15)
  #define GPIOG_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOG_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOG_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOG_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOG_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_RESET            					(((GPIO_RESET_TypeDef*)(GPIOG_BASE+GPIO_RESET_OFFSET )))
  #define GPIOG_RESET_R          					(*((__IO uint16_t *)(GPIOG_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOG_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_R_RESET0_BIT     		(0)
  #define GPIOG_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOG_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOG_RESET_R_RESET1_BIT     		(1)
  #define GPIOG_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOG_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOG_RESET_R_RESET2_BIT     		(2)
  #define GPIOG_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOG_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOG_RESET_R_RESET3_BIT     		(3)
  #define GPIOG_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOG_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOG_RESET_R_RESET4_BIT     		(4)
  #define GPIOG_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOG_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOG_RESET_R_RESET5_BIT     		(5)
  #define GPIOG_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOG_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOG_RESET_R_RESET6_BIT     		(6)
  #define GPIOG_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOG_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOG_RESET_R_RESET7_BIT     		(7)
  #define GPIOG_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOG_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOG_RESET_R_RESET8_BIT     		(8)
  #define GPIOG_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOG_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOG_RESET_R_RESET9_BIT     		(9)
  #define GPIOG_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOG_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOG_RESET_R_RESET10_BIT     		(10)
  #define GPIOG_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOG_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOG_RESET_R_RESET11_BIT     		(11)
  #define GPIOG_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOG_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOG_RESET_R_RESET12_BIT     		(12)
  #define GPIOG_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOG_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOG_RESET_R_RESET13_BIT     		(13)
  #define GPIOG_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOG_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOG_RESET_R_RESET14_BIT     		(14)
  #define GPIOG_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOG_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOG_RESET_R_RESET15_BIT     		(15)
  #define GPIOG_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOG_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOG_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOG_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOG_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOG_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOG_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOG_LCKR_R          					(*((__IO uint16_t *)(GPIOG_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOG_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_R_LCK0_BIT     			(0)
  #define GPIOG_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOG_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOG_LCKR_R_LCK1_BIT     			(1)
  #define GPIOG_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOG_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOG_LCKR_R_LCK2_BIT     			(2)
  #define GPIOG_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOG_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOG_LCKR_R_LCK3_BIT     			(3)
  #define GPIOG_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOG_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOG_LCKR_R_LCK4_BIT     			(4)
  #define GPIOG_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOG_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOG_LCKR_R_LCK5_BIT     			(5)
  #define GPIOG_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOG_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOG_LCKR_R_LCK6_BIT     			(6)
  #define GPIOG_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOG_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOG_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOG_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOG_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOG_LCKR_R_LCK8_BIT     			(8)
  #define GPIOG_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOG_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOG_LCKR_R_LCK9_BIT     			(9)
  #define GPIOG_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOG_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOG_LCKR_R_LCK10_BIT     		(10)
  #define GPIOG_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOG_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOG_LCKR_R_LCK11_BIT     		(11)
  #define GPIOG_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOG_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOG_LCKR_R_LCK12_BIT     		(12)
  #define GPIOG_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOG_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOG_LCKR_R_LCK13_BIT     		(13)
  #define GPIOG_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOG_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOG_LCKR_R_LCK14_BIT     		(14)
  #define GPIOG_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOG_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOG_LCKR_R_LCK15_BIT     		(15)
  #define GPIOG_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOG_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOG_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOG_LCKR_R_LCKK_BIT     			(16)
  #define GPIOG_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOG_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOG_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOG_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOG_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOG_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOG_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOG_AFRL_R          		(*((__IO uint32_t *)(GPIOG_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOG_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOG_AFRL_R_AFR0_BIT     			(0)

 #define GPIOG_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOG_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOG_BASE+GPIO_AFRH_OFFSET )))
#define GPIOG_AFRH_R          		(*((__IO uint32_t *)(GPIOG_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOG_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOG_AFRH_R_AFR8_BIT     			(0)

#define GPIOG_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/


 /* TODO GPIOH*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_MODER            					(((GPIO_MODER_TypeDef*)(GPIOH_BASE+GPIO_MODER_OFFSET )))
  #define GPIOH_MODER_R          					(*((__IO uint32_t *)(GPIOH_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOH_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_R_MODER0_BIT     		(0)
  #define GPIOH_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOH_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOH_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOH_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOH_MODER_R_MODER1_BIT     		(2)
  #define GPIOH_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOH_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOH_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOH_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOH_MODER_R_MODER2_BIT     		(4)
  #define GPIOH_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOH_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOH_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOH_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOH_MODER_R_MODER3_BIT     		(6)
  #define GPIOH_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOH_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOH_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOH_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOH_MODER_R_MODER4_BIT     		(8)
  #define GPIOH_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOH_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOH_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOH_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOH_MODER_R_MODER5_BIT     		(10)
  #define GPIOH_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOH_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOH_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOH_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOH_MODER_R_MODER6_BIT     		(12)
  #define GPIOH_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOH_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOH_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOH_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOH_MODER_R_MODER7_BIT     		(14)
  #define GPIOH_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOH_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOH_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOH_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOH_MODER_R_MODER8_BIT     		(16)
  #define GPIOH_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOH_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOH_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOH_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOH_MODER_R_MODER9_BIT     		(18)
  #define GPIOH_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOH_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOH_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOH_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOH_MODER_R_MODER10_BIT     		(20)
  #define GPIOH_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOH_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOH_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOH_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOH_MODER_R_MODER11_BIT     		(22)
  #define GPIOH_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOH_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOH_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOH_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOH_MODER_R_MODER12_BIT     		(24)
  #define GPIOH_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOH_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOH_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOH_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOH_MODER_R_MODER13_BIT     		(26)
  #define GPIOH_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOH_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOH_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOH_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOH_MODER_R_MODER14_BIT     		(28)
  #define GPIOH_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOH_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOH_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOH_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOH_MODER_R_MODER15_BIT     		(30)
  #define GPIOH_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOH_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOH_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOH_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOH_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOH_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOH_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOH_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOH_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOH_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOH_OTYPER_R          					(*((__IO uint32_t *)(GPIOH_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOH_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_OTYPER_R_OT0_BIT     		(0)
  #define GPIOH_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOH_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOH_OTYPER_R_OT1_BIT     		(1)
  #define GPIOH_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOH_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOH_OTYPER_R_OT2_BIT     		(2)
  #define GPIOH_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOH_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOH_OTYPER_R_OT3_BIT     		(3)
  #define GPIOH_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOH_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOH_OTYPER_R_OT4_BIT     		(4)
  #define GPIOH_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOH_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOH_OTYPER_R_OT5_BIT     		(5)
  #define GPIOH_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOH_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOH_OTYPER_R_OT6_BIT     		(6)
  #define GPIOH_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOH_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOH_OTYPER_R_OT7_BIT     		(7)
  #define GPIOH_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOH_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOH_OTYPER_R_OT8_BIT     		(8)
  #define GPIOH_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOH_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOH_OTYPER_R_OT9_BIT     		(9)
  #define GPIOH_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOH_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOH_OTYPER_R_OT10_BIT     		(10)
  #define GPIOH_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOH_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOH_OTYPER_R_OT11_BIT     		(11)
  #define GPIOH_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOH_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOH_OTYPER_R_OT12_BIT     		(12)
  #define GPIOH_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOH_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOH_OTYPER_R_OT13_BIT     		(13)
  #define GPIOH_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOH_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOH_OTYPER_R_OT14_BIT     		(14)
  #define GPIOH_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOH_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOH_OTYPER_R_OT15_BIT     		(15)
  #define GPIOH_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOH_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOH_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOH_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOH_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOH_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOH_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOH_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOH_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOH_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOH_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOH_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOH_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOH_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOH_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOH_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOH_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOH_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOH_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOH_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOH_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOH_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOH_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOH_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOH_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOH_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOH_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOH_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOH_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOH_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOH_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOH_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOH_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOH_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOH_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOH_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOH_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOH_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOH_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOH_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOH_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOH_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOH_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOH_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOH_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOH_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOH_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOH_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOH_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOH_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOH_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOH_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOH_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOH_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOH_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOH_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOH_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOH_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOH_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOH_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOH_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOH_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOH_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOH_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOH_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOH_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOH_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOH_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOH_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOH_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOH_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOH_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOH_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOH_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOH_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOH_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOH_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOH_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOH_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOH_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOH_PUPDR_R          					(*((__IO uint32_t *)(GPIOH_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOH_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOH_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOH_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOH_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOH_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOH_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOH_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOH_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOH_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOH_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOH_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOH_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOH_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOH_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOH_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOH_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOH_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOH_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOH_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOH_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOH_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOH_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOH_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOH_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOH_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOH_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOH_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOH_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOH_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOH_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOH_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOH_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOH_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOH_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOH_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOH_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOH_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOH_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOH_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOH_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOH_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOH_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOH_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOH_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOH_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOH_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOH_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOH_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOH_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOH_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOH_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOH_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOH_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOH_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOH_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOH_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOH_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOH_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOH_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOH_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOH_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOH_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOH_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOH_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOH_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOH_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOH_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_IDR            					(((GPIO_IDR_TypeDef*)(GPIOH_BASE+GPIO_IDR_OFFSET )))
  #define GPIOH_IDR_R          					(*((__I uint32_t *)(GPIOH_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOH_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_R_IDR0_BIT     		(0)
  #define GPIOH_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOH_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOH_IDR_R_IDR1_BIT     		(1)
  #define GPIOH_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOH_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOH_IDR_R_IDR2_BIT     		(2)
  #define GPIOH_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOH_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOH_IDR_R_IDR3_BIT     		(3)
  #define GPIOH_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOH_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOH_IDR_R_IDR4_BIT     		(4)
  #define GPIOH_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOH_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOH_IDR_R_IDR5_BIT     		(5)
  #define GPIOH_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOH_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOH_IDR_R_IDR6_BIT     		(6)
  #define GPIOH_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOH_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOH_IDR_R_IDR7_BIT     		(7)
  #define GPIOH_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOH_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOH_IDR_R_IDR8_BIT     		(8)
  #define GPIOH_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOH_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOH_IDR_R_IDR9_BIT     		(9)
  #define GPIOH_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOH_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOH_IDR_R_IDR10_BIT     		(10)
  #define GPIOH_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOH_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOH_IDR_R_IDR11_BIT     		(11)
  #define GPIOH_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOH_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOH_IDR_R_IDR12_BIT     		(12)
  #define GPIOH_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOH_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOH_IDR_R_IDR13_BIT     		(13)
  #define GPIOH_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOH_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOH_IDR_R_IDR14_BIT     		(14)
  #define GPIOH_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOH_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOH_IDR_R_IDR15_BIT     		(15)
  #define GPIOH_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOH_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOH_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOH_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOH_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_ODR            					(((GPIO_ODR_TypeDef*)(GPIOH_BASE+GPIO_ODR_OFFSET )))
  #define GPIOH_ODR_R          					(*((__IO uint32_t *)(GPIOH_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOH_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_R_ODR0_BIT     		(0)
  #define GPIOH_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOH_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOH_ODR_R_ODR1_BIT     		(1)
  #define GPIOH_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOH_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOH_ODR_R_ODR2_BIT     		(2)
  #define GPIOH_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOH_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOH_ODR_R_ODR3_BIT     		(3)
  #define GPIOH_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOH_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOH_ODR_R_ODR4_BIT     		(4)
  #define GPIOH_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOH_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOH_ODR_R_ODR5_BIT     		(5)
  #define GPIOH_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOH_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOH_ODR_R_ODR6_BIT     		(6)
  #define GPIOH_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOH_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOH_ODR_R_ODR7_BIT     		(7)
  #define GPIOH_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOH_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOH_ODR_R_ODR8_BIT     		(8)
  #define GPIOH_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOH_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOH_ODR_R_ODR9_BIT     		(9)
  #define GPIOH_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOH_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOH_ODR_R_ODR10_BIT     		(10)
  #define GPIOH_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOH_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOH_ODR_R_ODR11_BIT     		(11)
  #define GPIOH_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOH_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOH_ODR_R_ODR12_BIT     		(12)
  #define GPIOH_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOH_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOH_ODR_R_ODR13_BIT     		(13)
  #define GPIOH_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOH_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOH_ODR_R_ODR14_BIT     		(14)
  #define GPIOH_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOH_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOH_ODR_R_ODR15_BIT     		(15)
  #define GPIOH_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOH_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOH_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOH_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOH_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_SET            					(((GPIO_SET_TypeDef*)(GPIOH_BASE+GPIO_SET_OFFSET )))
  #define GPIOH_SET_R          					(*((__IO uint16_t *)(GPIOH_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOH_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_R_SET0_BIT     		(0)
  #define GPIOH_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOH_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOH_SET_R_SET1_BIT     		(1)
  #define GPIOH_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOH_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOH_SET_R_SET2_BIT     		(2)
  #define GPIOH_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOH_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOH_SET_R_SET3_BIT     		(3)
  #define GPIOH_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOH_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOH_SET_R_SET4_BIT     		(4)
  #define GPIOH_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOH_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOH_SET_R_SET5_BIT     		(5)
  #define GPIOH_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOH_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOH_SET_R_SET6_BIT     		(6)
  #define GPIOH_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOH_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOH_SET_R_SET7_BIT     		(7)
  #define GPIOH_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOH_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOH_SET_R_SET8_BIT     		(8)
  #define GPIOH_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOH_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOH_SET_R_SET9_BIT     		(9)
  #define GPIOH_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOH_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOH_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOH_SET_R_SET10_BIT     		(10)
  #define GPIOH_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOH_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOH_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOH_SET_R_SET11_BIT     		(11)
  #define GPIOH_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOH_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOH_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOH_SET_R_SET12_BIT     		(12)
  #define GPIOH_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOH_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOH_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOH_SET_R_SET13_BIT     		(13)
  #define GPIOH_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOH_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOH_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOH_SET_R_SET14_BIT     		(14)
  #define GPIOH_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOH_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOH_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOH_SET_R_SET15_BIT     		(15)
  #define GPIOH_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOH_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOH_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOH_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOH_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_RESET            					(((GPIO_RESET_TypeDef*)(GPIOH_BASE+GPIO_RESET_OFFSET )))
  #define GPIOH_RESET_R          					(*((__IO uint16_t *)(GPIOH_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOH_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_R_RESET0_BIT     		(0)
  #define GPIOH_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOH_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOH_RESET_R_RESET1_BIT     		(1)
  #define GPIOH_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOH_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOH_RESET_R_RESET2_BIT     		(2)
  #define GPIOH_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOH_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOH_RESET_R_RESET3_BIT     		(3)
  #define GPIOH_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOH_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOH_RESET_R_RESET4_BIT     		(4)
  #define GPIOH_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOH_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOH_RESET_R_RESET5_BIT     		(5)
  #define GPIOH_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOH_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOH_RESET_R_RESET6_BIT     		(6)
  #define GPIOH_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOH_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOH_RESET_R_RESET7_BIT     		(7)
  #define GPIOH_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOH_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOH_RESET_R_RESET8_BIT     		(8)
  #define GPIOH_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOH_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOH_RESET_R_RESET9_BIT     		(9)
  #define GPIOH_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOH_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOH_RESET_R_RESET10_BIT     		(10)
  #define GPIOH_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOH_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOH_RESET_R_RESET11_BIT     		(11)
  #define GPIOH_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOH_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOH_RESET_R_RESET12_BIT     		(12)
  #define GPIOH_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOH_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOH_RESET_R_RESET13_BIT     		(13)
  #define GPIOH_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOH_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOH_RESET_R_RESET14_BIT     		(14)
  #define GPIOH_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOH_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOH_RESET_R_RESET15_BIT     		(15)
  #define GPIOH_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOH_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOH_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOH_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOH_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOH_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOH_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOH_LCKR_R          					(*((__IO uint16_t *)(GPIOH_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOH_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_R_LCK0_BIT     			(0)
  #define GPIOH_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOH_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOH_LCKR_R_LCK1_BIT     			(1)
  #define GPIOH_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOH_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOH_LCKR_R_LCK2_BIT     			(2)
  #define GPIOH_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOH_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOH_LCKR_R_LCK3_BIT     			(3)
  #define GPIOH_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOH_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOH_LCKR_R_LCK4_BIT     			(4)
  #define GPIOH_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOH_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOH_LCKR_R_LCK5_BIT     			(5)
  #define GPIOH_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOH_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOH_LCKR_R_LCK6_BIT     			(6)
  #define GPIOH_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOH_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOH_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOH_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOH_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOH_LCKR_R_LCK8_BIT     			(8)
  #define GPIOH_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOH_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOH_LCKR_R_LCK9_BIT     			(9)
  #define GPIOH_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOH_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOH_LCKR_R_LCK10_BIT     		(10)
  #define GPIOH_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOH_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOH_LCKR_R_LCK11_BIT     		(11)
  #define GPIOH_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOH_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOH_LCKR_R_LCK12_BIT     		(12)
  #define GPIOH_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOH_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOH_LCKR_R_LCK13_BIT     		(13)
  #define GPIOH_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOH_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOH_LCKR_R_LCK14_BIT     		(14)
  #define GPIOH_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOH_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOH_LCKR_R_LCK15_BIT     		(15)
  #define GPIOH_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOH_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOH_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOH_LCKR_R_LCKK_BIT     			(16)
  #define GPIOH_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOH_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOH_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOH_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOH_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/
 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOH_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOH_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOH_AFRL_R          		(*((__IO uint32_t *)(GPIOH_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOH_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOH_AFRL_R_AFR0_BIT     			(0)

 #define GPIOH_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOH_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOH_BASE+GPIO_AFRH_OFFSET )))
#define GPIOH_AFRH_R          		(*((__IO uint32_t *)(GPIOH_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOH_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOH_AFRH_R_AFR8_BIT     			(0)

#define GPIOH_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/


 /* TODO GPIOI*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_MODER            					(((GPIO_MODER_TypeDef*)(GPIOI_BASE+GPIO_MODER_OFFSET )))
  #define GPIOI_MODER_R          					(*((__IO uint32_t *)(GPIOI_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOI_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_R_MODER0_BIT     		(0)
  #define GPIOI_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOI_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOI_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOI_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOI_MODER_R_MODER1_BIT     		(2)
  #define GPIOI_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOI_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOI_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOI_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOI_MODER_R_MODER2_BIT     		(4)
  #define GPIOI_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOI_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOI_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOI_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOI_MODER_R_MODER3_BIT     		(6)
  #define GPIOI_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOI_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOI_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOI_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOI_MODER_R_MODER4_BIT     		(8)
  #define GPIOI_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOI_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOI_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOI_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOI_MODER_R_MODER5_BIT     		(10)
  #define GPIOI_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOI_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOI_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOI_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOI_MODER_R_MODER6_BIT     		(12)
  #define GPIOI_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOI_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOI_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOI_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOI_MODER_R_MODER7_BIT     		(14)
  #define GPIOI_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOI_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOI_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOI_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOI_MODER_R_MODER8_BIT     		(16)
  #define GPIOI_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOI_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOI_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOI_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOI_MODER_R_MODER9_BIT     		(18)
  #define GPIOI_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOI_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOI_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOI_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOI_MODER_R_MODER10_BIT     		(20)
  #define GPIOI_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOI_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOI_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOI_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOI_MODER_R_MODER11_BIT     		(22)
  #define GPIOI_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOI_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOI_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOI_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOI_MODER_R_MODER12_BIT     		(24)
  #define GPIOI_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOI_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOI_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOI_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOI_MODER_R_MODER13_BIT     		(26)
  #define GPIOI_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOI_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOI_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOI_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOI_MODER_R_MODER14_BIT     		(28)
  #define GPIOI_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOI_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOI_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOI_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOI_MODER_R_MODER15_BIT     		(30)
  #define GPIOI_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOI_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOI_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOI_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOI_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOI_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOI_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOI_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOI_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOI_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOI_OTYPER_R          					(*((__IO uint32_t *)(GPIOI_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOI_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_OTYPER_R_OT0_BIT     		(0)
  #define GPIOI_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOI_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOI_OTYPER_R_OT1_BIT     		(1)
  #define GPIOI_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOI_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOI_OTYPER_R_OT2_BIT     		(2)
  #define GPIOI_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOI_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOI_OTYPER_R_OT3_BIT     		(3)
  #define GPIOI_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOI_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOI_OTYPER_R_OT4_BIT     		(4)
  #define GPIOI_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOI_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOI_OTYPER_R_OT5_BIT     		(5)
  #define GPIOI_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOI_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOI_OTYPER_R_OT6_BIT     		(6)
  #define GPIOI_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOI_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOI_OTYPER_R_OT7_BIT     		(7)
  #define GPIOI_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOI_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOI_OTYPER_R_OT8_BIT     		(8)
  #define GPIOI_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOI_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOI_OTYPER_R_OT9_BIT     		(9)
  #define GPIOI_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOI_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOI_OTYPER_R_OT10_BIT     		(10)
  #define GPIOI_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOI_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOI_OTYPER_R_OT11_BIT     		(11)
  #define GPIOI_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOI_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOI_OTYPER_R_OT12_BIT     		(12)
  #define GPIOI_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOI_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOI_OTYPER_R_OT13_BIT     		(13)
  #define GPIOI_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOI_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOI_OTYPER_R_OT14_BIT     		(14)
  #define GPIOI_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOI_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOI_OTYPER_R_OT15_BIT     		(15)
  #define GPIOI_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOI_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOI_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOI_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOI_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOI_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOI_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOI_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOI_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOI_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOI_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOI_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOI_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOI_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOI_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOI_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOI_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOI_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOI_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOI_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOI_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOI_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOI_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOI_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOI_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOI_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOI_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOI_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOI_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOI_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOI_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOI_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOI_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOI_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOI_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOI_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOI_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOI_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOI_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOI_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOI_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOI_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOI_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOI_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOI_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOI_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOI_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOI_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOI_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOI_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOI_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOI_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOI_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOI_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOI_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOI_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOI_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOI_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOI_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOI_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOI_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOI_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOI_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOI_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOI_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOI_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOI_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOI_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOI_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOI_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOI_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOI_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOI_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOI_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOI_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOI_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOI_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOI_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOI_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOI_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOI_PUPDR_R          					(*((__IO uint32_t *)(GPIOI_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOI_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOI_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOI_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOI_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOI_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOI_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOI_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOI_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOI_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOI_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOI_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOI_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOI_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOI_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOI_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOI_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOI_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOI_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOI_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOI_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOI_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOI_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOI_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOI_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOI_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOI_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOI_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOI_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOI_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOI_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOI_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOI_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOI_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOI_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOI_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOI_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOI_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOI_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOI_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOI_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOI_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOI_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOI_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOI_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOI_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOI_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOI_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOI_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOI_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOI_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOI_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOI_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOI_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOI_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOI_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOI_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOI_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOI_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOI_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOI_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOI_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOI_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOI_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOI_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOI_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOI_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOI_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_IDR            					(((GPIO_IDR_TypeDef*)(GPIOI_BASE+GPIO_IDR_OFFSET )))
  #define GPIOI_IDR_R          					(*((__I uint32_t *)(GPIOI_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOI_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_R_IDR0_BIT     		(0)
  #define GPIOI_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOI_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOI_IDR_R_IDR1_BIT     		(1)
  #define GPIOI_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOI_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOI_IDR_R_IDR2_BIT     		(2)
  #define GPIOI_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOI_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOI_IDR_R_IDR3_BIT     		(3)
  #define GPIOI_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOI_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOI_IDR_R_IDR4_BIT     		(4)
  #define GPIOI_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOI_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOI_IDR_R_IDR5_BIT     		(5)
  #define GPIOI_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOI_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOI_IDR_R_IDR6_BIT     		(6)
  #define GPIOI_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOI_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOI_IDR_R_IDR7_BIT     		(7)
  #define GPIOI_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOI_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOI_IDR_R_IDR8_BIT     		(8)
  #define GPIOI_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOI_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOI_IDR_R_IDR9_BIT     		(9)
  #define GPIOI_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOI_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOI_IDR_R_IDR10_BIT     		(10)
  #define GPIOI_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOI_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOI_IDR_R_IDR11_BIT     		(11)
  #define GPIOI_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOI_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOI_IDR_R_IDR12_BIT     		(12)
  #define GPIOI_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOI_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOI_IDR_R_IDR13_BIT     		(13)
  #define GPIOI_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOI_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOI_IDR_R_IDR14_BIT     		(14)
  #define GPIOI_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOI_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOI_IDR_R_IDR15_BIT     		(15)
  #define GPIOI_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOI_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOI_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOI_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOI_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_ODR            					(((GPIO_ODR_TypeDef*)(GPIOI_BASE+GPIO_ODR_OFFSET )))
  #define GPIOI_ODR_R          					(*((__IO uint32_t *)(GPIOI_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOI_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_R_ODR0_BIT     		(0)
  #define GPIOI_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOI_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOI_ODR_R_ODR1_BIT     		(1)
  #define GPIOI_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOI_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOI_ODR_R_ODR2_BIT     		(2)
  #define GPIOI_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOI_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOI_ODR_R_ODR3_BIT     		(3)
  #define GPIOI_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOI_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOI_ODR_R_ODR4_BIT     		(4)
  #define GPIOI_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOI_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOI_ODR_R_ODR5_BIT     		(5)
  #define GPIOI_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOI_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOI_ODR_R_ODR6_BIT     		(6)
  #define GPIOI_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOI_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOI_ODR_R_ODR7_BIT     		(7)
  #define GPIOI_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOI_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOI_ODR_R_ODR8_BIT     		(8)
  #define GPIOI_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOI_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOI_ODR_R_ODR9_BIT     		(9)
  #define GPIOI_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOI_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOI_ODR_R_ODR10_BIT     		(10)
  #define GPIOI_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOI_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOI_ODR_R_ODR11_BIT     		(11)
  #define GPIOI_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOI_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOI_ODR_R_ODR12_BIT     		(12)
  #define GPIOI_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOI_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOI_ODR_R_ODR13_BIT     		(13)
  #define GPIOI_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOI_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOI_ODR_R_ODR14_BIT     		(14)
  #define GPIOI_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOI_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOI_ODR_R_ODR15_BIT     		(15)
  #define GPIOI_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOI_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOI_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOI_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOI_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_SET            					(((GPIO_SET_TypeDef*)(GPIOI_BASE+GPIO_SET_OFFSET )))
  #define GPIOI_SET_R          					(*((__IO uint16_t *)(GPIOI_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOI_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_R_SET0_BIT     		(0)
  #define GPIOI_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOI_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOI_SET_R_SET1_BIT     		(1)
  #define GPIOI_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOI_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOI_SET_R_SET2_BIT     		(2)
  #define GPIOI_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOI_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOI_SET_R_SET3_BIT     		(3)
  #define GPIOI_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOI_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOI_SET_R_SET4_BIT     		(4)
  #define GPIOI_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOI_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOI_SET_R_SET5_BIT     		(5)
  #define GPIOI_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOI_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOI_SET_R_SET6_BIT     		(6)
  #define GPIOI_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOI_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOI_SET_R_SET7_BIT     		(7)
  #define GPIOI_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOI_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOI_SET_R_SET8_BIT     		(8)
  #define GPIOI_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOI_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOI_SET_R_SET9_BIT     		(9)
  #define GPIOI_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOI_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOI_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOI_SET_R_SET10_BIT     		(10)
  #define GPIOI_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOI_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOI_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOI_SET_R_SET11_BIT     		(11)
  #define GPIOI_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOI_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOI_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOI_SET_R_SET12_BIT     		(12)
  #define GPIOI_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOI_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOI_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOI_SET_R_SET13_BIT     		(13)
  #define GPIOI_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOI_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOI_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOI_SET_R_SET14_BIT     		(14)
  #define GPIOI_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOI_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOI_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOI_SET_R_SET15_BIT     		(15)
  #define GPIOI_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOI_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOI_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOI_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOI_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_RESET            					(((GPIO_RESET_TypeDef*)(GPIOI_BASE+GPIO_RESET_OFFSET )))
  #define GPIOI_RESET_R          					(*((__IO uint16_t *)(GPIOI_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOI_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_R_RESET0_BIT     		(0)
  #define GPIOI_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOI_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOI_RESET_R_RESET1_BIT     		(1)
  #define GPIOI_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOI_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOI_RESET_R_RESET2_BIT     		(2)
  #define GPIOI_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOI_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOI_RESET_R_RESET3_BIT     		(3)
  #define GPIOI_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOI_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOI_RESET_R_RESET4_BIT     		(4)
  #define GPIOI_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOI_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOI_RESET_R_RESET5_BIT     		(5)
  #define GPIOI_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOI_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOI_RESET_R_RESET6_BIT     		(6)
  #define GPIOI_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOI_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOI_RESET_R_RESET7_BIT     		(7)
  #define GPIOI_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOI_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOI_RESET_R_RESET8_BIT     		(8)
  #define GPIOI_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOI_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOI_RESET_R_RESET9_BIT     		(9)
  #define GPIOI_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOI_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOI_RESET_R_RESET10_BIT     		(10)
  #define GPIOI_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOI_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOI_RESET_R_RESET11_BIT     		(11)
  #define GPIOI_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOI_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOI_RESET_R_RESET12_BIT     		(12)
  #define GPIOI_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOI_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOI_RESET_R_RESET13_BIT     		(13)
  #define GPIOI_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOI_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOI_RESET_R_RESET14_BIT     		(14)
  #define GPIOI_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOI_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOI_RESET_R_RESET15_BIT     		(15)
  #define GPIOI_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOI_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOI_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOI_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOI_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOI_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOI_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOI_LCKR_R          					(*((__IO uint16_t *)(GPIOI_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOI_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_R_LCK0_BIT     			(0)
  #define GPIOI_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOI_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOI_LCKR_R_LCK1_BIT     			(1)
  #define GPIOI_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOI_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOI_LCKR_R_LCK2_BIT     			(2)
  #define GPIOI_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOI_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOI_LCKR_R_LCK3_BIT     			(3)
  #define GPIOI_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOI_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOI_LCKR_R_LCK4_BIT     			(4)
  #define GPIOI_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOI_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOI_LCKR_R_LCK5_BIT     			(5)
  #define GPIOI_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOI_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOI_LCKR_R_LCK6_BIT     			(6)
  #define GPIOI_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOI_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOI_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOI_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOI_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOI_LCKR_R_LCK8_BIT     			(8)
  #define GPIOI_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOI_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOI_LCKR_R_LCK9_BIT     			(9)
  #define GPIOI_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOI_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOI_LCKR_R_LCK10_BIT     		(10)
  #define GPIOI_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOI_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOI_LCKR_R_LCK11_BIT     		(11)
  #define GPIOI_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOI_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOI_LCKR_R_LCK12_BIT     		(12)
  #define GPIOI_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOI_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOI_LCKR_R_LCK13_BIT     		(13)
  #define GPIOI_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOI_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOI_LCKR_R_LCK14_BIT     		(14)
  #define GPIOI_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOI_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOI_LCKR_R_LCK15_BIT     		(15)
  #define GPIOI_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOI_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOI_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOI_LCKR_R_LCKK_BIT     			(16)
  #define GPIOI_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOI_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOI_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOI_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOI_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOI_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOI_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOI_AFRL_R          		(*((__IO uint32_t *)(GPIOI_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOI_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOI_AFRL_R_AFR0_BIT     			(0)

 #define GPIOI_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOI_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOI_BASE+GPIO_AFRH_OFFSET )))
#define GPIOI_AFRH_R          		(*((__IO uint32_t *)(GPIOI_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOI_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOI_AFRH_R_AFR8_BIT     			(0)

#define GPIOI_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/

 /* TODO GPIOJ*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_MODER            					(((GPIO_MODER_TypeDef*)(GPIOJ_BASE+GPIO_MODER_OFFSET )))
  #define GPIOJ_MODER_R          					(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOJ_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_R_MODER0_BIT     		(0)
  #define GPIOJ_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOJ_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOJ_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOJ_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOJ_MODER_R_MODER1_BIT     		(2)
  #define GPIOJ_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOJ_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOJ_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOJ_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOJ_MODER_R_MODER2_BIT     		(4)
  #define GPIOJ_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOJ_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOJ_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOJ_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOJ_MODER_R_MODER3_BIT     		(6)
  #define GPIOJ_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOJ_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOJ_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOJ_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOJ_MODER_R_MODER4_BIT     		(8)
  #define GPIOJ_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOJ_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOJ_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOJ_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOJ_MODER_R_MODER5_BIT     		(10)
  #define GPIOJ_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOJ_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOJ_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOJ_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOJ_MODER_R_MODER6_BIT     		(12)
  #define GPIOJ_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOJ_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOJ_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOJ_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOJ_MODER_R_MODER7_BIT     		(14)
  #define GPIOJ_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOJ_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOJ_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOJ_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOJ_MODER_R_MODER8_BIT     		(16)
  #define GPIOJ_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOJ_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOJ_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOJ_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOJ_MODER_R_MODER9_BIT     		(18)
  #define GPIOJ_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOJ_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOJ_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOJ_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOJ_MODER_R_MODER10_BIT     		(20)
  #define GPIOJ_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOJ_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOJ_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOJ_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOJ_MODER_R_MODER11_BIT     		(22)
  #define GPIOJ_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOJ_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOJ_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOJ_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOJ_MODER_R_MODER12_BIT     		(24)
  #define GPIOJ_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOJ_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOJ_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOJ_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOJ_MODER_R_MODER13_BIT     		(26)
  #define GPIOJ_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOJ_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOJ_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOJ_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOJ_MODER_R_MODER14_BIT     		(28)
  #define GPIOJ_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOJ_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOJ_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOJ_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOJ_MODER_R_MODER15_BIT     		(30)
  #define GPIOJ_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOJ_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOJ_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOJ_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOJ_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOJ_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOJ_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOJ_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOJ_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOJ_OTYPER_R          					(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOJ_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_R_OT0_BIT     		(0)
  #define GPIOJ_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOJ_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOJ_OTYPER_R_OT1_BIT     		(1)
  #define GPIOJ_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOJ_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOJ_OTYPER_R_OT2_BIT     		(2)
  #define GPIOJ_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOJ_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOJ_OTYPER_R_OT3_BIT     		(3)
  #define GPIOJ_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOJ_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOJ_OTYPER_R_OT4_BIT     		(4)
  #define GPIOJ_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOJ_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOJ_OTYPER_R_OT5_BIT     		(5)
  #define GPIOJ_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOJ_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOJ_OTYPER_R_OT6_BIT     		(6)
  #define GPIOJ_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOJ_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOJ_OTYPER_R_OT7_BIT     		(7)
  #define GPIOJ_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOJ_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOJ_OTYPER_R_OT8_BIT     		(8)
  #define GPIOJ_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOJ_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOJ_OTYPER_R_OT9_BIT     		(9)
  #define GPIOJ_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOJ_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOJ_OTYPER_R_OT10_BIT     		(10)
  #define GPIOJ_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOJ_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOJ_OTYPER_R_OT11_BIT     		(11)
  #define GPIOJ_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOJ_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOJ_OTYPER_R_OT12_BIT     		(12)
  #define GPIOJ_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOJ_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOJ_OTYPER_R_OT13_BIT     		(13)
  #define GPIOJ_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOJ_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOJ_OTYPER_R_OT14_BIT     		(14)
  #define GPIOJ_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOJ_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOJ_OTYPER_R_OT15_BIT     		(15)
  #define GPIOJ_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOJ_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOJ_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOJ_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOJ_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOJ_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOJ_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOJ_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOJ_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOJ_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOJ_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOJ_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOJ_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOJ_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOJ_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOJ_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOJ_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOJ_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOJ_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOJ_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOJ_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOJ_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOJ_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOJ_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOJ_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOJ_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOJ_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOJ_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOJ_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOJ_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOJ_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOJ_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOJ_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOJ_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOJ_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOJ_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOJ_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOJ_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOJ_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOJ_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOJ_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOJ_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOJ_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOJ_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOJ_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOJ_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOJ_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOJ_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOJ_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOJ_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOJ_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOJ_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOJ_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOJ_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOJ_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOJ_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOJ_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOJ_PUPDR_R          					(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOJ_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOJ_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOJ_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOJ_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOJ_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOJ_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOJ_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOJ_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOJ_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOJ_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOJ_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOJ_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOJ_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOJ_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOJ_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOJ_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOJ_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOJ_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOJ_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOJ_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOJ_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOJ_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOJ_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOJ_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOJ_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOJ_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOJ_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOJ_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOJ_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOJ_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOJ_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOJ_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOJ_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOJ_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOJ_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOJ_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOJ_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOJ_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOJ_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOJ_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOJ_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOJ_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOJ_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOJ_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOJ_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOJ_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOJ_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOJ_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOJ_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOJ_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOJ_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOJ_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOJ_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOJ_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOJ_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOJ_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOJ_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOJ_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOJ_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOJ_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOJ_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOJ_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOJ_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOJ_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOJ_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOJ_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_IDR            					(((GPIO_IDR_TypeDef*)(GPIOJ_BASE+GPIO_IDR_OFFSET )))
  #define GPIOJ_IDR_R          					(*((__I uint32_t *)(GPIOJ_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOJ_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_R_IDR0_BIT     		(0)
  #define GPIOJ_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOJ_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOJ_IDR_R_IDR1_BIT     		(1)
  #define GPIOJ_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOJ_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOJ_IDR_R_IDR2_BIT     		(2)
  #define GPIOJ_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOJ_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOJ_IDR_R_IDR3_BIT     		(3)
  #define GPIOJ_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOJ_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOJ_IDR_R_IDR4_BIT     		(4)
  #define GPIOJ_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOJ_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOJ_IDR_R_IDR5_BIT     		(5)
  #define GPIOJ_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOJ_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOJ_IDR_R_IDR6_BIT     		(6)
  #define GPIOJ_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOJ_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOJ_IDR_R_IDR7_BIT     		(7)
  #define GPIOJ_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOJ_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOJ_IDR_R_IDR8_BIT     		(8)
  #define GPIOJ_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOJ_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOJ_IDR_R_IDR9_BIT     		(9)
  #define GPIOJ_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOJ_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOJ_IDR_R_IDR10_BIT     		(10)
  #define GPIOJ_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOJ_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOJ_IDR_R_IDR11_BIT     		(11)
  #define GPIOJ_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOJ_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOJ_IDR_R_IDR12_BIT     		(12)
  #define GPIOJ_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOJ_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOJ_IDR_R_IDR13_BIT     		(13)
  #define GPIOJ_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOJ_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOJ_IDR_R_IDR14_BIT     		(14)
  #define GPIOJ_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOJ_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOJ_IDR_R_IDR15_BIT     		(15)
  #define GPIOJ_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOJ_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_ODR            					(((GPIO_ODR_TypeDef*)(GPIOJ_BASE+GPIO_ODR_OFFSET )))
  #define GPIOJ_ODR_R          					(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOJ_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_R_ODR0_BIT     		(0)
  #define GPIOJ_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOJ_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOJ_ODR_R_ODR1_BIT     		(1)
  #define GPIOJ_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOJ_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOJ_ODR_R_ODR2_BIT     		(2)
  #define GPIOJ_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOJ_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOJ_ODR_R_ODR3_BIT     		(3)
  #define GPIOJ_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOJ_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOJ_ODR_R_ODR4_BIT     		(4)
  #define GPIOJ_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOJ_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOJ_ODR_R_ODR5_BIT     		(5)
  #define GPIOJ_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOJ_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOJ_ODR_R_ODR6_BIT     		(6)
  #define GPIOJ_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOJ_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOJ_ODR_R_ODR7_BIT     		(7)
  #define GPIOJ_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOJ_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOJ_ODR_R_ODR8_BIT     		(8)
  #define GPIOJ_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOJ_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOJ_ODR_R_ODR9_BIT     		(9)
  #define GPIOJ_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOJ_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOJ_ODR_R_ODR10_BIT     		(10)
  #define GPIOJ_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOJ_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOJ_ODR_R_ODR11_BIT     		(11)
  #define GPIOJ_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOJ_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOJ_ODR_R_ODR12_BIT     		(12)
  #define GPIOJ_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOJ_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOJ_ODR_R_ODR13_BIT     		(13)
  #define GPIOJ_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOJ_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOJ_ODR_R_ODR14_BIT     		(14)
  #define GPIOJ_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOJ_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOJ_ODR_R_ODR15_BIT     		(15)
  #define GPIOJ_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOJ_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOJ_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOJ_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_SET            					(((GPIO_SET_TypeDef*)(GPIOJ_BASE+GPIO_SET_OFFSET )))
  #define GPIOJ_SET_R          					(*((__IO uint16_t *)(GPIOJ_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOJ_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_R_SET0_BIT     		(0)
  #define GPIOJ_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOJ_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOJ_SET_R_SET1_BIT     		(1)
  #define GPIOJ_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOJ_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOJ_SET_R_SET2_BIT     		(2)
  #define GPIOJ_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOJ_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOJ_SET_R_SET3_BIT     		(3)
  #define GPIOJ_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOJ_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOJ_SET_R_SET4_BIT     		(4)
  #define GPIOJ_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOJ_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOJ_SET_R_SET5_BIT     		(5)
  #define GPIOJ_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOJ_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOJ_SET_R_SET6_BIT     		(6)
  #define GPIOJ_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOJ_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOJ_SET_R_SET7_BIT     		(7)
  #define GPIOJ_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOJ_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOJ_SET_R_SET8_BIT     		(8)
  #define GPIOJ_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOJ_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOJ_SET_R_SET9_BIT     		(9)
  #define GPIOJ_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOJ_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOJ_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOJ_SET_R_SET10_BIT     		(10)
  #define GPIOJ_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOJ_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOJ_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOJ_SET_R_SET11_BIT     		(11)
  #define GPIOJ_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOJ_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOJ_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOJ_SET_R_SET12_BIT     		(12)
  #define GPIOJ_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOJ_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOJ_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOJ_SET_R_SET13_BIT     		(13)
  #define GPIOJ_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOJ_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOJ_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOJ_SET_R_SET14_BIT     		(14)
  #define GPIOJ_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOJ_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOJ_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOJ_SET_R_SET15_BIT     		(15)
  #define GPIOJ_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOJ_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOJ_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOJ_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_RESET            					(((GPIO_RESET_TypeDef*)(GPIOJ_BASE+GPIO_RESET_OFFSET )))
  #define GPIOJ_RESET_R          					(*((__IO uint16_t *)(GPIOJ_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOJ_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_R_RESET0_BIT     		(0)
  #define GPIOJ_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOJ_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOJ_RESET_R_RESET1_BIT     		(1)
  #define GPIOJ_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOJ_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOJ_RESET_R_RESET2_BIT     		(2)
  #define GPIOJ_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOJ_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOJ_RESET_R_RESET3_BIT     		(3)
  #define GPIOJ_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOJ_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOJ_RESET_R_RESET4_BIT     		(4)
  #define GPIOJ_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOJ_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOJ_RESET_R_RESET5_BIT     		(5)
  #define GPIOJ_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOJ_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOJ_RESET_R_RESET6_BIT     		(6)
  #define GPIOJ_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOJ_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOJ_RESET_R_RESET7_BIT     		(7)
  #define GPIOJ_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOJ_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOJ_RESET_R_RESET8_BIT     		(8)
  #define GPIOJ_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOJ_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOJ_RESET_R_RESET9_BIT     		(9)
  #define GPIOJ_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOJ_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOJ_RESET_R_RESET10_BIT     		(10)
  #define GPIOJ_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOJ_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOJ_RESET_R_RESET11_BIT     		(11)
  #define GPIOJ_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOJ_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOJ_RESET_R_RESET12_BIT     		(12)
  #define GPIOJ_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOJ_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOJ_RESET_R_RESET13_BIT     		(13)
  #define GPIOJ_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOJ_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOJ_RESET_R_RESET14_BIT     		(14)
  #define GPIOJ_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOJ_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOJ_RESET_R_RESET15_BIT     		(15)
  #define GPIOJ_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOJ_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOJ_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOJ_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOJ_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOJ_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOJ_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOJ_LCKR_R          					(*((__IO uint16_t *)(GPIOJ_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOJ_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_R_LCK0_BIT     			(0)
  #define GPIOJ_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOJ_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOJ_LCKR_R_LCK1_BIT     			(1)
  #define GPIOJ_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOJ_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOJ_LCKR_R_LCK2_BIT     			(2)
  #define GPIOJ_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOJ_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOJ_LCKR_R_LCK3_BIT     			(3)
  #define GPIOJ_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOJ_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOJ_LCKR_R_LCK4_BIT     			(4)
  #define GPIOJ_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOJ_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOJ_LCKR_R_LCK5_BIT     			(5)
  #define GPIOJ_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOJ_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOJ_LCKR_R_LCK6_BIT     			(6)
  #define GPIOJ_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOJ_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOJ_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOJ_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOJ_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOJ_LCKR_R_LCK8_BIT     			(8)
  #define GPIOJ_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOJ_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOJ_LCKR_R_LCK9_BIT     			(9)
  #define GPIOJ_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOJ_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOJ_LCKR_R_LCK10_BIT     		(10)
  #define GPIOJ_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOJ_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOJ_LCKR_R_LCK11_BIT     		(11)
  #define GPIOJ_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOJ_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOJ_LCKR_R_LCK12_BIT     		(12)
  #define GPIOJ_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOJ_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOJ_LCKR_R_LCK13_BIT     		(13)
  #define GPIOJ_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOJ_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOJ_LCKR_R_LCK14_BIT     		(14)
  #define GPIOJ_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOJ_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOJ_LCKR_R_LCK15_BIT     		(15)
  #define GPIOJ_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOJ_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOJ_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOJ_LCKR_R_LCKK_BIT     			(16)
  #define GPIOJ_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOJ_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOJ_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOJ_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOJ_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/

 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOJ_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOJ_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOJ_AFRL_R          		(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOJ_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOJ_AFRL_R_AFR0_BIT     			(0)

 #define GPIOJ_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOJ_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOJ_BASE+GPIO_AFRH_OFFSET )))
#define GPIOJ_AFRH_R          		(*((__IO uint32_t *)(GPIOJ_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOJ_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOJ_AFRH_R_AFR8_BIT     			(0)

#define GPIOJ_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/



 /* TODO GPIOK*/
  /* TODO MODER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 MODER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_MODER            					(((GPIO_MODER_TypeDef*)(GPIOK_BASE+GPIO_MODER_OFFSET )))
  #define GPIOK_MODER_R          					(*((__IO uint32_t *)(GPIOK_BASE+GPIO_MODER_OFFSET)))


  /*--------*/
  #define GPIOK_MODER_R_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_R_MODER0_BIT     		(0)
  #define GPIOK_MODER_R_MODER0_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER0_OUT   		((uint32_t)0x00000001)
  #define GPIOK_MODER_R_MODER0_ALT   		((uint32_t)0x00000002)
  #define GPIOK_MODER_R_MODER0_AN   			((uint32_t)0x00000003)

  #define GPIOK_MODER_MODER0_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER0_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER0_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER0_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER0_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER1_MASK    		((uint32_t)0x0000000C)
  #define GPIOK_MODER_R_MODER1_BIT     		(2)
  #define GPIOK_MODER_R_MODER1_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER1_OUT   		((uint32_t)0x00000004)
  #define GPIOK_MODER_R_MODER1_ALT   		((uint32_t)0x00000008)
  #define GPIOK_MODER_R_MODER1_AN   			((uint32_t)0x0000000C)

  #define GPIOK_MODER_MODER1_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER1_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER1_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER1_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER1_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER2_MASK    		((uint32_t)0x00000030)
  #define GPIOK_MODER_R_MODER2_BIT     		(4)
  #define GPIOK_MODER_R_MODER2_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER2_OUT   		((uint32_t)0x00000010)
  #define GPIOK_MODER_R_MODER2_ALT   		((uint32_t)0x00000020)
  #define GPIOK_MODER_R_MODER2_AN   			((uint32_t)0x00000030)

  #define GPIOK_MODER_MODER2_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER2_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER2_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER2_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER2_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER3_MASK    		((uint32_t)0x000000C0)
  #define GPIOK_MODER_R_MODER3_BIT     		(6)
  #define GPIOK_MODER_R_MODER3_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER3_OUT   		((uint32_t)0x00000040)
  #define GPIOK_MODER_R_MODER3_ALT   		((uint32_t)0x00000080)
  #define GPIOK_MODER_R_MODER3_AN   			((uint32_t)0x000000C0)

  #define GPIOK_MODER_MODER3_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER3_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER3_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER3_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER3_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER4_MASK    		((uint32_t)0x00000300)
  #define GPIOK_MODER_R_MODER4_BIT     		(8)
  #define GPIOK_MODER_R_MODER4_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER4_OUT   		((uint32_t)0x00000100)
  #define GPIOK_MODER_R_MODER4_ALT   		((uint32_t)0x00000200)
  #define GPIOK_MODER_R_MODER4_AN   			((uint32_t)0x00000300)

  #define GPIOK_MODER_MODER4_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER4_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER4_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER4_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER4_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER5_MASK    		((uint32_t)0x00000C00)
  #define GPIOK_MODER_R_MODER5_BIT     		(10)
  #define GPIOK_MODER_R_MODER5_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER5_OUT   		((uint32_t)0x00000400)
  #define GPIOK_MODER_R_MODER5_ALT   		((uint32_t)0x00000800)
  #define GPIOK_MODER_R_MODER5_AN   			((uint32_t)0x00000C00)

  #define GPIOK_MODER_MODER5_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER5_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER5_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER5_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER5_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER6_MASK    		((uint32_t)0x00003000)
  #define GPIOK_MODER_R_MODER6_BIT     		(12)
  #define GPIOK_MODER_R_MODER6_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER6_OUT   		((uint32_t)0x00001000)
  #define GPIOK_MODER_R_MODER6_ALT   		((uint32_t)0x00002000)
  #define GPIOK_MODER_R_MODER6_AN   			((uint32_t)0x00003000)

  #define GPIOK_MODER_MODER6_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER6_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER6_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER6_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER6_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER7_MASK    		((uint32_t)0x0000C000)
  #define GPIOK_MODER_R_MODER7_BIT     		(14)
  #define GPIOK_MODER_R_MODER7_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER7_OUT   		((uint32_t)0x00004000)
  #define GPIOK_MODER_R_MODER7_ALT   		((uint32_t)0x00008000)
  #define GPIOK_MODER_R_MODER7_AN   			((uint32_t)0x0000C000)

  #define GPIOK_MODER_MODER7_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER7_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER7_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER7_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER7_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER8_MASK    		((uint32_t)0x00030000)
  #define GPIOK_MODER_R_MODER8_BIT     		(16)
  #define GPIOK_MODER_R_MODER8_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER8_OUT   		((uint32_t)0x00010000)
  #define GPIOK_MODER_R_MODER8_ALT   		((uint32_t)0x00020000)
  #define GPIOK_MODER_R_MODER8_AN   			((uint32_t)0x00030000)

  #define GPIOK_MODER_MODER8_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER8_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER8_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER8_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER8_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER9_MASK    		((uint32_t)0x000C0000)
  #define GPIOK_MODER_R_MODER9_BIT     		(18)
  #define GPIOK_MODER_R_MODER9_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER9_OUT   		((uint32_t)0x00040000)
  #define GPIOK_MODER_R_MODER9_ALT   		((uint32_t)0x00080000)
  #define GPIOK_MODER_R_MODER9_AN   			((uint32_t)0x000C0000)

  #define GPIOK_MODER_MODER9_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER9_IN 				((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER9_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER9_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER9_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER10_MASK    		((uint32_t)0x00300000)
  #define GPIOK_MODER_R_MODER10_BIT     		(20)
  #define GPIOK_MODER_R_MODER10_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER10_OUT   		((uint32_t)0x00100000)
  #define GPIOK_MODER_R_MODER10_ALT   		((uint32_t)0x00200000)
  #define GPIOK_MODER_R_MODER10_AN   		((uint32_t)0x00300000)

  #define GPIOK_MODER_MODER10_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER10_IN 			((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER10_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER10_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER10_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER11_MASK    		((uint32_t)0x00C00000)
  #define GPIOK_MODER_R_MODER11_BIT     		(22)
  #define GPIOK_MODER_R_MODER11_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER11_OUT   		((uint32_t)0x00400000)
  #define GPIOK_MODER_R_MODER11_ALT   		((uint32_t)0x00800000)
  #define GPIOK_MODER_R_MODER11_AN   		((uint32_t)0x00C00000)

  #define GPIOK_MODER_MODER11_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER11_IN 			((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER11_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER11_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER11_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER12_MASK    		((uint32_t)0x03000000)
  #define GPIOK_MODER_R_MODER12_BIT     		(24)
  #define GPIOK_MODER_R_MODER12_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER12_OUT   		((uint32_t)0x01000000)
  #define GPIOK_MODER_R_MODER12_ALT   		((uint32_t)0x02000000)
  #define GPIOK_MODER_R_MODER12_AN   		((uint32_t)0x03000000)

  #define GPIOK_MODER_MODER12_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER12_IN 			((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER12_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER12_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER12_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER13_MASK    		((uint32_t)0x0C000000)
  #define GPIOK_MODER_R_MODER13_BIT     		(26)
  #define GPIOK_MODER_R_MODER13_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER13_OUT   		((uint32_t)0x04000000)
  #define GPIOK_MODER_R_MODER13_ALT   		((uint32_t)0x08000000)
  #define GPIOK_MODER_R_MODER13_AN   		((uint32_t)0x0C000000)

  #define GPIOK_MODER_MODER13_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER13_IN 			((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER13_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER13_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER13_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER14_MASK    		((uint32_t)0x30000000)
  #define GPIOK_MODER_R_MODER14_BIT     		(28)
  #define GPIOK_MODER_R_MODER14_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER14_OUT   		((uint32_t)0x10000000)
  #define GPIOK_MODER_R_MODER14_ALT   		((uint32_t)0x20000000)
  #define GPIOK_MODER_R_MODER14_AN   		((uint32_t)0x30000000)

  #define GPIOK_MODER_MODER14_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER14_IN 			((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER14_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER14_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER14_AN   			((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_MODER_R_MODER15_MASK    		((uint32_t)0xC0000000)
  #define GPIOK_MODER_R_MODER15_BIT     		(30)
  #define GPIOK_MODER_R_MODER15_IN    		((uint32_t)0x00000000)
  #define GPIOK_MODER_R_MODER15_OUT   		((uint32_t)0x40000000)
  #define GPIOK_MODER_R_MODER15_ALT   		((uint32_t)0x80000000)
  #define GPIOK_MODER_R_MODER15_AN   		((uint32_t)0xC0000000)

  #define GPIOK_MODER_MODER15_MASK    		((uint32_t)0x00000003)
  #define GPIOK_MODER_MODER15_IN 			((uint32_t)0x00000000)
  #define GPIOK_MODER_MODER15_OUT   			((uint32_t)0x00000001)
  #define GPIOK_MODER_MODER15_ALT   			((uint32_t)0x00000002)
  #define GPIOK_MODER_MODER15_AN   			((uint32_t)0x00000003)
  /*--------*/


  /* TODO OTYPER */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 2 OTYPER ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_OTYPER            					(((GPIO_OTYPER_TypeDef*)(GPIOK_BASE+GPIO_OTYPER_OFFSET )))
  #define GPIOK_OTYPER_R          					(*((__IO uint32_t *)(GPIOK_BASE+GPIO_OTYPER_OFFSET)))


  /*--------*/
  #define GPIOK_OTYPER_R_OT0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_OTYPER_R_OT0_BIT     		(0)
  #define GPIOK_OTYPER_R_OT0_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT0_OP   			((uint32_t)0x00000001)

  #define GPIOK_OTYPER_OT0_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT0_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT0_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT1_MASK    		((uint32_t)0x00000002)
  #define GPIOK_OTYPER_R_OT1_BIT     		(1)
  #define GPIOK_OTYPER_R_OT1_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT1_OP   			((uint32_t)0x00000002)

  #define GPIOK_OTYPER_OT1_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT1_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT1_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT2_MASK    		((uint32_t)0x00000004)
  #define GPIOK_OTYPER_R_OT2_BIT     		(2)
  #define GPIOK_OTYPER_R_OT2_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT2_OP   			((uint32_t)0x00000004)

  #define GPIOK_OTYPER_OT2_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT2_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT2_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT3_MASK    		((uint32_t)0x00000008)
  #define GPIOK_OTYPER_R_OT3_BIT     		(3)
  #define GPIOK_OTYPER_R_OT3_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT3_OP   			((uint32_t)0x00000008)

  #define GPIOK_OTYPER_OT3_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT3_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT3_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT4_MASK    		((uint32_t)0x00000010)
  #define GPIOK_OTYPER_R_OT4_BIT     		(4)
  #define GPIOK_OTYPER_R_OT4_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT4_OP   			((uint32_t)0x00000010)

  #define GPIOK_OTYPER_OT4_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT4_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT4_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT5_MASK    		((uint32_t)0x00000020)
  #define GPIOK_OTYPER_R_OT5_BIT     		(5)
  #define GPIOK_OTYPER_R_OT5_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT5_OP   			((uint32_t)0x00000020)

  #define GPIOK_OTYPER_OT5_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT5_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT5_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT6_MASK    		((uint32_t)0x00000040)
  #define GPIOK_OTYPER_R_OT6_BIT     		(6)
  #define GPIOK_OTYPER_R_OT6_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT6_OP   			((uint32_t)0x00000040)

  #define GPIOK_OTYPER_OT6_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT6_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT6_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT7_MASK    		((uint32_t)0x00000080)
  #define GPIOK_OTYPER_R_OT7_BIT     		(7)
  #define GPIOK_OTYPER_R_OT7_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT7_OP   			((uint32_t)0x00000080)

  #define GPIOK_OTYPER_OT7_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT7_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT7_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT8_MASK    		((uint32_t)0x00000100)
  #define GPIOK_OTYPER_R_OT8_BIT     		(8)
  #define GPIOK_OTYPER_R_OT8_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT8_OP   			((uint32_t)0x00000100)

  #define GPIOK_OTYPER_OT8_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT8_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT8_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT9_MASK    		((uint32_t)0x00000200)
  #define GPIOK_OTYPER_R_OT9_BIT     		(9)
  #define GPIOK_OTYPER_R_OT9_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT9_OP   			((uint32_t)0x00000200)

  #define GPIOK_OTYPER_OT9_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT9_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT9_OP   				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT10_MASK    		((uint32_t)0x00000400)
  #define GPIOK_OTYPER_R_OT10_BIT     		(10)
  #define GPIOK_OTYPER_R_OT10_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT10_OP   			((uint32_t)0x00000400)

  #define GPIOK_OTYPER_OT10_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT10_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT10_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT11_MASK    		((uint32_t)0x00000800)
  #define GPIOK_OTYPER_R_OT11_BIT     		(11)
  #define GPIOK_OTYPER_R_OT11_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT11_OP   			((uint32_t)0x00000800)

  #define GPIOK_OTYPER_OT11_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT11_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT11_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT12_MASK    		((uint32_t)0x00001000)
  #define GPIOK_OTYPER_R_OT12_BIT     		(12)
  #define GPIOK_OTYPER_R_OT12_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT12_OP   			((uint32_t)0x00001000)

  #define GPIOK_OTYPER_OT12_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT12_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT12_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT13_MASK    		((uint32_t)0x00002000)
  #define GPIOK_OTYPER_R_OT13_BIT     		(13)
  #define GPIOK_OTYPER_R_OT13_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT13_OP   			((uint32_t)0x00002000)

  #define GPIOK_OTYPER_OT13_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT13_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT13_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT14_MASK    		((uint32_t)0x00004000)
  #define GPIOK_OTYPER_R_OT14_BIT     		(14)
  #define GPIOK_OTYPER_R_OT14_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT14_OP   			((uint32_t)0x00004000)

  #define GPIOK_OTYPER_OT14_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT14_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT14_OP   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_OTYPER_R_OT15_MASK    		((uint32_t)0x00008000)
  #define GPIOK_OTYPER_R_OT15_BIT     		(15)
  #define GPIOK_OTYPER_R_OT15_PP    			((uint32_t)0x00000000)
  #define GPIOK_OTYPER_R_OT15_OP   			((uint32_t)0x00008000)

  #define GPIOK_OTYPER_OT15_MASK    			((uint32_t)0x00000001)
  #define GPIOK_OTYPER_OT15_PP 				((uint32_t)0x00000000)
  #define GPIOK_OTYPER_OT15_OP   			((uint32_t)0x00000001)
  /*--------*/




  /* TODO OSPEEDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 1 OSPEEDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_OSPEEDR            					(((GPIO_OSPEEDR_TypeDef*)(GPIOK_BASE+GPIO_OSPEEDR_OFFSET )))
  #define GPIOK_OSPEEDR_R          					(*((__IO uint32_t *)(GPIOK_BASE+GPIO_OSPEEDR_OFFSET)))


  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_R_OSPEEDR0_BIT     		(0)
  #define GPIOK_OSPEEDR_R_OSPEEDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR0_MED   		((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_R_OSPEEDR0_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_R_OSPEEDR0_VERY_HIGH  	((uint32_t)0x00000003)

  #define GPIOK_OSPEEDR_OSPEEDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR0_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR0_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR0_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOK_OSPEEDR_R_OSPEEDR1_BIT     		(2)
  #define GPIOK_OSPEEDR_R_OSPEEDR1_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR1_MED   		((uint32_t)0x00000004)
  #define GPIOK_OSPEEDR_R_OSPEEDR1_HIGH   		((uint32_t)0x00000008)
  #define GPIOK_OSPEEDR_R_OSPEEDR1_VERY_HIGH 	((uint32_t)0x0000000C)

  #define GPIOK_OSPEEDR_OSPEEDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR1_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR1_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR1_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOK_OSPEEDR_R_OSPEEDR2_BIT     		(4)
  #define GPIOK_OSPEEDR_R_OSPEEDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR2_MED   		((uint32_t)0x00000010)
  #define GPIOK_OSPEEDR_R_OSPEEDR2_HIGH   		((uint32_t)0x00000020)
  #define GPIOK_OSPEEDR_R_OSPEEDR2_VERY_HIGH 	((uint32_t)0x00000030)

  #define GPIOK_OSPEEDR_OSPEEDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR2_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR2_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR2_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOK_OSPEEDR_R_OSPEEDR3_BIT     		(6)
  #define GPIOK_OSPEEDR_R_OSPEEDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR3_MED   		((uint32_t)0x00000040)
  #define GPIOK_OSPEEDR_R_OSPEEDR3_HIGH   		((uint32_t)0x00000080)
  #define GPIOK_OSPEEDR_R_OSPEEDR3_VERY_HIGH  	((uint32_t)0x000000C0)

  #define GPIOK_OSPEEDR_OSPEEDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR3_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR3_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR3_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOK_OSPEEDR_R_OSPEEDR4_BIT     		(8)
  #define GPIOK_OSPEEDR_R_OSPEEDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR4_MED   		((uint32_t)0x00000100)
  #define GPIOK_OSPEEDR_R_OSPEEDR4_HIGH   		((uint32_t)0x00000200)
  #define GPIOK_OSPEEDR_R_OSPEEDR4_VERY_HIGH 	((uint32_t)0x00000300)

  #define GPIOK_OSPEEDR_OSPEEDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR4_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR4_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR4_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOK_OSPEEDR_R_OSPEEDR5_BIT     		(10)
  #define GPIOK_OSPEEDR_R_OSPEEDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR5_MED   		((uint32_t)0x00000400)
  #define GPIOK_OSPEEDR_R_OSPEEDR5_HIGH   		((uint32_t)0x00000800)
  #define GPIOK_OSPEEDR_R_OSPEEDR5_VERY_HIGH 	((uint32_t)0x00000C00)

  #define GPIOK_OSPEEDR_OSPEEDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR5_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR5_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR5_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOK_OSPEEDR_R_OSPEEDR6_BIT     		(12)
  #define GPIOK_OSPEEDR_R_OSPEEDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR6_MED   		((uint32_t)0x00001000)
  #define GPIOK_OSPEEDR_R_OSPEEDR6_HIGH   		((uint32_t)0x00002000)
  #define GPIOK_OSPEEDR_R_OSPEEDR6_VERY_HIGH 	((uint32_t)0x00003000)

  #define GPIOK_OSPEEDR_OSPEEDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR6_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR6_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR6_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOK_OSPEEDR_R_OSPEEDR7_BIT     		(14)
  #define GPIOK_OSPEEDR_R_OSPEEDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR7_MED   		((uint32_t)0x00004000)
  #define GPIOK_OSPEEDR_R_OSPEEDR7_HIGH   		((uint32_t)0x00008000)
  #define GPIOK_OSPEEDR_R_OSPEEDR7_VERY_HIGH 	((uint32_t)0x0000C000)

  #define GPIOK_OSPEEDR_OSPEEDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR7_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR7_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR7_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOK_OSPEEDR_R_OSPEEDR8_BIT     		(16)
  #define GPIOK_OSPEEDR_R_OSPEEDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR8_MED   		((uint32_t)0x00010000)
  #define GPIOK_OSPEEDR_R_OSPEEDR8_HIGH   		((uint32_t)0x00020000)
  #define GPIOK_OSPEEDR_R_OSPEEDR8_VERY_HIGH 	((uint32_t)0x00030000)

  #define GPIOK_OSPEEDR_OSPEEDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR8_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR8_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR8_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOK_OSPEEDR_R_OSPEEDR9_BIT     		(18)
  #define GPIOK_OSPEEDR_R_OSPEEDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR9_MED   		((uint32_t)0x00040000)
  #define GPIOK_OSPEEDR_R_OSPEEDR9_HIGH   		((uint32_t)0x00080000)
  #define GPIOK_OSPEEDR_R_OSPEEDR9_VERY_HIGH 	((uint32_t)0x000C0000)

  #define GPIOK_OSPEEDR_OSPEEDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR9_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR9_HIGH   			((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR9_VERY_HIGH   	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOK_OSPEEDR_R_OSPEEDR10_BIT     		(20)
  #define GPIOK_OSPEEDR_R_OSPEEDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR10_MED   		((uint32_t)0x00100000)
  #define GPIOK_OSPEEDR_R_OSPEEDR10_HIGH   		((uint32_t)0x00200000)
  #define GPIOK_OSPEEDR_R_OSPEEDR10_VERY_HIGH 	((uint32_t)0x00300000)

  #define GPIOK_OSPEEDR_OSPEEDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR10_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR10_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR10_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOK_OSPEEDR_R_OSPEEDR11_BIT     		(22)
  #define GPIOK_OSPEEDR_R_OSPEEDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR11_MED   		((uint32_t)0x00400000)
  #define GPIOK_OSPEEDR_R_OSPEEDR11_HIGH   		((uint32_t)0x00800000)
  #define GPIOK_OSPEEDR_R_OSPEEDR11_VERY_HIGH	((uint32_t)0x00C00000)

  #define GPIOK_OSPEEDR_OSPEEDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR11_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR11_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR11_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR12_BIT     		(24)
  #define GPIOK_OSPEEDR_R_OSPEEDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR12_MED   		((uint32_t)0x01000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR12_HIGH   		((uint32_t)0x02000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR12_VERY_HIGH	((uint32_t)0x03000000)

  #define GPIOK_OSPEEDR_OSPEEDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR12_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR12_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR12_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR13_BIT     		(26)
  #define GPIOK_OSPEEDR_R_OSPEEDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR13_MED   		((uint32_t)0x04000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR13_HIGH   		((uint32_t)0x08000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR13_VERY_HIGH	((uint32_t)0x0C000000)

  #define GPIOK_OSPEEDR_OSPEEDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR13_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR13_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR13_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR14_BIT     		(28)
  #define GPIOK_OSPEEDR_R_OSPEEDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR14_MED   		((uint32_t)0x10000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR14_HIGH   		((uint32_t)0x20000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR14_VERY_HIGH	((uint32_t)0x30000000)

  #define GPIOK_OSPEEDR_OSPEEDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR14_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR14_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR14_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/

  /*--------*/
  #define GPIOK_OSPEEDR_R_OSPEEDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR15_BIT     		(30)
  #define GPIOK_OSPEEDR_R_OSPEEDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR15_MED   		((uint32_t)0x40000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR15_HIGH   		((uint32_t)0x80000000)
  #define GPIOK_OSPEEDR_R_OSPEEDR15_VERY_HIGH	((uint32_t)0xC0000000)

  #define GPIOK_OSPEEDR_OSPEEDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOK_OSPEEDR_OSPEEDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOK_OSPEEDR_OSPEEDR15_MED   			((uint32_t)0x00000001)
  #define GPIOK_OSPEEDR_OSPEEDR15_HIGH   		((uint32_t)0x00000002)
  #define GPIOK_OSPEEDR_OSPEEDR15_VERY_HIGH  	((uint32_t)0x00000003)
  /*--------*/



  /* TODO PUPDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 PUPDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_PUPDR            					(((GPIO_PUPDR_TypeDef*)(GPIOK_BASE+GPIO_PUPDR_OFFSET )))
  #define GPIOK_PUPDR_R          					(*((__IO uint32_t *)(GPIOK_BASE+GPIO_PUPDR_OFFSET)))


  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_R_PUPDR0_BIT     		(0)
  #define GPIOK_PUPDR_R_PUPDR0_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_R_PUPDR0_PD   			((uint32_t)0x00000002)

  #define GPIOK_PUPDR_PUPDR0_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR0_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR0_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR0_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR1_MASK    		((uint32_t)0x0000000C)
  #define GPIOK_PUPDR_R_PUPDR1_BIT     		(2)
  #define GPIOK_PUPDR_R_PUPDR1_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR1_PU   			((uint32_t)0x00000004)
  #define GPIOK_PUPDR_R_PUPDR1_PD   			((uint32_t)0x00000008)

  #define GPIOK_PUPDR_PUPDR1_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR1_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR1_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR1_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR2_MASK    		((uint32_t)0x00000030)
  #define GPIOK_PUPDR_R_PUPDR2_BIT     		(4)
  #define GPIOK_PUPDR_R_PUPDR2_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR2_PU   			((uint32_t)0x00000010)
  #define GPIOK_PUPDR_R_PUPDR2_PD   			((uint32_t)0x00000020)

  #define GPIOK_PUPDR_PUPDR2_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR2_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR2_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR2_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR3_MASK    		((uint32_t)0x000000C0)
  #define GPIOK_PUPDR_R_PUPDR3_BIT     		(6)
  #define GPIOK_PUPDR_R_PUPDR3_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR3_PU   			((uint32_t)0x00000040)
  #define GPIOK_PUPDR_R_PUPDR3_PD   			((uint32_t)0x00000080)

  #define GPIOK_PUPDR_PUPDR3_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR3_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR3_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR3_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR4_MASK    		((uint32_t)0x00000300)
  #define GPIOK_PUPDR_R_PUPDR4_BIT     		(8)
  #define GPIOK_PUPDR_R_PUPDR4_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR4_PU   			((uint32_t)0x00000100)
  #define GPIOK_PUPDR_R_PUPDR4_PD   			((uint32_t)0x00000200)

  #define GPIOK_PUPDR_PUPDR4_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR4_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR4_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR4_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR5_MASK    		((uint32_t)0x00000C00)
  #define GPIOK_PUPDR_R_PUPDR5_BIT     		(10)
  #define GPIOK_PUPDR_R_PUPDR5_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR5_PU   			((uint32_t)0x00000400)
  #define GPIOK_PUPDR_R_PUPDR5_PD   			((uint32_t)0x00000800)

  #define GPIOK_PUPDR_PUPDR5_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR5_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR5_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR5_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR6_MASK    		((uint32_t)0x00003000)
  #define GPIOK_PUPDR_R_PUPDR6_BIT     		(12)
  #define GPIOK_PUPDR_R_PUPDR6_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR6_PU   			((uint32_t)0x00001000)
  #define GPIOK_PUPDR_R_PUPDR6_PD   			((uint32_t)0x00002000)

  #define GPIOK_PUPDR_PUPDR6_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR6_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR6_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR6_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR7_MASK    		((uint32_t)0x0000C000)
  #define GPIOK_PUPDR_R_PUPDR7_BIT     		(14)
  #define GPIOK_PUPDR_R_PUPDR7_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR7_PU   			((uint32_t)0x00004000)
  #define GPIOK_PUPDR_R_PUPDR7_PD   			((uint32_t)0x00008000)

  #define GPIOK_PUPDR_PUPDR7_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR7_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR7_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR7_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR8_MASK    		((uint32_t)0x00030000)
  #define GPIOK_PUPDR_R_PUPDR8_BIT     		(16)
  #define GPIOK_PUPDR_R_PUPDR8_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR8_PU   			((uint32_t)0x00010000)
  #define GPIOK_PUPDR_R_PUPDR8_PD   			((uint32_t)0x00020000))

  #define GPIOK_PUPDR_PUPDR8_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR8_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR8_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR8_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR9_MASK    		((uint32_t)0x000C0000)
  #define GPIOK_PUPDR_R_PUPDR9_BIT     		(18)
  #define GPIOK_PUPDR_R_PUPDR9_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR9_PU   			((uint32_t)0x00040000)
  #define GPIOK_PUPDR_R_PUPDR9_PD   			((uint32_t)0x00080000)

  #define GPIOK_PUPDR_PUPDR9_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR9_NO 				((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR9_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR9_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR10_MASK    		((uint32_t)0x00300000)
  #define GPIOK_PUPDR_R_PUPDR10_BIT     		(20)
  #define GPIOK_PUPDR_R_PUPDR10_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR10_PU   		((uint32_t)0x00100000)
  #define GPIOK_PUPDR_R_PUPDR10_PD   		((uint32_t)0x00200000)

  #define GPIOK_PUPDR_PUPDR10_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR10_NO 			((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR10_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR10_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR11_MASK    		((uint32_t)0x00C00000)
  #define GPIOK_PUPDR_R_PUPDR11_BIT     		(22)
  #define GPIOK_PUPDR_R_PUPDR11_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR11_PU   		((uint32_t)0x00400000)
  #define GPIOK_PUPDR_R_PUPDR11_PD   		((uint32_t)0x00800000)

  #define GPIOK_PUPDR_PUPDR11_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR11_NO 			((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR11_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR11_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR12_MASK    		((uint32_t)0x03000000)
  #define GPIOK_PUPDR_R_PUPDR12_BIT     		(24)
  #define GPIOK_PUPDR_R_PUPDR12_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR12_PU   		((uint32_t)0x01000000)
  #define GPIOK_PUPDR_R_PUPDR12_PD   		((uint32_t)0x02000000)

  #define GPIOK_PUPDR_PUPDR12_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR12_NO 			((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR12_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR12_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR13_MASK    		((uint32_t)0x0C000000)
  #define GPIOK_PUPDR_R_PUPDR13_BIT     		(26)
  #define GPIOK_PUPDR_R_PUPDR13_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR13_PU   		((uint32_t)0x04000000)
  #define GPIOK_PUPDR_R_PUPDR13_PD   		((uint32_t)0x08000000)

  #define GPIOK_PUPDR_PUPDR13_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR13_NO 			((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR13_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR13_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR14_MASK    		((uint32_t)0x30000000)
  #define GPIOK_PUPDR_R_PUPDR14_BIT     		(28)
  #define GPIOK_PUPDR_R_PUPDR14_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR14_PU   		((uint32_t)0x10000000)
  #define GPIOK_PUPDR_R_PUPDR14_PD   		((uint32_t)0x20000000)

  #define GPIOK_PUPDR_PUPDR14_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR14_NO 			((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR14_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR14_PD   			((uint32_t)0x00000002)
  /*--------*/

  /*--------*/
  #define GPIOK_PUPDR_R_PUPDR15_MASK    		((uint32_t)0xC0000000)
  #define GPIOK_PUPDR_R_PUPDR15_BIT     		(30)
  #define GPIOK_PUPDR_R_PUPDR15_NO    		((uint32_t)0x00000000)
  #define GPIOK_PUPDR_R_PUPDR15_PU   		((uint32_t)0x40000000)
  #define GPIOK_PUPDR_R_PUPDR15_PD   		((uint32_t)0x80000000)

  #define GPIOK_PUPDR_PUPDR15_MASK    		((uint32_t)0x00000003)
  #define GPIOK_PUPDR_PUPDR15_NO 			((uint32_t)0x00000000)
  #define GPIOK_PUPDR_PUPDR15_PU   			((uint32_t)0x00000001)
  #define GPIOK_PUPDR_PUPDR15_PD   			((uint32_t)0x00000002)
  /*--------*/



  /* TODO IDR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 4 IDR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_IDR            					(((GPIO_IDR_TypeDef*)(GPIOK_BASE+GPIO_IDR_OFFSET )))
  #define GPIOK_IDR_R          					(*((__I uint32_t *)(GPIOK_BASE+GPIO_IDR_OFFSET)))

  /*--------*/
  #define GPIOK_IDR_R_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_R_IDR0_BIT     		(0)
  #define GPIOK_IDR_R_IDR0_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOK_IDR_IDR0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR0_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR1_MASK    		((uint32_t)0x00000002)
  #define GPIOK_IDR_R_IDR1_BIT     		(1)
  #define GPIOK_IDR_R_IDR1_LOW   		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOK_IDR_IDR1_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR1_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR2_MASK    		((uint32_t)0x00000004)
  #define GPIOK_IDR_R_IDR2_BIT     		(2)
  #define GPIOK_IDR_R_IDR2_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOK_IDR_IDR2_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR2_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR3_MASK    		((uint32_t)0x00000008)
  #define GPIOK_IDR_R_IDR3_BIT     		(3)
  #define GPIOK_IDR_R_IDR3_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOK_IDR_IDR3_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR3_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR4_MASK    		((uint32_t)0x00000010)
  #define GPIOK_IDR_R_IDR4_BIT     		(4)
  #define GPIOK_IDR_R_IDR4_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOK_IDR_IDR4_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR4_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR5_MASK    		((uint32_t)0x00000020)
  #define GPIOK_IDR_R_IDR5_BIT     		(5)
  #define GPIOK_IDR_R_IDR5_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOK_IDR_IDR5_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR5_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR6_MASK    		((uint32_t)0x00000040)
  #define GPIOK_IDR_R_IDR6_BIT     		(6)
  #define GPIOK_IDR_R_IDR6_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOK_IDR_IDR6_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR6_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR7_MASK    		((uint32_t)0x00000080)
  #define GPIOK_IDR_R_IDR7_BIT     		(7)
  #define GPIOK_IDR_R_IDR7_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOK_IDR_IDR7_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR7_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR8_MASK    		((uint32_t)0x00000100)
  #define GPIOK_IDR_R_IDR8_BIT     		(8)
  #define GPIOK_IDR_R_IDR8_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOK_IDR_IDR8_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR8_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR9_MASK    		((uint32_t)0x00000200)
  #define GPIOK_IDR_R_IDR9_BIT     		(9)
  #define GPIOK_IDR_R_IDR9_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOK_IDR_IDR9_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR9_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR10_MASK    		((uint32_t)0x00000400)
  #define GPIOK_IDR_R_IDR10_BIT     		(10)
  #define GPIOK_IDR_R_IDR10_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOK_IDR_IDR10_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR10_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR11_MASK    		((uint32_t)0x00000800)
  #define GPIOK_IDR_R_IDR11_BIT     		(11)
  #define GPIOK_IDR_R_IDR11_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOK_IDR_IDR11_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR11_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR12_MASK    		((uint32_t)0x00001000)
  #define GPIOK_IDR_R_IDR12_BIT     		(12)
  #define GPIOK_IDR_R_IDR12_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOK_IDR_IDR12_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR12_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR13_MASK    		((uint32_t)0x00002000)
  #define GPIOK_IDR_R_IDR13_BIT     		(13)
  #define GPIOK_IDR_R_IDR13_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOK_IDR_IDR13_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR13_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR14_MASK    		((uint32_t)0x00004000)
  #define GPIOK_IDR_R_IDR14_BIT     		(14)
  #define GPIOK_IDR_R_IDR14_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOK_IDR_IDR14_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR14_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_IDR_R_IDR15_MASK    		((uint32_t)0x00008000)
  #define GPIOK_IDR_R_IDR15_BIT     		(15)
  #define GPIOK_IDR_R_IDR15_LOW    		((uint32_t)0x00000000)
  #define GPIOK_IDR_R_IDR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOK_IDR_IDR15_MASK    		((uint32_t)0x00000001)
  #define GPIOK_IDR_IDR15_LOW 			((uint32_t)0x00000000)
  #define GPIOK_IDR_IDR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO ODR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 5 ODR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_ODR            					(((GPIO_ODR_TypeDef*)(GPIOK_BASE+GPIO_ODR_OFFSET )))
  #define GPIOK_ODR_R          					(*((__IO uint32_t *)(GPIOK_BASE+GPIO_ODR_OFFSET)))

  /*--------*/
  #define GPIOK_ODR_R_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_R_ODR0_BIT     		(0)
  #define GPIOK_ODR_R_ODR0_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR0_HIGH   		((uint32_t)0x00000001)

  #define GPIOK_ODR_ODR0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR0_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR0_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR1_MASK    		((uint32_t)0x00000002)
  #define GPIOK_ODR_R_ODR1_BIT     		(1)
  #define GPIOK_ODR_R_ODR1_LOW   		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR1_HIGH  		((uint32_t)0x00000002)

  #define GPIOK_ODR_ODR1_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR1_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR1_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR2_MASK    		((uint32_t)0x00000004)
  #define GPIOK_ODR_R_ODR2_BIT     		(2)
  #define GPIOK_ODR_R_ODR2_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR2_HIGH   		((uint32_t)0x00000004)

  #define GPIOK_ODR_ODR2_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR2_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR2_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR3_MASK    		((uint32_t)0x00000008)
  #define GPIOK_ODR_R_ODR3_BIT     		(3)
  #define GPIOK_ODR_R_ODR3_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR3_HIGH   		((uint32_t)0x00000008)

  #define GPIOK_ODR_ODR3_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR3_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR3_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR4_MASK    		((uint32_t)0x00000010)
  #define GPIOK_ODR_R_ODR4_BIT     		(4)
  #define GPIOK_ODR_R_ODR4_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR4_HIGH   		((uint32_t)0x00000010)

  #define GPIOK_ODR_ODR4_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR4_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR4_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR5_MASK    		((uint32_t)0x00000020)
  #define GPIOK_ODR_R_ODR5_BIT     		(5)
  #define GPIOK_ODR_R_ODR5_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR5_HIGH   		((uint32_t)0x00000020)

  #define GPIOK_ODR_ODR5_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR5_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR5_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR6_MASK    		((uint32_t)0x00000040)
  #define GPIOK_ODR_R_ODR6_BIT     		(6)
  #define GPIOK_ODR_R_ODR6_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR6_HIGH   		((uint32_t)0x00000040)

  #define GPIOK_ODR_ODR6_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR6_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR6_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR7_MASK    		((uint32_t)0x00000080)
  #define GPIOK_ODR_R_ODR7_BIT     		(7)
  #define GPIOK_ODR_R_ODR7_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR7_HIGH   		((uint32_t)0x00000080)

  #define GPIOK_ODR_ODR7_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR7_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR7_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR8_MASK    		((uint32_t)0x00000100)
  #define GPIOK_ODR_R_ODR8_BIT     		(8)
  #define GPIOK_ODR_R_ODR8_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR8_HIGH   		((uint32_t)0x00000100)

  #define GPIOK_ODR_ODR8_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR8_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR8_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR9_MASK    		((uint32_t)0x00000200)
  #define GPIOK_ODR_R_ODR9_BIT     		(9)
  #define GPIOK_ODR_R_ODR9_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR9_HIGH   		((uint32_t)0x00000200)

  #define GPIOK_ODR_ODR9_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR9_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR9_HIGH   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR10_MASK    		((uint32_t)0x00000400)
  #define GPIOK_ODR_R_ODR10_BIT     		(10)
  #define GPIOK_ODR_R_ODR10_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR10_HIGH   		((uint32_t)0x00000400)

  #define GPIOK_ODR_ODR10_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR10_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR10_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR11_MASK    		((uint32_t)0x00000800)
  #define GPIOK_ODR_R_ODR11_BIT     		(11)
  #define GPIOK_ODR_R_ODR11_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR11_HIGH   		((uint32_t)0x00000800)

  #define GPIOK_ODR_ODR11_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR11_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR11_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR12_MASK    		((uint32_t)0x00001000)
  #define GPIOK_ODR_R_ODR12_BIT     		(12)
  #define GPIOK_ODR_R_ODR12_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR12_HIGH   		((uint32_t)0x00001000)

  #define GPIOK_ODR_ODR12_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR12_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR12_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR13_MASK    		((uint32_t)0x00002000)
  #define GPIOK_ODR_R_ODR13_BIT     		(13)
  #define GPIOK_ODR_R_ODR13_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR13_HIGH   		((uint32_t)0x00002000)

  #define GPIOK_ODR_ODR13_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR13_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR13_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR14_MASK    		((uint32_t)0x00004000)
  #define GPIOK_ODR_R_ODR14_BIT     		(14)
  #define GPIOK_ODR_R_ODR14_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR14_HIGH   		((uint32_t)0x00004000)

  #define GPIOK_ODR_ODR14_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR14_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR14_HIGH   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_ODR_R_ODR15_MASK    		((uint32_t)0x00008000)
  #define GPIOK_ODR_R_ODR15_BIT     		(15)
  #define GPIOK_ODR_R_ODR15_LOW    		((uint32_t)0x00000000)
  #define GPIOK_ODR_R_ODR15_HIGH   		((uint32_t)0x00008000)

  #define GPIOK_ODR_ODR15_MASK    		((uint32_t)0x00000001)
  #define GPIOK_ODR_ODR15_LOW 			((uint32_t)0x00000000)
  #define GPIOK_ODR_ODR15_HIGH   		((uint32_t)0x00000001)
  /*--------*/



  /* TODO SET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 6 SET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_SET            					(((GPIO_SET_TypeDef*)(GPIOK_BASE+GPIO_SET_OFFSET )))
  #define GPIOK_SET_R          					(*((__IO uint16_t *)(GPIOK_BASE+GPIO_SET_OFFSET)))

  /*--------*/
  #define GPIOK_SET_R_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_R_SET0_BIT     		(0)
  #define GPIOK_SET_R_SET0_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET0_SET   		((uint32_t)0x00000001)

  #define GPIOK_SET_SET0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET0_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET0_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET1_MASK    		((uint32_t)0x00000002)
  #define GPIOK_SET_R_SET1_BIT     		(1)
  #define GPIOK_SET_R_SET1_NA   			((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET1_SET  			((uint32_t)0x00000002)

  #define GPIOK_SET_SET1_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET1_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET1_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET2_MASK    		((uint32_t)0x00000004)
  #define GPIOK_SET_R_SET2_BIT     		(2)
  #define GPIOK_SET_R_SET2_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET2_SET   		((uint32_t)0x00000004)

  #define GPIOK_SET_SET2_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET2_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET2_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET3_MASK    		((uint32_t)0x00000008)
  #define GPIOK_SET_R_SET3_BIT     		(3)
  #define GPIOK_SET_R_SET3_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET3_SET   		((uint32_t)0x00000008)

  #define GPIOK_SET_SET3_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET3_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET3_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET4_MASK    		((uint32_t)0x00000010)
  #define GPIOK_SET_R_SET4_BIT     		(4)
  #define GPIOK_SET_R_SET4_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET4_SET   		((uint32_t)0x00000010)

  #define GPIOK_SET_SET4_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET4_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET4_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET5_MASK    		((uint32_t)0x00000020)
  #define GPIOK_SET_R_SET5_BIT     		(5)
  #define GPIOK_SET_R_SET5_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET5_SET   		((uint32_t)0x00000020)

  #define GPIOK_SET_SET5_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET5_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET5_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET6_MASK    		((uint32_t)0x00000040)
  #define GPIOK_SET_R_SET6_BIT     		(6)
  #define GPIOK_SET_R_SET6_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET6_SET   		((uint32_t)0x00000040)

  #define GPIOK_SET_SET6_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET6_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET6_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET7_MASK    		((uint32_t)0x00000080)
  #define GPIOK_SET_R_SET7_BIT     		(7)
  #define GPIOK_SET_R_SET7_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET7_SET   		((uint32_t)0x00000080)

  #define GPIOK_SET_SET7_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET7_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET7_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET8_MASK    		((uint32_t)0x00000100)
  #define GPIOK_SET_R_SET8_BIT     		(8)
  #define GPIOK_SET_R_SET8_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET8_SET   		((uint32_t)0x00000100)

  #define GPIOK_SET_SET8_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET8_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET8_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET9_MASK    		((uint32_t)0x00000200)
  #define GPIOK_SET_R_SET9_BIT     		(9)
  #define GPIOK_SET_R_SET9_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET9_SET   		((uint32_t)0x00000200)

  #define GPIOK_SET_SET9_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET9_NA 				((uint32_t)0x00000000)
  #define GPIOK_SET_SET9_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET10_MASK    		((uint32_t)0x00000400)
  #define GPIOK_SET_R_SET10_BIT     		(10)
  #define GPIOK_SET_R_SET10_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET10_SET   		((uint32_t)0x00000400)

  #define GPIOK_SET_SET10_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET10_NA 			((uint32_t)0x00000000)
  #define GPIOK_SET_SET10_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET11_MASK    		((uint32_t)0x00000800)
  #define GPIOK_SET_R_SET11_BIT     		(11)
  #define GPIOK_SET_R_SET11_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET11_SET   		((uint32_t)0x00000800)

  #define GPIOK_SET_SET11_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET11_NA 			((uint32_t)0x00000000)
  #define GPIOK_SET_SET11_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET12_MASK    		((uint32_t)0x00001000)
  #define GPIOK_SET_R_SET12_BIT     		(12)
  #define GPIOK_SET_R_SET12_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET12_SET   		((uint32_t)0x00001000)

  #define GPIOK_SET_SET12_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET12_NA 			((uint32_t)0x00000000)
  #define GPIOK_SET_SET12_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET13_MASK    		((uint32_t)0x00002000)
  #define GPIOK_SET_R_SET13_BIT     		(13)
  #define GPIOK_SET_R_SET13_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET13_SET   		((uint32_t)0x00002000)

  #define GPIOK_SET_SET13_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET13_NA 			((uint32_t)0x00000000)
  #define GPIOK_SET_SET13_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET14_MASK    		((uint32_t)0x00004000)
  #define GPIOK_SET_R_SET14_BIT     		(14)
  #define GPIOK_SET_R_SET14_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET14_SET   		((uint32_t)0x00004000)

  #define GPIOK_SET_SET14_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET14_NA 			((uint32_t)0x00000000)
  #define GPIOK_SET_SET14_SET   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_SET_R_SET15_MASK    		((uint32_t)0x00008000)
  #define GPIOK_SET_R_SET15_BIT     		(15)
  #define GPIOK_SET_R_SET15_NA    		((uint32_t)0x00000000)
  #define GPIOK_SET_R_SET15_SET   		((uint32_t)0x00008000)

  #define GPIOK_SET_SET15_MASK    		((uint32_t)0x00000001)
  #define GPIOK_SET_SET15_NA 			((uint32_t)0x00000000)
  #define GPIOK_SET_SET15_SET   			((uint32_t)0x00000001)
  /*--------*/


  /* TODO RESET */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 7 RESET ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_RESET            					(((GPIO_RESET_TypeDef*)(GPIOK_BASE+GPIO_RESET_OFFSET )))
  #define GPIOK_RESET_R          					(*((__IO uint16_t *)(GPIOK_BASE+GPIO_RESET_OFFSET)))


  /*--------*/
  #define GPIOK_RESET_R_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_R_RESET0_BIT     		(0)
  #define GPIOK_RESET_R_RESET0_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET0_RESET   		((uint32_t)0x00000001)

  #define GPIOK_RESET_RESET0_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET0_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET0_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET1_MASK    		((uint32_t)0x00000002)
  #define GPIOK_RESET_R_RESET1_BIT     		(1)
  #define GPIOK_RESET_R_RESET1_NA   			((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET1_RESET  		((uint32_t)0x00000002)

  #define GPIOK_RESET_RESET1_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET1_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET1_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET2_MASK    		((uint32_t)0x00000004)
  #define GPIOK_RESET_R_RESET2_BIT     		(2)
  #define GPIOK_RESET_R_RESET2_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET2_RESET   		((uint32_t)0x00000004)

  #define GPIOK_RESET_RESET2_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET2_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET2_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET3_MASK    		((uint32_t)0x00000008)
  #define GPIOK_RESET_R_RESET3_BIT     		(3)
  #define GPIOK_RESET_R_RESET3_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET3_RESET   		((uint32_t)0x00000008)

  #define GPIOK_RESET_RESET3_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET3_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET3_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET4_MASK    		((uint32_t)0x00000010)
  #define GPIOK_RESET_R_RESET4_BIT     		(4)
  #define GPIOK_RESET_R_RESET4_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET4_RESET   		((uint32_t)0x00000010)

  #define GPIOK_RESET_RESET4_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET4_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET4_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET5_MASK    		((uint32_t)0x00000020)
  #define GPIOK_RESET_R_RESET5_BIT     		(5)
  #define GPIOK_RESET_R_RESET5_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET5_RESET   		((uint32_t)0x00000020)

  #define GPIOK_RESET_RESET5_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET5_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET5_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET6_MASK    		((uint32_t)0x00000040)
  #define GPIOK_RESET_R_RESET6_BIT     		(6)
  #define GPIOK_RESET_R_RESET6_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET6_RESET   		((uint32_t)0x00000040)

  #define GPIOK_RESET_RESET6_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET6_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET6_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET7_MASK    		((uint32_t)0x00000080)
  #define GPIOK_RESET_R_RESET7_BIT     		(7)
  #define GPIOK_RESET_R_RESET7_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET7_RESET   		((uint32_t)0x00000080)

  #define GPIOK_RESET_RESET7_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET7_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET7_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET8_MASK    		((uint32_t)0x00000100)
  #define GPIOK_RESET_R_RESET8_BIT     		(8)
  #define GPIOK_RESET_R_RESET8_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET8_RESET   		((uint32_t)0x00000100)

  #define GPIOK_RESET_RESET8_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET8_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET8_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET9_MASK    		((uint32_t)0x00000200)
  #define GPIOK_RESET_R_RESET9_BIT     		(9)
  #define GPIOK_RESET_R_RESET9_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET9_RESET   		((uint32_t)0x00000200)

  #define GPIOK_RESET_RESET9_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET9_NA 				((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET9_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET10_MASK    		((uint32_t)0x00000400)
  #define GPIOK_RESET_R_RESET10_BIT     		(10)
  #define GPIOK_RESET_R_RESET10_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET10_RESET   		((uint32_t)0x00000400)

  #define GPIOK_RESET_RESET10_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET10_NA 			((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET10_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET11_MASK    		((uint32_t)0x00000800)
  #define GPIOK_RESET_R_RESET11_BIT     		(11)
  #define GPIOK_RESET_R_RESET11_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET11_RESET   		((uint32_t)0x00000800)

  #define GPIOK_RESET_RESET11_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET11_NA 			((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET11_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET12_MASK    		((uint32_t)0x00001000)
  #define GPIOK_RESET_R_RESET12_BIT     		(12)
  #define GPIOK_RESET_R_RESET12_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET12_RESET   		((uint32_t)0x00001000)

  #define GPIOK_RESET_RESET12_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET12_NA 			((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET12_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET13_MASK    		((uint32_t)0x00002000)
  #define GPIOK_RESET_R_RESET13_BIT     		(13)
  #define GPIOK_RESET_R_RESET13_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET13_RESET   		((uint32_t)0x00002000)

  #define GPIOK_RESET_RESET13_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET13_NA 			((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET13_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET14_MASK    		((uint32_t)0x00004000)
  #define GPIOK_RESET_R_RESET14_BIT     		(14)
  #define GPIOK_RESET_R_RESET14_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET14_RESET   		((uint32_t)0x00004000)

  #define GPIOK_RESET_RESET14_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET14_NA 			((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET14_RESET   		((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_RESET_R_RESET15_MASK    		((uint32_t)0x00008000)
  #define GPIOK_RESET_R_RESET15_BIT     		(15)
  #define GPIOK_RESET_R_RESET15_NA    		((uint32_t)0x00000000)
  #define GPIOK_RESET_R_RESET15_RESET   		((uint32_t)0x00008000)

  #define GPIOK_RESET_RESET15_MASK    		((uint32_t)0x00000001)
  #define GPIOK_RESET_RESET15_NA 			((uint32_t)0x00000000)
  #define GPIOK_RESET_RESET15_RESET   		((uint32_t)0x00000001)
  /*--------*/


  /* TODO LCKR */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 8 LCKR ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define GPIOK_LCKR            					(((GPIO_LCKR_TypeDef*)(GPIOK_BASE+GPIO_LCKR_OFFSET )))
  #define GPIOK_LCKR_R          					(*((__IO uint16_t *)(GPIOK_BASE+GPIO_LCKR_OFFSET)))

  /*--------*/
  #define GPIOK_LCKR_R_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_R_LCK0_BIT     			(0)
  #define GPIOK_LCKR_R_LCK0_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK0_LOCK   			((uint32_t)0x00000001)

  #define GPIOK_LCKR_LCK0_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK0_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK0_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK1_MASK    			((uint32_t)0x00000002)
  #define GPIOK_LCKR_R_LCK1_BIT     			(1)
  #define GPIOK_LCKR_R_LCK1_UNLOCK   		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK1_LOCK  			((uint32_t)0x00000002)

  #define GPIOK_LCKR_LCK1_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK1_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK1_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK2_MASK    			((uint32_t)0x00000004)
  #define GPIOK_LCKR_R_LCK2_BIT     			(2)
  #define GPIOK_LCKR_R_LCK2_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK2_LOCK   			((uint32_t)0x00000004)

  #define GPIOK_LCKR_LCK2_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK2_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK2_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK3_MASK    			((uint32_t)0x00000008)
  #define GPIOK_LCKR_R_LCK3_BIT     			(3)
  #define GPIOK_LCKR_R_LCK3_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK3_LOCK   			((uint32_t)0x00000008)

  #define GPIOK_LCKR_LCK3_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK3_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK3_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK4_MASK    			((uint32_t)0x00000010)
  #define GPIOK_LCKR_R_LCK4_BIT     			(4)
  #define GPIOK_LCKR_R_LCK4_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK4_LOCK   			((uint32_t)0x00000010)

  #define GPIOK_LCKR_LCK4_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK4_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK4_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK5_MASK    			((uint32_t)0x00000020)
  #define GPIOK_LCKR_R_LCK5_BIT     			(5)
  #define GPIOK_LCKR_R_LCK5_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK5_LOCK   			((uint32_t)0x00000020)

  #define GPIOK_LCKR_LCK5_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK5_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK5_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK6_MASK    			((uint32_t)0x00000040)
  #define GPIOK_LCKR_R_LCK6_BIT     			(6)
  #define GPIOK_LCKR_R_LCK6_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK6_LOCK   			((uint32_t)0x00000040)

  #define GPIOK_LCKR_LCK6_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK6_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK6_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK7_MASK    			((uint32_t)0x00000080)
  #define GPIOK_LCKR_R_LCK7_BIT    	 		(7)
  #define GPIOK_LCKR_R_LCK7_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK7_LOCK   			((uint32_t)0x00000080)

  #define GPIOK_LCKR_LCK7_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK7_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK7_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK8_MASK    			((uint32_t)0x00000100)
  #define GPIOK_LCKR_R_LCK8_BIT     			(8)
  #define GPIOK_LCKR_R_LCK8_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK8_LOCK   			((uint32_t)0x00000100)

  #define GPIOK_LCKR_LCK8_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK8_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK8_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK9_MASK    			((uint32_t)0x00000200)
  #define GPIOK_LCKR_R_LCK9_BIT     			(9)
  #define GPIOK_LCKR_R_LCK9_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK9_LOCK   			((uint32_t)0x00000200)

  #define GPIOK_LCKR_LCK9_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK9_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK9_LOCK  				((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK10_MASK    		((uint32_t)0x00000400)
  #define GPIOK_LCKR_R_LCK10_BIT     		(10)
  #define GPIOK_LCKR_R_LCK10_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK10_LOCK   			((uint32_t)0x00000400)

  #define GPIOK_LCKR_LCK10_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK10_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK10_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK11_MASK    		((uint32_t)0x00000800)
  #define GPIOK_LCKR_R_LCK11_BIT     		(11)
  #define GPIOK_LCKR_R_LCK11_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK11_LOCK   			((uint32_t)0x00000800)

  #define GPIOK_LCKR_LCK11_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK11_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK11_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK12_MASK    		((uint32_t)0x00001000)
  #define GPIOK_LCKR_R_LCK12_BIT     		(12)
  #define GPIOK_LCKR_R_LCK12_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK12_LOCK   			((uint32_t)0x00001000)

  #define GPIOK_LCKR_LCK12_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK12_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK12_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK13_MASK    		((uint32_t)0x00002000)
  #define GPIOK_LCKR_R_LCK13_BIT     		(13)
  #define GPIOK_LCKR_R_LCK13_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK13_LOCK   			((uint32_t)0x00002000)

  #define GPIOK_LCKR_LCK13_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK13_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK13_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK14_MASK    		((uint32_t)0x00004000)
  #define GPIOK_LCKR_R_LCK14_BIT     		(14)
  #define GPIOK_LCKR_R_LCK14_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK14_LOCK   			((uint32_t)0x00004000)

  #define GPIOK_LCKR_LCK14_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK14_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK14_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCK15_MASK    		((uint32_t)0x00008000)
  #define GPIOK_LCKR_R_LCK15_BIT     		(15)
  #define GPIOK_LCKR_R_LCK15_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCK15_LOCK   			((uint32_t)0x00008000)

  #define GPIOK_LCKR_LCK15_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCK15_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCK15_LOCK   			((uint32_t)0x00000001)
  /*--------*/

  /*--------*/
  #define GPIOK_LCKR_R_LCKK_MASK    			((uint32_t)0x00010000)
  #define GPIOK_LCKR_R_LCKK_BIT     			(16)
  #define GPIOK_LCKR_R_LCKK_UNLOCK    		((uint32_t)0x00000000)
  #define GPIOK_LCKR_R_LCKK_LOCK   			((uint32_t)0x00010000)

  #define GPIOK_LCKR_LCKK_MASK    			((uint32_t)0x00000001)
  #define GPIOK_LCKR_LCKK_UNLOCK 			((uint32_t)0x00000000)
  #define GPIOK_LCKR_LCKK_LOCK   			((uint32_t)0x00000001)
  /*--------*/


 /* TODO AFRL */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define GPIOK_AFRL            		(((GPIO_AFRL_TypeDef*)(GPIOK_BASE+GPIO_AFRL_OFFSET )))
 #define GPIOK_AFRL_R          		(*((__IO uint32_t *)(GPIOK_BASE+GPIO_AFRL_OFFSET)))

 /*--------*/
 #define GPIOK_AFRL_R_AFR0_MASK    			((uint32_t)0x0000000F)
 #define GPIOK_AFRL_R_AFR0_BIT     			(0)

 #define GPIOK_AFRL_AFR0_MASK    			((uint32_t)0x0000000F)
 /*--------*/

/* TODO AFRH */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 AFR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define GPIOK_AFRH            		(((GPIO_AFRH_TypeDef*)(GPIOK_BASE+GPIO_AFRH_OFFSET )))
#define GPIOK_AFRH_R          		(*((__IO uint32_t *)(GPIOK_BASE+GPIO_AFRH_OFFSET)))

/*--------*/
#define GPIOK_AFRH_R_AFR8_MASK    			((uint32_t)0x0000000F)
#define GPIOK_AFRH_R_AFR8_BIT     			(0)

#define GPIOK_AFRH_AFR8_MASK    			((uint32_t)0x0000000F)
/*--------*/









#endif /* GPIO_H_ */
