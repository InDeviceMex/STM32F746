/*
 * RNG.h
 *
 *  Created on: 23/02/2019
 *      Author: InDev
 */

#ifndef RNG_H_
#define RNG_H_


#include "Core.h"
#include "SYSCFG.h"
#include "RCC.h"
#include "GPIO.h"
#include "NVIC.h"
#include <stdint.h>



#define RNG_BASE              (0x40000000U +0x10000000U+ 0x60800U)

typedef __IO struct
{
	 uint32_t		reserved0:2;
	__IO uint32_t	RNGEN:1;
	__IO uint32_t	IE:1;
	 uint32_t		reserved1:1;
	__IO uint32_t	CED:1;
	 uint32_t		reserved2:26;
}RNG_CR_TypeDef;


typedef __IO struct
{
	__I  uint32_t	DRDY:1;
	__I  uint32_t	CECS:1;
	__I  uint32_t	SECS:1;
	 uint32_t		reserved0:2;
	__IO  uint32_t	CEIS:1;
	__IO  uint32_t	SEIS:1;
		 uint32_t	reserved1:25;
}RNG_SR_TypeDef;


typedef __IO struct
{
	__IO uint32_t	RNDATAL:16;
	__IO uint32_t	RNDATAH:16;
}RNG_DR_TypeDef;


typedef struct
{
	union
	{
		__IO uint32_t 		CR;    /*!< EXTI Interrupt mask register,            Address offset: 0x00 */
		RNG_CR_TypeDef 		CR_Bit;    /*!< EXTI Interrupt mask register,            Address offset: 0x00 */
	};
	union
	{
		__IO uint32_t 		SR;    /*!< EXTI Event mask register,                Address offset: 0x04 */
	    RNG_SR_TypeDef 	SR_Bit;    /*!< EXTI Event mask register,                Address offset: 0x04 */
	};
	union
	{
		__IO uint32_t 		DR;   /*!< EXTI Rising trigger selection register,  Address offset: 0x08 */
		RNG_DR_TypeDef 		DR_Bit;   /*!< EXTI Rising trigger selection register,  Address offset: 0x08 */
	};

} RNG_TypeDef;


#define RNG                ((RNG_TypeDef *) RNG_BASE)


#define	RNG_CR_OFFSET						((uint32_t)0x00000000)
#define	RNG_SR_OFFSET						((uint32_t)0x00000004)
#define	RNG_DR_OFFSET						((uint32_t)0x00000008)


/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RNG_CR            					(((RNG_CR_TypeDef*)(RNG_BASE+RNG_CR_OFFSET )))
#define RNG_CR_R          					(*((__IO uint32_t *)(RNG_BASE+RNG_CR_OFFSET)))

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 SR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RNG_SR            					(((RNG_SR_TypeDef*)(RNG_BASE+RNG_SR_OFFSET )))
#define RNG_SR_R          					(*((__IO uint32_t *)(RNG_BASE+RNG_SR_OFFSET)))

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 DR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define RNG_DR            					(((RNG_DR_TypeDef*)(RNG_BASE+RNG_DR_OFFSET )))
#define RNG_DR_R          					(*((__IO uint32_t *)(RNG_BASE+RNG_DR_OFFSET)))

#endif /* RNG_H_ */
