/*
 * AccessControl.h
 *
 *  Created on: 4 ago. 2018
 *      Author: InDev
 */

#ifndef ACCESSCONTROL_H_
#define ACCESSCONTROL_H_

#include "Core.h"
#include <stdint.h>                      		/* standard types definitions                      */

#define AccessControl_BASE            ((uint32_t)0xE000EF90)

typedef __IO struct
{
    __IO uint32_t EN       	:1;
    __IO uint32_t RMW      	:1;
    __IO uint32_t RETEN    	:1;
    __I  uint32_t SZ    	:4;
        uint32_t reserved   :25;
}ITCMCR_TypeDef;

typedef __IO struct
{
    __IO uint32_t EN       	:1;
    __IO uint32_t RMW      	:1;
    __IO uint32_t RETEN    	:1;
    __I  uint32_t SZ    	:4;
        uint32_t reserved   :25;
}DTCMCR_TypeDef;

typedef __IO struct
{
    __IO uint32_t EN       	:1;
    __I  uint32_t SZ      	:3;
        uint32_t reserved   :28;
}AHBPCR_TypeDef;

typedef __IO struct
{
    __IO uint32_t SIWT       :1;
    __IO uint32_t ECCEN      :1;
    __IO uint32_t FORCEWT    :1;
         uint32_t reserved   :29;
}CACR_TypeDef;

typedef __IO struct
{
    __IO uint32_t CTL       :2;
    __IO uint32_t TPRI      :9;
    __IO uint32_t INITCOUNT :5;
         uint32_t reserved  :16;
}AHBSCR_TypeDef;

typedef __IO struct
{
    __IO uint32_t ITCM      :1;
    __IO uint32_t DTCM      :1;
    __IO uint32_t AHBP      :1;
    __IO uint32_t AXIM      :1;
    __IO uint32_t EPPB 		:1;
         uint32_t reserved  :3;
    __IO uint32_t AXIMTYPE 	:2;
    	 uint32_t reserved1  :22;
}ABFSR_TypeDef;

typedef __IO struct
{
	union
    {
        __IO uint32_t		ITCMCR;
        ITCMCR_TypeDef		ITCMCR_Bit;
    };
	union
    {
        __IO uint32_t		DTCMCR;
        DTCMCR_TypeDef		DTCMCR_Bit;
    };
	union
    {
        __IO uint32_t		AHBPCR;
        AHBPCR_TypeDef		AHBPCR_Bit;
    };
	union
    {
        __IO uint32_t		CACR;
        CACR_TypeDef		CACR_Bit;
    };
	union
    {
        __IO uint32_t		AHBSCR;
        AHBSCR_TypeDef		AHBSCR_Bit;
    };
	uint32_t				reserved;
	union
    {
        __IO uint32_t		ABFSR;
        ABFSR_TypeDef		ABFSR_Bit;
    };

}AccessControl_TypeDef;

#define AccessControl                 (((AccessControl_TypeDef*)(AccessControl_BASE)))


#define AccessControl_ITCMCR_OFFSET     ((uint32_t)0x00000000)
#define AccessControl_DTCMCR_OFFSET     ((uint32_t)0x00000004)
#define AccessControl_AHBPCR_OFFSET     ((uint32_t)0x00000008)
#define AccessControl_CACR_OFFSET       ((uint32_t)0x0000000C)
#define AccessControl_AHBSCR_OFFSET     ((uint32_t)0x00000010)
#define AccessControl_ABFSR_OFFSET      ((uint32_t)0x00000018)

/* TODO ITCMCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 ITCMCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define AccessControl_ITCMCR            (((ITCMCR_TypeDef*)(AccessControl_BASE+AccessControl_ITCMCR_OFFSET )))
#define AccessControl_ITCMCR_R          (*((__IO uint32_t *)(AccessControl_BASE+AccessControl_ITCMCR_OFFSET)))

/*--------*/
#define AccessControl_ITCMCR_R_EN_MASK      	((uint32_t)0x00000001)
#define AccessControl_ITCMCR_R_EN_BIT       	(0)
#define AccessControl_ITCMCR_R_EN_EN			((uint32_t)0x00000001)
#define AccessControl_ITCMCR_R_EN_DIS			((uint32_t)0x00000000)

