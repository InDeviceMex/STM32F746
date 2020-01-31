/*
 * CONV.h
 *
 *  Created on: 8 mar. 2018
 *      Author: InDev
 */

#ifndef CONV_H_
#define CONV_H_

#include <stdint.h>

uint8_t CONV_u8IntToString      (int64_t , uint8_t* );
uint8_t CONV_u8IntToStringCeros (int64_t ,int8_t , int8_t* );
uint8_t CONV_u8DIntToString(int64_t ,uint8_t ,uint8_t ,uint8_t , uint8_t* );
uint8_t CONV_u8UIntToString     (uint64_t , int8_t* );
uint8_t Hex_To_String(int64_t , int8_t* );
uint8_t HEX_To_String(int64_t , int8_t* );
uint8_t Oct_To_String(int64_t , int8_t* );
uint8_t Bin_To_String(int64_t , int8_t* );
uint8_t CONV_u8FloatToString(double ,uint8_t,uint8_t,int32_t,int32_t ,uint8_t* );




int32_t String_To_Hex(int8_t* string,int64_t*num);
int32_t String_To_HEX(int8_t* string,int64_t*num);
int32_t String_To_Oct(int8_t* string,int64_t*num);
int32_t String_To_Bin(int8_t* string,int64_t*num);
int32_t String_To_Int(int8_t* string,int64_t*num);
int32_t String_To_UInt(int8_t* string,uint64_t* numU );
float String_To_Float(int8_t* string,int8_t deci);

#endif /* CONV_H_ */
