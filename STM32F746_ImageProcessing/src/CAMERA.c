/*
 * CAMERA.c
 *
 *  Created on: 02/10/2018
 *      Author: InDev
 */

#include "CAMERA.h"


uint32_t CAMERA_Init(void)
{
	uint32_t i=0;
	DCMI_Init();
	I2C2_Init();
	for(i=0;i<100000;i++){};
	for(i=0; i<REGISTROS_QVGA; i++)
	{
		I2C2_SendBytes(0x60,2,(uint8_t*)(REG_QVGA+(i*2)));
	}

	return 1;

}