#define AccessControl_ITCMCR_EN_MASK        	((uint32_t)0x00000001)
#define AccessControl_ITCMCR_EN_EN				((uint32_t)0x00000001)
#define AccessControl_ITCMCR_EN_DIS				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ITCMCR_R_RMW_MASK      	((uint32_t)0x00000002)
#define AccessControl_ITCMCR_R_RMW_BIT       	(1)
#define AccessControl_ITCMCR_R_RMW_EN			((uint32_t)0x00000002)
#define AccessControl_ITCMCR_R_RMW_DIS			((uint32_t)0x00000000)

#define AccessControl_ITCMCR_RMW_MASK        	((uint32_t)0x00000001)
#define AccessControl_ITCMCR_RMW_EN				((uint32_t)0x00000001)
#define AccessControl_ITCMCR_RMW_DIS			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ITCMCR_R_RETEN_MASK      	((uint32_t)0x00000004)
#define AccessControl_ITCMCR_R_RETEN_BIT       	(2)
#define AccessControl_ITCMCR_R_RETEN_EN			((uint32_t)0x00000004)
#define AccessControl_ITCMCR_R_RETEN_DIS		((uint32_t)0x00000000)

#define AccessControl_ITCMCR_RETEN_MASK        	((uint32_t)0x00000001)
#define AccessControl_ITCMCR_RETEN_EN			((uint32_t)0x00000001)
#define AccessControl_ITCMCR_RETEN_DIS			((uint32_t)0x00000000)
/*--------*/


/*--------*/
#define AccessControl_ITCMCR_R_SZ_MASK      	((uint32_t)0x00000078)
#define AccessControl_ITCMCR_R_SZ_BIT       	(3)
#define AccessControl_ITCMCR_R_SZ_4KB			((uint32_t)0x00000018)
#define AccessControl_ITCMCR_R_SZ_8KB			((uint32_t)0x00000020)
#define AccessControl_ITCMCR_R_SZ_16KB			((uint32_t)0x00000028)
#define AccessControl_ITCMCR_R_SZ_32KB			((uint32_t)0x00000030)
#define AccessControl_ITCMCR_R_SZ_64KB			((uint32_t)0x00000038)
#define AccessControl_ITCMCR_R_SZ_128KB			((uint32_t)0x00000040)
#define AccessControl_ITCMCR_R_SZ_256KB			((uint32_t)0x00000048)
#define AccessControl_ITCMCR_R_SZ_512KB			((uint32_t)0x00000050)
#define AccessControl_ITCMCR_R_SZ_1MB			((uint32_t)0x00000058)
#define AccessControl_ITCMCR_R_SZ_2MB			((uint32_t)0x00000060)
#define AccessControl_ITCMCR_R_SZ_4MB			((uint32_t)0x00000068)
#define AccessControl_ITCMCR_R_SZ_8MB			((uint32_t)0x00000070)
#define AccessControl_ITCMCR_R_SZ_16MB			((uint32_t)0x00000078)
#define AccessControl_ITCMCR_R_SZ_NO			((uint32_t)0x00000000)

#define AccessControl_ITCMCR_SZ_MASK        	((uint32_t)0x0000000F)
#define AccessControl_ITCMCR_SZ_4KB			    ((uint32_t)0x00000003)
#define AccessControl_ITCMCR_SZ_8KB			    ((uint32_t)0x00000004)
#define AccessControl_ITCMCR_SZ_16KB			((uint32_t)0x00000005)
#define AccessControl_ITCMCR_SZ_32KB			((uint32_t)0x00000006)
#define AccessControl_ITCMCR_SZ_64KB			((uint32_t)0x00000007)
#define AccessControl_ITCMCR_SZ_128KB			((uint32_t)0x00000008)
#define AccessControl_ITCMCR_SZ_256KB			((uint32_t)0x00000009)
#define AccessControl_ITCMCR_SZ_512KB			((uint32_t)0x0000000A)
#define AccessControl_ITCMCR_SZ_1MB			    ((uint32_t)0x0000000B)
#define AccessControl_ITCMCR_SZ_2MB			    ((uint32_t)0x0000000C)
#define AccessControl_ITCMCR_SZ_4MB			    ((uint32_t)0x0000000D)
#define AccessControl_ITCMCR_SZ_8MB			    ((uint32_t)0x0000000E)
#define AccessControl_ITCMCR_SZ_16MB			((uint32_t)0x0000000F)
#define AccessControl_ITCMCR_SZ_NO			    ((uint32_t)0x00000000)
/*--------*/




