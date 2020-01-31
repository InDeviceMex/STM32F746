/*
 * SysTick.h
 *
 *  Created on: 24 jul. 2018
 *      Author: InDev
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include "Core.h"
#include "RCC.h"
#include "SCB.h"
#include <stdint.h>                      		/* standard types definitions                      */

#define SysTick_BASE            ((uint32_t)0xE000E000)

typedef __IO struct
{
    __IO uint32_t ENABLE     		:1;
    __IO uint32_t TICKINT    		:1;
    __IO uint32_t CLKSOURCE  		:1;
         uint32_t reserved   		:13;
    __I  uint32_t COUNTFLAG  		:1;
         uint32_t reserved1  		:15;
}SYST_CSR_TypeDef;



typedef __IO struct
{
    __IO uint32_t RELOAD   			:24;
         uint32_t reserved 			:8;
}SYST_RVR_TypeDef;



typedef __IO struct
{
    __IO uint32_t CURRENT  			:24;
         uint32_t reserved 			:8;
}SYST_CVR_TypeDef;


typedef __IO struct
{
    __IO uint32_t TENMS  			:24;
         uint32_t reserved 			:6;
    __I  uint32_t SKEW  			:1;
    __I  uint32_t NOREF	  			:1;
}SYST_CALIB_TypeDef;


typedef __IO struct
{
    uint32_t            	reserved[4];
    union
    {
        __IO uint32_t      	CSR;
        SYST_CSR_TypeDef    CSR_Bit;
    };
    union
    {
        __IO uint32_t      	RVR;
        SYST_RVR_TypeDef    RVR_Bit;
    };
    union
    {
        __IO uint32_t       CVR;
        SYST_CVR_TypeDef    CVR_Bit;
    };
    union
    {
        __I uint32_t        CALIB;
        SYST_CALIB_TypeDef  CALIB_Bit;
    };
}SysTick_TypeDef;



#define SysTick                 (((SysTick_TypeDef*)(SysTick_BASE)))



#define SysTick_CSR_OFFSET    	((uint32_t)0x010)
#define SysTick_RVR_OFFSET  	((uint32_t)0x014)
#define SysTick_CVR_OFFSET 		((uint32_t)0x018)
#define SysTick_CALIB_OFFSET 	((uint32_t)0x01C)

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SysTick_CSR          			(((SYST_CSR_TypeDef*)(SysTick_BASE+SysTick_CSR_OFFSET)))
#define SysTick_CSR_R        			(*((__IO uint32_t *)(SysTick_BASE+SysTick_CSR_OFFSET)))


typedef enum
{
	SysTick_AHB8,
	SysTick_SYSCLK,
}TICK_CLKSOURCE;

/*--------*/
#define SysTick_CSR_R_COUNTFLAG_MASK        ((uint32_t)0x00010000)
#define SysTick_CSR_R_COUNTFLAG_BIT         (16)
#define SysTick_CSR_R_COUNTFLAG_COMPLETE    ((uint32_t)0x00010000)
#define SysTick_CSR_R_COUNTFLAG_NOCOMPLETE  ((uint32_t)0x00000000)

#define SysTick_CSR_COUNTFLAG_MASK          ((uint32_t)0x00000001)
#define SysTick_CSR_COUNTFLAG_COMPLETE      ((uint32_t)0x00000001)
#define SysTick_CSR_COUNTFLAG_NOCOMPLETE    ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SysTick_CSR_R_CLKSOURCE_MASK   ((uint32_t)0x00000004)
#define SysTick_CSR_R_CLKSOURCE_BIT    (2)
#define SysTick_CSR_R_CLKSOURCE_AHB8   ((uint32_t)0x00000000)
#define SysTick_CSR_R_CLKSOURCE_SYSCLK ((uint32_t)0x00000004)

#define SysTick_CSR_CLKSOURCE_MASK     ((uint32_t)0x00000001)
#define SysTick_CSR_CLKSOURCE_AHB8     ((uint32_t)0x00000000)
#define SysTick_CSR_CLKSOURCE_SYSCLK   ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SysTick_CSR_R_TICKINT_MASK     ((uint32_t)0x00000002)
#define SysTick_CSR_R_TICKINT_BIT      (1)
#define SysTick_CSR_R_TICKINT_EN       ((uint32_t)0x00000002)
#define SysTick_CSR_R_TICKINT_DIS      ((uint32_t)0x00000000)

