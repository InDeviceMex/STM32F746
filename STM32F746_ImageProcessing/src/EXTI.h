/*
 * EXTI.h
 *
 *  Created on: 14 ago. 2018
 *      Author: InDev
 */

#ifndef EXTI_H_
#define EXTI_H_


#include "Core.h"
#include "SYSCFG.h"
#include "RCC.h"
#include "GPIO.h"
#include "NVIC.h"
#include <stdint.h>




#define EXTI_BASE             ((uint32_t)0x40013C00U)


typedef __IO struct
{
	__IO uint32_t	IM0:1;
	__IO uint32_t	IM1:1;
	__IO uint32_t	IM2:1;
	__IO uint32_t	IM3:1;
	__IO uint32_t	IM4:1;
	__IO uint32_t	IM5:1;
	__IO uint32_t	IM6:1;
	__IO uint32_t	IM7:1;
	__IO uint32_t	IM8:1;
	__IO uint32_t	IM9:1;
	__IO uint32_t	IM10:1;
	__IO uint32_t	IM11:1;
	__IO uint32_t	IM12:1;
	__IO uint32_t	IM13:1;
	__IO uint32_t	IM14:1;
	__IO uint32_t	IM15:1;
	__IO uint32_t	PVD:1;
	__IO uint32_t	RTC_Alarm:1;
	__IO uint32_t	USB_OTG_FS:1;
	__IO uint32_t	ETH_Wakeup:1;
	__IO uint32_t	USB_OTG_HS:1;
	__IO uint32_t	RTC_Tamper:1;
	__IO uint32_t	RTC_Wakeup:1;
	__IO uint32_t	LPTIM1:1;
		 uint32_t	reserved:8;
}EXTI_IMR_TypeDef;


typedef __IO struct
{
	__IO uint32_t	EM0:1;
	__IO uint32_t	EM1:1;
	__IO uint32_t	EM2:1;
	__IO uint32_t	EM3:1;
	__IO uint32_t	EM4:1;
	__IO uint32_t	EM5:1;
	__IO uint32_t	EM6:1;
	__IO uint32_t	EM7:1;
	__IO uint32_t	EM8:1;
	__IO uint32_t	EM9:1;
	__IO uint32_t	EM10:1;
	__IO uint32_t	EM11:1;
	__IO uint32_t	EM12:1;
	__IO uint32_t	EM13:1;
	__IO uint32_t	EM14:1;
	__IO uint32_t	EM15:1;
	__IO uint32_t	PVD:1;
	__IO uint32_t	RTC_Alarm:1;
	__IO uint32_t	USB_OTG_FS:1;
	__IO uint32_t	ETH_Wakeup:1;
	__IO uint32_t	USB_OTG_HS:1;
	__IO uint32_t	RTC_Tamper:1;
	__IO uint32_t	RTC_Wakeup:1;
	__IO uint32_t	LPTIM1:1;
		 uint32_t	reserved:8;
}EXTI_EMR_TypeDef;


typedef __IO struct
{
	__IO uint32_t	TR0:1;
	__IO uint32_t	TR1:1;
	__IO uint32_t	TR2:1;
	__IO uint32_t	TR3:1;
	__IO uint32_t	TR4:1;
	__IO uint32_t	TR5:1;
	__IO uint32_t	TR6:1;
	__IO uint32_t	TR7:1;
	__IO uint32_t	TR8:1;
	__IO uint32_t	TR9:1;
	__IO uint32_t	TR10:1;
	__IO uint32_t	TR11:1;
	__IO uint32_t	TR12:1;
	__IO uint32_t	TR13:1;
	__IO uint32_t	TR14:1;
	__IO uint32_t	TR15:1;
	__IO uint32_t	PVD:1;
	__IO uint32_t	RTC_Alarm:1;
	__IO uint32_t	USB_OTG_FS:1;
	__IO uint32_t	ETH_Wakeup:1;
	__IO uint32_t	USB_OTG_HS:1;
	__IO uint32_t	RTC_Tamper:1;
	__IO uint32_t	RTC_Wakeup:1;
	__IO uint32_t	LPTIM1:1;
		 uint32_t	reserved:8;
}EXTI_RTSR_TypeDef;

typedef __IO struct
{
	__IO uint32_t	TR0:1;
	__IO uint32_t	TR1:1;
	__IO uint32_t	TR2:1;
	__IO uint32_t	TR3:1;
	__IO uint32_t	TR4:1;
	__IO uint32_t	TR5:1;
	__IO uint32_t	TR6:1;
	__IO uint32_t	TR7:1;
	__IO uint32_t	TR8:1;
	__IO uint32_t	TR9:1;
	__IO uint32_t	TR10:1;
	__IO uint32_t	TR11:1;
	__IO uint32_t	TR12:1;
	__IO uint32_t	TR13:1;
	__IO uint32_t	TR14:1;
	__IO uint32_t	TR15:1;
	__IO uint32_t	PVD:1;
	__IO uint32_t	RTC_Alarm:1;
	__IO uint32_t	USB_OTG_FS:1;
	__IO uint32_t	ETH_Wakeup:1;
	__IO uint32_t	USB_OTG_HS:1;
	__IO uint32_t	RTC_Tamper:1;
	__IO uint32_t	RTC_Wakeup:1;
	__IO uint32_t	LPTIM1:1;
		 uint32_t	reserved:8;
}EXTI_FTSR_TypeDef;

typedef __IO struct
{
	__IO uint32_t	SWIER0:1;
	__IO uint32_t	SWIER1:1;
	__IO uint32_t	SWIER2:1;
	__IO uint32_t	SWIER3:1;
	__IO uint32_t	SWIER4:1;
	__IO uint32_t	SWIER5:1;
	__IO uint32_t	SWIER6:1;
	__IO uint32_t	SWIER7:1;
	__IO uint32_t	SWIER8:1;
	__IO uint32_t	SWIER9:1;
	__IO uint32_t	SWIER10:1;
	__IO uint32_t	SWIER11:1;
	__IO uint32_t	SWIER12:1;
	__IO uint32_t	SWIER13:1;
	__IO uint32_t	SWIER14:1;
	__IO uint32_t	SWIER15:1;
	__IO uint32_t	PVD:1;
	__IO uint32_t	RTC_Alarm:1;
	__IO uint32_t	USB_OTG_FS:1;
	__IO uint32_t	ETH_Wakeup:1;
	__IO uint32_t	USB_OTG_HS:1;
	__IO uint32_t	RTC_Tamper:1;
	__IO uint32_t	RTC_Wakeup:1;
	__IO uint32_t	LPTIM1:1;
		 uint32_t	reserved:8;
}EXTI_SWIER_TypeDef;

typedef __IO struct
{
	__IO uint32_t	PR0:1;
	__IO uint32_t	PR1:1;
	__IO uint32_t	PR2:1;
	__IO uint32_t	PR3:1;
	__IO uint32_t	PR4:1;
	__IO uint32_t	PR5:1;
	__IO uint32_t	PR6:1;
	__IO uint32_t	PR7:1;
	__IO uint32_t	PR8:1;
	__IO uint32_t	PR9:1;
	__IO uint32_t	PR10:1;
	__IO uint32_t	PR11:1;
	__IO uint32_t	PR12:1;
	__IO uint32_t	PR13:1;
	__IO uint32_t	PR14:1;
	__IO uint32_t	PR15:1;
	__IO uint32_t	PVD:1;
	__IO uint32_t	RTC_Alarm:1;
	__IO uint32_t	USB_OTG_FS:1;
	__IO uint32_t	ETH_Wakeup:1;
	__IO uint32_t	USB_OTG_HS:1;
	__IO uint32_t	RTC_Tamper:1;
	__IO uint32_t	RTC_Wakeup:1;
	__IO uint32_t	LPTIM1:1;
		 uint32_t	reserved:8;
}EXTI_PR_TypeDef;