/* TODO DTCMCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 DTCMCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define AccessControl_DTCMCR            (((DTCMCR_TypeDef*)(AccessControl_BASE+AccessControl_DTCMCR_OFFSET )))
#define AccessControl_DTCMCR_R          (*((__IO uint32_t *)(AccessControl_BASE+AccessControl_DTCMCR_OFFSET)))

/*--------*/
#define AccessControl_DTCMCR_R_EN_MASK      	((uint32_t)0x00000001)
#define AccessControl_DTCMCR_R_EN_BIT       	(0)
#define AccessControl_DTCMCR_R_EN_EN			((uint32_t)0x00000001)
#define AccessControl_DTCMCR_R_EN_DIS			((uint32_t)0x00000000)

#define AccessControl_DTCMCR_EN_MASK        	((uint32_t)0x00000001)
#define AccessControl_DTCMCR_EN_EN				((uint32_t)0x00000001)
#define AccessControl_DTCMCR_EN_DIS				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_DTCMCR_R_RMW_MASK      	((uint32_t)0x00000002)
#define AccessControl_DTCMCR_R_RMW_BIT       	(1)
#define AccessControl_DTCMCR_R_RMW_EN			((uint32_t)0x00000002)
#define AccessControl_DTCMCR_R_RMW_DIS			((uint32_t)0x00000000)

#define AccessControl_DTCMCR_RMW_MASK        	((uint32_t)0x00000001)
#define AccessControl_DTCMCR_RMW_EN				((uint32_t)0x00000001)
#define AccessControl_DTCMCR_RMW_DIS			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_DTCMCR_R_RETEN_MASK      	((uint32_t)0x00000004)
#define AccessControl_DTCMCR_R_RETEN_BIT       	(2)
#define AccessControl_DTCMCR_R_RETEN_EN			((uint32_t)0x00000004)
#define AccessControl_DTCMCR_R_RETEN_DIS		((uint32_t)0x00000000)

#define AccessControl_DTCMCR_RETEN_MASK        	((uint32_t)0x00000001)
#define AccessControl_DTCMCR_RETEN_EN			((uint32_t)0x00000001)
#define AccessControl_DTCMCR_RETEN_DIS			((uint32_t)0x00000000)
/*--------*/


/*--------*/
#define AccessControl_DTCMCR_R_SZ_MASK      	((uint32_t)0x00000078)
#define AccessControl_DTCMCR_R_SZ_BIT       	(3)
#define AccessControl_DTCMCR_R_SZ_4KB			((uint32_t)0x00000018)
#define AccessControl_DTCMCR_R_SZ_8KB			((uint32_t)0x00000020)
#define AccessControl_DTCMCR_R_SZ_16KB			((uint32_t)0x00000028)
#define AccessControl_DTCMCR_R_SZ_32KB			((uint32_t)0x00000030)
#define AccessControl_DTCMCR_R_SZ_64KB			((uint32_t)0x00000038)
#define AccessControl_DTCMCR_R_SZ_128KB			((uint32_t)0x00000040)
#define AccessControl_DTCMCR_R_SZ_256KB			((uint32_t)0x00000048)
#define AccessControl_DTCMCR_R_SZ_512KB			((uint32_t)0x00000050)
#define AccessControl_DTCMCR_R_SZ_1MB			((uint32_t)0x00000058)
#define AccessControl_DTCMCR_R_SZ_2MB			((uint32_t)0x00000060)
#define AccessControl_DTCMCR_R_SZ_4MB			((uint32_t)0x00000068)
#define AccessControl_DTCMCR_R_SZ_8MB			((uint32_t)0x00000070)
#define AccessControl_DTCMCR_R_SZ_16MB			((uint32_t)0x00000078)
#define AccessControl_DTCMCR_R_SZ_NO			((uint32_t)0x00000000)

