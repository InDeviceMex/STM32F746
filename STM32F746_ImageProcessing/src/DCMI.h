/*
 * DCMI.h
 *
 *  Created on: 21/09/2018
 *      Author: InDev
 */

#ifndef DCMI_H_
#define DCMI_H_

#include "Core.h"
#include <stdint.h>
#include "GPIO.h"
#include "RCC.h"
#include "DMA.h"
#include "LTDC.h"

#define DCMI_BASE             ((uint32_t)0x50050000U)
#define DCMI_OFFSET           ((uint32_t)0x00050000U)

typedef __IO struct
{
    __IO  uint32_t CAPTURE 		:1;
    __IO  uint32_t CM      		:1;
    __IO  uint32_t CROP      	:1;
    __IO  uint32_t JPEG      	:1;
    __IO  uint32_t ESS      	:1;
    __IO  uint32_t PCKPOL      	:1;
    __IO  uint32_t HSPOL      	:1;
    __IO  uint32_t VSPOL      	:1;
    __IO  uint32_t FCRC      	:2;
    __IO  uint32_t EDM      	:2;
    	  uint32_t reserved     :2;
    __IO  uint32_t ENABLE       :1;
	  	  uint32_t reserved1    :1;
    __IO  uint32_t BSM		    :2;
    __IO  uint32_t OEBS      	:1;
    __IO  uint32_t LSM		    :1;
    __IO  uint32_t OELS		    :1;
	      uint32_t reserved2    :11;
}DCMI_CR_TypeDef;/*0x00000000*/

typedef __IO struct
{
    __I   uint32_t HSYNC 		:1;
    __I   uint32_t VSYNC   		:1;
    __I   uint32_t FNE      	:1;
	      uint32_t reserved     :29;
}DCMI_SR_TypeDef;/*0x00000004*/

typedef __IO struct
{
    __I   uint32_t FRAME_RIS	:1;
    __I   uint32_t OVR_RIS 		:1;
    __I   uint32_t ERR_RIS     	:1;
    __I   uint32_t VSYNC_RIS    :1;
    __I   uint32_t LINE_RIS     :1;
	      uint32_t reserved     :27;
}DCMI_RIS_TypeDef;/*0x00000008*/

typedef __IO struct
{
	__IO  uint32_t FRAME_IE		:1;
	__IO  uint32_t OVR_IE 		:1;
	__IO  uint32_t ERR_IE     	:1;
	__IO  uint32_t VSYNC_IE  	:1;
	__IO  uint32_t LINE_IE	    :1;
	      uint32_t reserved     :27;
}DCMI_IER_TypeDef;/*0x0000000C*/

typedef __IO struct
{
    __I   uint32_t FRAME_MIS	:1;
    __I   uint32_t OVR_MIS 		:1;
    __I   uint32_t ERR_MIS     	:1;
    __I   uint32_t VSYNC_MIS    :1;
    __I   uint32_t LINE_MIS     :1;
	      uint32_t reserved     :27;
}DCMI_MIS_TypeDef;/*0x00000010*/

typedef __IO struct
{
    __IO  uint32_t FRAME_ISC	:1;
    __IO  uint32_t OVR_ISC 		:1;
    __IO  uint32_t ERR_ISC     	:1;
    __IO  uint32_t VSYNC_ISC    :1;
    __IO  uint32_t LINE_ISC     :1;
	      uint32_t reserved     :27;
}DCMI_ICR_TypeDef;/*0x00000014*/

typedef __IO struct
{
    __IO  uint32_t FSC			:8;
    __IO  uint32_t LSC 			:8;
    __IO  uint32_t LEC     		:8;
    __IO  uint32_t FEC    		:8;
}DCMI_ESCR_TypeDef;/*0x00000018*/

typedef __IO struct
{
    __IO  uint32_t FSU			:8;
    __IO  uint32_t LSU 			:8;
    __IO  uint32_t LEU     		:8;
    __IO  uint32_t FEU    		:8;
}DCMI_ESUR_TypeDef;/*0x0000001C*/

typedef __IO struct
{
    __IO  uint32_t HOFFCNT		:14;
		  uint32_t reserved     :2;
	__IO  uint32_t VST			:13;
		  uint32_t reserved1    :3;
}DCMI_CWSTRT_TypeDef;/*0x00000020*/