typedef struct
{
	union
	{
		__IO uint32_t 		IMR;    /*!< EXTI Interrupt mask register,            Address offset: 0x00 */
		EXTI_IMR_TypeDef 	IMR_Bit;    /*!< EXTI Interrupt mask register,            Address offset: 0x00 */
	};
	union
	{
		__IO uint32_t 		EMR;    /*!< EXTI Event mask register,                Address offset: 0x04 */
		EXTI_EMR_TypeDef 	EMR_Bit;    /*!< EXTI Event mask register,                Address offset: 0x04 */
	};
	union
	{
		__IO uint32_t 		RTSR;   /*!< EXTI Rising trigger selection register,  Address offset: 0x08 */
		EXTI_RTSR_TypeDef 	RTSR_Bit;   /*!< EXTI Rising trigger selection register,  Address offset: 0x08 */
	};
	union
	{
		__IO uint32_t 		FTSR;   /*!< EXTI Falling trigger selection register, Address offset: 0x0C */
		EXTI_FTSR_TypeDef 	FTSR_Bit;   /*!< EXTI Falling trigger selection register, Address offset: 0x0C */
	};
	union
	{
		__IO uint32_t 		SWIER;  /*!< EXTI Software interrupt event register,  Address offset: 0x10 */
		EXTI_SWIER_TypeDef 	SWIER_Bit;  /*!< EXTI Software interrupt event register,  Address offset: 0x10 */
	};
	union
	{
		__IO uint32_t 		PR;     /*!< EXTI Pending register,                   Address offset: 0x14 */
		EXTI_PR_TypeDef 	PR_Bit;     /*!< EXTI Pending register,                   Address offset: 0x14 */
	};
} EXTI_TypeDef;


#define EXTI                ((EXTI_TypeDef *) EXTI_BASE)


#define	EXTI_IMR_OFFSET						((uint32_t)0x00000000)
#define	EXTI_EMR_OFFSET						((uint32_t)0x00000004)
#define	EXTI_RTSR_OFFSET					((uint32_t)0x00000008)
#define	EXTI_FTSR_OFFSET					((uint32_t)0x0000000C)
#define	EXTI_SWIER_OFFSET					((uint32_t)0x00000010)
#define	EXTI_PR_OFFSET						((uint32_t)0x00000014)


/* TODO IMR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 IMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define EXTI_IMR            					(((EXTI_IMR_TypeDef*)(EXTI_BASE+EXTI_IMR_OFFSET )))
#define EXTI_IMR_R          					(*((__IO uint32_t *)(EXTI_BASE+EXTI_IMR_OFFSET)))

/*--------*/
#define EXTI_IMR_R_IM0_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_R_IM0_BIT     		(0)
#define EXTI_IMR_R_IM0_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM0_EN	   		((uint32_t)0x00000001)

#define EXTI_IMR_IM0_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM0_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM0_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM1_MASK    		((uint32_t)0x00000002)
#define EXTI_IMR_R_IM1_BIT     		(1)
#define EXTI_IMR_R_IM1_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM1_EN	   		((uint32_t)0x00000002)

#define EXTI_IMR_IM1_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM1_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM1_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM2_MASK    		((uint32_t)0x00000004)
#define EXTI_IMR_R_IM2_BIT     		(2)
#define EXTI_IMR_R_IM2_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM2_EN	   		((uint32_t)0x00000004)

#define EXTI_IMR_IM2_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM2_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM2_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM3_MASK    		((uint32_t)0x00000008)
#define EXTI_IMR_R_IM3_BIT     		(3)
#define EXTI_IMR_R_IM3_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM3_EN	   		((uint32_t)0x00000008)

#define EXTI_IMR_IM3_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM3_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM3_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM4_MASK    		((uint32_t)0x00000010)
#define EXTI_IMR_R_IM4_BIT     		(4)
#define EXTI_IMR_R_IM4_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM4_EN	   		((uint32_t)0x00000010)

#define EXTI_IMR_IM4_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM4_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM4_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM5_MASK    		((uint32_t)0x00000020)
#define EXTI_IMR_R_IM5_BIT     		(5)
#define EXTI_IMR_R_IM5_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM5_EN	   		((uint32_t)0x00000020)

#define EXTI_IMR_IM5_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM5_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM5_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM6_MASK    		((uint32_t)0x00000040)
#define EXTI_IMR_R_IM6_BIT     		(6)
#define EXTI_IMR_R_IM6_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM6_EN	   		((uint32_t)0x00000040)

#define EXTI_IMR_IM6_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM6_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM6_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM7_MASK    		((uint32_t)0x00000080)
#define EXTI_IMR_R_IM7_BIT     		(7)
#define EXTI_IMR_R_IM7_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM7_EN	   		((uint32_t)0x00000080)

#define EXTI_IMR_IM7_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM7_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM7_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM8_MASK    		((uint32_t)0x00000100)
#define EXTI_IMR_R_IM8_BIT     		(8)
#define EXTI_IMR_R_IM8_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM8_EN	   		((uint32_t)0x00000100)

#define EXTI_IMR_IM8_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM8_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM8_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM9_MASK    		((uint32_t)0x00000200)
#define EXTI_IMR_R_IM9_BIT     		(9)
#define EXTI_IMR_R_IM9_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM9_EN	   		((uint32_t)0x00000200)

#define EXTI_IMR_IM9_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM9_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM9_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM10_MASK    	((uint32_t)0x00000400)
#define EXTI_IMR_R_IM10_BIT     	(10)
#define EXTI_IMR_R_IM10_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM10_EN	   		((uint32_t)0x00000400)

#define EXTI_IMR_IM10_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM10_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM10_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM11_MASK    	((uint32_t)0x00000800)
#define EXTI_IMR_R_IM11_BIT     	(11)
#define EXTI_IMR_R_IM11_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM11_EN	   		((uint32_t)0x00000800)

#define EXTI_IMR_IM11_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM11_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM11_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM12_MASK    	((uint32_t)0x00001000)
#define EXTI_IMR_R_IM12_BIT     	(12)
#define EXTI_IMR_R_IM12_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM12_EN	   		((uint32_t)0x00001000)

#define EXTI_IMR_IM12_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM12_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM12_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM13_MASK    	((uint32_t)0x00002000)
#define EXTI_IMR_R_IM13_BIT     	(13)
#define EXTI_IMR_R_IM13_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM13_EN	   		((uint32_t)0x00002000)

#define EXTI_IMR_IM13_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM13_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM13_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM14_MASK    	((uint32_t)0x00004000)
#define EXTI_IMR_R_IM14_BIT     	(14)
#define EXTI_IMR_R_IM14_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM14_EN	   		((uint32_t)0x00004000)

#define EXTI_IMR_IM14_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM14_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM14_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_IM15_MASK    	((uint32_t)0x00008000)
#define EXTI_IMR_R_IM15_BIT     	(15)
#define EXTI_IMR_R_IM15_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_IM15_EN	   		((uint32_t)0x00008000)

#define EXTI_IMR_IM15_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_IM15_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_IM15_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_PVD_MASK    		((uint32_t)0x00010000)
#define EXTI_IMR_R_PVD_BIT     		(16)
#define EXTI_IMR_R_PVD_DIS    		((uint32_t)0x00000000)
#define EXTI_IMR_R_PVD_EN	   		((uint32_t)0x00010000)

#define EXTI_IMR_PVD_MASK    		((uint32_t)0x00000001)
#define EXTI_IMR_PVD_DIS			((uint32_t)0x00000000)
#define EXTI_IMR_PVD_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_RTC_Alarm_MASK   ((uint32_t)0x00020000)
#define EXTI_IMR_R_RTC_Alarm_BIT    (17)
#define EXTI_IMR_R_RTC_Alarm_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_RTC_Alarm_EN	   	((uint32_t)0x00020000)

#define EXTI_IMR_RTC_Alarm_MASK    	((uint32_t)0x00000001)
#define EXTI_IMR_RTC_Alarm_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_RTC_Alarm_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_USB_OTG_FS_MASK   ((uint32_t)0x00040000)
#define EXTI_IMR_R_USB_OTG_FS_BIT    (18)
#define EXTI_IMR_R_USB_OTG_FS_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_USB_OTG_FS_EN	 ((uint32_t)0x00040000)

#define EXTI_IMR_USB_OTG_FS_MASK    ((uint32_t)0x00000001)
#define EXTI_IMR_USB_OTG_FS_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_USB_OTG_FS_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_ETH_Wakeup_MASK   ((uint32_t)0x00080000)
#define EXTI_IMR_R_ETH_Wakeup_BIT    (19)
#define EXTI_IMR_R_ETH_Wakeup_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_ETH_Wakeup_EN	 ((uint32_t)0x00080000)