#define AccessControl_DTCMCR_SZ_MASK        	((uint32_t)0x0000000F)
#define AccessControl_DTCMCR_SZ_4KB			    ((uint32_t)0x00000003)
#define AccessControl_DTCMCR_SZ_8KB			    ((uint32_t)0x00000004)
#define AccessControl_DTCMCR_SZ_16KB			((uint32_t)0x00000005)
#define AccessControl_DTCMCR_SZ_32KB			((uint32_t)0x00000006)
#define AccessControl_DTCMCR_SZ_64KB			((uint32_t)0x00000007)
#define AccessControl_DTCMCR_SZ_128KB			((uint32_t)0x00000008)
#define AccessControl_DTCMCR_SZ_256KB			((uint32_t)0x00000009)
#define AccessControl_DTCMCR_SZ_512KB			((uint32_t)0x0000000A)
#define AccessControl_DTCMCR_SZ_1MB			    ((uint32_t)0x0000000B)
#define AccessControl_DTCMCR_SZ_2MB			    ((uint32_t)0x0000000C)
#define AccessControl_DTCMCR_SZ_4MB			    ((uint32_t)0x0000000D)
#define AccessControl_DTCMCR_SZ_8MB			    ((uint32_t)0x0000000E)
#define AccessControl_DTCMCR_SZ_16MB			((uint32_t)0x0000000F)
#define AccessControl_DTCMCR_SZ_NO			    ((uint32_t)0x00000000)
/*--------*/


/* TODO AHBPCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 AHBPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define AccessControl_AHBPCR            (((AHBPCR_TypeDef*)(AccessControl_BASE+AccessControl_AHBPCR_OFFSET )))
#define AccessControl_AHBPCR_R          (*((__IO uint32_t *)(AccessControl_BASE+AccessControl_AHBPCR_OFFSET)))

/*--------*/
#define AccessControl_AHBPCR_R_EN_MASK      	((uint32_t)0x00000001)
#define AccessControl_AHBPCR_R_EN_BIT       	(0)
#define AccessControl_AHBPCR_R_EN_EN			((uint32_t)0x00000001)
#define AccessControl_AHBPCR_R_EN_DIS			((uint32_t)0x00000000)

#define AccessControl_AHBPCR_EN_MASK        	((uint32_t)0x00000001)
#define AccessControl_AHBPCR_EN_EN				((uint32_t)0x00000001)
#define AccessControl_AHBPCR_EN_DIS				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_AHBPCR_R_SZ_MASK      	((uint32_t)0x0000000E)
#define AccessControl_AHBPCR_R_SZ_BIT       	(1)
#define AccessControl_AHBPCR_R_SZ_64MB			((uint32_t)0x00000002)
#define AccessControl_AHBPCR_R_SZ_128MB			((uint32_t)0x00000004)
#define AccessControl_AHBPCR_R_SZ_256MB			((uint32_t)0x00000006)
#define AccessControl_AHBPCR_R_SZ_512MB			((uint32_t)0x00000008)
#define AccessControl_AHBPCR_R_SZ_NO			((uint32_t)0x00000000)

#define AccessControl_AHBPCR_SZ_MASK        	((uint32_t)0x00000007)
#define AccessControl_AHBPCR_SZ_64MB			((uint32_t)0x00000001)
#define AccessControl_AHBPCR_SZ_128MB			((uint32_t)0x00000002)
#define AccessControl_AHBPCR_SZ_256MB			((uint32_t)0x00000003)
#define AccessControl_AHBPCR_SZ_512MB			((uint32_t)0x00000004)
#define AccessControl_AHBPCR_SZ_NO				((uint32_t)0x00000000)
/*--------*/


/* TODO CACR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 CACR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define AccessControl_CACR            (((CACR_TypeDef*)(AccessControl_BASE+AccessControl_CACR_OFFSET )))
#define AccessControl_CACR_R          (*((__IO uint32_t *)(AccessControl_BASE+AccessControl_CACR_OFFSET)))

/*--------*/
#define AccessControl_CACR_R_SIWT_MASK      	((uint32_t)0x00000001)
#define AccessControl_CACR_R_SIWT_BIT       	(0)
#define AccessControl_CACR_R_SIWT_EN			((uint32_t)0x00000001)
#define AccessControl_CACR_R_SIWT_DIS			((uint32_t)0x00000000)

