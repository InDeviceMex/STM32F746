/*
 * FLASH.c
 *
 *  Created on: 5 ago. 2018
 *      Author: InDev
 */

#include "FLASH.h"

void FLASH_Unlock(void)
{
	FLASH_KEYR_R=FLASH_KEYR_R_KEY_KEY1;
	FLASH_KEYR_R=FLASH_KEYR_R_KEY_KEY2;
}

void FLASH_Lock(void)
{
	__DSB();
	while(FLASH_SR->BSY);
	FLASH_CR->LOCK=FLASH_CR_LOCK_LOCKED;
}


void FLASH_UnlockOPT(void)
{
	FLASH_OPTKEYR_R=FLASH_OPTKEYR_OPTKEY1;
	FLASH_OPTKEYR_R=FLASH_OPTKEYR_OPTKEY2;
}

void FLASH_LockOPT(void)
{
	__DSB();
	while(FLASH_SR->BSY);
	FLASH_OPTCR->OPTLOCK =FLASH_OPTCR_OPTLOCK_LOCKED;
}



int32_t FLASH_Init (void)
{
    FLASH_ACR_R = FLASH_ACR_R_PRFTEN_EN | FLASH_ACR_R_ARTEN_EN |FLASH_ACR_R_LATENCY_6WS;
	FLASH_Unlock();
	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_CR->PSIZE=FLASH_CR_PSIZE_x32;
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
    return 1;
}


uint32_t FLASH_SectorNumber (uint32_t dir) //debe de ingesar la direccion completa
{
  uint32_t sector;

  sector = (dir >> 12) & 0x000000FF;     //se obtiene la direecion patron deinteres para saber el sector

  if    (sector >= 0x40) //Pertenece a un sector de 256KB
    sector = 4 + (sector >> 6);
  else if (sector >= 0x20)
    sector = 3 + (sector >> 5); //  128kB Sector
  else
	sector = 0 + (sector >> 3); //  32kB Sector

  return sector;
}



int32_t FLASH_SectorEraseDir(uint32_t dir)
{
	unsigned long sector;
	sector=FLASH_SectorNumber(dir);

	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;

	FLASH_CR->SER =FLASH_CR_SER_ACT;
	FLASH_CR->SNB =sector ;
	FLASH_CR->STRT=FLASH_CR_STRT_ACT;
	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_CR->SER= 0;

	if(FLASH_SR_R&(FLASH_SR_R_WRPERR_ERROR|FLASH_SR_R_PGAERR_ERROR|FLASH_SR_R_PGPERR_ERROR|FLASH_SR_R_ERSERR_ERROR))
	{
		FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
				FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
		return 0;
	}
	return 1;
}

int32_t FLASH_SectorEraseSection(uint32_t sector)
{
	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;

	FLASH_CR->SER =FLASH_CR_SER_ACT;
	FLASH_CR->SNB =sector ;
	FLASH_CR->STRT=FLASH_CR_STRT_ACT;
	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_CR->SER= 0;

	if(FLASH_SR_R&(FLASH_SR_R_WRPERR_ERROR|FLASH_SR_R_PGAERR_ERROR|FLASH_SR_R_PGPERR_ERROR|FLASH_SR_R_ERSERR_ERROR))
	{
		FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
				FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
		return 0;
	}
	return 1;
}

int32_t FLASH_MassErase(void)
{
	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;

	FLASH_CR->MER =FLASH_CR_MER_ACT;
	FLASH_CR->STRT=FLASH_CR_STRT_ACT;
	__DSB();
	while(FLASH_SR->BSY)
	{}
	FLASH_CR->MER= 0;

	if(FLASH_SR_R&(FLASH_SR_R_WRPERR_ERROR|FLASH_SR_R_PGAERR_ERROR|FLASH_SR_R_PGPERR_ERROR|FLASH_SR_R_ERSERR_ERROR))
	{
		FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
				FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
		return 0;
	}
	return 1;
}


int32_t FLASH_WriteByte(uint32_t dir, uint32_t size, uint8_t *buffer)
{
	FLASH_CR->PSIZE=FLASH_CR_PSIZE_x8;
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
	__DSB();
	while(FLASH_SR->BSY)
	{}
	while (size)
	{
		FLASH_CR->PG = FLASH_CR_PG_ACT;
		*((__IO uint8_t*) dir) = *((uint8_t *)buffer);
		__DSB();
		while(FLASH_SR->BSY)
		{}
		FLASH_CR->PG = 0;
		if(FLASH_SR_R&(FLASH_SR_R_WRPERR_ERROR|FLASH_SR_R_PGAERR_ERROR|FLASH_SR_R_PGPERR_ERROR|FLASH_SR_R_ERSERR_ERROR))
		{
			FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
					FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
			return 0;
		}
    dir += 1;
    buffer += 1;
    size  -= 1;
  }
  return 1;
}



int32_t FLASH_WriteHalfWord(uint32_t dir, uint32_t size, uint16_t *buffer)
{
	size=(size+1)&~1; //para alinear el tamano a words x32

	FLASH_CR->PSIZE=FLASH_CR_PSIZE_x16;
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
	__DSB();
	while(FLASH_SR->BSY)
	{}
	while (size)
	{
		FLASH_CR->PG = FLASH_CR_PG_ACT;
		*((__IO uint16_t*) dir) = *((uint16_t *)buffer);
		__DSB();
		while(FLASH_SR->BSY)
		{}
		FLASH_CR->PG = 0;
		if(FLASH_SR_R&(FLASH_SR_R_WRPERR_ERROR|FLASH_SR_R_PGAERR_ERROR|FLASH_SR_R_PGPERR_ERROR|FLASH_SR_R_ERSERR_ERROR))
		{
			FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
					FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
			return 0;
		}
    dir += 2;
    buffer += 1;
    size  -= 1;
  }
  return 1;
}



int32_t FLASH_WriteWord(uint32_t dir, uint32_t size, uint32_t *buffer)
{
	size=(size+3)&~3; //para alinear el tamano a words x32

	FLASH_CR->PSIZE=FLASH_CR_PSIZE_x32;
	FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
			FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
	__DSB();
	while(FLASH_SR->BSY)
	{}
	while (size)
	{
		FLASH_CR->PG = FLASH_CR_PG_ACT;
		*((__IO uint32_t*) dir) = *((uint32_t *)buffer);
		__DSB();
		while(FLASH_SR->BSY)
		{}
		FLASH_CR->PG = 0;
		if(FLASH_SR_R&(FLASH_SR_R_WRPERR_ERROR|FLASH_SR_R_PGAERR_ERROR|FLASH_SR_R_PGPERR_ERROR|FLASH_SR_R_ERSERR_ERROR))
		{
			FLASH_SR_R |= FLASH_SR_R_WRPERR_CLEAR|FLASH_SR_R_PGAERR_CLEAR|
					FLASH_SR_R_PGPERR_CLEAR|FLASH_SR_R_ERSERR_CLEAR;
			return 0;
		}
    dir += 4;
    buffer += 1;
    size  -= 1;
  }
  return 1;
}