#define SysTick_CSR_TICKINT_MASK       ((uint32_t)0x00000001)
#define SysTick_CSR_TICKINT_EN         ((uint32_t)0x00000001)
#define SysTick_CSR_TICKINT_DIS        ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SysTick_CSR_R_ENABLE_MASK    	((uint32_t)0x00000001)
#define SysTick_CSR_R_ENABLE_BIT     	(0)
#define SysTick_CSR_R_ENABLE_EN      	((uint32_t)0x00000001)
#define SysTick_CSR_R_ENABLE_DIS     	((uint32_t)0x00000000)

#define SysTick_CSR_ENABLE_MASK      	((uint32_t)0x00000001)
#define SysTick_CSR_ENABLE_EN        	((uint32_t)0x00000001)
#define SysTick_CSR_ENABLE_DIS       	((uint32_t)0x00000000)
/*--------*/

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 LOAD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SysTick_RVR          			(((SYST_RVR_TypeDef*)(SysTick_BASE+SysTick_RVR_OFFSET)))
#define SysTick_RVR_R        			(*((__IO uint32_t *)(SysTick_BASE+SysTick_RVR_OFFSET)))

/*--------*/
#define SysTick_RVR_R_RELOAD_MASK    	((uint32_t)0x00FFFFFF)
#define SysTick_RVR_R_RELOAD_BIT     	(0)

#define SysTick_RVR_RELOAD_MASK      	((uint32_t)0x00FFFFFF)
/*--------*/

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 VAL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SysTick_CVR          			(((SYST_CVR_TypeDef*)(SysTick_BASE+SysTick_CVR_OFFSET)))
#define SysTick_CVR_R        			(*((__IO uint32_t *)(SysTick_BASE+SysTick_CVR_OFFSET)))

/*--------*/
#define SysTick_CVR_R_CURRENT_MASK    ((uint32_t)0x00FFFFFF)
#define SysTick_CVR_R_CURRENT_BIT     (0)

#define SysTick_CVR_CURRENT_MASK      ((uint32_t)0x00FFFFFF)
/*--------*/


/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 CALIB ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SysTick_CALIB          			(((SYST_CALIB_TypeDef*)(SysTick_BASE+SysTick_CALIB_OFFSET)))
#define SysTick_CALIB_R        			(*((__IO uint32_t *)(SysTick_BASE+SysTick_CALIB_OFFSET)))

/*--------*/
#define SysTick_CALIB_R_TENMS_MASK    	((uint32_t)0x00FFFFFF)
#define SysTick_CALIB_R_TENMS_BIT     	(0)

#define SysTick_CALIB_TENMS_MASK      	((uint32_t)0x00FFFFFF)
/*--------*/

/*--------*/
#define SysTick_CALIB_R_SKEW_MASK       ((uint32_t)0x40000000)
#define SysTick_CALIB_R_SKEW_BIT        (30)
#define SysTick_CALIB_R_SKEW_EXACT    	((uint32_t)0x40000000)
#define SysTick_CALIB_R_SKEW_INEXACT	((uint32_t)0x00000000)

#define SysTick_CALIB_SKEW_MASK         ((uint32_t)0x00000001)
#define SysTick_CALIB_SKEW_EXACT        ((uint32_t)0x00000001)
#define SysTick_CALIB_SKEW_INEXACT      ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SysTick_CALIB_R_NOREF_MASK     	((uint32_t)0x80000000)
#define SysTick_CALIB_R_NOREF_BIT       (31)
#define SysTick_CALIB_R_NOREF_SAME    	((uint32_t)0x80000000)
#define SysTick_CALIB_R_NOREF_OTHER	 	((uint32_t)0x00000000)

#define SysTick_CALIB_NOREF_MASK        ((uint32_t)0x00000001)
#define SysTick_CALIB_NOREF_SAME        ((uint32_t)0x00000001)
#define SysTick_CALIB_NOREF_OTHER       ((uint32_t)0x00000000)
/*--------*/


/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PROTOTYPES ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

int32_t SysTick_InitTick(uint32_t tick, uint32_t priority, uint32_t clock);
int32_t SysTick_InitFrec(float frec, uint32_t priority);
int32_t SysTick_Initus(float time, uint32_t priority);
int32_t SysTick_ChangeTimeus(float time);
int32_t SysTick_State(void);
int64_t SysTick_Count(void);

extern uint64_t u64Count;
#endif /* SYSTICK_H_ */
