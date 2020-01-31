/*
 * PWR.h
 *
 *  Created on: 27 jul. 2018
 *      Author: InDev
 */

#ifndef PWR_H_
#define PWR_H_

#include "Core.h"
#include <stdint.h>

#define PWR_BASE            ((uint32_t)0x40007000)
#define PWR_OFFSET          ((uint32_t)0x00007000)

typedef __IO struct
{
	__IO uint32_t	LPDS		:1;
	__IO uint32_t	PDDS		:1;
	     uint32_t	reserved	:1;
	__IO uint32_t	CSBF		:1;
	__IO uint32_t	PVDE		:1;
	__IO uint32_t	PLS			:3;
	__IO uint32_t	DBP			:1;
	__IO uint32_t	FPDS		:1;
	__IO uint32_t	LPUDS		:1;
	__IO uint32_t	MRUDS		:1;
	     uint32_t	reserved1	:1;
	__IO uint32_t	ADCDC1		:1;
	__IO uint32_t	VOS			:2;
	__IO uint32_t	ODEN		:1;
	__IO uint32_t	ODSWEN		:1;
	__IO uint32_t	UDEN		:2;
         uint32_t	reserved2	:12;
}PWR_CR1_TypeDef;

typedef __IO struct
{
	__I  uint32_t	WUIF		:1;
	__I  uint32_t	SBF			:1;
	__I  uint32_t	PVDO		:1;
	__I  uint32_t	BRR			:1;
	     uint32_t	reserved	:4;
	__IO uint32_t	EWUP		:1;
	__IO uint32_t	BRE			:1;
         uint32_t	reserved1	:4;
	__I  uint32_t	VOSRDY		:1;
         uint32_t	reserved2	:1;
	__I  uint32_t	ODRDY		:1;
	__I  uint32_t	ODSWRDY		:1;
	__IO uint32_t	UDRDY		:2;
         uint32_t	reserved3	:12;
}PWR_CSR1_TypeDef;

typedef __IO struct
{
	__I  uint32_t	CWUPF1		:1;
	__I  uint32_t	CWUPF2		:1;
	__I  uint32_t	CWUPF3		:1;
	__I  uint32_t	CWUPF4		:1;
	__I  uint32_t	CWUPF5		:1;
	__I  uint32_t	CWUPF6		:1;
	     uint32_t	reserved	:2;
    __IO uint32_t	WUPP1		:1;
    __IO uint32_t	WUPP2		:1;
    __IO uint32_t	WUPP3		:1;
    __IO uint32_t	WUPP4		:1;
    __IO uint32_t	WUPP5		:1;
    __IO uint32_t	WUPP6		:1;
	     uint32_t	reserved1	:18;
}PWR_CR2_TypeDef;


typedef __IO struct
{
	__I  uint32_t	WUPF1		:1;
	__I  uint32_t	WUPF2		:1;
	__I  uint32_t	WUPF3		:1;
	__I  uint32_t	WUPF4		:1;
	__I  uint32_t	WUPF5		:1;
	__I  uint32_t	WUPF6		:1;
	     uint32_t	reserved	:2;
    __IO uint32_t	EWUP1		:1;
    __IO uint32_t	EWUP2		:1;
    __IO uint32_t	EWUP3		:1;
    __IO uint32_t	EWUP4		:1;
    __IO uint32_t	EWUP5		:1;
    __IO uint32_t	EWUP6		:1;
	     uint32_t	reserved1	:18;
}PWR_CSR2_TypeDef;


typedef __IO struct
{
	union
	{
		__IO uint32_t 	CR1;   /*!< PWR power control register,        Address offset: 0x00 */
		PWR_CR1_TypeDef	CR1_Bit;
	};
	union
	{
		__IO uint32_t 	 CSR1;  /*!< PWR power control/status register, Address offset: 0x04 */
		PWR_CSR1_TypeDef CSR1_Bit;
	};
	union
	{
		__IO uint32_t 	CR2;   /*!< PWR power control register,        Address offset: 0x00 */
		PWR_CR2_TypeDef	CR2_Bit;
	};
	union
	{
		__IO uint32_t 	 CSR2;  /*!< PWR power control/status register, Address offset: 0x04 */
		PWR_CSR2_TypeDef CSR2_Bit;
	};
} PWR_TypeDef;


#define PWR                 ((PWR_TypeDef *) PWR_BASE)