#define EXTI_IMR_ETH_Wakeup_MASK    ((uint32_t)0x00000001)
#define EXTI_IMR_ETH_Wakeup_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_ETH_Wakeup_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_USB_OTG_HS_MASK   ((uint32_t)0x00100000)
#define EXTI_IMR_R_USB_OTG_HS_BIT    (20)
#define EXTI_IMR_R_USB_OTG_HS_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_USB_OTG_HS_EN	 ((uint32_t)0x00100000)

#define EXTI_IMR_USB_OTG_HS_MASK    ((uint32_t)0x00000001)
#define EXTI_IMR_USB_OTG_HS_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_USB_OTG_HS_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_RTC_Tamper_MASK   ((uint32_t)0x00200000)
#define EXTI_IMR_R_RTC_Tamper_BIT    (21)
#define EXTI_IMR_R_RTC_Tamper_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_RTC_Tamper_EN	 ((uint32_t)0x00200000)

#define EXTI_IMR_RTC_Tamper_MASK    ((uint32_t)0x00000001)
#define EXTI_IMR_RTC_Tamper_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_RTC_Tamper_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_RTC_Wakeup_MASK   ((uint32_t)0x00400000)
#define EXTI_IMR_R_RTC_Wakeup_BIT    (22)
#define EXTI_IMR_R_RTC_Wakeup_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_RTC_Wakeup_EN	 ((uint32_t)0x00400000)

#define EXTI_IMR_RTC_Wakeup_MASK    ((uint32_t)0x00000001)
#define EXTI_IMR_RTC_Wakeup_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_RTC_Wakeup_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_IMR_R_LPTIM1_MASK   ((uint32_t)0x00800000)
#define EXTI_IMR_R_LPTIM1_BIT    (23)
#define EXTI_IMR_R_LPTIM1_DIS    ((uint32_t)0x00000000)
#define EXTI_IMR_R_LPTIM1_EN	 ((uint32_t)0x00800000)

#define EXTI_IMR_LPTIM1_MASK    ((uint32_t)0x00000001)
#define EXTI_IMR_LPTIM1_DIS		((uint32_t)0x00000000)
#define EXTI_IMR_LPTIM1_EN	   	((uint32_t)0x00000001)
/*--------*/



/* TODO EMR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 EMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define EXTI_EMR            					(((EXTI_EMR_TypeDef*)(EXTI_BASE+EXTI_EMR_OFFSET )))
#define EXTI_EMR_R          					(*((__IO uint32_t *)(EXTI_BASE+EXTI_EMR_OFFSET)))

/*--------*/
#define EXTI_EMR_R_EM0_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_R_EM0_BIT     		(0)
#define EXTI_EMR_R_EM0_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM0_EN	   		((uint32_t)0x00000001)

#define EXTI_EMR_EM0_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM0_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM0_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM1_MASK    		((uint32_t)0x00000002)
#define EXTI_EMR_R_EM1_BIT     		(1)
#define EXTI_EMR_R_EM1_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM1_EN	   		((uint32_t)0x00000002)

#define EXTI_EMR_EM1_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM1_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM1_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM2_MASK    		((uint32_t)0x00000004)
#define EXTI_EMR_R_EM2_BIT     		(2)
#define EXTI_EMR_R_EM2_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM2_EN	   		((uint32_t)0x00000004)

#define EXTI_EMR_EM2_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM2_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM2_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM3_MASK    		((uint32_t)0x00000008)
#define EXTI_EMR_R_EM3_BIT     		(3)
#define EXTI_EMR_R_EM3_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM3_EN	   		((uint32_t)0x00000008)

#define EXTI_EMR_EM3_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM3_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM3_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM4_MASK    		((uint32_t)0x00000010)
#define EXTI_EMR_R_EM4_BIT     		(4)
#define EXTI_EMR_R_EM4_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM4_EN	   		((uint32_t)0x00000010)

#define EXTI_EMR_EM4_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM4_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM4_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM5_MASK    		((uint32_t)0x00000020)
#define EXTI_EMR_R_EM5_BIT     		(5)
#define EXTI_EMR_R_EM5_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM5_EN	   		((uint32_t)0x00000020)

#define EXTI_EMR_EM5_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM5_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM5_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM6_MASK    		((uint32_t)0x00000040)
#define EXTI_EMR_R_EM6_BIT     		(6)
#define EXTI_EMR_R_EM6_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM6_EN	   		((uint32_t)0x00000040)

#define EXTI_EMR_EM6_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM6_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM6_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM7_MASK    		((uint32_t)0x00000080)
#define EXTI_EMR_R_EM7_BIT     		(7)
#define EXTI_EMR_R_EM7_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM7_EN	   		((uint32_t)0x00000080)

#define EXTI_EMR_EM7_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM7_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM7_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM8_MASK    		((uint32_t)0x00000100)
#define EXTI_EMR_R_EM8_BIT     		(8)
#define EXTI_EMR_R_EM8_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM8_EN	   		((uint32_t)0x00000100)

#define EXTI_EMR_EM8_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM8_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM8_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM9_MASK    		((uint32_t)0x00000200)
#define EXTI_EMR_R_EM9_BIT     		(9)
#define EXTI_EMR_R_EM9_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM9_EN	   		((uint32_t)0x00000200)

#define EXTI_EMR_EM9_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM9_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM9_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM10_MASK    	((uint32_t)0x00000400)
#define EXTI_EMR_R_EM10_BIT     	(10)
#define EXTI_EMR_R_EM10_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM10_EN	   		((uint32_t)0x00000400)

#define EXTI_EMR_EM10_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM10_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM10_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM11_MASK    	((uint32_t)0x00000800)
#define EXTI_EMR_R_EM11_BIT     	(11)
#define EXTI_EMR_R_EM11_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM11_EN	   		((uint32_t)0x00000800)

#define EXTI_EMR_EM11_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM11_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM11_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM12_MASK    	((uint32_t)0x00001000)
#define EXTI_EMR_R_EM12_BIT     	(12)
#define EXTI_EMR_R_EM12_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM12_EN	   		((uint32_t)0x00001000)

#define EXTI_EMR_EM12_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM12_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM12_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM13_MASK    	((uint32_t)0x00002000)
#define EXTI_EMR_R_EM13_BIT     	(13)
#define EXTI_EMR_R_EM13_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM13_EN	   		((uint32_t)0x00002000)

#define EXTI_EMR_EM13_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM13_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM13_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM14_MASK    	((uint32_t)0x00004000)
#define EXTI_EMR_R_EM14_BIT     	(14)
#define EXTI_EMR_R_EM14_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM14_EN	   		((uint32_t)0x00004000)

#define EXTI_EMR_EM14_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM14_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM14_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_EM15_MASK    	((uint32_t)0x00008000)
#define EXTI_EMR_R_EM15_BIT     	(15)
#define EXTI_EMR_R_EM15_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_EM15_EN	   		((uint32_t)0x00008000)

#define EXTI_EMR_EM15_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_EM15_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_EM15_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_PVD_MASK    		((uint32_t)0x00010000)
#define EXTI_EMR_R_PVD_BIT     		(16)
#define EXTI_EMR_R_PVD_DIS    		((uint32_t)0x00000000)
#define EXTI_EMR_R_PVD_EN	   		((uint32_t)0x00010000)

#define EXTI_EMR_PVD_MASK    		((uint32_t)0x00000001)
#define EXTI_EMR_PVD_DIS			((uint32_t)0x00000000)
#define EXTI_EMR_PVD_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_RTC_Alarm_MASK   ((uint32_t)0x00020000)
#define EXTI_EMR_R_RTC_Alarm_BIT    (17)
#define EXTI_EMR_R_RTC_Alarm_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_RTC_Alarm_EN	   	((uint32_t)0x00020000)

#define EXTI_EMR_RTC_Alarm_MASK    	((uint32_t)0x00000001)
#define EXTI_EMR_RTC_Alarm_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_RTC_Alarm_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_USB_OTG_FS_MASK   ((uint32_t)0x00040000)
#define EXTI_EMR_R_USB_OTG_FS_BIT    (18)
#define EXTI_EMR_R_USB_OTG_FS_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_USB_OTG_FS_EN	 ((uint32_t)0x00040000)

#define EXTI_EMR_USB_OTG_FS_MASK    ((uint32_t)0x00000001)
#define EXTI_EMR_USB_OTG_FS_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_USB_OTG_FS_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_ETH_Wakeup_MASK   ((uint32_t)0x00080000)
#define EXTI_EMR_R_ETH_Wakeup_BIT    (19)
#define EXTI_EMR_R_ETH_Wakeup_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_ETH_Wakeup_EN	 ((uint32_t)0x00080000)