typedef __IO struct
{
    __IO  uint32_t CAPCNT		:14;
		  uint32_t reserved     :2;
	__IO  uint32_t VLINE		:14;
		  uint32_t reserved1    :2;
}DCMI_CWSIZE_TypeDef;/*0x00000024*/

typedef __IO struct
{
    __IO  uint32_t Byte0		:8;
    __IO  uint32_t Byte1		:8;
    __IO  uint32_t Byte2		:8;
    __IO  uint32_t Byte3		:8;
}DCMI_DR_TypeDef;/*0x00000028*/


typedef __IO struct
{
	union
	{
		__IO uint32_t 		CR;       /*!< DCMI control register 1,                       Address offset: 0x00 */
		DCMI_CR_TypeDef 	CR_Bit;       /*!< DCMI control register 1,                       Address offset: 0x00 */
	};
	union
	{
		__IO uint32_t 		SR;       /*!< DCMI status register,                          Address offset: 0x04 */
		DCMI_SR_TypeDef 	SR_Bit;       /*!< DCMI status register,                          Address offset: 0x04 */
	};
	union
	{
		__IO uint32_t 		RIS;     /*!< DCMI raw interrupt status register,            Address offset: 0x08 */
		DCMI_RIS_TypeDef 	RIS_Bit;     /*!< DCMI raw interrupt status register,            Address offset: 0x08 */
	};
	union
	{
		__IO uint32_t 		IER;      /*!< DCMI interrupt enable register,                Address offset: 0x0C */
		DCMI_IER_TypeDef 	IER_Bit;      /*!< DCMI interrupt enable register,                Address offset: 0x0C */
	};
	union
	{
	  __IO uint32_t 		MIS;     /*!< DCMI masked interrupt status register,         Address offset: 0x10 */
	  DCMI_MIS_TypeDef 		MIS_Bit;     /*!< DCMI masked interrupt status register,         Address offset: 0x10 */

	};
	union
	{
		__IO uint32_t 		ICR;      /*!< DCMI interrupt clear register,                 Address offset: 0x14 */
		DCMI_ICR_TypeDef 	ICR_Bit;      /*!< DCMI interrupt clear register,                 Address offset: 0x14 */
	};
	union
	{
		__IO uint32_t 		ESCR;     /*!< DCMI embedded synchronization code register,   Address offset: 0x18 */
		DCMI_ESCR_TypeDef 	ESCR_Bit;     /*!< DCMI embedded synchronization code register,   Address offset: 0x18 */
	};
	union
	{
		__IO uint32_t 		ESUR;     /*!< DCMI embedded synchronization unmask register, Address offset: 0x1C */
		DCMI_ESUR_TypeDef 	ESUR_Bit;     /*!< DCMI embedded synchronization unmask register, Address offset: 0x1C */
	};
	union
	{
		__IO uint32_t 		CWSTRT;  /*!< DCMI crop window start,                        Address offset: 0x20 */
		DCMI_CWSTRT_TypeDef CWSTRT_Bit;  /*!< DCMI crop window start,                        Address offset: 0x20 */
	};
	union
	{
		__IO uint32_t 		CWSIZE;  /*!< DCMI crop window size,                         Address offset: 0x24 */
		DCMI_CWSIZE_TypeDef CWSIZE_Bit;  /*!< DCMI crop window size,                         Address offset: 0x24 */
	};
	union
	{
		 __IO uint32_t 		DR;       /*!< DCMI data register,                            Address offset: 0x28 */
		 DCMI_DR_TypeDef 	DR_Bit;       /*!< DCMI data register,                            Address offset: 0x28 */
	};
 } DCMI_TypeDef;


#define DCMI                ((DCMI_TypeDef *) DCMI_BASE)