#define PWR_CR1_OFFSET		((uint32_t)0x00000000)
#define PWR_CSR1_OFFSET		((uint32_t)0x00000004)
#define PWR_CR2_OFFSET		((uint32_t)0x00000008)
#define PWR_CSR2_OFFSET		((uint32_t)0x0000000C)




/* TODO CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define PWR_CR1            					(((PWR_CR1_TypeDef*)(PWR_BASE+PWR_CR1_OFFSET )))
#define PWR_CR1_R          					(*((__IO uint32_t *)(PWR_BASE+PWR_CR1_OFFSET)))

/*--------*/
#define PWR_CR1_R_LPDS_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_R_LPDS_BIT     		(0)
#define PWR_CR1_R_LPDS_MAIN    		((uint32_t)0x00000000)
#define PWR_CR1_R_LPDS_LOW  	   	((uint32_t)0x00000001)

#define PWR_CR1_LPDS_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_LPDS_MAIN    		((uint32_t)0x00000000)
#define PWR_CR1_LPDS_LOW		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_PDDS_MASK    		((uint32_t)0x00000002)
#define PWR_CR1_R_PDDS_BIT     		(1)
#define PWR_CR1_R_PDDS_STOP    		((uint32_t)0x00000000)
#define PWR_CR1_R_PDDS_STDBY 	   	((uint32_t)0x00000002)

#define PWR_CR1_PDDS_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_PDDS_STOP    		((uint32_t)0x00000000)
#define PWR_CR1_PDDS_STDBY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_CWUF_MASK    		((uint32_t)0x00000004)
#define PWR_CR1_R_CWUF_BIT     		(2)
#define PWR_CR1_R_CWUF_NE    		((uint32_t)0x00000000)
#define PWR_CR1_R_CWUF_CLEAR 	   	((uint32_t)0x00000004)

#define PWR_CR1_CWUF_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_CWUF_NE     		((uint32_t)0x00000000)
#define PWR_CR1_CWUF_CLEAR		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_CSBF_MASK    		((uint32_t)0x00000008)
#define PWR_CR1_R_CSBF_BIT     		(3)
#define PWR_CR1_R_CSBF_NA    		((uint32_t)0x00000000)
#define PWR_CR1_R_CSBF_CLEAR 	   	((uint32_t)0x00000008)

#define PWR_CR1_CSBF_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_CSBF_NA     		((uint32_t)0x00000000)
#define PWR_CR1_CSBF_CLEAR		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_PVDE_MASK    		((uint32_t)0x00000010)
#define PWR_CR1_R_PVDE_BIT     		(4)
#define PWR_CR1_R_PVDE_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_R_PVDE_EN   	   	((uint32_t)0x00000010)

#define PWR_CR1_PVDE_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_PVDE_DIS    		((uint32_t)0x00000000)
#define PWR_CR1_PVDE_EN			   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_PLS_MASK    		((uint32_t)0x000000E0)
#define PWR_CR1_R_PLS_BIT     		(5)
#define PWR_CR1_R_PLS_2_0V   		((uint32_t)0x00000000)
#define PWR_CR1_R_PLS_2_1V 	   	    ((uint32_t)0x00000020)
#define PWR_CR1_R_PLS_2_3V 	   	    ((uint32_t)0x00000040)
#define PWR_CR1_R_PLS_2_5V 	   	    ((uint32_t)0x00000060)
#define PWR_CR1_R_PLS_2_6V 	   	    ((uint32_t)0x00000080)
#define PWR_CR1_R_PLS_2_7V 	   	    ((uint32_t)0x000000A0)
#define PWR_CR1_R_PLS_2_8V 	   	    ((uint32_t)0x000000C0)
#define PWR_CR1_R_PLS_2_9V 	   	    ((uint32_t)0x000000E0)

#define PWR_CR1_PLS_MASK    		((uint32_t)0x00000007)
#define PWR_CR1_PLS_2_0V   		    ((uint32_t)0x00000000)
#define PWR_CR1_PLS_2_1V		   	((uint32_t)0x00000001)
#define PWR_CR1_PLS_2_3V		   	((uint32_t)0x00000002)
#define PWR_CR1_PLS_2_5V		   	((uint32_t)0x00000003)
#define PWR_CR1_PLS_2_6V		   	((uint32_t)0x00000004)
#define PWR_CR1_PLS_2_7V		   	((uint32_t)0x00000005)
#define PWR_CR1_PLS_2_8V		   	((uint32_t)0x00000006)
#define PWR_CR1_PLS_2_9V		   	((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define PWR_CR1_R_DBP_MASK    		((uint32_t)0x00000100)
#define PWR_CR1_R_DBP_BIT     		(8)
#define PWR_CR1_R_DBP_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_R_DBP_EN   	   		((uint32_t)0x00000100)

