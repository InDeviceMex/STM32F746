/*
 * LTDC.h
 *
 *  Created on: 24/08/2018
 *      Author: InDev
 */

#ifndef LTDC_H_
#define LTDC_H_

#include "Core.h"
#include <stdint.h>
#include "GPIO.h"
#include "RCC.h"
#include "IMAGE.h"
#include "Font.h"
#include "DMA2D.h"
#include "CONV.h"
#include "Colors.h"
#include <stdarg.h>

#define LTDC_BASE             ((uint32_t)0x40016800U)

#define LTDC_Layer1_BASE      (LTDC_BASE + 0x84U)
#define LTDC_Layer2_BASE      (LTDC_BASE + 0x104U)

#define LTDC_Layer1_ADDRESS		(SDRAM_BASE+(1024 * 1024 * 2)*0)
#define LTDC_Layer2_ADDRESS		(SDRAM_BASE+(1024 * 1024 * 2)*1)
#define LTDC_LayerAux_ADDRESS	(SDRAM_BASE+(1024 * 1024 * 2)*2)

#define LTDC_BACKGROUND_LAYER     (0x00000000)
#define LTDC_FOREGROUND_LAYER     (0x00000001)
#define LTDC_AUXILIAR_LAYER       (0x00000002)

#define LTDC_FONT_START        (font16x24)

#define LINE(x) ((x) * (LTDC_LayerActual->font->height))

#define COLPIX	(1024)
#define ROWPIX	(600)
#define HSWPIX	(20-1)
#define VSHPIX	(3-1)
#define AHBPIX	(HSWPIX+140)
#define AVBPIX	(VSHPIX+20)
#define AAWPIX	(AHBPIX+COLPIX)
#define AAHPIX	(AVBPIX+ROWPIX)
#define TOTALWPIX	(160+AAWPIX)
#define TOTALHPIX	(12+AAHPIX)



typedef __IO struct
{
	__IO uint32_t VSH:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:5;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t HSW:12;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:4;  /*!< Reserved, 0x00-0x04 */
} LTDC_SSCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t AVBP:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:5;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t AHBP:12;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:4;  /*!< Reserved, 0x00-0x04 */
} LTDC_BPCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t AAH:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:5;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t AAW:12;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:4;  /*!< Reserved, 0x00-0x04 */
} LTDC_AWCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t TOTALH:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:5;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t TOTALW:12;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:4;  /*!< Reserved, 0x00-0x04 */
} LTDC_TWCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t LTDCEN:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:3;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t DBW:3;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:1;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t DGW:3;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved2:1;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t DRW:3;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved3:1;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t DEN:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved4:11;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t PCPOL:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t DEPOL:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t VSPOL:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t HSPOL:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
} LTDC_GCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t IMR:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t VBR:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:30;  /*!< Reserved, 0x00-0x04 */
} LTDC_SRCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t BCBLUE:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t BCGREEN:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t BCRED:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:8;  /*!< Reserved, 0x00-0x04 */
} LTDC_BCCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t LIE:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t FUIE:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t TERRIE:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t RRIE:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:28;  /*!< Reserved, 0x00-0x04 */
} LTDC_IER_TypeDef;


typedef __IO struct
{
	__IO uint32_t LIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t FUIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t TERRIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t RRIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:28;  /*!< Reserved, 0x00-0x04 */
} LTDC_ISR_TypeDef;


typedef __IO struct
{
	__IO uint32_t CLIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t CFUIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t CTERRIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t CRRIF:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:28;  /*!< Reserved, 0x00-0x04 */
} LTDC_ICR_TypeDef;



typedef __IO struct
{
	__IO uint32_t LIPOS:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:21;  /*!< Reserved, 0x00-0x04 */
} LTDC_LIPCR_TypeDef;



typedef __IO struct
{
	__I uint32_t CYPOS:16;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__I uint32_t CXPOS:16;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
} LTDC_CPSR_TypeDef;



typedef __IO struct
{
	__I uint32_t VDES:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__I uint32_t HDES:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__I uint32_t VSYNCS:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__I uint32_t HSYNCS:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t     reserved:28;  /*!< Reserved, 0x00-0x04 */
} LTDC_CDSR_TypeDef;
/**
  * @brief LCD-TFT Display Controller
  */

typedef __IO struct
{
  uint32_t      reserved[2];  /*!< Reserved, 0x00-0x04 */
  union
  {
	  __IO uint32_t 		SSCR;          /*!< LTDC Synchronization Size Configuration Register,    Address offset: 0x08 */
	  LTDC_SSCR_TypeDef 	SSCR_Bit;          /*!< LTDC Synchronization Size Configuration Register,    Address offset: 0x08 */

  };
  union
  {
	  __IO uint32_t 		BPCR;          /*!< LTDC Back Porch Configuration Register,              Address offset: 0x0C */
	  LTDC_BPCR_TypeDef 	BPCR_Bit;          /*!< LTDC Back Porch Configuration Register,              Address offset: 0x0C */
  };
  union
  {
	  __IO uint32_t 		AWCR;          /*!< LTDC Active Width Configuration Register,            Address offset: 0x10 */
	  LTDC_AWCR_TypeDef 	AWCR_Bit;          /*!< LTDC Active Width Configuration Register,            Address offset: 0x10 */
  };
  union
  {
	  __IO uint32_t 		TWCR;          /*!< LTDC Total Width Configuration Register,             Address offset: 0x14 */
	  LTDC_TWCR_TypeDef 	TWCR_Bit;          /*!< LTDC Total Width Configuration Register,             Address offset: 0x14 */
  };
  union
  {
	  __IO uint32_t 		GCR;           /*!< LTDC Global Control Register,                        Address offset: 0x18 */
	  LTDC_GCR_TypeDef 		GCR_Bit;           /*!< LTDC Global Control Register,                        Address offset: 0x18 */
  };
  uint32_t      			reserved1[2];  /*!< Reserved, 0x1C-0x20 */
  union
  {
	  __IO uint32_t 		SRCR;          /*!< LTDC Shadow Reload Configuration Register,           Address offset: 0x24 */
	  LTDC_SRCR_TypeDef 	SRCR_Bit;          /*!< LTDC Shadow Reload Configuration Register,           Address offset: 0x24 */
  };
  uint32_t      			reserved2[1];  /*!< Reserved, 0x28 */
  union
  {
	  __IO uint32_t 		BCCR;          /*!< LTDC Background Color Configuration Register,        Address offset: 0x2C */
	  LTDC_BCCR_TypeDef 	BCCR_Bit;          /*!< LTDC Background Color Configuration Register,        Address offset: 0x2C */
  };
  uint32_t      			reserved3[1];  /*!< Reserved, 0x30 */
  union
  {
	  __IO uint32_t 		IER;           /*!< LTDC Interrupt Enable Register,                      Address offset: 0x34 */
	  LTDC_IER_TypeDef 		IER_Bit;           /*!< LTDC Interrupt Enable Register,                      Address offset: 0x34 */
  };
  union
  {
	  __IO uint32_t 		ISR;           /*!< LTDC Interrupt Status Register,                      Address offset: 0x38 */
	  LTDC_ISR_TypeDef 		ISR_Bit;           /*!< LTDC Interrupt Status Register,                      Address offset: 0x38 */
  };
  union
  {
	  __IO uint32_t 		ICR;           /*!< LTDC Interrupt Clear Register,                       Address offset: 0x3C */
	  LTDC_ICR_TypeDef 		ICR_Bit;           /*!< LTDC Interrupt Clear Register,                       Address offset: 0x3C */
  };
  union
  {
	  __IO uint32_t 		LIPCR;         /*!< LTDC Line Interrupt Position Configuration Register, Address offset: 0x40 */
	  LTDC_LIPCR_TypeDef 	LIPCR_Bit;         /*!< LTDC Line Interrupt Position Configuration Register, Address offset: 0x40 */
  };
  union
  {
	  __IO uint32_t			CPSR;          /*!< LTDC Current Position Status Register,               Address offset: 0x44 */
	  LTDC_CPSR_TypeDef 	CPSR_Bit;          /*!< LTDC Current Position Status Register,               Address offset: 0x44 */
  };
  union
  {
	  __IO uint32_t 		CDSR;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	  LTDC_CDSR_TypeDef 	CDSR_Bit;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
  };
} LTDC_TypeDef;