#define EXTI_EMR_ETH_Wakeup_MASK    ((uint32_t)0x00000001)
#define EXTI_EMR_ETH_Wakeup_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_ETH_Wakeup_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_USB_OTG_HS_MASK   ((uint32_t)0x00100000)
#define EXTI_EMR_R_USB_OTG_HS_BIT    (20)
#define EXTI_EMR_R_USB_OTG_HS_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_USB_OTG_HS_EN	 ((uint32_t)0x00100000)

#define EXTI_EMR_USB_OTG_HS_MASK    ((uint32_t)0x00000001)
#define EXTI_EMR_USB_OTG_HS_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_USB_OTG_HS_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_RTC_Tamper_MASK   ((uint32_t)0x00200000)
#define EXTI_EMR_R_RTC_Tamper_BIT    (21)
#define EXTI_EMR_R_RTC_Tamper_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_RTC_Tamper_EN	 ((uint32_t)0x00200000)

#define EXTI_EMR_RTC_Tamper_MASK    ((uint32_t)0x00000001)
#define EXTI_EMR_RTC_Tamper_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_RTC_Tamper_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_RTC_Wakeup_MASK   ((uint32_t)0x00400000)
#define EXTI_EMR_R_RTC_Wakeup_BIT    (22)
#define EXTI_EMR_R_RTC_Wakeup_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_RTC_Wakeup_EN	 ((uint32_t)0x00400000)

#define EXTI_EMR_RTC_Wakeup_MASK    ((uint32_t)0x00000001)
#define EXTI_EMR_RTC_Wakeup_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_RTC_Wakeup_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_EMR_R_LPTIM1_MASK   ((uint32_t)0x00800000)
#define EXTI_EMR_R_LPTIM1_BIT    (23)
#define EXTI_EMR_R_LPTIM1_DIS    ((uint32_t)0x00000000)
#define EXTI_EMR_R_LPTIM1_EN	 ((uint32_t)0x00800000)

#define EXTI_EMR_LPTIM1_MASK    ((uint32_t)0x00000001)
#define EXTI_EMR_LPTIM1_DIS		((uint32_t)0x00000000)
#define EXTI_EMR_LPTIM1_EN	   	((uint32_t)0x00000001)
/*--------*/



/* TODO RTSR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 RTSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define EXTI_RTSR            					(((EXTI_RTSR_TypeDef*)(EXTI_BASE+EXTI_RTSR_OFFSET )))
#define EXTI_RTSR_R          					(*((__IO uint32_t *)(EXTI_BASE+EXTI_RTSR_OFFSET)))

/*--------*/
#define EXTI_RTSR_R_TR0_MASK    		((uint32_t)0x00000001)
#define EXTI_RTSR_R_TR0_BIT     		(0)
#define EXTI_RTSR_R_TR0_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR0_RISING	   		((uint32_t)0x00000001)

#define EXTI_RTSR_TR0_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR0_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR0_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR1_MASK    		((uint32_t)0x00000002)
#define EXTI_RTSR_R_TR1_BIT     		(1)
#define EXTI_RTSR_R_TR1_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR1_RISING	   		((uint32_t)0x00000002)

#define EXTI_RTSR_TR1_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR1_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR1_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR2_MASK    		((uint32_t)0x00000004)
#define EXTI_RTSR_R_TR2_BIT     		(2)
#define EXTI_RTSR_R_TR2_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR2_RISING	   		((uint32_t)0x00000004)

#define EXTI_RTSR_TR2_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR2_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR2_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR3_MASK    		((uint32_t)0x00000008)
#define EXTI_RTSR_R_TR3_BIT     		(3)
#define EXTI_RTSR_R_TR3_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR3_RISING	   		((uint32_t)0x00000008)

#define EXTI_RTSR_TR3_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR3_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR3_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR4_MASK    		((uint32_t)0x00000010)
#define EXTI_RTSR_R_TR4_BIT     		(4)
#define EXTI_RTSR_R_TR4_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR4_RISING	   		((uint32_t)0x00000010)

#define EXTI_RTSR_TR4_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR4_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR4_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR5_MASK    		((uint32_t)0x00000020)
#define EXTI_RTSR_R_TR5_BIT     		(5)
#define EXTI_RTSR_R_TR5_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR5_RISING	   		((uint32_t)0x00000020)

#define EXTI_RTSR_TR5_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR5_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR5_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR6_MASK    		((uint32_t)0x00000040)
#define EXTI_RTSR_R_TR6_BIT     		(6)
#define EXTI_RTSR_R_TR6_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR6_RISING	   		((uint32_t)0x00000040)

#define EXTI_RTSR_TR6_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR6_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR6_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR7_MASK    		((uint32_t)0x00000080)
#define EXTI_RTSR_R_TR7_BIT     		(7)
#define EXTI_RTSR_R_TR7_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR7_RISING	   		((uint32_t)0x00000080)

#define EXTI_RTSR_TR7_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR7_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR7_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR8_MASK    		((uint32_t)0x00000100)
#define EXTI_RTSR_R_TR8_BIT     		(8)
#define EXTI_RTSR_R_TR8_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR8_RISING	   		((uint32_t)0x00000100)

#define EXTI_RTSR_TR8_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR8_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR8_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR9_MASK    		((uint32_t)0x00000200)
#define EXTI_RTSR_R_TR9_BIT     		(9)
#define EXTI_RTSR_R_TR9_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR9_RISING	   		((uint32_t)0x00000200)

#define EXTI_RTSR_TR9_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR9_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR9_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR10_MASK    		((uint32_t)0x00000400)
#define EXTI_RTSR_R_TR10_BIT     		(10)
#define EXTI_RTSR_R_TR10_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR10_RISING	   		((uint32_t)0x00000400)

#define EXTI_RTSR_TR10_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR10_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR10_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR11_MASK    		((uint32_t)0x00000800)
#define EXTI_RTSR_R_TR11_BIT     		(11)
#define EXTI_RTSR_R_TR11_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR11_RISING	   		((uint32_t)0x00000800)

#define EXTI_RTSR_TR11_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR11_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR11_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR12_MASK    		((uint32_t)0x00001000)
#define EXTI_RTSR_R_TR12_BIT     		(12)
#define EXTI_RTSR_R_TR12_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR12_RISING	   		((uint32_t)0x00001000)

#define EXTI_RTSR_TR12_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR12_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR12_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR13_MASK    		((uint32_t)0x00002000)
#define EXTI_RTSR_R_TR13_BIT     		(13)
#define EXTI_RTSR_R_TR13_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR13_RISING	   		((uint32_t)0x00002000)

#define EXTI_RTSR_TR13_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR13_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR13_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR14_MASK    		((uint32_t)0x00004000)
#define EXTI_RTSR_R_TR14_BIT     		(14)
#define EXTI_RTSR_R_TR14_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR14_RISING	   		((uint32_t)0x00004000)

#define EXTI_RTSR_TR14_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR14_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR14_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_TR15_MASK    		((uint32_t)0x00008000)
#define EXTI_RTSR_R_TR15_BIT     		(15)
#define EXTI_RTSR_R_TR15_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_TR15_RISING	   		((uint32_t)0x00008000)

#define EXTI_RTSR_TR15_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_TR15_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_TR15_RISING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_PVD_MASK    		((uint32_t)0x00010000)
#define EXTI_RTSR_R_PVD_BIT     		(16)
#define EXTI_RTSR_R_PVD_NA    			((uint32_t)0x00000000)
#define EXTI_RTSR_R_PVD_RISING	   		((uint32_t)0x00010000)

#define EXTI_RTSR_PVD_MASK    			((uint32_t)0x00000001)
#define EXTI_RTSR_PVD_NA				((uint32_t)0x00000000)
#define EXTI_RTSR_PVD_RISING	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_RTC_Alarm_MASK  	((uint32_t)0x00020000)
#define EXTI_RTSR_R_RTC_Alarm_BIT    	(17)
#define EXTI_RTSR_R_RTC_Alarm_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_RTC_Alarm_RISING	((uint32_t)0x00020000)