#define PWR_CR1_DBP_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_DBP_DIS    			((uint32_t)0x00000000)
#define PWR_CR1_DBP_EN			   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_FPDS_MASK    		((uint32_t)0x00000200)
#define PWR_CR1_R_FPDS_BIT     		(9)
#define PWR_CR1_R_FPDS_ON   		((uint32_t)0x00000000)
#define PWR_CR1_R_FPDS_OFF   	   	((uint32_t)0x00000200)

#define PWR_CR1_FPDS_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_FPDS_ON     		((uint32_t)0x00000000)
#define PWR_CR1_FPDS_OFF		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_LPUDS_MASK    	((uint32_t)0x00000400)
#define PWR_CR1_R_LPUDS_BIT     	(10)
#define PWR_CR1_R_LPUDS_ON   		((uint32_t)0x00000000)
#define PWR_CR1_R_LPUDS_OFF   	   	((uint32_t)0x00000400)

#define PWR_CR1_LPUDS_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_LPUDS_ON    		((uint32_t)0x00000000)
#define PWR_CR1_LPUDS_OFF			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_MRUDS_MASK    	((uint32_t)0x00000800)
#define PWR_CR1_R_MRUDS_BIT     	(11)
#define PWR_CR1_R_MRUDS_ON   		((uint32_t)0x00000000)
#define PWR_CR1_R_MRUDS_OFF   	   	((uint32_t)0x00000800)

#define PWR_CR1_MRUDS_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_MRUDS_ON    		((uint32_t)0x00000000)
#define PWR_CR1_MRUDS_OFF			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_ADCDC1_MASK    	((uint32_t)0x00002000)
#define PWR_CR1_R_ADCDC1_BIT     	(13)
#define PWR_CR1_R_ADCDC1_NA   		((uint32_t)0x00000000)
#define PWR_CR1_R_ADCDC1_EN   	   	((uint32_t)0x00002000)

#define PWR_CR1_ADCDC1_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_ADCDC1_NA    		((uint32_t)0x00000000)
#define PWR_CR1__EN			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_VOS_MASK    		((uint32_t)0x0000C000)
#define PWR_CR1_R_VOS_BIT     		(14)
#define PWR_CR1_R_VOS_SCALE3		((uint32_t)0x00004000)
#define PWR_CR1_R_VOS_SCALE2   		((uint32_t)0x00008000)
#define PWR_CR1_R_VOS_SCALE1   		((uint32_t)0x0000C000)

#define PWR_CR1_VOS_MASK    		((uint32_t)0x00000003)
#define PWR_CR1_VOS_SCALE3 			((uint32_t)0x00000001)
#define PWR_CR1_VOS_SCALE2			((uint32_t)0x00000002)
#define PWR_CR1_VOS_SCALE1			((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define PWR_CR1_R_ODEN_MASK    		((uint32_t)0x00010000)
#define PWR_CR1_R_ODEN_BIT     		(16)
#define PWR_CR1_R_ODEN_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_R_ODEN_EN   	   	((uint32_t)0x00010000)

#define PWR_CR1_ODEN_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_ODEN_DIS   			((uint32_t)0x00000000)
#define PWR_CR1_ODEN_EN				((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_ODEN_MASK    		((uint32_t)0x00010000)
#define PWR_CR1_R_ODEN_BIT     		(16)
#define PWR_CR1_R_ODEN_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_R_ODEN_EN   	   	((uint32_t)0x00010000)

#define PWR_CR1_ODEN_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_ODEN_DIS   			((uint32_t)0x00000000)
#define PWR_CR1_ODEN_EN				((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_ODSWEN_MASK    	((uint32_t)0x00020000)
#define PWR_CR1_R_ODSWEN_BIT     	(17)
#define PWR_CR1_R_ODSWEN_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_R_ODSWEN_EN   	   	((uint32_t)0x00020000)

