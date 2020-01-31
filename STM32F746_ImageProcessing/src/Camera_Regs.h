/*
 * Camera_Regs.h
 *
 *  Created on: 25/09/2018
 *      Author: InDev
 */

#ifndef CAMERA_REGS_H_
#define CAMERA_REGS_H_

#include "Core.h"
#include <stdint.h>


#define REGISTROS 256

#define REGISTROS_VGA 147//152//256
#define REGISTROS_QVGA 152//152//256
#define REGISTROS_QQVGA 149*2
#define REGISTROS_OV2640 167
#define REGISTROS_QVGA_OV2640 219
typedef __IO struct{
	uint8_t reg;
	uint8_t value;
}CameraRegs_TypeDef;


const uint8_t REG_INIT[REGISTROS*2];
const uint8_t OV9655_VGA[REGISTROS_VGA*2];
const uint8_t REG_QVGA[REGISTROS_QVGA*2];
const uint8_t OV2640_REG[REGISTROS_OV2640*2];
const uint8_t OV2640_QVGA[REGISTROS_QVGA_OV2640*2];
#endif /* CAMERA_REGS_H_ */