#define EXTI_RTSR_RTC_Alarm_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_RTC_Alarm_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_RTC_Alarm_RISING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_USB_OTG_FS_MASK   	((uint32_t)0x00040000)
#define EXTI_RTSR_R_USB_OTG_FS_BIT    	(18)
#define EXTI_RTSR_R_USB_OTG_FS_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_USB_OTG_FS_RISING	((uint32_t)0x00040000)

#define EXTI_RTSR_USB_OTG_FS_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_USB_OTG_FS_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_USB_OTG_FS_RISING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_ETH_Wakeup_MASK   	((uint32_t)0x00080000)
#define EXTI_RTSR_R_ETH_Wakeup_BIT    	(19)
#define EXTI_RTSR_R_ETH_Wakeup_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_ETH_Wakeup_RISING	((uint32_t)0x00080000)

#define EXTI_RTSR_ETH_Wakeup_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_ETH_Wakeup_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_ETH_Wakeup_RISING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_USB_OTG_HS_MASK   	((uint32_t)0x00100000)
#define EXTI_RTSR_R_USB_OTG_HS_BIT    	(20)
#define EXTI_RTSR_R_USB_OTG_HS_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_USB_OTG_HS_RISING	((uint32_t)0x00100000)

#define EXTI_RTSR_USB_OTG_HS_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_USB_OTG_HS_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_USB_OTG_HS_RISING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_RTC_Tamper_MASK   	((uint32_t)0x00200000)
#define EXTI_RTSR_R_RTC_Tamper_BIT    	(21)
#define EXTI_RTSR_R_RTC_Tamper_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_RTC_Tamper_RISING	((uint32_t)0x00200000)

#define EXTI_RTSR_RTC_Tamper_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_RTC_Tamper_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_RTC_Tamper_RISING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_RTC_Wakeup_MASK   	((uint32_t)0x00400000)
#define EXTI_RTSR_R_RTC_Wakeup_BIT    	(22)
#define EXTI_RTSR_R_RTC_Wakeup_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_RTC_Wakeup_RISING	((uint32_t)0x00400000)

#define EXTI_RTSR_RTC_Wakeup_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_RTC_Wakeup_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_RTC_Wakeup_RISING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_RTSR_R_LPTIM1_MASK   	((uint32_t)0x00800000)
#define EXTI_RTSR_R_LPTIM1_BIT    	(23)
#define EXTI_RTSR_R_LPTIM1_NA    	((uint32_t)0x00000000)
#define EXTI_RTSR_R_LPTIM1_RISING	((uint32_t)0x00800000)

#define EXTI_RTSR_LPTIM1_MASK    	((uint32_t)0x00000001)
#define EXTI_RTSR_LPTIM1_NA			((uint32_t)0x00000000)
#define EXTI_RTSR_LPTIM1_RISING	   	((uint32_t)0x00000001)
/*--------*/


/* TODO FTSR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 FTSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define EXTI_FTSR            					(((EXTI_FTSR_TypeDef*)(EXTI_BASE+EXTI_FTSR_OFFSET )))
#define EXTI_FTSR_R          					(*((__IO uint32_t *)(EXTI_BASE+EXTI_FTSR_OFFSET)))

/*--------*/
#define EXTI_FTSR_R_TR0_MASK    		((uint32_t)0x00000001)
#define EXTI_FTSR_R_TR0_BIT     		(0)
#define EXTI_FTSR_R_TR0_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR0_FALLING	   		((uint32_t)0x00000001)

#define EXTI_FTSR_TR0_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR0_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR0_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR1_MASK    		((uint32_t)0x00000002)
#define EXTI_FTSR_R_TR1_BIT     		(1)
#define EXTI_FTSR_R_TR1_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR1_FALLING	   		((uint32_t)0x00000002)

#define EXTI_FTSR_TR1_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR1_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR1_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR2_MASK    		((uint32_t)0x00000004)
#define EXTI_FTSR_R_TR2_BIT     		(2)
#define EXTI_FTSR_R_TR2_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR2_FALLING	   		((uint32_t)0x00000004)

#define EXTI_FTSR_TR2_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR2_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR2_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR3_MASK    		((uint32_t)0x00000008)
#define EXTI_FTSR_R_TR3_BIT     		(3)
#define EXTI_FTSR_R_TR3_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR3_FALLING	   		((uint32_t)0x00000008)

#define EXTI_FTSR_TR3_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR3_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR3_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR4_MASK    		((uint32_t)0x00000010)
#define EXTI_FTSR_R_TR4_BIT     		(4)
#define EXTI_FTSR_R_TR4_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR4_FALLING	   		((uint32_t)0x00000010)

#define EXTI_FTSR_TR4_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR4_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR4_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR5_MASK    		((uint32_t)0x00000020)
#define EXTI_FTSR_R_TR5_BIT     		(5)
#define EXTI_FTSR_R_TR5_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR5_FALLING	   		((uint32_t)0x00000020)

#define EXTI_FTSR_TR5_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR5_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR5_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR6_MASK    		((uint32_t)0x00000040)
#define EXTI_FTSR_R_TR6_BIT     		(6)
#define EXTI_FTSR_R_TR6_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR6_FALLING	   		((uint32_t)0x00000040)

#define EXTI_FTSR_TR6_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR6_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR6_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR7_MASK    		((uint32_t)0x00000080)
#define EXTI_FTSR_R_TR7_BIT     		(7)
#define EXTI_FTSR_R_TR7_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR7_FALLING	   		((uint32_t)0x00000080)

#define EXTI_FTSR_TR7_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR7_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR7_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR8_MASK    		((uint32_t)0x00000100)
#define EXTI_FTSR_R_TR8_BIT     		(8)
#define EXTI_FTSR_R_TR8_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR8_FALLING	   		((uint32_t)0x00000100)

#define EXTI_FTSR_TR8_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR8_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR8_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR9_MASK    		((uint32_t)0x00000200)
#define EXTI_FTSR_R_TR9_BIT     		(9)
#define EXTI_FTSR_R_TR9_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR9_FALLING	   		((uint32_t)0x00000200)

#define EXTI_FTSR_TR9_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR9_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR9_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR10_MASK    		((uint32_t)0x00000400)
#define EXTI_FTSR_R_TR10_BIT     		(10)
#define EXTI_FTSR_R_TR10_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR10_FALLING	   		((uint32_t)0x00000400)

#define EXTI_FTSR_TR10_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR10_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR10_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR11_MASK    		((uint32_t)0x00000800)
#define EXTI_FTSR_R_TR11_BIT     		(11)
#define EXTI_FTSR_R_TR11_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR11_FALLING	   	((uint32_t)0x00000800)

#define EXTI_FTSR_TR11_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR11_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR11_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR12_MASK    		((uint32_t)0x00001000)
#define EXTI_FTSR_R_TR12_BIT     		(12)
#define EXTI_FTSR_R_TR12_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR12_FALLING	   	((uint32_t)0x00001000)

#define EXTI_FTSR_TR12_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR12_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR12_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR13_MASK    		((uint32_t)0x00002000)
#define EXTI_FTSR_R_TR13_BIT     		(13)
#define EXTI_FTSR_R_TR13_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR13_FALLING	   	((uint32_t)0x00002000)

#define EXTI_FTSR_TR13_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR13_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR13_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR14_MASK    		((uint32_t)0x00004000)
#define EXTI_FTSR_R_TR14_BIT     		(14)
#define EXTI_FTSR_R_TR14_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR14_FALLING	   	((uint32_t)0x00004000)

#define EXTI_FTSR_TR14_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR14_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR14_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_TR15_MASK    		((uint32_t)0x00008000)
#define EXTI_FTSR_R_TR15_BIT     		(15)
#define EXTI_FTSR_R_TR15_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_TR15_FALLING	   	((uint32_t)0x00008000)

#define EXTI_FTSR_TR15_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_TR15_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_TR15_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_PVD_MASK    		((uint32_t)0x00010000)
#define EXTI_FTSR_R_PVD_BIT     		(16)
#define EXTI_FTSR_R_PVD_NA    			((uint32_t)0x00000000)
#define EXTI_FTSR_R_PVD_FALLING	   		((uint32_t)0x00010000)

#define EXTI_FTSR_PVD_MASK    			((uint32_t)0x00000001)
#define EXTI_FTSR_PVD_NA				((uint32_t)0x00000000)
#define EXTI_FTSR_PVD_FALLING	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_RTC_Alarm_MASK  	((uint32_t)0x00020000)
#define EXTI_FTSR_R_RTC_Alarm_BIT    	(17)
#define EXTI_FTSR_R_RTC_Alarm_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_RTC_Alarm_FALLING	((uint32_t)0x00020000)