#define PWR_CR1_ODSWEN_MASK    		((uint32_t)0x00000001)
#define PWR_CR1_ODSWEN_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_ODSWEN_EN			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR1_R_UDEN_MASK    		((uint32_t)0x000C0000)
#define PWR_CR1_R_UDEN_BIT     		(18)
#define PWR_CR1_R_UDEN_DIS   		((uint32_t)0x00000000)
#define PWR_CR1_R_UDEN_EN   	   	((uint32_t)0x000C0000)

#define PWR_CR1_UDEN_MASK    		((uint32_t)0x00000003)
#define PWR_CR1_UDEN_DIS   			((uint32_t)0x00000000)
#define PWR_CR1_UDEN_EN				((uint32_t)0x00000003)
/*--------*/


/* TODO CSR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CSR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define PWR_CSR1            					(((PWR_CSR1_TypeDef*)(PWR_BASE+PWR_CSR1_OFFSET )))
#define PWR_CSR1_R          					(*((__IO uint32_t *)(PWR_BASE+PWR_CSR1_OFFSET)))

/*--------*/
#define PWR_CSR1_R_WUF_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_R_WUF_BIT     		(0)
#define PWR_CSR1_R_WUF_NOOCCUR 		((uint32_t)0x00000000)
#define PWR_CSR1_R_WUF_OCCUR  	   	((uint32_t)0x00000001)

#define PWR_CSR1_WUF_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_WUF_NOOCCUR   		((uint32_t)0x00000000)
#define PWR_CSR1_WUF_OCCUR		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_SBF_MASK    		((uint32_t)0x00000002)
#define PWR_CSR1_R_SBF_BIT     		(1)
#define PWR_CSR1_R_SBF_NOSTDBY 		((uint32_t)0x00000000)
#define PWR_CSR1_R_SBF_STDBY  	   	((uint32_t)0x00000002)

#define PWR_CSR1_SBF_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_SBF_NOSTDBY  		((uint32_t)0x00000000)
#define PWR_CSR1_SBF_STDBY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_PVDO_MASK   		((uint32_t)0x00000004)
#define PWR_CSR1_R_PVDO_BIT    		(2)
#define PWR_CSR1_R_PVDO_HIGH 		((uint32_t)0x00000000)
#define PWR_CSR1_R_PVDO_LOW  	   	((uint32_t)0x00000004)

#define PWR_CSR1_PVDO_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_PVDO_HIGH  		((uint32_t)0x00000000)
#define PWR_CSR1_PVDO_LOW		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_BRR_MASK   		((uint32_t)0x00000008)
#define PWR_CSR1_R_BRR_BIT    		(3)
#define PWR_CSR1_R_BRR_NORDY 		((uint32_t)0x00000000)
#define PWR_CSR1_R_BRR_RDY  	   	((uint32_t)0x00000008)

#define PWR_CSR1_BRR_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_BRR_NORDY  		((uint32_t)0x00000000)
#define PWR_CSR1_BRR_RDY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_EIWUP_MASK   	((uint32_t)0x00000100)
#define PWR_CSR1_R_EIWUP_BIT    	(8)
#define PWR_CSR1_R_EIWUP_DIS 		((uint32_t)0x00000000)
#define PWR_CSR1_R_EIWUP_EN  	   	((uint32_t)0x00000100)

#define PWR_CSR1_EIWUP_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_EIWUP_DIS  		((uint32_t)0x00000000)
#define PWR_CSR1_EIWUP_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_BRE_MASK   		((uint32_t)0x00000200)
#define PWR_CSR1_R_BRE_BIT    		(9)
#define PWR_CSR1_R_BRE_DIS 			((uint32_t)0x00000000)
#define PWR_CSR1_R_BRE_EN  	   		((uint32_t)0x00000200)

#define PWR_CSR1_BRE_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_BRE_DIS  			((uint32_t)0x00000000)
#define PWR_CSR1_BRE_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_VOSRDY_MASK   	((uint32_t)0x00004000)
#define PWR_CSR1_R_VOSRDY_BIT    	(14)
#define PWR_CSR1_R_VOSRDY_NORDY 	((uint32_t)0x00000000)
#define PWR_CSR1_R_VOSRDY_RDY  	   	((uint32_t)0x00004000)

