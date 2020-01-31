/*
 * CACHE.h
 *
 *  Created on: 3 ago. 2018
 *      Author: InDev
 */

#ifndef CACHE_H_
#define CACHE_H_

#include "Core.h"
#include "SCB.h"
#include <stdint.h>                      		/* standard types definitions                      */

#define CACHE_BASE            ((uint32_t)0xE000ED70)


typedef __I struct
{
    __I uint32_t CL1_I       		:1;
    __I uint32_t CL1_D       		:1;
    __I uint32_t CL1_RAZ      		:1;
    __I uint32_t CL2_I       		:1;
    __I uint32_t CL2_D       		:1;
    __I uint32_t CL2_RAZ      		:1;
    __I uint32_t CL3_I       		:1;
    __I uint32_t CL3_D       		:1;
    __I uint32_t CL3_RAZ      		:1;
    __I uint32_t CL4_I       		:1;
    __I uint32_t CL4_D       		:1;
    __I uint32_t CL4_RAZ      		:1;
    __I uint32_t CL5_I       		:1;
    __I uint32_t CL5_D       		:1;
    __I uint32_t CL5_RAZ      		:1;
    __I uint32_t CL6_I       		:1;
    __I uint32_t CL6_D       		:1;
    __I uint32_t CL6_RAZ      		:1;
    __I uint32_t CL7_I       		:1;
    __I uint32_t CL7_D       		:1;
    __I uint32_t CL7_RAZ      		:1;
    __I uint32_t LoUIS       		:3;
    __I uint32_t LoC        		:3;
    __I uint32_t LoU        		:3;
        uint32_t reserved     		:2;
}CLIDR_TypeDef;


typedef __IO struct
{
    __I uint32_t IminLine       	:4;
        uint32_t reserved       	:12;
    __I uint32_t DMinLine       	:4;
    __I uint32_t ERG            	:4;
    __I uint32_t CWG           	    :4;
        uint32_t reserved1    		:1;
    __I uint32_t Format           	:3;
}CTR_TypeDef;


typedef __IO struct
{
    __I uint32_t LineSize       	:3;
    __I uint32_t Assoc          	:10;
    __I uint32_t NumSet         	:15;
    __I uint32_t WA              	:1;
    __I uint32_t RA           	    :1;
    __I uint32_t WB         		:1;
    __I uint32_t WT             	:1;
}CCSIDR_TypeDef;

typedef __IO struct
{
    __IO uint32_t LineSize       	:3;
    __IO uint32_t Assoc          	:10;
    __IO uint32_t NumSet         	:15;
    __IO uint32_t WA              	:1;
    __IO uint32_t RA           	    :1;
    __IO uint32_t WB         		:1;
    __IO uint32_t WT             	:1;
}CCSIDR_VAR_TypeDef;

typedef __IO struct
{
    __IO uint32_t InD            	:1;
    __IO  uint32_t Level          	:3;
         uint32_t reserved         	:28;
}CSSELR_TypeDef;


typedef __IO struct
{
    __O  uint32_t DATA            	:32;
}ICIALLU_TypeDef;

typedef __IO struct
{
    __O  uint32_t MVA            	:32;
}MVA_TypeDef;


typedef __IO struct
{
	     uint32_t reserved			:5;
    __O  uint32_t SET            	:9;
         uint32_t reserved1			:16;
    __O  uint32_t WAY            	:2;
}Way_TypeDef;