#define EXTI_FTSR_RTC_Alarm_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_RTC_Alarm_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_RTC_Alarm_FALLING	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_USB_OTG_FS_MASK   	((uint32_t)0x00040000)
#define EXTI_FTSR_R_USB_OTG_FS_BIT    	(18)
#define EXTI_FTSR_R_USB_OTG_FS_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_USB_OTG_FS_FALLING	((uint32_t)0x00040000)

#define EXTI_FTSR_USB_OTG_FS_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_USB_OTG_FS_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_USB_OTG_FS_FALLING	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_ETH_Wakeup_MASK   	((uint32_t)0x00080000)
#define EXTI_FTSR_R_ETH_Wakeup_BIT    	(19)
#define EXTI_FTSR_R_ETH_Wakeup_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_ETH_Wakeup_FALLING	((uint32_t)0x00080000)

#define EXTI_FTSR_ETH_Wakeup_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_ETH_Wakeup_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_ETH_Wakeup_FALLING	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_USB_OTG_HS_MASK   	((uint32_t)0x00100000)
#define EXTI_FTSR_R_USB_OTG_HS_BIT    	(20)
#define EXTI_FTSR_R_USB_OTG_HS_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_USB_OTG_HS_FALLING	((uint32_t)0x00100000)

#define EXTI_FTSR_USB_OTG_HS_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_USB_OTG_HS_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_USB_OTG_HS_FALLING	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_RTC_Tamper_MASK   	((uint32_t)0x00200000)
#define EXTI_FTSR_R_RTC_Tamper_BIT    	(21)
#define EXTI_FTSR_R_RTC_Tamper_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_RTC_Tamper_FALLING	((uint32_t)0x00200000)

#define EXTI_FTSR_RTC_Tamper_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_RTC_Tamper_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_RTC_Tamper_FALLING  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_RTC_Wakeup_MASK   	((uint32_t)0x00400000)
#define EXTI_FTSR_R_RTC_Wakeup_BIT    	(22)
#define EXTI_FTSR_R_RTC_Wakeup_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_RTC_Wakeup_FALLING	((uint32_t)0x00400000)

#define EXTI_FTSR_RTC_Wakeup_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_RTC_Wakeup_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_RTC_Wakeup_FALLING  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_FTSR_R_LPTIM1_MASK   	((uint32_t)0x00800000)
#define EXTI_FTSR_R_LPTIM1_BIT    	(23)
#define EXTI_FTSR_R_LPTIM1_NA    	((uint32_t)0x00000000)
#define EXTI_FTSR_R_LPTIM1_FALLING	((uint32_t)0x00800000)

#define EXTI_FTSR_LPTIM1_MASK    	((uint32_t)0x00000001)
#define EXTI_FTSR_LPTIM1_NA			((uint32_t)0x00000000)
#define EXTI_FTSR_LPTIM1_FALLING 	((uint32_t)0x00000001)
/*--------*/
/* TODO SWIER */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 SWIER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define EXTI_SWIER            					(((EXTI_SWIER_TypeDef*)(EXTI_BASE+EXTI_SWIER_OFFSET )))
#define EXTI_SWIER_R          					(*((__IO uint32_t *)(EXTI_BASE+EXTI_SWIER_OFFSET)))

/*--------*/
#define EXTI_SWIER_R_SWIER0_MASK    		((uint32_t)0x00000001)
#define EXTI_SWIER_R_SWIER0_BIT     		(0)
#define EXTI_SWIER_R_SWIER0_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER0_REQ	   			((uint32_t)0x00000001)

#define EXTI_SWIER_SWIER0_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER0_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER0_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER1_MASK    		((uint32_t)0x00000002)
#define EXTI_SWIER_R_SWIER1_BIT     		(1)
#define EXTI_SWIER_R_SWIER1_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER1_REQ	   			((uint32_t)0x00000002)

#define EXTI_SWIER_SWIER1_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER1_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER1_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER2_MASK    		((uint32_t)0x00000004)
#define EXTI_SWIER_R_SWIER2_BIT     		(2)
#define EXTI_SWIER_R_SWIER2_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER2_REQ	   			((uint32_t)0x00000004)

#define EXTI_SWIER_SWIER2_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER2_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER2_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER3_MASK    		((uint32_t)0x00000008)
#define EXTI_SWIER_R_SWIER3_BIT     		(3)
#define EXTI_SWIER_R_SWIER3_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER3_REQ	   			((uint32_t)0x00000008)

#define EXTI_SWIER_SWIER3_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER3_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER3_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER4_MASK    		((uint32_t)0x00000010)
#define EXTI_SWIER_R_SWIER4_BIT     		(4)
#define EXTI_SWIER_R_SWIER4_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER4_REQ	   			((uint32_t)0x00000010)

#define EXTI_SWIER_SWIER4_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER4_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER4_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER5_MASK    		((uint32_t)0x00000020)
#define EXTI_SWIER_R_SWIER5_BIT     		(5)
#define EXTI_SWIER_R_SWIER5_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER5_REQ	   			((uint32_t)0x00000020)

#define EXTI_SWIER_SWIER5_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER5_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER5_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER6_MASK    		((uint32_t)0x00000040)
#define EXTI_SWIER_R_SWIER6_BIT     		(6)
#define EXTI_SWIER_R_SWIER6_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER6_REQ	   			((uint32_t)0x00000040)

#define EXTI_SWIER_SWIER6_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER6_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER6_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER7_MASK    		((uint32_t)0x00000080)
#define EXTI_SWIER_R_SWIER7_BIT     		(7)
#define EXTI_SWIER_R_SWIER7_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER7_REQ	   			((uint32_t)0x00000080)

#define EXTI_SWIER_SWIER7_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER7_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER7_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER8_MASK    		((uint32_t)0x00000100)
#define EXTI_SWIER_R_SWIER8_BIT     		(8)
#define EXTI_SWIER_R_SWIER8_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER8_REQ	   			((uint32_t)0x00000100)

#define EXTI_SWIER_SWIER8_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER8_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER8_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER9_MASK    		((uint32_t)0x00000200)
#define EXTI_SWIER_R_SWIER9_BIT     		(9)
#define EXTI_SWIER_R_SWIER9_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER9_REQ	   			((uint32_t)0x00000200)

#define EXTI_SWIER_SWIER9_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER9_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER9_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER10_MASK    		((uint32_t)0x00000400)
#define EXTI_SWIER_R_SWIER10_BIT     		(10)
#define EXTI_SWIER_R_SWIER10_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER10_REQ	   		((uint32_t)0x00000400)

#define EXTI_SWIER_SWIER10_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER10_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER10_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER11_MASK    		((uint32_t)0x00000800)
#define EXTI_SWIER_R_SWIER11_BIT     		(11)
#define EXTI_SWIER_R_SWIER11_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER11_REQ	   		((uint32_t)0x00000800)

#define EXTI_SWIER_SWIER11_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER11_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER11_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER12_MASK    		((uint32_t)0x00001000)
#define EXTI_SWIER_R_SWIER12_BIT     		(12)
#define EXTI_SWIER_R_SWIER12_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER12_REQ	   		((uint32_t)0x00001000)

#define EXTI_SWIER_SWIER12_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER12_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER12_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER13_MASK    		((uint32_t)0x00002000)
#define EXTI_SWIER_R_SWIER13_BIT     		(13)
#define EXTI_SWIER_R_SWIER13_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER13_REQ	   		((uint32_t)0x00002000)

#define EXTI_SWIER_SWIER13_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER13_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER13_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER14_MASK    		((uint32_t)0x00004000)
#define EXTI_SWIER_R_SWIER14_BIT     		(14)
#define EXTI_SWIER_R_SWIER14_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER14_REQ	   		((uint32_t)0x00004000)

#define EXTI_SWIER_SWIER14_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER14_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER14_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_SWIER15_MASK    		((uint32_t)0x00008000)
#define EXTI_SWIER_R_SWIER15_BIT     		(15)
#define EXTI_SWIER_R_SWIER15_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_SWIER15_REQ	   		((uint32_t)0x00008000)