#define PWR_CSR1_VOSRDY_MASK    	((uint32_t)0x00000001)
#define PWR_CSR1_VOSRDY_NORDY  		((uint32_t)0x00000000)
#define PWR_CSR1_VOSRDY_RDY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_ODRDY_MASK   	((uint32_t)0x00010000)
#define PWR_CSR1_R_ODRDY_BIT    	(16)
#define PWR_CSR1_R_ODRDY_NORDY 		((uint32_t)0x00000000)
#define PWR_CSR1_R_ODRDY_RDY  	   	((uint32_t)0x00010000)

#define PWR_CSR1_ODRDY_MASK    		((uint32_t)0x00000001)
#define PWR_CSR1_ODRDY_NORDY  		((uint32_t)0x00000000)
#define PWR_CSR1_ODRDY_RDY		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_ODSWRDY_MASK   	((uint32_t)0x00020000)
#define PWR_CSR1_R_ODSWRDY_BIT    	(17)
#define PWR_CSR1_R_ODSWRDY_NORDY 	((uint32_t)0x00000000)
#define PWR_CSR1_R_ODSWRDY_RDY    	((uint32_t)0x00020000)

#define PWR_CSR1_ODSWRDY_MASK    	((uint32_t)0x00000001)
#define PWR_CSR1_ODSWRDY_NORDY  	((uint32_t)0x00000000)
#define PWR_CSR1_ODSWRDY_RDY		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR1_R_UDRDY_MASK   	((uint32_t)0x000C0000)
#define PWR_CSR1_R_UDRDY_BIT    	(18)
#define PWR_CSR1_R_UDRDY_NORDY 		((uint32_t)0x00000000)
#define PWR_CSR1_R_UDRDY_RDY    	((uint32_t)0x000C0000)

#define PWR_CSR1_UDRDY_MASK    	((uint32_t)0x00000003)
#define PWR_CSR1_UDRDY_NORDY  	((uint32_t)0x00000000)
#define PWR_CSR1_UDRDY_RDY		((uint32_t)0x00000003)
/*--------*/


/* TODO CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define PWR_CR2            					(((PWR_CR2_TypeDef*)(PWR_BASE+PWR_CR2_OFFSET )))
#define PWR_CR2_R          					(*((__IO uint32_t *)(PWR_BASE+PWR_CR2_OFFSET)))

/*--------*/
#define PWR_CR2_R_CWUPF1_MASK    	((uint32_t)0x00000001)
#define PWR_CR2_R_CWUPF1_BIT     	(0)
#define PWR_CR2_R_CWUPF1_NA    		((uint32_t)0x00000000)
#define PWR_CR2_R_CWUPF1_CLEAR  	((uint32_t)0x00000001)

#define PWR_CR2_CWUPF1_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_CWUPF1_NA    		((uint32_t)0x00000000)
#define PWR_CR2_CWUPF1_CLEAR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_CWUPF2_MASK    	((uint32_t)0x00000002)
#define PWR_CR2_R_CWUPF2_BIT     	(1)
#define PWR_CR2_R_CWUPF2_NA    		((uint32_t)0x00000000)
#define PWR_CR2_R_CWUPF2_CLEAR  	((uint32_t)0x00000002)

#define PWR_CR2_CWUPF2_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_CWUPF2_NA    		((uint32_t)0x00000000)
#define PWR_CR2_CWUPF2_CLEAR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_CWUPF3_MASK    	((uint32_t)0x00000004)
#define PWR_CR2_R_CWUPF3_BIT     	(2)
#define PWR_CR2_R_CWUPF3_NA    		((uint32_t)0x00000000)
#define PWR_CR2_R_CWUPF3_CLEAR  	((uint32_t)0x00000004)

#define PWR_CR2_CWUPF3_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_CWUPF3_NA    		((uint32_t)0x00000000)
#define PWR_CR2_CWUPF3_CLEAR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_CWUPF4_MASK    	((uint32_t)0x00000008)
#define PWR_CR2_R_CWUPF4_BIT     	(3)
#define PWR_CR2_R_CWUPF4_NA    		((uint32_t)0x00000000)
#define PWR_CR2_R_CWUPF4_CLEAR  	((uint32_t)0x00000008)

#define PWR_CR2_CWUPF4_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_CWUPF4_NA    		((uint32_t)0x00000000)
#define PWR_CR2_CWUPF4_CLEAR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_CWUPF5_MASK    	((uint32_t)0x00000010)
#define PWR_CR2_R_CWUPF5_BIT     	(4)
#define PWR_CR2_R_CWUPF5_NA    		((uint32_t)0x00000000)
#define PWR_CR2_R_CWUPF5_CLEAR  	((uint32_t)0x00000010)

