/*
 * fuentes.h
 *
 *  Created on: 11/03/2016
 *      Author: Lalo
 */

#ifndef FONT_H_
#define FONT_H_


#include "stdint.h"

typedef struct
{
  const uint16_t *ascii;
  uint32_t width;
  uint32_t height;
  uint32_t bits;
  int8_t   cor;

} FONT_TypeDef;

typedef struct
{
  unsigned char *string;
  FONT_TypeDef *font;
  uint16_t posX;
  uint16_t posY;
  uint16_t colorFG;
  uint16_t colorBG;
} STRING_TypeDef;


extern const uint16_t font_16x24[];
extern const uint16_t font_8x16[];
extern const uint16_t font_8x16_MS_Gothic[];
extern const uint16_t font_8x16_System[];
extern const uint16_t font_12x12 [];
extern const uint16_t font_8x12 [];
extern const uint16_t font_11x16[] ;
extern const uint16_t font_8x8 [] ;
extern const uint16_t font_6x8[] ;
extern const uint16_t font_5x7[];

extern FONT_TypeDef font16x24;
extern FONT_TypeDef font11x16;
extern FONT_TypeDef font8x16;
extern FONT_TypeDef font8x16_MS_Gothic;
extern FONT_TypeDef font8x16_System;
extern FONT_TypeDef font12x12;
extern FONT_TypeDef font8x12 ;
extern FONT_TypeDef font8x8;
extern FONT_TypeDef font6x8;
extern FONT_TypeDef font5x7;


enum
{
	FONT_SIZE_16x24	=0,
	FONT_SIZE_11x16	=1,
	FONT_SIZE_8x16	=2,
	FONT_SIZE_12x12	=3,
	FONT_SIZE_8x12	=4,
	FONT_SIZE_8x8	=5,
	FONT_SIZE_6x8	=6,
	FONT_SIZE_5x7	=7,
	FONT_SIZE_8x16_MS_Gothic	=8,
	FONT_SIZE_8x16_System	=9,

};


#endif /* FONT_H_ */