#define AccessControl_CACR_SIWT_MASK        	((uint32_t)0x00000001)
#define AccessControl_CACR_SIWT_EN				((uint32_t)0x00000001)
#define AccessControl_CACR_SIWT_DIS				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_CACR_R_ECCEN_MASK      	((uint32_t)0x00000002)
#define AccessControl_CACR_R_ECCEN_BIT       	(1)
#define AccessControl_CACR_R_ECCEN_DIS			((uint32_t)0x00000002)
#define AccessControl_CACR_R_ECCEN_EN			((uint32_t)0x00000000)

#define AccessControl_CACR_ECCEN_MASK        	((uint32_t)0x00000001)
#define AccessControl_CACR_ECCEN_DIS			((uint32_t)0x00000001)
#define AccessControl_CACR_ECCEN_EN 			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_CACR_R_FORCEWT_MASK      	((uint32_t)0x00000004)
#define AccessControl_CACR_R_FORCEWT_BIT       	(2)
#define AccessControl_CACR_R_FORCEWT_EN			((uint32_t)0x00000004)
#define AccessControl_CACR_R_FORCEWT_DIS		((uint32_t)0x00000000)

#define AccessControl_CACR_FORCEWT_MASK        	((uint32_t)0x00000001)
#define AccessControl_CACR_FORCEWT_EN			((uint32_t)0x00000001)
#define AccessControl_CACR_FORCEWT_DIS 			((uint32_t)0x00000000)
/*--------*/


/* TODO AHBSCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 AHBSCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define AccessControl_AHBSCR            (((AHBSCR_TypeDef*)(AccessControl_BASE+AccessControl_AHBSCR_OFFSET )))
#define AccessControl_AHBSCR_R          (*((__IO uint32_t *)(AccessControl_BASE+AccessControl_AHBSCR_OFFSET)))

/*--------*/
#define AccessControl_AHBSCR_R_CTL_MASK      	((uint32_t)0x00000003)
#define AccessControl_AHBSCR_R_CTL_BIT       	(0)
#define AccessControl_AHBSCR_R_CTL_AHBSPRI		((uint32_t)0x00000003)
#define AccessControl_AHBSCR_R_CTL_BOTH			((uint32_t)0x00000002)
#define AccessControl_AHBSCR_R_CTL_SOFT			((uint32_t)0x00000001)
#define AccessControl_AHBSCR_R_CTL_AHBS			((uint32_t)0x00000000)

#define AccessControl_AHBSCR_CTL_MASK        	((uint32_t)0x00000003)
#define AccessControl_AHBSCR_CTL_AHBSPRI		((uint32_t)0x00000003)
#define AccessControl_AHBSCR_CTL_BOTH			((uint32_t)0x00000002)
#define AccessControl_AHBSCR_CTL_SOFT			((uint32_t)0x00000001)
#define AccessControl_AHBSCR_CTL_AHBS			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_AHBSCR_R_TPRI_MASK      	((uint32_t)0x000007FC)
#define AccessControl_AHBSCR_R_TPRI_BIT       	(2)

#define AccessControl_AHBSCR_TPRI_MASK        	((uint32_t)0x000001FF)
/*--------*/

/*--------*/
#define AccessControl_AHBSCR_R_INITCOUNT_MASK   ((uint32_t)0x0000F800)
#define AccessControl_AHBSCR_R_INITCOUNT_BIT    (11)

#define AccessControl_AHBSCR_INITCOUNT_MASK     ((uint32_t)0x0000001F)
/*--------*/


/* TODO ABFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 ABFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define AccessControl_ABFSR            (((ABFSR_TypeDef*)(AccessControl_BASE+AccessControl_ABFSR_OFFSET )))
#define AccessControl_ABFSR_R          (*((__IO uint32_t *)(AccessControl_BASE+AccessControl_ABFSR_OFFSET)))

/*--------*/
#define AccessControl_ABFSR_R_ITCM_MASK      	((uint32_t)0x00000001)
#define AccessControl_ABFSR_R_ITCM_BIT       	(0)
#define AccessControl_ABFSR_R_ITCM_OCCUR		((uint32_t)0x00000001)
#define AccessControl_ABFSR_R_ITCM_NOOCCUR		((uint32_t)0x00000000)