typedef __IO struct
{
	uint32_t				reserved[2];

	union
    {
        __I uint32_t		CLIDR;
        CLIDR_TypeDef		CLIDR_Bit;
    };
    union
    {
        __I uint32_t		CTR;
        CTR_TypeDef			CTR_Bit;
    };
    union
	{
    	__I  uint32_t		CCSIDR;                 /*!< Offset: 0x080 (R/ )  Cache Size ID Register */
    	CCSIDR_TypeDef		CCSIDR_Bit;                 /*!< Offset: 0x080 (R/ )  Cache Size ID Register */

	};
    union
	{
    	__IO uint32_t		CSSELR;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
    	CSSELR_TypeDef		CSSELR_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    uint32_t           		reserved1[114U];
    union
	{
    	__O uint32_t		ICIALLU;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
    	ICIALLU_TypeDef		ICIALLU_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    uint32_t 				reserved2[1U];
    union
	{
    	__O  uint32_t 		ICIMVAU;                /*!< Offset: 0x258 ( /W)  I-Cache Invalidate by MVA to PoU */
    	MVA_TypeDef			ICIMVAU_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    union
	{
    	__O  uint32_t 		DCIMVAC;                /*!< Offset: 0x25C ( /W)  D-Cache Invalidate by MVA to PoC */
    	MVA_TypeDef			DCIMVAC_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    union
	{
    	__O  uint32_t 		DCISW;                  /*!< Offset: 0x260 ( /W)  D-Cache Invalidate by Set-way */
    	Way_TypeDef			DCISW_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};

    union
	{
    	__O  uint32_t 		DCCMVAU;                /*!< Offset: 0x264 ( /W)  D-Cache Clean by MVA to PoU */
    	MVA_TypeDef			DCCMVAU_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    union
	{
    	__O  uint32_t 		DCCMVAC;                /*!< Offset: 0x268 ( /W)  D-Cache Clean by MVA to PoC */
    	MVA_TypeDef			DCCMVAC_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    union
	{
    	__O  uint32_t 		DCCSW;                  /*!< Offset: 0x26C ( /W)  D-Cache Clean by Set-way */
    	Way_TypeDef			DCCSW_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    union
	{
    	__O  uint32_t 		DCCIMVAC;               /*!< Offset: 0x270 ( /W)  D-Cache Clean and Invalidate by MVA to PoC */
    	MVA_TypeDef			DCCIMVAC_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};
    union
	{
    	__O  uint32_t 		DCCISW;                 /*!< Offset: 0x274 ( /W)  D-Cache Clean and Invalidate by Set-way */
    	Way_TypeDef			DCCISW_Bit;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
	};

}CACHE_TypeDef;



#define CACHE                 (((CACHE_TypeDef*)(CACHE_BASE)))


#define CACHE_CLIDR_OFFSET     ((uint32_t)0x00000008)
#define CACHE_CTR_OFFSET       ((uint32_t)0x0000000C)
#define CACHE_CCSIDR_OFFSET    ((uint32_t)0x00000010)
#define CACHE_CSSELR_OFFSET    ((uint32_t)0x00000014)

#define CACHE_ICIALLU_OFFSET   ((uint32_t)0x000001E0)
#define CACHE_ICIMVAU_OFFSET   ((uint32_t)0x000001E8)
#define CACHE_DCIMVAC_OFFSET   ((uint32_t)0x000001EC)
#define CACHE_DCISW_OFFSET     ((uint32_t)0x000001F0)
#define CACHE_DCCMVAU_OFFSET   ((uint32_t)0x000001F4)
#define CACHE_DCCMVAC_OFFSET   ((uint32_t)0x000001F8)
#define CACHE_DCCSW_OFFSET     ((uint32_t)0x000001FC)
#define CACHE_DCCIMVAC_OFFSET  ((uint32_t)0x00000200)
#define CACHE_DCCISW_OFFSET    ((uint32_t)0x00000204)

/* TODO CLIDR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CLIDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_CLIDR            (((CLIDR_TypeDef*)(CACHE_BASE+CACHE_CLIDR_OFFSET )))
#define CACHE_CLIDR_R          (*((__I uint32_t *)(CACHE_BASE+CACHE_CLIDR_OFFSET)))

/*--------*/
#define CACHE_CLIDR_R_CL1_I_MASK      				((uint32_t)0x00000001)
#define CACHE_CLIDR_R_CL1_I_BIT       				(0)
#define CACHE_CLIDR_R_CL1_I_IMPLEMENTED				((uint32_t)0x00000001)
#define CACHE_CLIDR_R_CL1_I_NOIMPLEMENTED			((uint32_t)0x00000000)

#define CACHE_CLIDR_CL1_I_MASK        				((uint32_t)0x00000001)
#define CACHE_CLIDR_CL1_I_IMPLEMENTED				((uint32_t)0x00000001)
#define CACHE_CLIDR_CL1_I_NOIMPLEMENTED			    ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CLIDR_R_CL1_D_MASK      				((uint32_t)0x00000002)
#define CACHE_CLIDR_R_CL1_D_BIT       				(1)
#define CACHE_CLIDR_R_CL1_D_IMPLEMENTED				((uint32_t)0x00000002)
#define CACHE_CLIDR_R_CL1_D_NOIMPLEMENTED			((uint32_t)0x00000000)

#define CACHE_CLIDR_CL1_D_MASK        				((uint32_t)0x00000001)
#define CACHE_CLIDR_CL1_D_IMPLEMENTED				((uint32_t)0x00000001)
#define CACHE_CLIDR_CL1_D_NOIMPLEMENTED			    ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CLIDR_R_CL1_RAZ_MASK      			((uint32_t)0x00000004)
#define CACHE_CLIDR_R_CL1_RAZ_BIT       			(2)
#define CACHE_CLIDR_R_CL1_RAZ_UNIFIED				((uint32_t)0x00000004)
#define CACHE_CLIDR_R_CL1_RAZ_NOUNIFIED				((uint32_t)0x00000000)

#define CACHE_CLIDR_CL1_RAZ_MASK        			((uint32_t)0x00000001)
#define CACHE_CLIDR_CL1_RAZ_UNIFIED					((uint32_t)0x00000001)
#define CACHE_CLIDR_CL1_RAZ_NOUNIFIED			    ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CLIDR_R_LoC_MASK      			((uint32_t)0x07000000)
#define CACHE_CLIDR_R_LoC_BIT       			(24)
#define CACHE_CLIDR_R_LoC_LEVEL2				((uint32_t)0x07000000)
#define CACHE_CLIDR_R_LoC_LEVEL1				((uint32_t)0x00000000)

#define CACHE_CLIDR_LoC_MASK        			((uint32_t)0x00000007)
#define CACHE_CLIDR_LoC_LEVEL2					((uint32_t)0x00000001)
#define CACHE_CLIDR_LoC_LEVEL1			        ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CLIDR_R_LoU_MASK      			((uint32_t)0x38000000)
#define CACHE_CLIDR_R_LoU_BIT       			(27)
#define CACHE_CLIDR_R_LoU_LEVEL2				((uint32_t)0x38000000)
#define CACHE_CLIDR_R_LoU_LEVEL1				((uint32_t)0x00000000)

#define CACHE_CLIDR_LoU_MASK        			((uint32_t)0x00000007)
#define CACHE_CLIDR_LoU_LEVEL2					((uint32_t)0x00000001)
#define CACHE_CLIDR_LoU_LEVEL1			        ((uint32_t)0x00000000)
/*--------*/



/* TODO CTR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_CTR            (((CTR_TypeDef*)(CACHE_BASE+CACHE_CTR_OFFSET )))
#define CACHE_CTR_R          (*((__I uint32_t *)(CACHE_BASE+CACHE_CTR_OFFSET)))

/*--------*/
#define CACHE_CTR_R_IMINLINE_MASK      				((uint32_t)0x0000000F)
#define CACHE_CTR_R_IMINLINE_BIT       				(0)
#define CACHE_CTR_R_IMINLINE_WORDSM7				((uint32_t)0x00000003)

#define CACHE_CTR_IMINLINE_MASK        				((uint32_t)0x0000000F)
#define CACHE_CTR_IMINLINE_WORDSM7					((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define CACHE_CTR_R_DMINLINE_MASK      				((uint32_t)0x000F0000)
#define CACHE_CTR_R_DMINLINE_BIT       				(16)
#define CACHE_CTR_R_DMINLINE_WORDSM7				((uint32_t)0x00030000)

#define CACHE_CTR_DMINLINE_MASK        				((uint32_t)0x0000000F)
#define CACHE_CTR_DMINLINE_WORDSM7					((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define CACHE_CTR_R_ERG_MASK      				((uint32_t)0x00F00000)
#define CACHE_CTR_R_ERG_BIT       				(20)

#define CACHE_CTR_ERG_MASK        				((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define CACHE_CTR_R_CWG_MASK      				((uint32_t)0x0F000000)
#define CACHE_CTR_R_CWG_BIT       				(24)
#define CACHE_CTR_R_CWG_WORDSM7					((uint32_t)0x03000000)

#define CACHE_CTR_CWG_MASK        				((uint32_t)0x0000000F)
#define CACHE_CTR_CWG_WORDSM7					((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define CACHE_CTR_R_FORMAT_MASK      				((uint32_t)0xE0000000)
#define CACHE_CTR_R_FORMAT_BIT       				(29)
#define CACHE_CTR_R_FORMAT_Armv7					((uint32_t)0x80000000)

#define CACHE_CTR_FORMAT_MASK        				((uint32_t)0x00000007)
#define CACHE_CTR_FORMAT_Armv7						((uint32_t)0x00000004)
/*--------*/


/* TODO CCSIDR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 CCSIDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_CCSIDR            (((CCSIDR_TypeDef*)(CACHE_BASE+CACHE_CCSIDR_OFFSET )))
#define CACHE_CCSIDR_R          (*((__I uint32_t *)(CACHE_BASE+CACHE_CCSIDR_OFFSET)))

/*--------*/
#define CACHE_CCSIDR_R_LineSize_MASK      				((uint32_t)0x00000007)
#define CACHE_CCSIDR_R_LineSize_BIT       				(0)

#define CACHE_CCSIDR_LineSize_MASK        				((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define CACHE_CCSIDR_R_Assoc_MASK      					((uint32_t)0x00001FF8)
#define CACHE_CCSIDR_R_Assoc_BIT       					(3)

#define CACHE_CCSIDR_Assoc_MASK        					((uint32_t)0x000003FF)
/*--------*/

/*--------*/
#define CACHE_CCSIDR_R_NumSet_MASK      				((uint32_t)0x0FFFE000)
#define CACHE_CCSIDR_R_NumSet_BIT       				(13)

#define CACHE_CCSIDR_NumSet_MASK        				((uint32_t)0x00007FFF)
/*--------*/

/*--------*/
#define CACHE_CCSIDR_R_WA_MASK      				((uint32_t)0x10000000)
#define CACHE_CCSIDR_R_WA_BIT       				(28)
#define CACHE_CCSIDR_R_WA_SUPPORT      				((uint32_t)0x10000000)
#define CACHE_CCSIDR_R_WA_NOSUPPORT      			((uint32_t)0x00000000)

#define CACHE_CCSIDR_WA_MASK        				((uint32_t)0x00000001)
#define CACHE_CCSIDR_WA_SUPPORT      				((uint32_t)0x00000001)
#define CACHE_CCSIDR_WA_NOSUPPORT      				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CCSIDR_R_RA_MASK      				((uint32_t)0x20000000)
#define CACHE_CCSIDR_R_RA_BIT       				(29)
#define CACHE_CCSIDR_R_RA_SUPPORT      				((uint32_t)0x20000000)
#define CACHE_CCSIDR_R_RA_NOSUPPORT      			((uint32_t)0x00000000)

#define CACHE_CCSIDR_RA_MASK        				((uint32_t)0x00000001)
#define CACHE_CCSIDR_RA_SUPPORT      				((uint32_t)0x00000001)
#define CACHE_CCSIDR_RA_NOSUPPORT      				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CCSIDR_R_WB_MASK      				((uint32_t)0x40000000)
#define CACHE_CCSIDR_R_WB_BIT       				(30)
#define CACHE_CCSIDR_R_WB_SUPPORT      				((uint32_t)0x40000000)
#define CACHE_CCSIDR_R_WB_NOSUPPORT      			((uint32_t)0x00000000)

#define CACHE_CCSIDR_WB_MASK        				((uint32_t)0x00000001)
#define CACHE_CCSIDR_WB_SUPPORT      				((uint32_t)0x00000001)
#define CACHE_CCSIDR_WB_NOSUPPORT      				((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CCSIDR_R_WT_MASK      				((uint32_t)0x80000000)
#define CACHE_CCSIDR_R_WT_BIT       				(31)
#define CACHE_CCSIDR_R_WT_SUPPORT      				((uint32_t)0x80000000)
#define CACHE_CCSIDR_R_WT_NOSUPPORT      			((uint32_t)0x00000000)

#define CACHE_CCSIDR_WT_MASK        				((uint32_t)0x00000001)
#define CACHE_CCSIDR_WT_SUPPORT      				((uint32_t)0x00000001)
#define CACHE_CCSIDR_WT_NOSUPPORT      				((uint32_t)0x00000000)
/*--------*/

/* TODO CSSELR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 CSSELR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_CSSELR            (((CSSELR_TypeDef*)(CACHE_BASE+CACHE_CSSELR_OFFSET )))
#define CACHE_CSSELR_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_CSSELR_OFFSET)))

/*--------*/
#define CACHE_CSSELR_R_InD_MASK      				((uint32_t)0x00000001)
#define CACHE_CSSELR_R_InD_BIT       				(0)
#define CACHE_CSSELR_R_InD_INST		 				((uint32_t)0x00000001)
#define CACHE_CSSELR_R_InD_DATA						((uint32_t)0x00000000)

#define CACHE_CSSELR_InD_MASK        				((uint32_t)0x00000001)
#define CACHE_CSSELR_InD_INST		 				((uint32_t)0x00000001)
#define CACHE_CSSELR_InD_DATA						((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define CACHE_CSSELR_R_Level_MASK      				((uint32_t)0x0000000E)
#define CACHE_CSSELR_R_Level_BIT       				(1)
#define CACHE_CSSELR_R_Level_LEVEL0    				((uint32_t)0x00000000)

#define CACHE_CSSELR_Level_MASK        				((uint32_t)0x00000007)
#define CACHE_CSSELR_Level_LEVEL0      				((uint32_t)0x00000001)
/*--------*/


/* TODO ICIALLU*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 ICIALLU ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_ICIALLU            (((ICIALLU_TypeDef*)(CACHE_BASE+CACHE_ICIALLU_OFFSET )))
#define CACHE_ICIALLU_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_ICIALLU_OFFSET)))

/*--------*/
#define CACHE_ICIALLU_R_DATA_MASK      				((uint32_t)0xFFFFFFFF)
#define CACHE_ICIALLU_R_DATA_BIT       				(0)

#define CACHE_ICIALLU_DATA_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO ICIMVAU*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 ICIMVAU ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_ICIMVAU            (((MVA_TypeDef*)(CACHE_BASE+CACHE_ICIMVAU_OFFSET )))
#define CACHE_ICIMVAU_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_ICIMVAU_OFFSET)))

/*--------*/
#define CACHE_ICIMVAU_R_MVA_MASK      				((uint32_t)0xFFFFFFFF)
#define CACHE_ICIMVAU_R_MVA_BIT       				(0)

#define CACHE_ICIMVAU_MVA_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO DCIMVAC*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 DCIMVAC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCIMVAC            (((MVA_TypeDef*)(CACHE_BASE+CACHE_DCIMVAC_OFFSET )))
#define CACHE_DCIMVAC_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCIMVAC_OFFSET)))

/*--------*/
#define CACHE_DCIMVAC_R_MVA_MASK      				((uint32_t)0xFFFFFFFF)
#define CACHE_DCIMVAC_R_MVA_BIT       				(0)

#define CACHE_DCIMVAC_MVA_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/


/* TODO DCISW*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 DCISW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCISW            (((Way_TypeDef*)(CACHE_BASE+CACHE_DCISW_OFFSET )))
#define CACHE_DCISW_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCISW_OFFSET)))

/*--------*/
#define CACHE_DCISW_R_Set_MASK      				((uint32_t)0x000003FE0)
#define CACHE_DCISW_R_Set_BIT       				(5)

#define CACHE_DCISW_Set_MASK        				((uint32_t)0x0000001FF)
/*--------*/

/*--------*/
#define CACHE_DCISW_R_Way_MASK      				((uint32_t)0xC00000000)
#define CACHE_DCISW_R_Way_BIT       				(30)

#define CACHE_DCISW_Way_MASK        				((uint32_t)0x000000003)
/*--------*/

/* TODO DCCMVAU*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 DCCMVAU ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCCMVAU            (((MVA_TypeDef*)(CACHE_BASE+CACHE_DCCMVAU_OFFSET )))
#define CACHE_DCCMVAU_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCCMVAU_OFFSET)))

/*--------*/
#define CACHE_DCCMVAU_R_MVA_MASK      				((uint32_t)0xFFFFFFFF)
#define CACHE_DCCMVAU_R_MVA_BIT       				(0)

#define CACHE_DCCMVAU_MVA_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/


/* TODO DCCMVAC*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 DCCMVAC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCCMVAC            (((MVA_TypeDef*)(CACHE_BASE+CACHE_DCCMVAC_OFFSET )))
#define CACHE_DCCMVAC_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCCMVAC_OFFSET)))

/*--------*/
#define CACHE_DCCMVAC_R_MVA_MASK      				((uint32_t)0xFFFFFFFF)
#define CACHE_DCCMVAC_R_MVA_BIT       				(0)

#define CACHE_DCCMVAC_MVA_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/


/* TODO DCCSW*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 DCCSW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCCSW            (((Way_TypeDef*)(CACHE_BASE+CACHE_DCCSW_OFFSET )))
#define CACHE_DCCSW_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCCSW_OFFSET)))

/*--------*/
#define CACHE_DCCSW_R_Set_MASK      				((uint32_t)0x000003FE0)
#define CACHE_DCCSW_R_Set_BIT       				(5)

#define CACHE_DCCSW_Set_MASK        				((uint32_t)0x0000001FF)
/*--------*/

/*--------*/
#define CACHE_DCCSW_R_Way_MASK      				((uint32_t)0xC00000000)
#define CACHE_DCCSW_R_Way_BIT       				(30)

#define CACHE_DCCSW_Way_MASK        				((uint32_t)0x000000003)
/*--------*/


/* TODO DCCIMVAC*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 DCCIMVAC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCCIMVAC            (((MVA_TypeDef*)(CACHE_BASE+CACHE_DCCIMVAC_OFFSET )))
#define CACHE_DCCIMVAC_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCCIMVAC_OFFSET)))

/*--------*/
#define CACHE_DCCIMVAC_R_MVA_MASK      				((uint32_t)0xFFFFFFFF)
#define CACHE_DCCIMVAC_R_MVA_BIT       				(0)

#define CACHE_DCCIMVAC_MVA_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO DCCISW*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 DCCISW ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define CACHE_DCCISW            (((Way_TypeDef*)(CACHE_BASE+CACHE_DCCISW_OFFSET )))
#define CACHE_DCCISW_R          (*((__IO uint32_t *)(CACHE_BASE+CACHE_DCCISW_OFFSET)))

/*--------*/
#define CACHE_DCCISW_R_Set_MASK      				((uint32_t)0x000003FE0)
#define CACHE_DCCISW_R_Set_BIT       				(5)

#define CACHE_DCCISW_Set_MASK        				((uint32_t)0x0000001FF)
/*--------*/

/*--------*/
#define CACHE_DCCISW_R_Way_MASK      				((uint32_t)0xC00000000)
#define CACHE_DCCISW_R_Way_BIT       				(30)

#define CACHE_DCCISW_Way_MASK        				((uint32_t)0x000000003)
/*--------*/



/* Cache Size ID Register Macros */
#define CCSIDR_WAYS(x)         (((x) & CACHE_CCSIDR_R_Assoc_MASK) >> CACHE_CCSIDR_R_Assoc_BIT)
#define CCSIDR_SETS(x)         (((x) & CACHE_CCSIDR_R_NumSet_MASK) >> CACHE_CCSIDR_R_NumSet_BIT)
/* TODO functions*/


void CACHE_EnableICache (void);
void CACHE_DisableICache (void);
void CACHE_InvalidateICache (void);
void CACHE_EnableDCache (void);
void CACHE_DisableDCache (void);
void CACHE_InvalidateDCache (void);
void CACHE_CleanDCache (void);
void CACHE_CleanInvalidateDCache (void);
void CACHE_InvalidateDCache_by_Addr (uint32_t *addr, int32_t dsize);
void CACHE_CleanDCache_by_Addr (uint32_t *addr, int32_t dsize);
#endif /* CACHE_H_ */