#define EXTI_SWIER_SWIER15_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_SWIER15_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_SWIER15_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_PVD_MASK    		((uint32_t)0x00010000)
#define EXTI_SWIER_R_PVD_BIT     		(16)
#define EXTI_SWIER_R_PVD_NA    			((uint32_t)0x00000000)
#define EXTI_SWIER_R_PVD_REQ	   		((uint32_t)0x00010000)

#define EXTI_SWIER_PVD_MASK    			((uint32_t)0x00000001)
#define EXTI_SWIER_PVD_NA				((uint32_t)0x00000000)
#define EXTI_SWIER_PVD_REQ	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_RTC_Alarm_MASK  	((uint32_t)0x00020000)
#define EXTI_SWIER_R_RTC_Alarm_BIT    	(17)
#define EXTI_SWIER_R_RTC_Alarm_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_RTC_Alarm_REQ		((uint32_t)0x00020000)

#define EXTI_SWIER_RTC_Alarm_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_RTC_Alarm_NA			((uint32_t)0x00000000)
#define EXTI_SWIER_RTC_Alarm_REQ	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_USB_OTG_FS_MASK   	((uint32_t)0x00040000)
#define EXTI_SWIER_R_USB_OTG_FS_BIT    	(18)
#define EXTI_SWIER_R_USB_OTG_FS_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_USB_OTG_FS_REQ		((uint32_t)0x00040000)

#define EXTI_SWIER_USB_OTG_FS_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_USB_OTG_FS_NA		((uint32_t)0x00000000)
#define EXTI_SWIER_USB_OTG_FS_REQ		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_ETH_Wakeup_MASK   	((uint32_t)0x00080000)
#define EXTI_SWIER_R_ETH_Wakeup_BIT    	(19)
#define EXTI_SWIER_R_ETH_Wakeup_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_ETH_Wakeup_REQ		((uint32_t)0x00080000)

#define EXTI_SWIER_ETH_Wakeup_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_ETH_Wakeup_NA		((uint32_t)0x00000000)
#define EXTI_SWIER_ETH_Wakeup_REQ		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_USB_OTG_HS_MASK   	((uint32_t)0x00100000)
#define EXTI_SWIER_R_USB_OTG_HS_BIT    	(20)
#define EXTI_SWIER_R_USB_OTG_HS_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_USB_OTG_HS_REQ		((uint32_t)0x00100000)

#define EXTI_SWIER_USB_OTG_HS_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_USB_OTG_HS_NA		((uint32_t)0x00000000)
#define EXTI_SWIER_USB_OTG_HS_REQ		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_RTC_Tamper_MASK   	((uint32_t)0x00200000)
#define EXTI_SWIER_R_RTC_Tamper_BIT    	(21)
#define EXTI_SWIER_R_RTC_Tamper_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_RTC_Tamper_REQ		((uint32_t)0x00200000)

#define EXTI_SWIER_RTC_Tamper_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_RTC_Tamper_NA		((uint32_t)0x00000000)
#define EXTI_SWIER_RTC_Tamper_REQ  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_RTC_Wakeup_MASK   	((uint32_t)0x00400000)
#define EXTI_SWIER_R_RTC_Wakeup_BIT    	(22)
#define EXTI_SWIER_R_RTC_Wakeup_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_RTC_Wakeup_REQ		((uint32_t)0x00400000)

#define EXTI_SWIER_RTC_Wakeup_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_RTC_Wakeup_NA		((uint32_t)0x00000000)
#define EXTI_SWIER_RTC_Wakeup_REQ  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_SWIER_R_LPTIM1_MASK   	((uint32_t)0x00800000)
#define EXTI_SWIER_R_LPTIM1_BIT    	(23)
#define EXTI_SWIER_R_LPTIM1_NA    	((uint32_t)0x00000000)
#define EXTI_SWIER_R_LPTIM1_REQ		((uint32_t)0x00800000)

#define EXTI_SWIER_LPTIM1_MASK    	((uint32_t)0x00000001)
#define EXTI_SWIER_LPTIM1_NA		((uint32_t)0x00000000)
#define EXTI_SWIER_LPTIM1_REQ 		((uint32_t)0x00000001)
/*--------*/

/* TODO PR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 PR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define EXTI_PR            					(((EXTI_PR_TypeDef*)(EXTI_BASE+EXTI_PR_OFFSET )))
#define EXTI_PR_R          					(*((__IO uint32_t *)(EXTI_BASE+EXTI_PR_OFFSET)))

/*--------*/
#define EXTI_PR_R_PR0_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_R_PR0_BIT     			(0)
#define EXTI_PR_R_PR0_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR0_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_R_PR0_CLEAR	   			((uint32_t)0x00000001)

#define EXTI_PR_PR0_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR0_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR0_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR0_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR1_MASK    			((uint32_t)0x00000002)
#define EXTI_PR_R_PR1_BIT     			(1)
#define EXTI_PR_R_PR1_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR1_OCCUR	   			((uint32_t)0x00000002)
#define EXTI_PR_R_PR1_CLEAR	   			((uint32_t)0x00000002)

#define EXTI_PR_PR1_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR1_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR1_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR1_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR2_MASK    			((uint32_t)0x00000004)
#define EXTI_PR_R_PR2_BIT     			(2)
#define EXTI_PR_R_PR2_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR2_OCCUR	   			((uint32_t)0x00000004)
#define EXTI_PR_R_PR2_CLEAR	   			((uint32_t)0x00000004)

#define EXTI_PR_PR2_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR2_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR2_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR2_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR3_MASK    			((uint32_t)0x00000008)
#define EXTI_PR_R_PR3_BIT     			(3)
#define EXTI_PR_R_PR3_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR3_OCCUR	   			((uint32_t)0x00000008)
#define EXTI_PR_R_PR3_CLEAR	   			((uint32_t)0x00000008)

#define EXTI_PR_PR3_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR3_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR3_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR3_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR4_MASK    			((uint32_t)0x00000010)
#define EXTI_PR_R_PR4_BIT     			(4)
#define EXTI_PR_R_PR4_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR4_OCCUR	   			((uint32_t)0x00000010)
#define EXTI_PR_R_PR4_CLEAR   			((uint32_t)0x00000010)

#define EXTI_PR_PR4_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR4_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR4_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR4_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR5_MASK    			((uint32_t)0x00000020)
#define EXTI_PR_R_PR5_BIT     			(5)
#define EXTI_PR_R_PR5_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR5_OCCUR	   			((uint32_t)0x00000020)
#define EXTI_PR_R_PR5_CLEAR   			((uint32_t)0x00000020)

#define EXTI_PR_PR5_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR5_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR5_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR5_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR6_MASK    			((uint32_t)0x00000040)
#define EXTI_PR_R_PR6_BIT     			(6)
#define EXTI_PR_R_PR6_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR6_OCCUR	   			((uint32_t)0x00000040)
#define EXTI_PR_R_PR6_CLEAR	   			((uint32_t)0x00000040)

#define EXTI_PR_PR6_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR6_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR6_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR6_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR7_MASK    			((uint32_t)0x00000080)
#define EXTI_PR_R_PR7_BIT     			(7)
#define EXTI_PR_R_PR7_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR7_OCCUR	   			((uint32_t)0x00000080)
#define EXTI_PR_R_PR7_CLEAR	   			((uint32_t)0x00000080)

#define EXTI_PR_PR7_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR7_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR7_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR7_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR8_MASK    			((uint32_t)0x00000100)
#define EXTI_PR_R_PR8_BIT     			(8)
#define EXTI_PR_R_PR8_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR8_OCCUR	   			((uint32_t)0x00000100)
#define EXTI_PR_R_PR8_CLEAR   			((uint32_t)0x00000100)

#define EXTI_PR_PR8_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR8_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR8_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR8_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR9_MASK    			((uint32_t)0x00000200)
#define EXTI_PR_R_PR9_BIT     			(9)
#define EXTI_PR_R_PR9_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR9_OCCUR	   			((uint32_t)0x00000200)
#define EXTI_PR_R_PR9_CLEAR	   			((uint32_t)0x00000200)

#define EXTI_PR_PR9_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR9_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PR9_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR9_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR10_MASK    			((uint32_t)0x00000400)
#define EXTI_PR_R_PR10_BIT     			(10)
#define EXTI_PR_R_PR10_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR10_OCCUR	   		((uint32_t)0x00000400)
#define EXTI_PR_R_PR10_CLEAR	   		((uint32_t)0x00000400)