#define AccessControl_ABFSR_ITCM_MASK        	((uint32_t)0x00000001)
#define AccessControl_ABFSR_ITCM_OCCUR			((uint32_t)0x00000001)
#define AccessControl_ABFSR_ITCM_NOOCCUR		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ABFSR_R_DTCM_MASK      	((uint32_t)0x00000002)
#define AccessControl_ABFSR_R_DTCM_BIT       	(1)
#define AccessControl_ABFSR_R_DTCM_OCCUR		((uint32_t)0x00000002)
#define AccessControl_ABFSR_R_DTCM_NOOCCUR		((uint32_t)0x00000000)

#define AccessControl_ABFSR_DTCM_MASK        	((uint32_t)0x00000001)
#define AccessControl_ABFSR_DTCM_OCCUR			((uint32_t)0x00000001)
#define AccessControl_ABFSR_DTCM_NOOCCUR		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ABFSR_R_AHBP_MASK      	((uint32_t)0x00000004)
#define AccessControl_ABFSR_R_AHBP_BIT       	(2)
#define AccessControl_ABFSR_R_AHBP_OCCUR		((uint32_t)0x00000004)
#define AccessControl_ABFSR_R_AHBP_NOOCCUR		((uint32_t)0x00000000)

#define AccessControl_ABFSR_AHBP_MASK        	((uint32_t)0x00000001)
#define AccessControl_ABFSR_AHBP_OCCUR			((uint32_t)0x00000001)
#define AccessControl_ABFSR_AHBP_NOOCCUR		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ABFSR_R_AXIM_MASK      	((uint32_t)0x00000008)
#define AccessControl_ABFSR_R_AXIM_BIT       	(3)
#define AccessControl_ABFSR_R_AXIM_OCCUR		((uint32_t)0x00000008)
#define AccessControl_ABFSR_R_AXIM_NOOCCUR		((uint32_t)0x00000000)

#define AccessControl_ABFSR_AXIM_MASK        	((uint32_t)0x00000001)
#define AccessControl_ABFSR_AXIM_OCCUR			((uint32_t)0x00000001)
#define AccessControl_ABFSR_AXIM_NOOCCUR		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ABFSR_R_EPPB_MASK      	((uint32_t)0x00000010)
#define AccessControl_ABFSR_R_EPPB_BIT       	(4)
#define AccessControl_ABFSR_R_EPPB_OCCUR		((uint32_t)0x00000010)
#define AccessControl_ABFSR_R_EPPB_NOOCCUR		((uint32_t)0x00000000)

#define AccessControl_ABFSR_EPPB_MASK        	((uint32_t)0x00000001)
#define AccessControl_ABFSR_EPPB_OCCUR			((uint32_t)0x00000001)
#define AccessControl_ABFSR_EPPB_NOOCCUR		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define AccessControl_ABFSR_R_AXIMTYPE_MASK      	((uint32_t)0x00000300)
#define AccessControl_ABFSR_R_AXIMTYPE_BIT       	(8)
#define AccessControl_ABFSR_R_AXIMTYPE_EXOKAY		((uint32_t)0x00000010)
#define AccessControl_ABFSR_R_AXIMTYPE_SLVERR		((uint32_t)0x00000020)
#define AccessControl_ABFSR_R_AXIMTYPE_DECERR		((uint32_t)0x00000030)
#define AccessControl_ABFSR_R_AXIMTYPE_OKAY  		((uint32_t)0x00000000)

#define AccessControl_ABFSR_AXIMTYPE_MASK        	((uint32_t)0x00000001)
#define AccessControl_ABFSR_AXIMTYPE_EXOKAY			((uint32_t)0x00000001)
#define AccessControl_ABFSR_AXIMTYPE_SLVERR			((uint32_t)0x00000002)
#define AccessControl_ABFSR_AXIMTYPE_DECERR			((uint32_t)0x00000003)
#define AccessControl_ABFSR_AXIMTYPE_OKAY  			((uint32_t)0x00000000)
/*--------*/

/* TODO Functions */
void AccessControl_EnableTCM (void);
void AccessControl_DisableTCM (void);
void AccessControl_EnableTCM_RetryRMW (void);
void AccessControl_DisableTCM_RetryRMW (void);
void AccessControl_DisableCacheError (void);

#endif /* ACCESSCONTROL_H_ */