typedef __IO struct
{
	__IO uint32_t LEN:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t COLKEN:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:2;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t CLUTEN:1;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:27;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxCR_TypeDef;



typedef __IO struct
{
	__IO uint32_t WHSTPOS:12;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:4;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t WHSPPOS:12;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:4;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxWHPCR_TypeDef;



typedef __IO struct
{
	__IO uint32_t WVSTPOS:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:5;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t WVSPPOS:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:5;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxWVPCR_TypeDef;



typedef __IO struct
{
	__IO uint32_t CKBLUE:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t CKGREEN:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t CKRED:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:8;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxCKCR_TypeDef;



typedef __IO struct
{
	__IO uint32_t PF:3;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:29;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxPFCR_TypeDef;



typedef __IO struct
{
	__IO uint32_t CONSTA:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:24;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxCACR_TypeDef;



typedef __IO struct
{
	__IO uint32_t DCBLUE:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t DCGREEN:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t DCRED:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t DCALPHA:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
} LTDC_LxDCCR_TypeDef;



typedef __IO struct
{
	__IO uint32_t BF2:3;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:5;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t BF1:3;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:21;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxBFCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t CFBADD:32;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
} LTDC_LxCFBAR_TypeDef;



typedef __IO struct
{
	__IO uint32_t CFBLL:13;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:3;  /*!< Reserved, 0x00-0x04 */
	__IO uint32_t CFBP:13;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved1:3;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxCFBLR_TypeDef;



typedef __IO struct
{
	__IO uint32_t CFBLNBR:11;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	uint32_t      reserved:21;  /*!< Reserved, 0x00-0x04 */
} LTDC_LxCFBLNR_TypeDef;



typedef __IO struct
{
	__IO uint32_t BLUE:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t GREEN:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t RED:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
	__IO uint32_t CLUTADD:8;         /*!< LTDC Current Display Status Register,                 Address offset: 0x48 */
} LTDC_LxCLUTWR_TypeDef;







/**
  * @brief LCD-TFT Display layer x Controller
  */

typedef __IO struct
{
	union
	{
		__IO uint32_t 			CR;            /*!< LTDC Layerx Control Register                                  Address offset: 0x84 */
		LTDC_LxCR_TypeDef 		CR_Bit;            /*!< LTDC Layerx Control Register                                  Address offset: 0x84 */
	};
	union
	{
		__IO uint32_t 			WHPCR;         /*!< LTDC Layerx Window Horizontal Position Configuration Register Address offset: 0x88 */
		LTDC_LxWHPCR_TypeDef 	WHPCR_Bit;         /*!< LTDC Layerx Window Horizontal Position Configuration Register Address offset: 0x88 */
	};
	union
	{
		__IO uint32_t 			WVPCR;         /*!< LTDC Layerx Window Vertical Position Configuration Register   Address offset: 0x8C */
		LTDC_LxWVPCR_TypeDef 	WVPCR_Bit;         /*!< LTDC Layerx Window Vertical Position Configuration Register   Address offset: 0x8C */
	};
	union
	{
		__IO uint32_t 			CKCR;          /*!< LTDC Layerx Color Keying Configuration Register               Address offset: 0x90 */
		LTDC_LxCKCR_TypeDef 	CKCR_Bit;          /*!< LTDC Layerx Color Keying Configuration Register               Address offset: 0x90 */
  	};
	union
	{
		__IO uint32_t 			PFCR;          /*!< LTDC Layerx Pixel Format Configuration Register               Address offset: 0x94 */
		LTDC_LxPFCR_TypeDef 	PFCR_Bit;          /*!< LTDC Layerx Pixel Format Configuration Register               Address offset: 0x94 */
	};
	union
	{
		__IO uint32_t 			CACR;          /*!< LTDC Layerx Constant Alpha Configuration Register             Address offset: 0x98 */
		LTDC_LxCACR_TypeDef 	CACR_Bit;          /*!< LTDC Layerx Constant Alpha Configuration Register             Address offset: 0x98 */
	};
	union
	{
		__IO uint32_t 			DCCR;          /*!< LTDC Layerx Default Color Configuration Register              Address offset: 0x9C */
		LTDC_LxDCCR_TypeDef 	DCCR_Bit;          /*!< LTDC Layerx Default Color Configuration Register              Address offset: 0x9C */
	};
	union
	{
		__IO uint32_t 			BFCR;          /*!< LTDC Layerx Blending Factors Configuration Register           Address offset: 0xA0 */
		LTDC_LxBFCR_TypeDef 	BFCR_Bit;          /*!< LTDC Layerx Blending Factors Configuration Register           Address offset: 0xA0 */
	};
	uint32_t      				reserved[2];  /*!< Reserved */
	union
	{
		__IO uint32_t 			CFBAR;         /*!< LTDC Layerx Color Frame Buffer Address Register               Address offset: 0xAC */
		LTDC_LxCFBAR_TypeDef 	CFBAR_Bit;         /*!< LTDC Layerx Color Frame Buffer Address Register               Address offset: 0xAC */
	};
	union
	{
		__IO uint32_t 			CFBLR;         /*!< LTDC Layerx Color Frame Buffer Length Register                Address offset: 0xB0 */
		LTDC_LxCFBLR_TypeDef 	CFBLR_Bit;         /*!< LTDC Layerx Color Frame Buffer Length Register                Address offset: 0xB0 */
	};
	union
	{
		__IO uint32_t 			CFBLNR;        /*!< LTDC Layerx ColorFrame Buffer Line Number Register            Address offset: 0xB4 */
		LTDC_LxCFBLNR_TypeDef 	CFBLNR_Bit;        /*!< LTDC Layerx ColorFrame Buffer Line Number Register            Address offset: 0xB4 */
	};
	uint32_t      				reserved1[3];  /*!< Reserved */
	union
	{
		__IO uint32_t 			CLUTWR;        /*!< LTDC Layerx CLUT Write Register                               Address offset: 0x144 */
		LTDC_LxCLUTWR_TypeDef	CLUTWR_Bit;        /*!< LTDC Layerx CLUT Write Register                               Address offset: 0x144 */
	};

} LTDC_Layer_TypeDef;


#define SUB_LAYER_CANT (100)
typedef struct LTDC_TFT_TypeDef LTDC_TFT_TypeDef;

struct LTDC_TFT_TypeDef
{
	LTDC_Layer_TypeDef *layerTFT; //solo utilizado en BackGround y Foreground

	uint32_t layerHeaderAddress; //direccion de memoria inicial de la layer
	uint32_t layerDataAddress; //direccion de memoria inicial de la layer
	uint32_t layerCLUTAddress; //direccion de memoria inicial de la layer


	uint32_t layerDataHue; //direccion de memoria inicial de la layer
	uint32_t layerDataSaturation; //direccion de memoria inicial de la layer
	uint32_t layerDataIntensity; //direccion de memoria inicial de la layer

	//uint32_t layerAlphaMode; 		//modo de alpha, sin cambio, cambio por contante, constante x pixel alpha ,utilizado solamente en conversiones hacia ARGB
	//uint32_t layerAlphaConstant; 	//valor de alpha que se sustituira cuando el modo sea constant
	//uint32_t layerColorMode; 		//modo del color RGB565, RGB888, ARGB8888
	uint32_t layerColorBG;
	uint32_t layerColorFont; //color para el BG color de la layer
	FONT_TypeDef* layerFont; //tamaño de la fuente de la layer
	char* layerString; //tamaño de la fuente de la layer

	uint32_t layerWidthTotal;  //ancho de la layer
	uint32_t layerHeightTotal; //altura de la layer
	uint32_t layerWidth;  //ancho de la layer
	uint32_t layerHeight; //altura de la layer

	uint32_t  layerBGXCount;
	uint32_t  layerBGXInit;
	uint32_t* layerBGX;    //posicion X inciial de la layer
	uint32_t  layerBGYCount;
	uint32_t  layerBGYInit;
	uint32_t* layerBGY;   //posicion X inciial de la layer

	uint32_t  layerXCount;
	uint32_t  layerXInit;
	uint32_t* layerX;    //posicion X inciial de la layer
	uint32_t  layerYCount;
	uint32_t  layerYInit;
	uint32_t* layerY;   //posicion X inciial de la layer
	uint32_t  layerRadiusCount;
	uint32_t  layerRadiusInit;
	uint32_t* layerRadius;   //posicion X inciial de la layer


	uint32_t layerType;
	uint32_t subLayerNum;
	LTDC_TFT_TypeDef* layerBG;
	LTDC_TFT_TypeDef** subLayers;
	uint32_t subLayersCreated;
	uint32_t subLayersMaximum;
	uint32_t variableType;
} ;

enum
{
	VARIABLETYPE_UCHAR=0,
	VARIABLETYPE_USHORT= 2,
	VARIABLETYPE_KERNEL= 3,
	VARIABLETYPE_FLOAT=4,
	VARIABLETYPE_COMPLEX=8,
};

enum
{
	LAYER_TYPE_IMAGE_NOHEADER				=0,
	LAYER_TYPE_IMAGE_BMP					,
	LAYER_TYPE_LINECOMPLETE_HORIZONTAL		,
	LAYER_TYPE_LINECOMPLETE_VERTICAL		,
	LAYER_TYPE_FONTLINE						,
	LAYER_TYPE_FONTLINECOMPLETE				,
	LAYER_TYPE_PIXEL						,
	LAYER_TYPE_LINE_VERTICAL				,
	LAYER_TYPE_LINE_HORIZONTAL				,
	LAYER_TYPE_CROSS						,
	LAYER_TYPE_XMARK						,
	LAYER_TYPE_LINEXY						,
	LAYER_TYPE_RECTANGLE_FILL				,
	LAYER_TYPE_RECTANGLE					,
	LAYER_TYPE_RECTANGLE_SEMI					,
	LAYER_TYPE_CIRCLE_FILL					,
	LAYER_TYPE_CIRCLE						,
	LAYER_TYPE_ELLIPSE_FILL					,
	LAYER_TYPE_ELLIPSE						,
	LAYER_TYPE_TRIANGLE_FILL				,
	LAYER_TYPE_TRIANGLE						,
	LAYER_TYPE_MULTILINE_FILL				,
	LAYER_TYPE_MULTILINE					,
	LAYER_TYPE_MULTILINECLOSE_FILL				,
	LAYER_TYPE_MULTILINECLOSE					,
	LAYER_TYPE_STRING_SIMPLE_BACKGROUND					,
	LAYER_TYPE_STRING_SIMPLE					,


};

typedef struct
{

	//uint32_t colorModeOriginal;
	//uint32_t colorModeReplace;
	uint32_t color;
	//uint32_t colorOriginal;
	//uint32_t colorReplace;
	uint32_t colorComplete;
	//uint32_t dither;
	//uint32_t AlphaMode;
	//uint32_t AlphaConstant;
	uint32_t red;
	uint32_t green;
	uint32_t blue;
	//uint32_t Alpha;
}LTDC_COLOR_TypeDef;

enum
{
	DITHER_DIS 	=0,
	DITHER_EN	=1,
};

enum
{
	COMPLETE_DIS 	=0,
	COMPLETE_EN		=1,
};
enum
{
	COLOR_MODE_ARGB8888	=0,
	COLOR_MODE_RGB888	=1,
	COLOR_MODE_RGB565	=2,
};

enum
{
	ALPHA_MODE_NOMOD	=0,
	ALPHA_MODE_CONSTANT	=1,
	ALPHA_MODE_MULTI	=2,
};


typedef __IO struct
{
	uint32_t XInit			;
    uint32_t X[4]      	;
    uint32_t YInit;
    uint32_t Y[4]      	;
    uint32_t radiusInit;
    uint32_t radius[3]     	;
    uint32_t width      	;
    uint32_t height      	;
    uint32_t widthTotal     	;
    uint32_t heightTotal      	;
}LTDC_DIMENSIONS_TypeDef;


typedef __IO struct
{
    uint32_t X      	;
    uint32_t Y      	;
}LTDC_COORD_TypeDef;

#define LTDC                ((LTDC_TypeDef *)LTDC_BASE)
#define LTDC_Layer1         ((LTDC_Layer_TypeDef *)LTDC_Layer1_BASE)
#define LTDC_Layer2         ((LTDC_Layer_TypeDef *)LTDC_Layer2_BASE)

#define	LTDC_SSCR_OFFSET						((uint32_t)0x00000008)
#define	LTDC_BPCR_OFFSET						((uint32_t)0x0000000C)
#define	LTDC_AWCR_OFFSET						((uint32_t)0x00000010)
#define	LTDC_TWCR_OFFSET						((uint32_t)0x00000014)
#define	LTDC_GCR_OFFSET							((uint32_t)0x00000018)
#define	LTDC_SRCR_OFFSET						((uint32_t)0x00000024)
#define	LTDC_BCCR_OFFSET						((uint32_t)0x0000002C)
#define	LTDC_IER_OFFSET							((uint32_t)0x00000034)
#define	LTDC_ISR_OFFSET							((uint32_t)0x00000038)
#define	LTDC_ICR_OFFSET							((uint32_t)0x0000003C)
#define	LTDC_LIPCR_OFFSET						((uint32_t)0x00000040)
#define	LTDC_CPSR_OFFSET						((uint32_t)0x00000044)
#define	LTDC_CDSR_OFFSET						((uint32_t)0x00000048)

#define	LTDC_Layer1_CR_OFFSET					((uint32_t)0x00000000)
#define	LTDC_Layer1_WHPCR_OFFSET				((uint32_t)0x00000004)
#define	LTDC_Layer1_WVPCR_OFFSET				((uint32_t)0x00000008)
#define	LTDC_Layer1_CKCR_OFFSET					((uint32_t)0x0000000C)
#define	LTDC_Layer1_PFCR_OFFSET					((uint32_t)0x00000010)
#define	LTDC_Layer1_CACR_OFFSET					((uint32_t)0x00000014)
#define	LTDC_Layer1_DCCR_OFFSET					((uint32_t)0x00000018)
#define	LTDC_Layer1_BFCR_OFFSET					((uint32_t)0x0000001C)
#define	LTDC_Layer1_CFBAR_OFFSET				((uint32_t)0x00000028)
#define	LTDC_Layer1_CFBLR_OFFSET				((uint32_t)0x0000002C)
#define	LTDC_Layer1_CFBLNR_OFFSET				((uint32_t)0x00000030)
#define	LTDC_Layer1_CLUTWR_OFFSET				((uint32_t)0x00000040)

#define	LTDC_Layer2_CR_OFFSET					((uint32_t)0x00000000)
#define	LTDC_Layer2_WHPCR_OFFSET				((uint32_t)0x00000004)
#define	LTDC_Layer2_WVPCR_OFFSET				((uint32_t)0x00000008)
#define	LTDC_Layer2_CKCR_OFFSET					((uint32_t)0x0000000C)
#define	LTDC_Layer2_PFCR_OFFSET					((uint32_t)0x00000010)
#define	LTDC_Layer2_CACR_OFFSET					((uint32_t)0x00000014)
#define	LTDC_Layer2_DCCR_OFFSET					((uint32_t)0x00000018)
#define	LTDC_Layer2_BFCR_OFFSET					((uint32_t)0x0000001C)
#define	LTDC_Layer2_CFBAR_OFFSET				((uint32_t)0x00000028)
#define	LTDC_Layer2_CFBLR_OFFSET				((uint32_t)0x0000002C)
#define	LTDC_Layer2_CFBLNR_OFFSET				((uint32_t)0x00000030)
#define	LTDC_Layer2_CLUTWR_OFFSET				((uint32_t)0x00000040)

/* TODO SSCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 SSCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_SSCR            			(((LTDC_SSCR_TypeDef*)(LTDC_BASE+LTDC_SSCR_OFFSET )))
#define LTDC_SSCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_SSCR_OFFSET)))

/*--------*/
#define LTDC_SSCR_R_VSH_MASK    		((uint32_t)0x000007FF)
#define LTDC_SSCR_R_VSH_BIT     		(0)

#define LTDC_SSCR_VSH_MASK    			((uint32_t)0x000007FF)
/*--------*/

/*--------*/
#define LTDC_SSCR_R_HSW_MASK    		((uint32_t)0x0FFF0000)
#define LTDC_SSCR_R_HSW_BIT     		(16)

#define LTDC_SSCR_HSW_MASK    			((uint32_t)0x00000FFF)
/*--------*/

/* TODO BPCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 BPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_BPCR            			(((LTDC_BPCR_TypeDef*)(LTDC_BASE+LTDC_BPCR_OFFSET )))
#define LTDC_BPCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_BPCR_OFFSET)))

/*--------*/
#define LTDC_BPCR_R_AVBP_MASK    		((uint32_t)0x000007FF)
#define LTDC_BPCR_R_AVBP_BIT     		(0)

#define LTDC_BPCR_AVBP_MASK    			((uint32_t)0x000007FF)
/*--------*/

/*--------*/
#define LTDC_BPCR_R_AHBP_MASK    		((uint32_t)0x0FFF0000)
#define LTDC_BPCR_R_AHBP_BIT     		(16)

#define LTDC_BPCR_AHBP_MASK    			((uint32_t)0x00000FFF)
/*--------*/

/* TODO AWCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 AWCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_AWCR            			(((LTDC_AWCR_TypeDef*)(LTDC_BASE+LTDC_AWCR_OFFSET )))
#define LTDC_AWCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_AWCR_OFFSET)))

/*--------*/
#define LTDC_AWCR_R_AAH_MASK    		((uint32_t)0x000007FF)
#define LTDC_AWCR_R_AAH_BIT     		(0)

#define LTDC_AWCR_AAH_MASK    			((uint32_t)0x000007FF)
/*--------*/

/*--------*/
#define LTDC_AWCR_R_AAW_MASK    		((uint32_t)0x0FFF0000)
#define LTDC_AWCR_R_AAW_BIT     		(16)

#define LTDC_AWCR_AAW_MASK    			((uint32_t)0x00000FFF)
/*--------*/

/* TODO TWCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 TWCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_TWCR            			(((LTDC_TWCR_TypeDef*)(LTDC_BASE+LTDC_TWCR_OFFSET )))
#define LTDC_TWCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_TWCR_OFFSET)))

/*--------*/
#define LTDC_TWCR_R_TOTALH_MASK    		((uint32_t)0x000007FF)
#define LTDC_TWCR_R_TOTALH_BIT     		(0)

#define LTDC_TWCR_TOTALH_MASK    		((uint32_t)0x000007FF)
/*--------*/

/*--------*/
#define LTDC_TWCR_R_TOTALW_MASK    		((uint32_t)0x0FFF0000)
#define LTDC_TWCR_R_TOTALW_BIT     		(16)

#define LTDC_TWCR_TOTALW_MASK    		((uint32_t)0x00000FFF)
/*--------*/

/* TODO GCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 GCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_GCR            			(((LTDC_GCR_TypeDef*)(LTDC_BASE+LTDC_GCR_OFFSET )))
#define LTDC_GCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_GCR_OFFSET)))

/*--------*/
#define LTDC_GCR_R_LTDCEN_MASK    		((uint32_t)0x00000001)
#define LTDC_GCR_R_LTDCEN_BIT     		(0)
#define LTDC_GCR_R_LTDCEN_DIS    		((uint32_t)0x00000000)
#define LTDC_GCR_R_LTDCEN_EN    		((uint32_t)0x00000001)

#define LTDC_GCR_LTDCEN_MASK    		((uint32_t)0x00000001)
#define LTDC_GCR_LTDCEN_DIS    			((uint32_t)0x00000000)
#define LTDC_GCR_LTDCEN_EN    			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_GCR_R_DBW_MASK    			((uint32_t)0x00000070)
#define LTDC_GCR_R_DBW_BIT     			(4)

#define LTDC_GCR_DBW_MASK    			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define LTDC_GCR_R_DGW_MASK    			((uint32_t)0x00000700)
#define LTDC_GCR_R_DGW_BIT     			(8)

#define LTDC_GCR_DGW_MASK    			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define LTDC_GCR_R_DRW_MASK    			((uint32_t)0x00007000)
#define LTDC_GCR_R_DRW_BIT     			(12)

#define LTDC_GCR_DRW_MASK    			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define LTDC_GCR_R_DEN_MASK    			((uint32_t)0x00010000)
#define LTDC_GCR_R_DEN_BIT     			(16)
#define LTDC_GCR_R_DEN_DIS    			((uint32_t)0x00000000)
#define LTDC_GCR_R_DEN_EN    			((uint32_t)0x00010000)

#define LTDC_GCR_DEN_MASK    			((uint32_t)0x00000001)
#define LTDC_GCR_DEN_DIS    			((uint32_t)0x00000000)
#define LTDC_GCR_DEN_EN	    			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_GCR_R_PCPOL_MASK    		((uint32_t)0x10000000)
#define LTDC_GCR_R_PCPOL_BIT     		(28)
#define LTDC_GCR_R_PCPOL_LOW    		((uint32_t)0x00000000)
#define LTDC_GCR_R_PCPOL_HIGH  			((uint32_t)0x10000000)

#define LTDC_GCR_PCPOL_MASK    			((uint32_t)0x00000001)
#define LTDC_GCR_PCPOL_LOW   			((uint32_t)0x00000000)
#define LTDC_GCR_PCPOL_HIGH	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_GCR_R_DEPOL_MASK    		((uint32_t)0x20000000)
#define LTDC_GCR_R_DEPOL_BIT     		(29)
#define LTDC_GCR_R_DEPOL_LOW    		((uint32_t)0x00000000)
#define LTDC_GCR_R_DEPOL_HIGH  			((uint32_t)0x20000000)

#define LTDC_GCR_DEPOL_MASK    			((uint32_t)0x00000001)
#define LTDC_GCR_DEPOL_LOW   			((uint32_t)0x00000000)
#define LTDC_GCR_DEPOL_HIGH	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_GCR_R_VSPOL_MASK    		((uint32_t)0x40000000)
#define LTDC_GCR_R_VSPOL_BIT     		(30)
#define LTDC_GCR_R_VSPOL_LOW    		((uint32_t)0x00000000)
#define LTDC_GCR_R_VSPOL_HIGH  			((uint32_t)0x40000000)

#define LTDC_GCR_VSPOL_MASK    			((uint32_t)0x00000001)
#define LTDC_GCR_VSPOL_LOW   			((uint32_t)0x00000000)
#define LTDC_GCR_VSPOL_HIGH	    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_GCR_R_HSPOL_MASK    		((uint32_t)0x80000000)
#define LTDC_GCR_R_HSPOL_BIT     		(31)
#define LTDC_GCR_R_HSPOL_LOW    		((uint32_t)0x00000000)
#define LTDC_GCR_R_HSPOL_HIGH  			((uint32_t)0x80000000)

#define LTDC_GCR_HSPOL_MASK    			((uint32_t)0x00000001)
#define LTDC_GCR_HSPOL_LOW   			((uint32_t)0x00000000)
#define LTDC_GCR_HSPOL_HIGH	    		((uint32_t)0x00000001)
/*--------*/

/* TODO SRCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 SRCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_SRCR            			(((LTDC_SRCR_TypeDef*)(LTDC_BASE+LTDC_SRCR_OFFSET )))
#define LTDC_SRCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_SRCR_OFFSET)))

/*--------*/
#define LTDC_SRCR_R_IMR_MASK    		((uint32_t)0x00000001)
#define LTDC_SRCR_R_IMR_BIT     		(0)
#define LTDC_SRCR_R_IMR_NA    			((uint32_t)0x00000000)
#define LTDC_SRCR_R_IMR_RELOAD 			((uint32_t)0x00000001)

#define LTDC_SRCR_IMR_MASK    			((uint32_t)0x00000001)
#define LTDC_SRCR_IMR_NA    			((uint32_t)0x00000000)
#define LTDC_SRCR_IMR_RELOAD   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_SRCR_R_VBR_MASK    		((uint32_t)0x00000002)
#define LTDC_SRCR_R_VBR_BIT     		(1)
#define LTDC_SRCR_R_VBR_NA    			((uint32_t)0x00000000)
#define LTDC_SRCR_R_VBR_NEXT 			((uint32_t)0x00000002)

#define LTDC_SRCR_VBR_MASK    			((uint32_t)0x00000001)
#define LTDC_SRCR_VBR_NA    			((uint32_t)0x00000000)
#define LTDC_SRCR_VBR_NEXT   			((uint32_t)0x00000001)
/*--------*/

/* TODO BCCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 BCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_BCCR            			(((LTDC_BCCR_TypeDef*)(LTDC_BASE+LTDC_BCCR_OFFSET )))
#define LTDC_BCCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_BCCR_OFFSET)))

/*--------*/
#define LTDC_BCCR_R_BCBLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_BCCR_R_BCBLUE_BIT     		(0)

#define LTDC_BCCR_BCBLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_BCCR_R_BCGREEN_MASK    	((uint32_t)0x0000FF00)
#define LTDC_BCCR_R_BCGREEN_BIT     	(8)

#define LTDC_BCCR_BCGREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_BCCR_R_BCRED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_BCCR_R_BCRED_BIT     		(16)

#define LTDC_BCCR_BCRED_MASK    		((uint32_t)0x000000FF)
/*--------*/

/* TODO IER */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 IER ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_IER            			(((LTDC_IER_TypeDef*)(LTDC_BASE+LTDC_IER_OFFSET )))
#define LTDC_IER_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_IER_OFFSET)))

/*--------*/
#define LTDC_IER_R_LIE_MASK    		((uint32_t)0x00000001)
#define LTDC_IER_R_LIE_BIT     		(0)
#define LTDC_IER_R_LIE_DIS    		((uint32_t)0x00000000)
#define LTDC_IER_R_LIE_EN 			((uint32_t)0x00000001)

#define LTDC_IER_LIE_MASK    		((uint32_t)0x00000001)
#define LTDC_IER_LIE_DIS   			((uint32_t)0x00000000)
#define LTDC_IER_LIE_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_IER_R_FUIE_MASK    	((uint32_t)0x00000002)
#define LTDC_IER_R_FUIE_BIT     	(1)
#define LTDC_IER_R_FUIE_DIS    		((uint32_t)0x00000000)
#define LTDC_IER_R_FUIE_EN 			((uint32_t)0x00000002)

#define LTDC_IER_FUIE_MASK    		((uint32_t)0x00000001)
#define LTDC_IER_FUIE_DIS   		((uint32_t)0x00000000)
#define LTDC_IER_FUIE_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_IER_R_TERRIE_MASK    	((uint32_t)0x00000004)
#define LTDC_IER_R_TERRIE_BIT     	(2)
#define LTDC_IER_R_TERRIE_DIS    	((uint32_t)0x00000000)
#define LTDC_IER_R_TERRIE_EN 		((uint32_t)0x00000004)

#define LTDC_IER_TERRIE_MASK    	((uint32_t)0x00000001)
#define LTDC_IER_TERRIE_DIS   		((uint32_t)0x00000000)
#define LTDC_IER_TERRIE_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_IER_R_RRIE_MASK    	((uint32_t)0x00000008)
#define LTDC_IER_R_RRIE_BIT     	(3)
#define LTDC_IER_R_RRIE_DIS    		((uint32_t)0x00000000)
#define LTDC_IER_R_RRIE_EN 			((uint32_t)0x00000008)

#define LTDC_IER_RRIE_MASK    		((uint32_t)0x00000001)
#define LTDC_IER_RRIE_DIS   		((uint32_t)0x00000000)
#define LTDC_IER_RRIE_EN		   	((uint32_t)0x00000001)
/*--------*/

/* TODO ISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 ISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_ISR            			(((LTDC_ISR_TypeDef*)(LTDC_BASE+LTDC_ISR_OFFSET )))
#define LTDC_ISR_R          			(*((__I uint32_t *)(LTDC_BASE+LTDC_ISR_OFFSET)))

/*--------*/
#define LTDC_ISR_R_LIF_MASK    		((uint32_t)0x00000001)
#define LTDC_ISR_R_LIF_BIT     		(0)
#define LTDC_ISR_R_LIF_NOOCCUR 		((uint32_t)0x00000000)
#define LTDC_ISR_R_LIF_OCCUR		((uint32_t)0x00000001)

#define LTDC_ISR_LIF_MASK    		((uint32_t)0x00000001)
#define LTDC_ISR_LIF_NOOCCUR		((uint32_t)0x00000000)
#define LTDC_ISR_LIF_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_ISR_R_FUIF_MASK    	((uint32_t)0x00000002)
#define LTDC_ISR_R_FUIF_BIT     	(1)
#define LTDC_ISR_R_FUIF_NOOCCUR		((uint32_t)0x00000000)
#define LTDC_ISR_R_FUIF_OCCUR		((uint32_t)0x00000002)

#define LTDC_ISR_FUIF_MASK    		((uint32_t)0x00000001)
#define LTDC_ISR_FUIF_NOOCCUR 		((uint32_t)0x00000000)
#define LTDC_ISR_FUIF_OCCUR		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_ISR_R_TERRIF_MASK    	((uint32_t)0x00000004)
#define LTDC_ISR_R_TERRIF_BIT     	(2)
#define LTDC_ISR_R_TERRIF_NOOCCUR  	((uint32_t)0x00000000)
#define LTDC_ISR_R_TERRIF_OCCUR		((uint32_t)0x00000004)

#define LTDC_ISR_TERRIF_MASK    	((uint32_t)0x00000001)
#define LTDC_ISR_TERRIF_NOOCCUR		((uint32_t)0x00000000)
#define LTDC_ISR_TERRIF_OCCUR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_ISR_R_RRIF_MASK    	((uint32_t)0x00000008)
#define LTDC_ISR_R_RRIF_BIT     	(3)
#define LTDC_ISR_R_RRIF_NOOCCUR		((uint32_t)0x00000000)
#define LTDC_ISR_R_RRIF_OCCUR		((uint32_t)0x00000008)

#define LTDC_ISR_RRIF_MASK    		((uint32_t)0x00000001)
#define LTDC_ISR_RRIF_NOOCCUR 		((uint32_t)0x00000000)
#define LTDC_ISR_RRIF_OCCUR		   	((uint32_t)0x00000001)
/*--------*/

/* TODO ICR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 ICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_ICR            			(((LTDC_ICR_TypeDef*)(LTDC_BASE+LTDC_ICR_OFFSET )))
#define LTDC_ICR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_ICR_OFFSET)))

/*--------*/
#define LTDC_ICR_R_CLIF_MASK    		((uint32_t)0x00000001)
#define LTDC_ICR_R_CLIF_BIT     		(0)
#define LTDC_ICR_R_CLIF_NA 				((uint32_t)0x00000000)
#define LTDC_ICR_R_CLIF_CLEAR			((uint32_t)0x00000001)

#define LTDC_ICR_CLIF_MASK    			((uint32_t)0x00000001)
#define LTDC_ICR_CLIF_NA				((uint32_t)0x00000000)
#define LTDC_ICR_CLIF_CLEAR	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_ICR_R_CFUIF_MASK    		((uint32_t)0x00000002)
#define LTDC_ICR_R_CFUIF_BIT     		(1)
#define LTDC_ICR_R_CFUIF_NA				((uint32_t)0x00000000)
#define LTDC_ICR_R_CFUIF_CLEAR			((uint32_t)0x00000002)

#define LTDC_ICR_CFUIF_MASK    			((uint32_t)0x00000001)
#define LTDC_ICR_CFUIF_NA 				((uint32_t)0x00000000)
#define LTDC_ICR_CFUIF_CLEAR		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_ICR_R_CTERRIF_MASK    		((uint32_t)0x00000004)
#define LTDC_ICR_R_CTERRIF_BIT     		(2)
#define LTDC_ICR_R_CTERRIF_NA  			((uint32_t)0x00000000)
#define LTDC_ICR_R_CTERRIF_CLEAR		((uint32_t)0x00000004)

#define LTDC_ICR_CTERRIF_MASK    		((uint32_t)0x00000001)
#define LTDC_ICR_CTERRIF_NA				((uint32_t)0x00000000)
#define LTDC_ICR_CTERRIF_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define LTDC_ICR_R_CRRIF_MASK    		((uint32_t)0x00000008)
#define LTDC_ICR_R_CRRIF_BIT     		(3)
#define LTDC_ICR_R_CRRIF_NA				((uint32_t)0x00000000)
#define LTDC_ICR_R_CRRIF_CLEAR			((uint32_t)0x00000008)

#define LTDC_ICR_CRRIF_MASK    			((uint32_t)0x00000001)
#define LTDC_ICR_CRRIF_NA 				((uint32_t)0x00000000)
#define LTDC_ICR_CRRIF_CLEAR		   	((uint32_t)0x00000001)
/*--------*/

/* TODO LIPCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 LIPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_LIPCR            			(((LTDC_LIPCR_TypeDef*)(LTDC_BASE+LTDC_LIPCR_OFFSET )))
#define LTDC_LIPCR_R          			(*((__IO uint32_t *)(LTDC_BASE+LTDC_LIPCR_OFFSET)))

/*--------*/
#define LTDC_LIPCR_R_LIPOS_MASK    		((uint32_t)0x000007FF)
#define LTDC_LIPCR_R_LIPOS_BIT     		(0)

#define LTDC_LIPCR_LIPOS_MASK    		((uint32_t)0x000007FF)
/*--------*/

/* TODO CPSR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 CPSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_CPSR            			(((LTDC_CPSR_TypeDef*)(LTDC_BASE+LTDC_CPSR_OFFSET )))
#define LTDC_CPSR_R          			(*((__I uint32_t *)(LTDC_BASE+LTDC_CPSR_OFFSET)))

/*--------*/
#define LTDC_CPSR_R_CYPOS_MASK    		((uint32_t)0x0000FFFF)
#define LTDC_CPSR_R_CYPOS_BIT     		(0)

#define LTDC_CPSR_CYPOS_MASK    		((uint32_t)0x0000FFFF)
/*--------*/

/*--------*/
#define LTDC_CPSR_R_CXPOS_MASK    		((uint32_t)0xFFFF0000)
#define LTDC_CPSR_R_CXPOS_BIT     		(16)

#define LTDC_CPSR_CXPOS_MASK    		((uint32_t)0x0000FFFF)
/*--------*/

/* TODO CDSR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 CDSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_CDSR            			(((LTDC_CDSR_TypeDef*)(LTDC_BASE+LTDC_CDSR_OFFSET )))
#define LTDC_CDSR_R          			(*((__I uint32_t *)(LTDC_BASE+LTDC_CDSR_OFFSET)))

/*--------*/
#define LTDC_CDSR_R_VDES_MASK    		((uint32_t)0x00000001)
#define LTDC_CDSR_R_VDES_BIT     		(0)
#define LTDC_CDSR_R_VDES_LOW    		((uint32_t)0x00000000)
#define LTDC_CDSR_R_VDES_HIGH    		((uint32_t)0x00000001)

#define LTDC_CDSR_VDES_MASK    			((uint32_t)0x000000001)
#define LTDC_CDSR_VDES_LOW    			((uint32_t)0x000000000)
#define LTDC_CDSR_VDES_HIGH    			((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_CDSR_R_HDES_MASK    		((uint32_t)0x00000002)
#define LTDC_CDSR_R_HDES_BIT     		(1)
#define LTDC_CDSR_R_HDES_LOW    		((uint32_t)0x00000000)
#define LTDC_CDSR_R_HDES_HIGH    		((uint32_t)0x00000002)

#define LTDC_CDSR_HDES_MASK    			((uint32_t)0x000000001)
#define LTDC_CDSR_HDES_LOW    			((uint32_t)0x000000000)
#define LTDC_CDSR_HDES_HIGH    			((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_CDSR_R_VSYNCS_MASK    		((uint32_t)0x00000004)
#define LTDC_CDSR_R_VSYNCS_BIT     		(2)
#define LTDC_CDSR_R_VSYNCS_LOW    		((uint32_t)0x00000000)
#define LTDC_CDSR_R_VSYNCS_HIGH    		((uint32_t)0x00000004)

#define LTDC_CDSR_VSYNCS_MASK    		((uint32_t)0x000000001)
#define LTDC_CDSR_VSYNCS_LOW    		((uint32_t)0x000000000)
#define LTDC_CDSR_VSYNCS_HIGH    		((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_CDSR_R_HSYNCS_MASK    		((uint32_t)0x00000008)
#define LTDC_CDSR_R_HSYNCS_BIT     		(3)
#define LTDC_CDSR_R_HSYNCS_LOW    		((uint32_t)0x00000000)
#define LTDC_CDSR_R_HSYNCS_HIGH    		((uint32_t)0x00000008)

#define LTDC_CDSR_HSYNCS_MASK    		((uint32_t)0x000000001)
#define LTDC_CDSR_HSYNCS_LOW    		((uint32_t)0x000000000)
#define LTDC_CDSR_HSYNCS_HIGH    		((uint32_t)0x000000001)
/*--------*/

/* TODO Layer1 CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 Layer1 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CR            			(((LTDC_LxCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CR_OFFSET )))
#define LTDC_Layer1_CR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CR_R_LEN_MASK    		((uint32_t)0x00000001)
#define LTDC_Layer1_CR_R_LEN_BIT     		(0)
#define LTDC_Layer1_CR_R_LEN_DIS    		((uint32_t)0x00000000)
#define LTDC_Layer1_CR_R_LEN_EN	    		((uint32_t)0x00000001)

#define LTDC_Layer1_CR_LEN_MASK    			((uint32_t)0x000000001)
#define LTDC_Layer1_CR_LEN_DIS   			((uint32_t)0x000000000)
#define LTDC_Layer1_CR_LEN_EN    			((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_Layer1_CR_R_COLKEN_MASK    	((uint32_t)0x00000002)
#define LTDC_Layer1_CR_R_COLKEN_BIT     	(1)
#define LTDC_Layer1_CR_R_COLKEN_DIS    		((uint32_t)0x00000000)
#define LTDC_Layer1_CR_R_COLKEN_EN	    	((uint32_t)0x00000002)

#define LTDC_Layer1_CR_COLKEN_MASK    		((uint32_t)0x000000001)
#define LTDC_Layer1_CR_COLKEN_DIS   		((uint32_t)0x000000000)
#define LTDC_Layer1_CR_COLKEN_EN    		((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_Layer1_CR_R_CLUTEN_MASK    	((uint32_t)0x00000010)
#define LTDC_Layer1_CR_R_CLUTEN_BIT     	(4)
#define LTDC_Layer1_CR_R_CLUTEN_DIS    		((uint32_t)0x00000000)
#define LTDC_Layer1_CR_R_CLUTEN_EN	    	((uint32_t)0x00000010)

#define LTDC_Layer1_CR_CLUTEN_MASK    		((uint32_t)0x000000001)
#define LTDC_Layer1_CR_CLUTEN_DIS   		((uint32_t)0x000000000)
#define LTDC_Layer1_CR_CLUTEN_EN    		((uint32_t)0x000000001)
/*--------*/

/* TODO Layer1 WHPCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 Layer1 WHPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_WHPCR            			(((LTDC_LxWHPCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_WHPCR_OFFSET )))
#define LTDC_Layer1_WHPCR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_WHPCR_OFFSET)))

/*--------*/
#define LTDC_Layer1_WHPCR_R_WHSTPOS_MASK    		((uint32_t)0x00000FFF)
#define LTDC_Layer1_WHPCR_R_WHSTPOS_BIT     		(0)

#define LTDC_Layer1_WHPCR_WHSTPOS_MASK    			((uint32_t)0x00000FFF)
/*--------*/

/*--------*/
#define LTDC_Layer1_WHPCR_R_WHSPPOS_MASK    		((uint32_t)0x0FFF0000)
#define LTDC_Layer1_WHPCR_R_WHSPPOS_BIT     		(16)

#define LTDC_Layer1_WHPCR_WHSPPOS_MASK    			((uint32_t)0x00000FFF)
/*--------*/


/* TODO Layer1 WVPCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 Layer1 WVPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_WVPCR            			(((LTDC_LxWVPCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_WVPCR_OFFSET )))
#define LTDC_Layer1_WVPCR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_WVPCR_OFFSET)))

/*--------*/
#define LTDC_Layer1_WVPCR_R_WVSTPOS_MASK    		((uint32_t)0x000007FF)
#define LTDC_Layer1_WVPCR_R_WVSTPOS_BIT     		(0)

#define LTDC_Layer1_WVPCR_WVSTPOS_MASK    			((uint32_t)0x000007FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_WVPCR_R_WVSPPOS_MASK    		((uint32_t)0x07FF0000)
#define LTDC_Layer1_WVPCR_R_WVSPPOS_BIT     		(16)

#define LTDC_Layer1_WVPCR_WVSPPOS_MASK    			((uint32_t)0x000007FF)
/*--------*/


/* TODO Layer1 CKCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 Layer1 CKCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CKCR            			(((LTDC_LxCKCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CKCR_OFFSET )))
#define LTDC_Layer1_CKCR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CKCR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CKCR_R_CKBLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer1_CKCR_R_CKBLUE_BIT     		(0)

#define LTDC_Layer1_CKCR_CKBLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_CKCR_R_CKGREEN_MASK    		((uint32_t)0x0000FF00)
#define LTDC_Layer1_CKCR_R_CKGREEN_BIT     		(8)

#define LTDC_Layer1_CKCR_CKGREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_CKCR_R_CKRED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_Layer1_CKCR_R_CKRED_BIT     		(16)

#define LTDC_Layer1_CKCR_CKRED_MASK    			((uint32_t)0x000000FF)
/*--------*/

/* TODO Layer1 PFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 Layer1 PFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_PFCR            			(((LTDC_LxPFCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_PFCR_OFFSET )))
#define LTDC_Layer1_PFCR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_PFCR_OFFSET)))

/*--------*/
#define LTDC_Layer1_PFCR_R_PF_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer1_PFCR_R_PF_BIT     			(0)
#define LTDC_Layer1_PFCR_R_PF_ARGB8888 			((uint32_t)0x00000000)
#define LTDC_Layer1_PFCR_R_PF_RGB888  			((uint32_t)0x00000001)
#define LTDC_Layer1_PFCR_R_PF_RGB565  			((uint32_t)0x00000002)
#define LTDC_Layer1_PFCR_R_PF_ARGB1555 			((uint32_t)0x00000003)
#define LTDC_Layer1_PFCR_R_PF_ARGB4444 			((uint32_t)0x00000004)
#define LTDC_Layer1_PFCR_R_PF_L8	  			((uint32_t)0x00000005)
#define LTDC_Layer1_PFCR_R_PF_AL44  			((uint32_t)0x00000006)
#define LTDC_Layer1_PFCR_R_PF_AL88  			((uint32_t)0x00000007)

#define LTDC_Layer1_PFCR_PF_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer1_PFCR_PF_ARGB8888 			((uint32_t)0x00000000)
#define LTDC_Layer1_PFCR_PF_RGB888  			((uint32_t)0x00000001)
#define LTDC_Layer1_PFCR_PF_RGB565  			((uint32_t)0x00000002)
#define LTDC_Layer1_PFCR_PF_ARGB1555 			((uint32_t)0x00000003)
#define LTDC_Layer1_PFCR_PF_ARGB4444 			((uint32_t)0x00000004)
#define LTDC_Layer1_PFCR_PF_L8	  				((uint32_t)0x00000005)
#define LTDC_Layer1_PFCR_PF_AL44  				((uint32_t)0x00000006)
#define LTDC_Layer1_PFCR_PF_AL88  				((uint32_t)0x00000007)
/*--------*/

/* TODO Layer1 CACR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 Layer1 CACR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CACR            			(((LTDC_LxCACR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CACR_OFFSET )))
#define LTDC_Layer1_CACR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CACR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CACR_R_CONSTA_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer1_CACR_R_CONSTA_BIT     		(0)

#define LTDC_Layer1_CACR_CONSTA_MASK    		((uint32_t)0x000000FF)
/*--------*/

/* TODO Layer1 DCCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 Layer1 DCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_DCCR            			(((LTDC_LxDCCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_DCCR_OFFSET )))
#define LTDC_Layer1_DCCR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_DCCR_OFFSET)))

/*--------*/
#define LTDC_Layer1_DCCR_R_DCBLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer1_DCCR_R_DCBLUE_BIT     		(0)

#define LTDC_Layer1_DCCR_DCBLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_DCCR_R_DCGREEN_MASK    		((uint32_t)0x0000FF00)
#define LTDC_Layer1_DCCR_R_DCGREEN_BIT     		(8)

#define LTDC_Layer1_DCCR_DCGREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_DCCR_R_DCRED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_Layer1_DCCR_R_DCRED_BIT     		(16)

#define LTDC_Layer1_DCCR_DCRED_MASK    			((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_DCCR_R_DCALPHA_MASK    		((uint32_t)0xFF000000)
#define LTDC_Layer1_DCCR_R_DCALPHA_BIT     		(24)

#define LTDC_Layer1_DCCR_DCALPHA_MASK    		((uint32_t)0x000000FF)
/*--------*/

/* TODO Layer1 BFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 Layer1 BFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_BFCR            			(((LTDC_LxBFCR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_BFCR_OFFSET )))
#define LTDC_Layer1_BFCR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_BFCR_OFFSET)))

/*--------*/
#define LTDC_Layer1_BFCR_R_BF2_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer1_BFCR_R_BF2_BIT     			(0)
#define LTDC_Layer1_BFCR_R_BF2_CA    			((uint32_t)0x00000005)
#define LTDC_Layer1_BFCR_R_BF2_PxCA    			((uint32_t)0x00000007)

#define LTDC_Layer1_BFCR_BF2_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer1_BFCR_BF2_CA    				((uint32_t)0x00000005)
#define LTDC_Layer1_BFCR_BF2_PxCA    			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define LTDC_Layer1_BFCR_R_BF1_MASK    			((uint32_t)0x00000700)
#define LTDC_Layer1_BFCR_R_BF1_BIT     			(8)
#define LTDC_Layer1_BFCR_R_BF1_CA    			((uint32_t)0x00000400)
#define LTDC_Layer1_BFCR_R_BF1_PxCA    			((uint32_t)0x00000600)

#define LTDC_Layer1_BFCR_BF1_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer1_BFCR_BF1_CA    				((uint32_t)0x00000004)
#define LTDC_Layer1_BFCR_BF1_PxCA    			((uint32_t)0x00000006)
/*--------*/

/* TODO Layer1 CFBAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 Layer1 CFBAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CFBAR            			(((LTDC_LxCFBAR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CFBAR_OFFSET )))
#define LTDC_Layer1_CFBAR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CFBAR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CFBAR_R_CFBADD_MASK    		((uint32_t)0xFFFFFFFF)
#define LTDC_Layer1_CFBAR_R_CFBADD_BIT     		(0)

#define LTDC_Layer1_CFBAR_CFBADD_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO Layer1 CFBLR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 Layer1 CFBLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CFBLR            			(((LTDC_LxCFBLR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CFBLR_OFFSET )))
#define LTDC_Layer1_CFBLR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CFBLR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CFBLR_R_CFBLL_MASK    		((uint32_t)0x00001FFF)
#define LTDC_Layer1_CFBLR_R_CFBLL_BIT     		(0)

#define LTDC_Layer1_CFBLR_CFBLL_MASK    		((uint32_t)0x00001FFF)
/*--------*/

/*--------*/
#define LTDC_Layer1_CFBLR_R_CFBP_MASK    		((uint32_t)0x1FFF0000)
#define LTDC_Layer1_CFBLR_R_CFBP_BIT     		(16)

#define LTDC_Layer1_CFBLR_CFBP_MASK    		    ((uint32_t)0x00001FFF)
/*--------*/

/* TODO Layer1 CFBLNR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 Layer1 CFBLNR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CFBLNR            			(((LTDC_LxCFBLNR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CFBLNR_OFFSET )))
#define LTDC_Layer1_CFBLNR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CFBLNR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CFBLNR_R_CFBLNBR_MASK    	((uint32_t)0x000007FF)
#define LTDC_Layer1_CFBLNR_R_CFBLNBR_BIT     	(0)

#define LTDC_Layer1_CFBLNR_CFBLNBR_MASK    		((uint32_t)0x000007FF)
/*--------*/

/* TODO Layer1 CLUTWR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 Layer1 CLUTWR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer1_CLUTWR            			(((LTDC_LxCLUTWR_TypeDef*)(LTDC_Layer1_BASE+LTDC_Layer1_CLUTWR_OFFSET )))
#define LTDC_Layer1_CLUTWR_R          			(*((__IO uint32_t *)(LTDC_Layer1_BASE+LTDC_Layer1_CLUTWR_OFFSET)))

/*--------*/
#define LTDC_Layer1_CLUTWR_R_BLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer1_CLUTWR_R_BLUE_BIT     		(0)

#define LTDC_Layer1_CLUTWR_BLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_CLUTWR_R_GREEN_MASK    		((uint32_t)0x0000FF00)
#define LTDC_Layer1_CLUTWR_R_GREEN_BIT     		(8)

#define LTDC_Layer1_CLUTWR_GREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_CLUTWR_R_RED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_Layer1_CLUTWR_R_RED_BIT     		(16)

#define LTDC_Layer1_CLUTWR_RED_MASK    			((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer1_CLUTWR_R_CLUTADD_MASK    	((uint32_t)0xFF000000)
#define LTDC_Layer1_CLUTWR_R_CLUTADD_BIT     	(24)

#define LTDC_Layer1_CLUTWR_CLUTADD_MASK    		((uint32_t)0x000000FF)
/*--------*/


/* TODO Layer2 CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 Layer2 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CR            			(((LTDC_LxCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CR_OFFSET )))
#define LTDC_Layer2_CR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CR_R_LEN_MASK    		((uint32_t)0x00000001)
#define LTDC_Layer2_CR_R_LEN_BIT     		(0)
#define LTDC_Layer2_CR_R_LEN_DIS    		((uint32_t)0x00000000)
#define LTDC_Layer2_CR_R_LEN_EN	    		((uint32_t)0x00000001)

#define LTDC_Layer2_CR_LEN_MASK    			((uint32_t)0x000000001)
#define LTDC_Layer2_CR_LEN_DIS   			((uint32_t)0x000000000)
#define LTDC_Layer2_CR_LEN_EN    			((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_Layer2_CR_R_COLKEN_MASK    	((uint32_t)0x00000002)
#define LTDC_Layer2_CR_R_COLKEN_BIT     	(1)
#define LTDC_Layer2_CR_R_COLKEN_DIS    		((uint32_t)0x00000000)
#define LTDC_Layer2_CR_R_COLKEN_EN	    	((uint32_t)0x00000002)

#define LTDC_Layer2_CR_COLKEN_MASK    		((uint32_t)0x000000001)
#define LTDC_Layer2_CR_COLKEN_DIS   		((uint32_t)0x000000000)
#define LTDC_Layer2_CR_COLKEN_EN    		((uint32_t)0x000000001)
/*--------*/

/*--------*/
#define LTDC_Layer2_CR_R_CLUTEN_MASK    	((uint32_t)0x00000010)
#define LTDC_Layer2_CR_R_CLUTEN_BIT     	(4)
#define LTDC_Layer2_CR_R_CLUTEN_DIS    		((uint32_t)0x00000000)
#define LTDC_Layer2_CR_R_CLUTEN_EN	    	((uint32_t)0x00000010)

#define LTDC_Layer2_CR_CLUTEN_MASK    		((uint32_t)0x000000001)
#define LTDC_Layer2_CR_CLUTEN_DIS   		((uint32_t)0x000000000)
#define LTDC_Layer2_CR_CLUTEN_EN    		((uint32_t)0x000000001)
/*--------*/

/* TODO Layer2 WHPCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 Layer2 WHPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_WHPCR            			(((LTDC_LxWHPCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_WHPCR_OFFSET )))
#define LTDC_Layer2_WHPCR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_WHPCR_OFFSET)))

/*--------*/
#define LTDC_Layer2_WHPCR_R_WHSTPOS_MASK    		((uint32_t)0x00000FFF)
#define LTDC_Layer2_WHPCR_R_WHSTPOS_BIT     		(0)

#define LTDC_Layer2_WHPCR_WHSTPOS_MASK    			((uint32_t)0x00000FFF)
/*--------*/

/*--------*/
#define LTDC_Layer2_WHPCR_R_WHSPPOS_MASK    		((uint32_t)0x0FFF0000)
#define LTDC_Layer2_WHPCR_R_WHSPPOS_BIT     		(16)

#define LTDC_Layer2_WHPCR_WHSPPOS_MASK    			((uint32_t)0x00000FFF)
/*--------*/


/* TODO Layer2 WVPCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 Layer2 WVPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_WVPCR            			(((LTDC_LxWVPCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_WVPCR_OFFSET )))
#define LTDC_Layer2_WVPCR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_WVPCR_OFFSET)))

/*--------*/
#define LTDC_Layer2_WVPCR_R_WVSTPOS_MASK    		((uint32_t)0x000007FF)
#define LTDC_Layer2_WVPCR_R_WVSTPOS_BIT     		(0)

#define LTDC_Layer2_WVPCR_WVSTPOS_MASK    			((uint32_t)0x000007FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_WVPCR_R_WVSPPOS_MASK    		((uint32_t)0x07FF0000)
#define LTDC_Layer2_WVPCR_R_WVSPPOS_BIT     		(16)

#define LTDC_Layer2_WVPCR_WVSPPOS_MASK    			((uint32_t)0x000007FF)
/*--------*/


/* TODO Layer2 CKCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 Layer2 CKCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CKCR            			(((LTDC_LxCKCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CKCR_OFFSET )))
#define LTDC_Layer2_CKCR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CKCR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CKCR_R_CKBLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer2_CKCR_R_CKBLUE_BIT     		(0)

#define LTDC_Layer2_CKCR_CKBLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_CKCR_R_CKGREEN_MASK    		((uint32_t)0x0000FF00)
#define LTDC_Layer2_CKCR_R_CKGREEN_BIT     		(8)

#define LTDC_Layer2_CKCR_CKGREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_CKCR_R_CKRED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_Layer2_CKCR_R_CKRED_BIT     		(16)

#define LTDC_Layer2_CKCR_CKRED_MASK    			((uint32_t)0x000000FF)
/*--------*/

/* TODO Layer2 PFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 Layer2 PFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_PFCR            			(((LTDC_LxPFCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_PFCR_OFFSET )))
#define LTDC_Layer2_PFCR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_PFCR_OFFSET)))

/*--------*/
#define LTDC_Layer2_PFCR_R_PF_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer2_PFCR_R_PF_BIT     			(0)
#define LTDC_Layer2_PFCR_R_PF_ARGB8888 			((uint32_t)0x00000000)
#define LTDC_Layer2_PFCR_R_PF_RGB888  			((uint32_t)0x00000001)
#define LTDC_Layer2_PFCR_R_PF_RGB565  			((uint32_t)0x00000002)
#define LTDC_Layer2_PFCR_R_PF_ARGB1555 			((uint32_t)0x00000003)
#define LTDC_Layer2_PFCR_R_PF_ARGB4444 			((uint32_t)0x00000004)
#define LTDC_Layer2_PFCR_R_PF_L8	  			((uint32_t)0x00000005)
#define LTDC_Layer2_PFCR_R_PF_AL44  			((uint32_t)0x00000006)
#define LTDC_Layer2_PFCR_R_PF_AL88  			((uint32_t)0x00000007)

#define LTDC_Layer2_PFCR_PF_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer2_PFCR_PF_ARGB8888 			((uint32_t)0x00000000)
#define LTDC_Layer2_PFCR_PF_RGB888  			((uint32_t)0x00000001)
#define LTDC_Layer2_PFCR_PF_RGB565  			((uint32_t)0x00000002)
#define LTDC_Layer2_PFCR_PF_ARGB1555 			((uint32_t)0x00000003)
#define LTDC_Layer2_PFCR_PF_ARGB4444 			((uint32_t)0x00000004)
#define LTDC_Layer2_PFCR_PF_L8	  				((uint32_t)0x00000005)
#define LTDC_Layer2_PFCR_PF_AL44  				((uint32_t)0x00000006)
#define LTDC_Layer2_PFCR_PF_AL88  				((uint32_t)0x00000007)
/*--------*/

/* TODO Layer2 CACR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 Layer2 CACR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CACR            			(((LTDC_LxCACR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CACR_OFFSET )))
#define LTDC_Layer2_CACR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CACR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CACR_R_CONSTA_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer2_CACR_R_CONSTA_BIT     		(0)

#define LTDC_Layer2_CACR_CONSTA_MASK    		((uint32_t)0x000000FF)
/*--------*/

/* TODO Layer2 DCCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 Layer2 DCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_DCCR            			(((LTDC_LxDCCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_DCCR_OFFSET )))
#define LTDC_Layer2_DCCR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_DCCR_OFFSET)))

/*--------*/
#define LTDC_Layer2_DCCR_R_DCBLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer2_DCCR_R_DCBLUE_BIT     		(0)

#define LTDC_Layer2_DCCR_DCBLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_DCCR_R_DCGREEN_MASK    		((uint32_t)0x0000FF00)
#define LTDC_Layer2_DCCR_R_DCGREEN_BIT     		(8)

#define LTDC_Layer2_DCCR_DCGREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_DCCR_R_DCRED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_Layer2_DCCR_R_DCRED_BIT     		(16)

#define LTDC_Layer2_DCCR_DCRED_MASK    			((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_DCCR_R_DCALPHA_MASK    		((uint32_t)0xFF000000)
#define LTDC_Layer2_DCCR_R_DCALPHA_BIT     		(24)

#define LTDC_Layer2_DCCR_DCALPHA_MASK    		((uint32_t)0x000000FF)
/*--------*/

/* TODO Layer2 BFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 Layer2 BFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_BFCR            			(((LTDC_LxBFCR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_BFCR_OFFSET )))
#define LTDC_Layer2_BFCR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_BFCR_OFFSET)))

/*--------*/
#define LTDC_Layer2_BFCR_R_BF2_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer2_BFCR_R_BF2_BIT     			(0)
#define LTDC_Layer2_BFCR_R_BF2_CA    			((uint32_t)0x00000005)
#define LTDC_Layer2_BFCR_R_BF2_PxCA    			((uint32_t)0x00000007)

#define LTDC_Layer2_BFCR_BF2_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer2_BFCR_BF2_CA    				((uint32_t)0x00000005)
#define LTDC_Layer2_BFCR_BF2_PxCA    			((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define LTDC_Layer2_BFCR_R_BF1_MASK    			((uint32_t)0x00000700)
#define LTDC_Layer2_BFCR_R_BF1_BIT     			(8)
#define LTDC_Layer2_BFCR_R_BF1_CA    			((uint32_t)0x00000400)
#define LTDC_Layer2_BFCR_R_BF1_PxCA    			((uint32_t)0x00000600)

#define LTDC_Layer2_BFCR_BF1_MASK    			((uint32_t)0x00000007)
#define LTDC_Layer2_BFCR_BF1_CA    				((uint32_t)0x00000004)
#define LTDC_Layer2_BFCR_BF1_PxCA    			((uint32_t)0x00000006)
/*--------*/

/* TODO Layer2 CFBAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 Layer2 CFBAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CFBAR            			(((LTDC_LxCFBAR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CFBAR_OFFSET )))
#define LTDC_Layer2_CFBAR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CFBAR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CFBAR_R_CFBADD_MASK    		((uint32_t)0xFFFFFFFF)
#define LTDC_Layer2_CFBAR_R_CFBADD_BIT     		(0)

#define LTDC_Layer2_CFBAR_CFBADD_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO Layer2 CFBLR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 Layer2 CFBLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CFBLR            			(((LTDC_LxCFBLR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CFBLR_OFFSET )))
#define LTDC_Layer2_CFBLR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CFBLR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CFBLR_R_CFBLL_MASK    		((uint32_t)0x00001FFF)
#define LTDC_Layer2_CFBLR_R_CFBLL_BIT     		(0)

#define LTDC_Layer2_CFBLR_CFBLL_MASK    		((uint32_t)0x00001FFF)
/*--------*/

/*--------*/
#define LTDC_Layer2_CFBLR_R_CFBP_MASK    		((uint32_t)0x1FFF0000)
#define LTDC_Layer2_CFBLR_R_CFBP_BIT     		(16)

#define LTDC_Layer2_CFBLR_CFBP_MASK    		    ((uint32_t)0x00001FFF)
/*--------*/

/* TODO Layer2 CFBLNR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 Layer2 CFBLNR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CFBLNR            			(((LTDC_LxCFBLNR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CFBLNR_OFFSET )))
#define LTDC_Layer2_CFBLNR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CFBLNR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CFBLNR_R_CFBLNBR_MASK    	((uint32_t)0x000007FF)
#define LTDC_Layer2_CFBLNR_R_CFBLNBR_BIT     	(0)

#define LTDC_Layer2_CFBLNR_CFBLNBR_MASK    		((uint32_t)0x000007FF)
/*--------*/

/* TODO Layer2 CLUTWR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 Layer2 CLUTWR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define LTDC_Layer2_CLUTWR            			(((LTDC_LxCLUTWR_TypeDef*)(LTDC_Layer2_BASE+LTDC_Layer2_CLUTWR_OFFSET )))
#define LTDC_Layer2_CLUTWR_R          			(*((__IO uint32_t *)(LTDC_Layer2_BASE+LTDC_Layer2_CLUTWR_OFFSET)))

/*--------*/
#define LTDC_Layer2_CLUTWR_R_BLUE_MASK    		((uint32_t)0x000000FF)
#define LTDC_Layer2_CLUTWR_R_BLUE_BIT     		(0)

#define LTDC_Layer2_CLUTWR_BLUE_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_CLUTWR_R_GREEN_MASK    		((uint32_t)0x0000FF00)
#define LTDC_Layer2_CLUTWR_R_GREEN_BIT     		(8)

#define LTDC_Layer2_CLUTWR_GREEN_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_CLUTWR_R_RED_MASK    		((uint32_t)0x00FF0000)
#define LTDC_Layer2_CLUTWR_R_RED_BIT     		(16)

#define LTDC_Layer2_CLUTWR_RED_MASK    			((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define LTDC_Layer2_CLUTWR_R_CLUTADD_MASK    	((uint32_t)0xFF000000)
#define LTDC_Layer2_CLUTWR_R_CLUTADD_BIT     	(24)

#define LTDC_Layer2_CLUTWR_CLUTADD_MASK    		((uint32_t)0x000000FF)
/*--------*/

//change : cambiar valor de parametro sin afectar el layer
//update : cambia el valor del parametro afectando el layer


//change, replace , update
/* TODO Functions */
int32_t LTDC_Init(void);
void 	 LTDC_LayerBG_Init(void);
void 	 LTDC_LayerFG_Init(void);
void 	 LTDC_LayerBG_DeInit(void);
void 	 LTDC_LayerFG_DeInit(void);
void 	 LTDC_Refresh(void);
uint32_t LTDC_BackLight(uint32_t state);



LTDC_TFT_TypeDef* LTDC_Layer_GetBG();
LTDC_TFT_TypeDef* LTDC_Layer_SetBG(LTDC_TFT_TypeDef* layer);
LTDC_TFT_TypeDef* LTDC_Layer_GetFG();
LTDC_TFT_TypeDef* LTDC_Layer_SetBG(LTDC_TFT_TypeDef* layer);

uint32_t SetColorRed_RGB565   (LTDC_COLOR_TypeDef* color);
uint32_t GetColorRed_RGB565   (LTDC_COLOR_TypeDef* color);
uint32_t SetColorGreen_RGB565 (LTDC_COLOR_TypeDef* color);
uint32_t GetColorGreen_RGB565 (LTDC_COLOR_TypeDef* color);
uint32_t SetColorBlue_RGB565  (LTDC_COLOR_TypeDef* color);
uint32_t GetColorBlue_RGB565  (LTDC_COLOR_TypeDef* color);
uint32_t SetColorSplit_RGB565 (LTDC_COLOR_TypeDef* color);
uint32_t GetColorSplit_RGB565 (LTDC_COLOR_TypeDef* color);


//uint32_t Layer_InitParameters		(LTDC_TFT_TypeDef* layer,);

uint32_t Layer_GetDataAddress		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetDataAddress		(LTDC_TFT_TypeDef* layer,uint32_t address);
uint32_t Layer_GetHeaderAddress		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetHeaderAddress		(LTDC_TFT_TypeDef* layer,uint32_t address);
uint32_t Layer_GetCLUTAddress		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetCLUTAddress		(LTDC_TFT_TypeDef* layer,uint32_t address);
//uint32_t Layer_UpdateBMPParameters	(LTDC_TFT_TypeDef* layer);

//uint32_t Layer_GetAlphaMode			(LTDC_TFT_TypeDef* layer);
//uint32_t Layer_SetAlphaMode			(LTDC_TFT_TypeDef* layer, uint32_t alphaMode);
//uint32_t Layer_UpdateAlphaMode		(LTDC_TFT_TypeDef* layer, uint32_t alphaMode);
//uint32_t Layer_GetAlphaConstant		(LTDC_TFT_TypeDef* layer);
//uint32_t Layer_SetAlphaConstant		(LTDC_TFT_TypeDef* layer, uint32_t alphaConstant);

//uint32_t Layer_GetColorMode		(LTDC_TFT_TypeDef* layer);
//uint32_t Layer_SetColorMode		(LTDC_TFT_TypeDef* layer, uint32_t colorMode);
//uint32_t Layer_UpdateColorMode	(LTDC_TFT_TypeDef* layer, uint32_t colorMode);
uint32_t Layer_GetBGColor		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_GetBGRed			(LTDC_TFT_TypeDef* layer);
uint32_t Layer_GetBGGreen		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_GetBGBlue		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetBGColor		(LTDC_TFT_TypeDef* layer, uint32_t BGcolor);
uint32_t Layer_SetBGRed			(LTDC_TFT_TypeDef* layer, uint32_t BGred);
uint32_t Layer_SetBGGreen		(LTDC_TFT_TypeDef* layer, uint32_t BGgreen);
uint32_t Layer_SetBGBlue		(LTDC_TFT_TypeDef* layer, uint32_t BGblue);

uint32_t Layer_GetFontColor		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_GetFontRed		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_GetFontGreen		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_GetFontBlue		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetFontColor		(LTDC_TFT_TypeDef* layer, uint32_t fontColor);
uint32_t Layer_SetFontRed		(LTDC_TFT_TypeDef* layer, uint32_t fontRed);
uint32_t Layer_SetFontGreen		(LTDC_TFT_TypeDef* layer, uint32_t fontGreen);
uint32_t Layer_SetFontBlue		(LTDC_TFT_TypeDef* layer, uint32_t fontBlue);



FONT_TypeDef* Layer_GetFontSize		(LTDC_TFT_TypeDef* layer);
FONT_TypeDef* Layer_SetFontSize		(LTDC_TFT_TypeDef* layer, uint32_t fontSize);



uint32_t Layer_GetWidthTotal	(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetWidthTotal	(LTDC_TFT_TypeDef* layer, uint32_t widthTotal);
uint32_t Layer_GetHeightTotal	(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetHeightTotal	(LTDC_TFT_TypeDef* layer, uint32_t heightTotal);
uint32_t Layer_GetWidth			(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetWidth			(LTDC_TFT_TypeDef* layer, uint32_t width);
uint32_t Layer_GetHeight		(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetHeight		(LTDC_TFT_TypeDef* layer, uint32_t height);

uint32_t Layer_GetBGX			(LTDC_TFT_TypeDef* layer, uint32_t* BGX);
uint32_t Layer_SetBGX			(LTDC_TFT_TypeDef* layer, uint32_t* BGX);
uint32_t Layer_GetBGY			(LTDC_TFT_TypeDef* layer, uint32_t* BGY);
uint32_t Layer_SetBGY			(LTDC_TFT_TypeDef* layer, uint32_t* BGY);


uint32_t Layer_GetX				(LTDC_TFT_TypeDef* layer, uint32_t* X);
uint32_t Layer_SetX				(LTDC_TFT_TypeDef* layer, uint32_t* X);
uint32_t Layer_GetY				(LTDC_TFT_TypeDef* layer, uint32_t* Y);
uint32_t Layer_SetY				(LTDC_TFT_TypeDef* layer, uint32_t* Y);
uint32_t Layer_GetRadius		(LTDC_TFT_TypeDef* layer, uint32_t* Radius);
uint32_t Layer_SetRadius		(LTDC_TFT_TypeDef* layer, uint32_t* Radius);

uint32_t Layer_GetSize			(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim);
uint32_t Layer_SetSize			(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim);

uint32_t Layer_GetType			(LTDC_TFT_TypeDef* layer);
uint32_t Layer_SetType			(LTDC_TFT_TypeDef* layer, uint32_t type);


LTDC_TFT_TypeDef* Layer_GetSubLayer	(LTDC_TFT_TypeDef* layer,uint32_t number);
uint32_t Layer_AddSubLayer					(LTDC_TFT_TypeDef* layerBG,LTDC_TFT_TypeDef* layer);
uint32_t Layer_DeleteSubLayer				(LTDC_TFT_TypeDef* layer,uint32_t number);
uint32_t Layer_RefreshSubLayer				(LTDC_TFT_TypeDef* layer,uint32_t number);

uint32_t Layer_RefreshAllSubLayer			(LTDC_TFT_TypeDef* layer);
uint32_t Layer_RefreshSubLayerArray			(LTDC_TFT_TypeDef* layer,uint32_t* layerPos,uint32_t cant);
uint32_t Layer_Refresh						(LTDC_TFT_TypeDef* layer);

uint32_t Layer_Clear					(LTDC_TFT_TypeDef* layer,uint32_t color);
uint32_t Layer_ClearSection				(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);


uint32_t Layer_Copy	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t Layer_ImegeNoHeaderType	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


uint32_t Layer_Print_RectanguleFill		(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_RectangleFillType		(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_LineCompleteHorizontal		(LTDC_TFT_TypeDef* layer,uint32_t line,uint32_t color);
uint32_t Layer_LineCompleteHorizontalType		(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_LineCompleteVertical		(LTDC_TFT_TypeDef* layer,uint32_t pixel,uint32_t color);
uint32_t Layer_LineCompleteVerticalType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_LineVertical				(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_LineVerticalType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);
uint32_t Layer_Print_LineHorizontal				(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_LineHorizontalType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_Rectangle 			(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_RectangleType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_Rectangle_Semi 			(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_RectangleSemiType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


uint32_t Layer_Print_LineXY				(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_LineXYType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

void Layer_Print_Pixel			    (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
void Layer_PixelType			(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_Circle		        (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_CircleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_CircleFill 	    (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_CircleFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_Cross				(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_CrossType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_Ellipse		    (LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_EllipseType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


uint32_t Layer_Print_EllipseFill    	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_EllipseFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


uint32_t Layer_Print_Triangle   		(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_TriangleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


uint32_t Layer_Print_TriangleFill   	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_TriangleFillType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

//uint32_t Layer_Print_Multiline   		(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
//uint32_t Layer_MultilineType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


//uint32_t Layer_Print_MultilineClose(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
//uint32_t Layer_MultilineCloseType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

uint32_t Layer_Print_FontLineComplete	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim, uint32_t color);
uint32_t Layer_FontLineCompleteType	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);


uint32_t Layer_Print_FontLine	(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim, uint32_t color);
uint32_t Layer_FontLineType	(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);

LTDC_COORD_TypeDef Layer_Print_Char(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,char ascii,uint32_t colorFont,FONT_TypeDef* font);
LTDC_COORD_TypeDef Layer_Print_CharBG(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,char ascii,uint32_t colorFont, uint32_t colorBG,FONT_TypeDef* font);
uint32_t Layer_Print_String(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,LTDC_COORD_TypeDef* coord,char* string,uint32_t colorFont,FONT_TypeDef* font);

uint32_t Layer_StringSimpleType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);
uint32_t Layer_Print_StringBG(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,LTDC_COORD_TypeDef* coord,char* string,uint32_t colorFont, uint32_t colorBG,FONT_TypeDef* font);
uint32_t Layer_StringSimpleBGType(LTDC_TFT_TypeDef* layerSource,LTDC_TFT_TypeDef* layerDest);
/*
enum
{
	LAYER_TYPE_IMAGE_NOHEADER				=0,
	LAYER_TYPE_IMAGE_BMP					=1,
	LAYER_TYPE_LINECOMPLETE					=2,
	LAYER_TYPE_FONTLINECOMPLETE				=3,
	LAYER_TYPE_PIXEL						=4,
	LAYER_TYPE_LINE							=5,
	LAYER_TYPE_CROSS						=6,
	LAYER_TYPE_CROSSXY						=7,
	LAYER_TYPE_XMARK						=8,
	LAYER_TYPE_LINEXY						=9,
	LAYER_TYPE_RECTANGLE_FILL				=10,
	LAYER_TYPE_RECTANGLE					=11,
	LAYER_TYPE_CIRCLE_FILL					=12,
	LAYER_TYPE_CIRCLE						=13,
	LAYER_TYPE_ELLIPSE_FILL					=14,
	LAYER_TYPE_ELLIPSE						=15,
	LAYER_TYPE_TRIANGLE_FILL				=16,
	LAYER_TYPE_TRIANGLE						=17,
	LAYER_TYPE_MULTILINE_FILL				=18,
	LAYER_TYPE_MULTILINE					=19,


};
*/

uint32_t Layer_Print_XPoint				(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);
uint32_t Layer_Print_MultilineFill 		(LTDC_TFT_TypeDef* layer,LTDC_DIMENSIONS_TypeDef dim,uint32_t color);



/*
void LTDC_LayerChangeColorAlpha(LTDC_TFT_TypeDef* layer, uint32_t alpha);
void LTDC_LayerChangeColorFontAlpha(LTDC_TFT_TypeDef* layer, uint32_t alpha);
void LTDC_LayerChangeAlphaConstant(LTDC_TFT_TypeDef* layer, uint32_t alpha);
void LTDC_LayerChangeColorARGB(LTDC_TFT_TypeDef* layer,LTDC_COLOR_TypeDef* colors);
void LTDC_LayerChangeColorRed(LTDC_TFT_TypeDef* layer,LTDC_COLOR_TypeDef* colors);
void LTDC_LayerChangeColorGreen(LTDC_TFT_TypeDef* layer,LTDC_COLOR_TypeDef* colors);
void LTDC_LayerChangeColorBlue(LTDC_TFT_TypeDef* layer,LTDC_COLOR_TypeDef* colors);


uint32_t LTDC_CopyMem2MemColorSkip(LTDC_TFT_TypeDef* layerDest,LTDC_TFT_TypeDef* layerSource);





uint32_t LTDC_MinColor(LTDC_TFT_TypeDef* layer);
uint32_t LTDC_MaxColor(LTDC_TFT_TypeDef* layer);
void LTDC_ChangeColor(LTDC_TFT_TypeDef* layer);
void LTDC_ChangeUmbralColor(LTDC_TFT_TypeDef* layer);
void LTDC_ChangeColorSection(LTDC_TFT_TypeDef* layer);
void LTDC_ChangeUmbralColorSection(LTDC_TFT_TypeDef* layer);
uint32_t LTDC_GetAddress(uint32_t Xpos, uint32_t Ypos);

*/
extern LTDC_TFT_TypeDef LTDC_LayerBG,LTDC_LayerFG,*LTDC_LayerBGP,*LTDC_LayerFGP,*LTDC_LayerActual;

extern LTDC_TFT_TypeDef LTDC_Layer, *LTDC_LayerP;
#endif /* LTDC_H_ */