#define EXTI_PR_PR10_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR10_NOOCCUR			((uint32_t)0x00000000)
#define EXTI_PR_PR10_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR10_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR11_MASK    			((uint32_t)0x00000800)
#define EXTI_PR_R_PR11_BIT     			(11)
#define EXTI_PR_R_PR11_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR11_OCCUR	   		((uint32_t)0x00000800)
#define EXTI_PR_R_PR11_CLEAR	   		((uint32_t)0x00000800)

#define EXTI_PR_PR11_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR11_NOOCCUR			((uint32_t)0x00000000)
#define EXTI_PR_PR11_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR11_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR12_MASK    			((uint32_t)0x00001000)
#define EXTI_PR_R_PR12_BIT     			(12)
#define EXTI_PR_R_PR12_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR12_OCCUR	   		((uint32_t)0x00001000)
#define EXTI_PR_R_PR12_CLEAR	   		((uint32_t)0x00001000)

#define EXTI_PR_PR12_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR12_NOOCCUR			((uint32_t)0x00000000)
#define EXTI_PR_PR12_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR12_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR13_MASK    			((uint32_t)0x00002000)
#define EXTI_PR_R_PR13_BIT     			(13)
#define EXTI_PR_R_PR13_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR13_OCCUR	   		((uint32_t)0x00002000)
#define EXTI_PR_R_PR13_CLEAR	   		((uint32_t)0x00002000)

#define EXTI_PR_PR13_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR13_NOOCCUR			((uint32_t)0x00000000)
#define EXTI_PR_PR13_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR13_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR14_MASK    			((uint32_t)0x00004000)
#define EXTI_PR_R_PR14_BIT     			(14)
#define EXTI_PR_R_PR14_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR14_OCCUR	   		((uint32_t)0x00004000)
#define EXTI_PR_R_PR14_CLEAR	   		((uint32_t)0x00004000)

#define EXTI_PR_PR14_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR14_NOOCCUR			((uint32_t)0x00000000)
#define EXTI_PR_PR14_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR14_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PR15_MASK    			((uint32_t)0x00008000)
#define EXTI_PR_R_PR15_BIT     			(15)
#define EXTI_PR_R_PR15_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PR15_OCCUR	   		((uint32_t)0x00008000)
#define EXTI_PR_R_PR15_CLEAR	   		((uint32_t)0x00008000)

#define EXTI_PR_PR15_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PR15_NOOCCUR			((uint32_t)0x00000000)
#define EXTI_PR_PR15_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PR15_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_PVD_MASK    			((uint32_t)0x00010000)
#define EXTI_PR_R_PVD_BIT     			(16)
#define EXTI_PR_R_PVD_NOOCCUR    		((uint32_t)0x00000000)
#define EXTI_PR_R_PVD_OCCUR	   			((uint32_t)0x00010000)
#define EXTI_PR_R_PVD_CLEAR   			((uint32_t)0x00010000)

#define EXTI_PR_PVD_MASK    			((uint32_t)0x00000001)
#define EXTI_PR_PVD_NOOCCUR				((uint32_t)0x00000000)
#define EXTI_PR_PVD_OCCUR	   			((uint32_t)0x00000001)
#define EXTI_PR_PVD_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_RTC_Alarm_MASK  		((uint32_t)0x00020000)
#define EXTI_PR_R_RTC_Alarm_BIT    		(17)
#define EXTI_PR_R_RTC_Alarm_NOOCCUR    	((uint32_t)0x00000000)
#define EXTI_PR_R_RTC_Alarm_OCCUR		((uint32_t)0x00020000)
#define EXTI_PR_R_RTC_Alarm_CLEAR		((uint32_t)0x00020000)

#define EXTI_PR_RTC_Alarm_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_RTC_Alarm_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_RTC_Alarm_OCCUR	   		((uint32_t)0x00000001)
#define EXTI_PR_RTC_Alarm_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_USB_OTG_FS_MASK   	((uint32_t)0x00040000)
#define EXTI_PR_R_USB_OTG_FS_BIT    	(18)
#define EXTI_PR_R_USB_OTG_FS_NOOCCUR    ((uint32_t)0x00000000)
#define EXTI_PR_R_USB_OTG_FS_OCCUR		((uint32_t)0x00040000)
#define EXTI_PR_R_USB_OTG_FS_CLEAR		((uint32_t)0x00040000)

#define EXTI_PR_USB_OTG_FS_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_USB_OTG_FS_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_USB_OTG_FS_OCCUR		((uint32_t)0x00000001)
#define EXTI_PR_USB_OTG_FS_CLEAR		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_ETH_Wakeup_MASK   	((uint32_t)0x00080000)
#define EXTI_PR_R_ETH_Wakeup_BIT    	(19)
#define EXTI_PR_R_ETH_Wakeup_NOOCCUR    ((uint32_t)0x00000000)
#define EXTI_PR_R_ETH_Wakeup_OCCUR		((uint32_t)0x00080000)
#define EXTI_PR_R_ETH_Wakeup_CLEAR		((uint32_t)0x00080000)

#define EXTI_PR_ETH_Wakeup_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_ETH_Wakeup_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_ETH_Wakeup_OCCUR		((uint32_t)0x00000001)
#define EXTI_PR_ETH_Wakeup_CLEAR		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_USB_OTG_HS_MASK   	((uint32_t)0x00100000)
#define EXTI_PR_R_USB_OTG_HS_BIT    	(20)
#define EXTI_PR_R_USB_OTG_HS_NOOCCUR    ((uint32_t)0x00000000)
#define EXTI_PR_R_USB_OTG_HS_OCCUR		((uint32_t)0x00100000)
#define EXTI_PR_R_USB_OTG_HS_CLEAR		((uint32_t)0x00100000)

#define EXTI_PR_USB_OTG_HS_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_USB_OTG_HS_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_USB_OTG_HS_OCCUR		((uint32_t)0x00000001)
#define EXTI_PR_USB_OTG_HS_CLEAR		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_RTC_Tamper_MASK   	((uint32_t)0x00200000)
#define EXTI_PR_R_RTC_Tamper_BIT    	(21)
#define EXTI_PR_R_RTC_Tamper_NOOCCUR    ((uint32_t)0x00000000)
#define EXTI_PR_R_RTC_Tamper_OCCUR		((uint32_t)0x00200000)
#define EXTI_PR_R_RTC_Tamper_CLEAR		((uint32_t)0x00200000)

#define EXTI_PR_RTC_Tamper_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_RTC_Tamper_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_RTC_Tamper_OCCUR  		((uint32_t)0x00000001)
#define EXTI_PR_RTC_Tamper_CLEAR  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_RTC_Wakeup_MASK   	((uint32_t)0x00400000)
#define EXTI_PR_R_RTC_Wakeup_BIT    	(22)
#define EXTI_PR_R_RTC_Wakeup_NOOCCUR    ((uint32_t)0x00000000)
#define EXTI_PR_R_RTC_Wakeup_OCCUR		((uint32_t)0x00400000)
#define EXTI_PR_R_RTC_Wakeup_CLEAR		((uint32_t)0x00400000)

#define EXTI_PR_RTC_Wakeup_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_RTC_Wakeup_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_RTC_Wakeup_OCCUR  		((uint32_t)0x00000001)
#define EXTI_PR_RTC_Wakeup_CLEAR 		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define EXTI_PR_R_LPTIM1_MASK   		((uint32_t)0x00800000)
#define EXTI_PR_R_LPTIM1_BIT    		(23)
#define EXTI_PR_R_LPTIM1_NOOCCUR    	((uint32_t)0x00000000)
#define EXTI_PR_R_LPTIM1_OCCUR			((uint32_t)0x00800000)
#define EXTI_PR_R_LPTIM1_CLEAR			((uint32_t)0x00800000)

#define EXTI_PR_LPTIM1_MASK    		((uint32_t)0x00000001)
#define EXTI_PR_LPTIM1_NOOCCUR		((uint32_t)0x00000000)
#define EXTI_PR_LPTIM1_OCCUR 		((uint32_t)0x00000001)
#define EXTI_PR_LPTIM1_CLEAR 		((uint32_t)0x00000001)
/*--------*/

extern uint32_t printEXTI;
void EXTI_Line2(void);

#endif /* EXTI_H_ */