#define	DCMI_CR_OFFSET						((uint32_t)0x00000000)
#define	DCMI_SR_OFFSET						((uint32_t)0x00000004)
#define	DCMI_RIS_OFFSET						((uint32_t)0x00000008)
#define	DCMI_IER_OFFSET						((uint32_t)0x0000000C)
#define	DCMI_MIS_OFFSET						((uint32_t)0x00000010)
#define	DCMI_ICR_OFFSET						((uint32_t)0x00000014)
#define	DCMI_ESCR_OFFSET					((uint32_t)0x00000018)
#define	DCMI_ESUR_OFFSET					((uint32_t)0x0000001C)
#define	DCMI_CWSTRT_OFFSET					((uint32_t)0x00000020)
#define	DCMI_CWSIZE_OFFSET					((uint32_t)0x00000024)
#define	DCMI_DR_OFFSET						((uint32_t)0x00000028)

 /* TODO DCMI CR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 1 CR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_CR            			(((DCMI_CR_TypeDef*)(DCMI_BASE+DCMI_CR_OFFSET )))
 #define DCMI_CR_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_CR_OFFSET)))

#define DCMI_CR_CAPTURE                      0x00000001U
#define DCMI_CR_CM                           0x00000002U
#define DCMI_CR_CROP                         0x00000004U
#define DCMI_CR_JPEG                         0x00000008U
#define DCMI_CR_ESS                          0x00000010U
#define DCMI_CR_PCKPOL                       0x00000020U
#define DCMI_CR_HSPOL                        0x00000040U
#define DCMI_CR_VSPOL                        0x00000080U
#define DCMI_CR_FCRC_0                       0x00000100U
#define DCMI_CR_FCRC_1                       0x00000200U
#define DCMI_CR_EDM_0                        0x00000400U
#define DCMI_CR_EDM_1                        0x00000800U
#define DCMI_CR_CRE                          0x00001000U
#define DCMI_CR_ENABLE                       0x00004000U
#define DCMI_CR_BSM                          0x00030000U
#define DCMI_CR_BSM_0                        0x00010000U
#define DCMI_CR_BSM_1                        0x00020000U
#define DCMI_CR_OEBS                         0x00040000U
#define DCMI_CR_LSM                          0x00080000U
#define DCMI_CR_OELS                         0x00100000U

 /* TODO DCMI SR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 2 SR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_SR            			(((DCMI_SR_TypeDef*)(DCMI_BASE+DCMI_SR_OFFSET )))
 #define DCMI_SR_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_SR_OFFSET)))

#define DCMI_SR_HSYNC                        0x00000001U
#define DCMI_SR_VSYNC                        0x00000002U
#define DCMI_SR_FNE                          0x00000004U


 /* TODO DCMI RIS */
  /*////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// 3 RIS ///////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////*/
  #define DCMI_RIS            			(((DCMI_RIS_TypeDef*)(DCMI_BASE+DCMI_RIS_OFFSET )))
  #define DCMI_RIS_R          			(*((__I uint32_t *)(DCMI_BASE+DCMI_RIS_OFFSET)))

#define DCMI_RIS_FRAME_RIS                   0x00000001U
#define DCMI_RIS_OVR_RIS                     0x00000002U
#define DCMI_RIS_ERR_RIS                     0x00000004U
#define DCMI_RIS_VSYNC_RIS                   0x00000008U
#define DCMI_RIS_LINE_RIS                    0x00000010U

 /* Legacy defines */
 #define DCMI_RISR_FRAME_RIS                  DCMI_RIS_FRAME_RIS
 #define DCMI_RISR_OVF_RIS                    DCMI_RIS_OVR_RIS
 #define DCMI_RISR_ERR_RIS                    DCMI_RIS_ERR_RIS
 #define DCMI_RISR_VSYNC_RIS                  DCMI_RIS_VSYNC_RIS
 #define DCMI_RISR_LINE_RIS                   DCMI_RIS_LINE_RIS

 /* TODO DCMI IER */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 4 IER ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_IER            			(((DCMI_IER_TypeDef*)(DCMI_BASE+DCMI_IER_OFFSET )))
 #define DCMI_IER_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_IER_OFFSET)))


#define DCMI_IER_FRAME_IE                    0x00000001U
#define DCMI_IER_OVR_IE                      0x00000002U
#define DCMI_IER_ERR_IE                      0x00000004U
#define DCMI_IER_VSYNC_IE                    0x00000008U
#define DCMI_IER_LINE_IE                     0x00000010U

/* Legacy define */
#define DCMI_IER_OVF_IE                      DCMI_IER_OVR_IE

 /* TODO DCMI MIS */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 5 MIS ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_MIS            			(((DCMI_MIS_TypeDef*)(DCMI_BASE+DCMI_MIS_OFFSET )))
 #define DCMI_MIS_R          			(*((__I uint32_t *)(DCMI_BASE+DCMI_MIS_OFFSET)))

#define DCMI_MIS_FRAME_MIS                   0x00000001U
#define DCMI_MIS_OVR_MIS                     0x00000002U
#define DCMI_MIS_ERR_MIS                     0x00000004U
#define DCMI_MIS_VSYNC_MIS                   0x00000008U
#define DCMI_MIS_LINE_MIS                    0x00000010U