#define PWR_CR2_CWUPF5_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_CWUPF5_NA    		((uint32_t)0x00000000)
#define PWR_CR2_CWUPF5_CLEAR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_CWUPF6_MASK    	((uint32_t)0x00000020)
#define PWR_CR2_R_CWUPF6_BIT     	(5)
#define PWR_CR2_R_CWUPF6_NA    		((uint32_t)0x00000000)
#define PWR_CR2_R_CWUPF6_CLEAR  	((uint32_t)0x00000020)

#define PWR_CR2_CWUPF6_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_CWUPF6_NA    		((uint32_t)0x00000000)
#define PWR_CR2_CWUPF6_CLEAR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_WUPP1_MASK    	((uint32_t)0x00000100)
#define PWR_CR2_R_WUPP1_BIT     	(8)
#define PWR_CR2_R_WUPP1_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_R_WUPP1_FALLING  	((uint32_t)0x00000100)

#define PWR_CR2_WUPP1_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_WUPP1_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_WUPP1_FALLING	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_WUPP2_MASK    	((uint32_t)0x00000200)
#define PWR_CR2_R_WUPP2_BIT     	(9)
#define PWR_CR2_R_WUPP2_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_R_WUPP2_FALLING  	((uint32_t)0x00000200)

#define PWR_CR2_WUPP2_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_WUPP2_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_WUPP2_FALLING	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_WUPP3_MASK    	((uint32_t)0x00000400)
#define PWR_CR2_R_WUPP3_BIT     	(10)
#define PWR_CR2_R_WUPP3_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_R_WUPP3_FALLING  	((uint32_t)0x00000400)

#define PWR_CR2_WUPP3_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_WUPP3_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_WUPP3_FALLING	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_WUPP4_MASK    	((uint32_t)0x00000800)
#define PWR_CR2_R_WUPP4_BIT     	(11)
#define PWR_CR2_R_WUPP4_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_R_WUPP4_FALLING  	((uint32_t)0x00000800)

#define PWR_CR2_WUPP4_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_WUPP4_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_WUPP4_FALLING	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_WUPP5_MASK    	((uint32_t)0x00001000)
#define PWR_CR2_R_WUPP5_BIT     	(12)
#define PWR_CR2_R_WUPP5_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_R_WUPP5_FALLING  	((uint32_t)0x00001000)

#define PWR_CR2_WUPP5_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_WUPP5_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_WUPP5_FALLING	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CR2_R_WUPP6_MASK    	((uint32_t)0x00002000)
#define PWR_CR2_R_WUPP6_BIT     	(13)
#define PWR_CR2_R_WUPP6_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_R_WUPP6_FALLING  	((uint32_t)0x00002000)

#define PWR_CR2_WUPP6_MASK    		((uint32_t)0x00000001)
#define PWR_CR2_WUPP6_RISING    	((uint32_t)0x00000000)
#define PWR_CR2_WUPP6_FALLING	  	((uint32_t)0x00000001)
/*--------*/


/* TODO CSR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 CSR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define PWR_CSR2            					(((PWR_CSR2_TypeDef*)(PWR_BASE+PWR_CSR2_OFFSET )))
#define PWR_CSR2_R          					(*((__IO uint32_t *)(PWR_BASE+PWR_CSR2_OFFSET)))

/*--------*/
#define PWR_CSR2_R_WUPF1_MASK    	((uint32_t)0x00000001)
#define PWR_CSR2_R_WUPF1_BIT     	(0)
#define PWR_CSR2_R_WUPF1_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_R_WUPF1_OCCUR  	((uint32_t)0x00000001)

#define PWR_CSR2_WUPF1_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_WUPF1_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_WUPF1_OCCUR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_WUPF2_MASK    	((uint32_t)0x00000002)
#define PWR_CSR2_R_WUPF2_BIT     	(1)
#define PWR_CSR2_R_WUPF2_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_R_WUPF2_OCCUR  	((uint32_t)0x00000002)

#define PWR_CSR2_WUPF2_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_WUPF2_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_WUPF2_OCCUR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_WUPF3_MASK    	((uint32_t)0x00000004)
#define PWR_CSR2_R_WUPF3_BIT     	(2)
#define PWR_CSR2_R_WUPF3_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_R_WUPF3_OCCUR  	((uint32_t)0x00000004)