/* Legacy defines */
#define DCMI_MISR_FRAME_MIS                  DCMI_MIS_FRAME_MIS
#define DCMI_MISR_OVF_MIS                    DCMI_MIS_OVR_MIS
#define DCMI_MISR_ERR_MIS                    DCMI_MIS_ERR_MIS
#define DCMI_MISR_VSYNC_MIS                  DCMI_MIS_VSYNC_MIS
#define DCMI_MISR_LINE_MIS                   DCMI_MIS_LINE_MIS

 /* TODO DCMI ICR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 6 ICR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_ICR            			(((DCMI_ICR_TypeDef*)(DCMI_BASE+DCMI_ICR_OFFSET )))
 #define DCMI_ICR_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_ICR_OFFSET)))

#define DCMI_ICR_FRAME_ISC                   0x00000001U
#define DCMI_ICR_OVR_ISC                     0x00000002U
#define DCMI_ICR_ERR_ISC                     0x00000004U
#define DCMI_ICR_VSYNC_ISC                   0x00000008U
#define DCMI_ICR_LINE_ISC                    0x00000010U

/* Legacy defines */
#define DCMI_ICR_OVF_ISC                     DCMI_ICR_OVR_ISC


 /* TODO DCMI ESCR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 7 ESCR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_ESCR            			(((DCMI_ESCR_TypeDef*)(DCMI_BASE+DCMI_ESCR_OFFSET )))
 #define DCMI_ESCR_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_ESCR_OFFSET)))

#define DCMI_ESCR_FSC                        0x000000FFU
#define DCMI_ESCR_LSC                        0x0000FF00U
#define DCMI_ESCR_LEC                        0x00FF0000U
#define DCMI_ESCR_FEC                        0xFF000000U

 /* TODO DCMI ESUR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 8 ESUR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_ESUR            			(((DCMI_ESUR_TypeDef*)(DCMI_BASE+DCMI_ESUR_OFFSET )))
 #define DCMI_ESUR_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_ESUR_OFFSET)))

#define DCMI_ESUR_FSU                        0x000000FFU
#define DCMI_ESUR_LSU                        0x0000FF00U
#define DCMI_ESUR_LEU                        0x00FF0000U
#define DCMI_ESUR_FEU                        0xFF000000U

 /* TODO DCMI CWSTRT */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 9 CWSTRT ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_CWSTRT            			(((DCMI_CWSTRT_TypeDef*)(DCMI_BASE+DCMI_CWSTRT_OFFSET )))
 #define DCMI_CWSTRT_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_CWSTRT_OFFSET)))

#define DCMI_CWSTRT_HOFFCNT                  0x00003FFFU
#define DCMI_CWSTRT_VST                      0x1FFF0000U

 /* TODO DCMI CWSIZE */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 10 CWSIZE ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_CWSIZE            			(((DCMI_CWSIZE_TypeDef*)(DCMI_BASE+DCMI_CWSIZE_OFFSET )))
 #define DCMI_CWSIZE_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_CWSIZE_OFFSET)))

#define DCMI_CWSIZE_CAPCNT                   0x00003FFFU
#define DCMI_CWSIZE_VLINE                    0x3FFF0000U

 /* TODO DCMI DR */
 /*////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// 11 DR ///////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////*/
 #define DCMI_DR            			(((DCMI_DR_TypeDef*)(DCMI_BASE+DCMI_DR_OFFSET )))
 #define DCMI_DR_R          			(*((__IO uint32_t *)(DCMI_BASE+DCMI_DR_OFFSET)))

#define DCMI_DR_BYTE0                        0x000000FFU
#define DCMI_DR_BYTE1                        0x0000FF00U
#define DCMI_DR_BYTE2                        0x00FF0000U
#define DCMI_DR_BYTE3                        0xFF000000U



/* TODO functions*/


extern uint32_t DCMIbusy;
extern uint32_t DCMIflag;
extern uint32_t DCMIflag1;
 uint32_t DCMI_Init(void);
 uint32_t DCMI_Capture(void);
 uint32_t DCMI_Busy(void);
 uint32_t DCMI_SetBusy(void);
 uint32_t DCMI_Abort(void);

 typedef struct LTDC_TFT_TypeDef LTDC_TFT_TypeDef;
 extern LTDC_TFT_TypeDef* DCMIStorage;
 extern LTDC_TFT_TypeDef* DCMIProcess;

#endif /* DCMI_H_ */