#define PWR_CSR2_WUPF3_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_WUPF3_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_WUPF3_OCCUR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_WUPF4_MASK    	((uint32_t)0x00000008)
#define PWR_CSR2_R_WUPF4_BIT     	(3)
#define PWR_CSR2_R_WUPF4_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_R_WUPF4_OCCUR  	((uint32_t)0x00000008)

#define PWR_CSR2_WUPF4_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_WUPF4_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_WUPF4_OCCUR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_WUPF5_MASK    	((uint32_t)0x00000010)
#define PWR_CSR2_R_WUPF5_BIT     	(4)
#define PWR_CSR2_R_WUPF5_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_R_WUPF5_OCCUR  	((uint32_t)0x00000010)

#define PWR_CSR2_WUPF5_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_WUPF5_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_WUPF5_OCCUR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_WUPF6_MASK    	((uint32_t)0x00000020)
#define PWR_CSR2_R_WUPF6_BIT     	(5)
#define PWR_CSR2_R_WUPF6_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_R_WUPF6_OCCUR  	((uint32_t)0x00000020)

#define PWR_CSR2_WUPF6_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_WUPF6_NOOCCUR    		((uint32_t)0x00000000)
#define PWR_CSR2_WUPF6_OCCUR	  	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_EWUP1_MASK    	((uint32_t)0x00000100)
#define PWR_CSR2_R_EWUP1_BIT     	(8)
#define PWR_CSR2_R_EWUP1_DIS    	((uint32_t)0x00000000)
#define PWR_CSR2_R_EWUP1_EN  		((uint32_t)0x00000100)

#define PWR_CSR2_EWUP1_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_EWUP1_DIS    		((uint32_t)0x00000000)
#define PWR_CSR2_EWUP1_EN	  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_EWUP2_MASK    	((uint32_t)0x00000200)
#define PWR_CSR2_R_EWUP2_BIT     	(9)
#define PWR_CSR2_R_EWUP2_DIS    	((uint32_t)0x00000000)
#define PWR_CSR2_R_EWUP2_EN  		((uint32_t)0x00000200)

#define PWR_CSR2_EWUP2_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_EWUP2_DIS    		((uint32_t)0x00000000)
#define PWR_CSR2_EWUP2_EN	  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_EWUP3_MASK    	((uint32_t)0x00000400)
#define PWR_CSR2_R_EWUP3_BIT     	(10)
#define PWR_CSR2_R_EWUP3_DIS    	((uint32_t)0x00000000)
#define PWR_CSR2_R_EWUP3_EN  		((uint32_t)0x00000400)

#define PWR_CSR2_EWUP3_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_EWUP3_DIS    		((uint32_t)0x00000000)
#define PWR_CSR2_EWUP3_EN	  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_EWUP4_MASK    	((uint32_t)0x00000800)
#define PWR_CSR2_R_EWUP4_BIT     	(11)
#define PWR_CSR2_R_EWUP4_DIS    	((uint32_t)0x00000000)
#define PWR_CSR2_R_EWUP4_EN  		((uint32_t)0x00000800)

#define PWR_CSR2_EWUP4_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_EWUP4_DIS    		((uint32_t)0x00000000)
#define PWR_CSR2_EWUP4_EN	  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_EWUP5_MASK    	((uint32_t)0x00001000)
#define PWR_CSR2_R_EWUP5_BIT     	(12)
#define PWR_CSR2_R_EWUP5_DIS    	((uint32_t)0x00000000)
#define PWR_CSR2_R_EWUP5_EN  		((uint32_t)0x00001000)

#define PWR_CSR2_EWUP5_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_EWUP5_DIS    		((uint32_t)0x00000000)
#define PWR_CSR2_EWUP5_EN	  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define PWR_CSR2_R_EWUP6_MASK    	((uint32_t)0x00002000)
#define PWR_CSR2_R_EWUP6_BIT     	(13)
#define PWR_CSR2_R_EWUP6_DIS    	((uint32_t)0x00000000)
#define PWR_CSR2_R_EWUP6_EN  		((uint32_t)0x00002000)

#define PWR_CSR2_EWUP6_MASK    		((uint32_t)0x00000001)
#define PWR_CSR2_EWUP6_DIS    		((uint32_t)0x00000000)
#define PWR_CSR2_EWUP6_EN	  		((uint32_t)0x00000001)
/*--------*/

#endif /* PWR_H_ */
