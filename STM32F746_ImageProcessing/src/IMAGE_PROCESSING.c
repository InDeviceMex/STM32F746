/*
 * Proc_Imagenes.c
 *
 *  Created on: Jun 22, 2016
 *      Author: Lalo
 */


#include <IMAGE_PROCESSING.h>



//ruido
int32_t Random32(void)
{
	int32_t valor;

	RCC_AHB2ENR->RNGEN =1;
	__NOP();

	RNG->CR=4;
	while(!(RNG->SR & 1 ))
	{
		if((RNG->SR & 2 )||(RNG->SR & 4 ) )
			return 0;
	}
	valor=RNG->DR;
	RNG->CR=0;
	RCC_AHB2ENR->RNGEN =0;
	__NOP();
	return valor;
}

int16_t Random15(void)
{
	int16_t valor;

	RCC_AHB2ENR->RNGEN =1;
	__NOP();

	RNG->CR=4;
	while(!(RNG->SR & 1 ))
	{
		if((RNG->SR & 2 )||(RNG->SR & 4 ) )
			return 0;
	}
	valor=RNG->DR_Bit.RNDATAL>>1;
	RNG->CR=0;
	RCC_AHB2ENR->RNGEN =0;
	__NOP();
	return valor;
}

int16_t Random16(void)
{
	int16_t valor;

	RCC_AHB2ENR->RNGEN =1;
	__NOP();

	RNG->CR=4;
	while(!(RNG->SR & 1 ))
	{
		if((RNG->SR & 2 )||(RNG->SR & 4 ) )
			return 0;
	}
	valor=RNG->DR_Bit.RNDATAL;
	RNG->CR=0;
	RCC_AHB2ENR->RNGEN =0;
	__NOP();
	return valor;
}

uint32_t IMAGEPROC_Get16bRGBScaleHSI(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	uint32_t width=0,height=0,heightSource=0,heightDest=0;

	uint32_t layerHueDest;
	uint32_t layerIntensityDest;
	uint32_t layerSaturationDest;
    uint32_t layerAddressSource;
    int32_t rojo = 0;
    int32_t verde = 0;
    int32_t azul = 0;

    uint32_t aux = 0;
    uint32_t min = 0;
    int32_t sum = 0;
    int32_t diference = 0;
    float auxHue=0;
    float auxHuePartial1=0;
    float auxHuePartial2=0;
    float auxHuePartial3=0;
    float auxIntensity=0;
    float auxSaturation=0;
    float auxSaturationPartial=0;

    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_USHORT))
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerHueDest=layerDest->layerDataHue+(heightDest<<2);
	layerIntensityDest=layerDest->layerDataIntensity+(heightDest<<2);
	layerSaturationDest=layerDest->layerDataSaturation+(heightDest<<2);
	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);


			__ASM  ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			rojo <<= 3;
			__ASM  ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			verde <<= 2;
			__ASM  ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
			azul<<=3;

			if(rojo!=azul)
			{
				if(rojo!=verde) // rojo!=azul  rojo!= verde
				{
					sum= (rojo+verde);
					sum+=azul;

					auxIntensity= sum/3.0;

					min=rojo;
					if (verde<min)
						min=verde;
					if (azul<min)
						min=azul;

					auxSaturationPartial=(float)min;
					auxSaturationPartial/=auxIntensity;
					auxSaturation=1.0-auxSaturationPartial;

					diference= rojo<<1;
					diference-= azul;
					diference-= verde;
					diference>>=1;
					auxHuePartial1=(float)diference;

					sum=rojo-azul;
					sum*=verde-azul;

					diference+=sum;

					auxHuePartial2=(float)sum;//(((float)rojo-(float)azul)*((float)verde-(float)azul));

					sum=rojo-verde;
					sum*=sum;
					auxHuePartial2+=(float)sum;//(((float)rojo-(float)verde)*((float)rojo-(float)verde));
					arm_sqrt_f32(auxHuePartial2,&auxHuePartial2);
					auxHuePartial3=auxHuePartial1/auxHuePartial2;
					auxHue=acosf(auxHuePartial3);
					auxHue*=57.295779513;
					if (azul>verde)
						auxHue=360.0-auxHue;
				}
				else //rojo!= azul rojo==verde
				{
					sum= rojo<<1;
					sum+=azul;

					auxIntensity= sum/3.0;

					min=rojo;
					if (azul<min)
						min=azul;

					auxSaturation=(float)min;
					auxSaturation/=auxIntensity;
					auxSaturation=1.0-auxSaturation;

					diference = rojo- azul;
					diference>>=1;
					auxHuePartial1=(float)diference;

					diference= rojo-azul;
					diference*=diference;

					auxHuePartial2=(float)diference;
					arm_sqrt_f32(auxHuePartial2,&auxHuePartial2);
					auxHuePartial3=auxHuePartial1/auxHuePartial2;
					auxHue=acosf(auxHuePartial3);
					auxHue*=57.295779513;
					if (azul>rojo)
						auxHue=360.0-auxHue;
				}
			}
			else if(rojo!=verde) //rojo==azul rojo!= verde
			{
				sum=rojo<<1;
				sum+=verde;

				auxIntensity= sum/3.0;

				min=rojo;
				if (verde<min)
					min=verde;

				auxSaturation=(float)min;
				auxSaturation/=auxIntensity;
				auxSaturation=1.0-auxSaturation;



				diference = rojo- verde;
				diference>>=1;
				auxHuePartial1=(float)diference;


				sum=rojo-verde;
				diference=sum-1;
				diference*=sum;

				auxHuePartial2=(float)diference;
				arm_sqrt_f32(auxHuePartial2,&auxHuePartial2);
				auxHuePartial3=auxHuePartial1/auxHuePartial2;
				auxHue=acosf(auxHuePartial3);
				auxHue*=57.295779513;
				auxHue/=PI;
				if (rojo>verde)
					auxHue=360.0-auxHue;

			}
			else //rojo== verde == azul
			{
				auxSaturation=0.0;
				auxHue=0.0;
			}


			*((float*)layerHueDest+width)=auxHue;
			*((float*)layerIntensityDest+width)=auxIntensity;
			*((float*)layerSaturationDest+width)=auxSaturation;
		}
		layerHueDest+=layerDestWidthTotal<<2;
		layerIntensityDest+=layerDestWidthTotal<<2;
		layerSaturationDest+=layerDestWidthTotal<<2;
		//layerAddressDest+=layerDestWidthTotal;
		layerAddressSource+=layerSourceWidthTotal<<1;
	}
	return 1;

}


uint32_t IMAGEPROC_GetHSI16bRGBScale(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;

	uint32_t layerHueSource;
	uint32_t layerIntensitySource;
	uint32_t layerSaturationSource;
    uint32_t layerAddressDest;
    int32_t rojo = 0;
    int32_t verde = 0;
    int32_t azul = 0;
    int32_t aux=0;
    float auxHue=0;
    float auxHueRad=0;
    float auxHue60=(60*PI)/180;
    float auxIntensity=0;
    float auxSaturation=0;

    float rojoFloat = 0;
    float verdeFloat = 0;
    float azulFloat = 0;

    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_USHORT))
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerHueSource=layerSource->layerDataHue+(heightSource<<2);
	layerIntensitySource=layerSource->layerDataIntensity+(heightSource<<2);
	layerSaturationSource=layerSource->layerDataSaturation+(heightSource<<2);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			auxHue=*((float*)layerHueSource+width);
			auxIntensity=*((float*)layerIntensitySource+width);
			auxSaturation=*((float*)layerSaturationSource+width);

			if(auxIntensity==0)
			{
				rojo= 0;
				verde= 0;
				azul= 0;
			}
			else if (auxSaturation==0)
			{
				aux=(int32_t)auxIntensity;


				__ASM volatile ("UBFX %0, %1, #2, #6" : "=r" (aux): "r"  (aux) );
				__ASM volatile ("BFI %0, %1, #11, #6" : "=r" (aux): "0"  (aux) );
				__ASM volatile ("BFI %0, %1, #6, #6" : "=r" (aux): "0"  (aux) );
				aux>>=1;
/*
				rojo= aux;
				rojo<<=8;
				rojo&=0xF800;

				azul= aux;
				azul>>=3;
				azul&=0x001F;

				verde= aux;
				verde<<=3;
				verde&=0x07E0;
*/

			}
			else
			{

				if(auxHue<0.0)
					auxHue+=360.0;

				if(auxHue<=120.0 )
				{
					auxHueRad=auxHue*0.0174532925f;
					rojoFloat=auxSaturation*(float)arm_cos_f32(auxHueRad);
					rojoFloat/=(float)arm_cos_f32(auxHue60-auxHueRad);
					rojoFloat+=1.0;
					rojoFloat/=3.0;

					azulFloat=1.0-auxSaturation;
					azulFloat/=3.0;

					verdeFloat=1.0-(rojoFloat+azulFloat);

				}

				else if(auxHue<=240.0 )
				{
					auxHue-=120.0;
					auxHueRad=auxHue*0.0174532925f;

					verdeFloat=auxSaturation*(float)arm_cos_f32(auxHueRad);
					verdeFloat/=(float)arm_cos_f32(auxHue60-auxHueRad);
					verdeFloat+=1.0;
					verdeFloat/=3.0;

					rojoFloat=1.0-auxSaturation;
					rojoFloat/=3.0;

					azulFloat=1.0-(rojoFloat+verdeFloat);

				}
				else
				{
					auxHue-=240.0;
					auxHueRad=auxHue*0.0174532925f;

					azulFloat=auxSaturation*(float)arm_cos_f32(auxHueRad);
					azulFloat/=(float)arm_cos_f32(auxHue60-auxHueRad);
					azulFloat+=1.0;
					azulFloat/=3.0;

					verdeFloat=1.0-auxSaturation;
					verdeFloat/=3.0;

					rojoFloat=1.0-(azulFloat+verdeFloat);
				}


				azulFloat*=(auxIntensity*3.0);
				azul= (uint32_t)azulFloat;
				azul=__USAT(azul,8);
				azul>>=3;
				azul&=0x001F;


				rojoFloat*=(auxIntensity*3.0);
				rojo= (uint32_t)rojoFloat;
				rojo=__USAT(rojo,8);
				rojo<<=8;
				rojo&=0xF800;


				verdeFloat*=(auxIntensity*3.0);
				verde= (uint32_t)verdeFloat;
				verde=__USAT(verde,8);
				verde<<=3;
				verde&=0x07E0;

				aux=rojo|verde|azul;

			}


			*((uint16_t*)layerAddressDest+width)= aux;
		}
		layerHueSource+=layerSourceWidthTotal<<2;
		layerIntensitySource+=layerSourceWidthTotal<<2;
		layerSaturationSource+=layerSourceWidthTotal<<2;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}
uint32_t IMAGEPROC_16bRGBScale216bGrayScale(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressSource;
    uint32_t layerAddressDest;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t aux=0;
    uint32_t suma=0;


    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_USHORT))
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);

			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			rojo <<= 1;
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
			azul<<=1;

			suma= (rojo+verde);
			suma+=azul;
			suma/=3;

			__ASM volatile ("BFI %0, %1, #11, #6" : "=r" (suma): "r"  (suma) );
			__ASM volatile ("BFI %0, %1, #6, #6" : "=r" (suma): "r"  (suma) );
			suma>>=1;

			*((uint16_t*)layerAddressDest+width)= suma;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_16bRGBScale216bGrayScaleRed(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;
    uint32_t rojo=0;
    uint32_t layerAddressSource;
    uint32_t layerAddressDest;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_USHORT))
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			rojo=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "0"  (rojo) );
			__ASM volatile ("BFI %0, %1, #11, #5" : "=r" (rojo): "0"  (rojo) );
			__ASM volatile ("BFI %0, %1, #6, #5" : "=r" (rojo): "0"  (rojo) );
			*((uint16_t*)layerAddressDest+width)= rojo;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}



uint32_t IMAGEPROC_16bRGBScale216bGrayScaleGreen(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressSource;
    uint32_t layerAddressDest;
    uint32_t verde = 0;
    uint32_t verde1 = 0;

    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_USHORT))
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			verde=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #6, #5" : "=&r" (verde1): "r"  (verde) ); //blue
			__ASM volatile ("BFI %0, %1, #0, #5" : "=&r" (verde): "r"  (verde1) );
			__ASM volatile ("BFI %0, %1, #11, #5" : "=r" (verde): "0"  (verde) );
			*((uint16_t*)layerAddressDest+width)= verde;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_16bRGBScale216bGrayScaleBlue(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressSource;
    uint32_t layerAddressDest;
    uint32_t azul = 0;


    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_USHORT))
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			azul=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "0"  (azul) );
			__ASM volatile ("BFI %0, %1, #11, #5" : "=r" (azul): "0"  (azul) );
			__ASM volatile ("BFI %0, %1, #6, #5" : "=r" (azul): "0"  (azul) );
			*((uint16_t*)layerAddressDest+width)= azul;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}



uint32_t IMAGEPROC_16bRGBScale28bGrayScale(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressSource;
    uint32_t layerAddressDest;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t aux=0;
    uint32_t suma=0;

    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			rojo <<= 3;
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			verde <<= 2;
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
			azul<<=3;
			suma= (rojo+verde);
			suma+=azul;
			suma/=3;
			*((uint8_t*)layerAddressDest+width)= suma;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;

}

uint32_t IMAGEPROC_8bGrayScale216bGrayScale(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressSource;
    uint32_t layerAddressDest;
    uint32_t aux=0;

    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			aux=*((uint8_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #2, #6" : "=r" (aux): "r"  (aux) );
			__ASM volatile ("BFI %0, %1, #11, #6" : "=r" (aux): "0"  (aux) );
			__ASM volatile ("BFI %0, %1, #6, #6" : "=r" (aux): "0"  (aux) );
			aux>>=1;
		    *((uint16_t*)layerAddressDest+width)= aux;

		}
		layerAddressSource+=layerSourceWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_8bRGBto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerSourceGreen,LTDC_TFT_TypeDef *layerSourceBlue,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightDest=0,heightSourceRed=0,heightSourceGreen=0,heightSourceBlue=0;

    uint32_t layerAddressSourceRed;
    uint32_t layerAddressSourceGreen;
    uint32_t layerAddressSourceBlue;
    uint32_t layerAddressDest;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t result=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimX3=dim.X[3];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];
	uint32_t dimY3=dim.Y[3];

	uint32_t layerSourceRedWidthTotal=layerSourceRed->layerWidthTotal;
	uint32_t layerSourceGreenWidthTotal=layerSourceGreen->layerWidthTotal;
	uint32_t layerSourceBlueWidthTotal=layerSourceBlue->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceRedHeightTotal=layerSourceRed->layerHeightTotal;
	uint32_t layerSourceGreenHeightTotal=layerSourceGreen->layerHeightTotal;
	uint32_t layerSourceBlueHeightTotal=layerSourceBlue->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerDest->variableType != VARIABLETYPE_USHORT) || (layerSourceRed->variableType != VARIABLETYPE_UCHAR)
    		|| (layerSourceGreen->variableType != VARIABLETYPE_UCHAR)
			|| (layerSourceBlue->variableType != VARIABLETYPE_UCHAR))
    		return 0;

	if(dimX3>layerDestWidthTotal)
		return 0;
	if(dimX0>layerSourceRedWidthTotal)
		return 0;
	if(dimX2>layerSourceBlueWidthTotal)
		return 0;
	if(dimX1>layerSourceGreenWidthTotal)
		return 0;

	if(dimY3>layerDestHeightTotal)
		return 0;
	if(dimY0>layerSourceRedHeightTotal)
		return 0;
	if(dimY1>layerSourceGreenHeightTotal)
		return 0;
	if(dimY2>layerSourceBlueHeightTotal)
		return 0;

	if((dimWidth+ dimX3)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX3;
	if((dimHeight+ dimY3)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY3;

	if((dimWidth+ dimX0)>layerSourceRedWidthTotal)
		dimWidth= layerSourceRedWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceRedHeightTotal)
		dimHeight= layerSourceRedHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerSourceGreenWidthTotal)
		dimWidth= layerSourceGreenWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSourceGreenHeightTotal)
		dimHeight= layerSourceGreenHeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerSourceBlueWidthTotal)
		dimWidth= layerSourceBlueWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerSourceBlueHeightTotal)
		dimHeight= layerSourceBlueHeightTotal- dimY2;


	heightSourceRed=(dimY0)*layerSourceRedWidthTotal+dimX0;
	heightSourceGreen=(dimY1)*layerSourceGreenWidthTotal+dimX1;
	heightSourceBlue=(dimY2)*layerSourceBlueWidthTotal+dimX2;
	heightDest=(dimY3)*layerDestWidthTotal+dimX3;

	layerAddressSourceRed=layerSourceRed->layerDataAddress+(heightSourceRed);
	layerAddressSourceGreen=layerSourceGreen->layerDataAddress+(heightSourceGreen);
	layerAddressSourceBlue=layerSourceBlue->layerDataAddress+(heightSourceBlue);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			rojo=*((uint8_t*)layerAddressSourceRed+width);
			verde=*((uint8_t*)layerAddressSourceGreen+width);
			azul=*((uint8_t*)layerAddressSourceBlue+width);
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (result): "r"  (azul) );
			__ASM volatile ("BFI %0, %1, #11, #5" : "=&r" (result): "r"  (rojo) );
			__ASM volatile ("BFI %0, %1, #5, #6" : "=&r" (result): "r"  (verde) );
			 *((uint16_t*)layerAddressDest+width)= result;
		}
		layerAddressSourceRed+=layerSourceRedWidthTotal;
		layerAddressSourceGreen+=layerSourceGreenWidthTotal;
		layerAddressSourceBlue+=layerSourceBlueWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_8bRGBFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerSourceGreen,LTDC_TFT_TypeDef *layerSourceBlue,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightDest=0,heightSourceRed=0,heightSourceGreen=0,heightSourceBlue=0;

    uint32_t layerAddressSourceRed;
    uint32_t layerAddressSourceGreen;
    uint32_t layerAddressSourceBlue;
    uint32_t layerAddressDest;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t result=0;    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimX3=dim.X[3];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];
	uint32_t dimY3=dim.Y[3];

	uint32_t layerSourceRedWidthTotal=layerSourceRed->layerWidthTotal;
	uint32_t layerSourceGreenWidthTotal=layerSourceGreen->layerWidthTotal;
	uint32_t layerSourceBlueWidthTotal=layerSourceBlue->layerWidthTotal;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerSourceRedHeightTotal=layerSourceRed->layerHeightTotal;
	uint32_t layerSourceGreenHeightTotal=layerSourceGreen->layerHeightTotal;
	uint32_t layerSourceBlueHeightTotal=layerSourceBlue->layerHeightTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerDest->variableType != VARIABLETYPE_USHORT) || (layerSourceRed->variableType != VARIABLETYPE_UCHAR)
    		|| (layerSourceGreen->variableType != VARIABLETYPE_UCHAR)
			|| (layerSourceBlue->variableType != VARIABLETYPE_UCHAR))
    		return 0;

	if(dimX3>layerDestWidthTotal)
		return 0;
	if(dimX0>layerSourceRedWidthTotal)
		return 0;
	if(dimX2>layerSourceBlueWidthTotal)
		return 0;
	if(dimX1>layerSourceGreenWidthTotal)
		return 0;

	if(dimY3>layerDestHeightTotal)
		return 0;
	if(dimY0>layerSourceRedHeightTotal)
		return 0;
	if(dimY1>layerSourceGreenHeightTotal)
		return 0;
	if(dimY2>layerSourceBlueHeightTotal)
		return 0;

	if((dimWidth+ dimX3)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX3;
	if((dimHeight+ dimY3)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY3;

	if((dimWidth+ dimX0)>layerSourceRedWidthTotal)
		dimWidth= layerSourceRedWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceRedHeightTotal)
		dimHeight= layerSourceRedHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerSourceGreenWidthTotal)
		dimWidth= layerSourceGreenWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSourceGreenHeightTotal)
		dimHeight= layerSourceGreenHeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerSourceBlueWidthTotal)
		dimWidth= layerSourceBlueWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerSourceBlueHeightTotal)
		dimHeight= layerSourceBlueHeightTotal- dimY2;


	heightSourceRed=(dimY0)*layerSourceRedWidthTotal+dimX0;
	heightSourceGreen=(dimY1)*layerSourceGreenWidthTotal+dimX1;
	heightSourceBlue=(dimY2)*layerSourceBlueWidthTotal+dimX2;
	heightDest=(dimY3)*layerDestWidthTotal+dimX3;

	layerAddressSourceRed=layerSourceRed->layerDataAddress+(heightSourceRed);
	layerAddressSourceGreen=layerSourceGreen->layerDataAddress+(heightSourceGreen);
	layerAddressSourceBlue=layerSourceBlue->layerDataAddress+(heightSourceBlue);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			rojo=*((uint8_t*)layerAddressSourceRed+width);
			__ASM volatile ("UBFX %0, %1, #3, #5" : "=r" (rojo): "0"  (rojo) );
			__ASM volatile ("BFI %0, %1, #11, #5" : "=&r" (result): "r"  (rojo) );
			verde=*((uint8_t*)layerAddressSourceGreen+width);
			__ASM volatile ("UBFX %0, %1, #2, #6" : "=r" (verde): "0"  (verde) );
			__ASM volatile ("BFI %0, %1, #5, #6" : "=&r" (result): "r"  (verde) );
			azul=*((uint8_t*)layerAddressSourceBlue+width);
			__ASM volatile ("UBFX %0, %1, #3, #5" : "=r" (azul): "0"  (azul) );
			__ASM volatile ("BFI %0, %1, #0, #5" : "=&r" (result): "r"  (azul) );
			 *((uint16_t*)layerAddressDest+width)= result;

		}
		layerAddressSourceRed+=layerSourceRedWidthTotal;
		layerAddressSourceGreen+=layerSourceGreenWidthTotal;
		layerAddressSourceBlue+=layerSourceBlueWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_16bRGBScaleSplit(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed, LTDC_TFT_TypeDef *layerDestGreen,LTDC_TFT_TypeDef *layerDestBlue,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestRed=0,heightDestGreen=0,heightDestBlue=0;

    uint32_t layerAddressDestRed;
    uint32_t layerAddressDestGreen;
    uint32_t layerAddressDestBlue;
    uint32_t layerAddressSource;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimX3=dim.X[3];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];
	uint32_t dimY3=dim.Y[3];

	uint32_t layerDestRedWidthTotal=layerDestRed->layerWidthTotal;
	uint32_t layerDestGreenWidthTotal=layerDestGreen->layerWidthTotal;
	uint32_t layerDestBlueWidthTotal=layerDestBlue->layerWidthTotal;
	uint32_t layerDestRedHeightTotal=layerDestRed->layerHeightTotal;
	uint32_t layerDestGreenHeightTotal=layerDestGreen->layerHeightTotal;
	uint32_t layerDestBlueHeightTotal=layerDestBlue->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestRed->variableType != VARIABLETYPE_UCHAR)
    		|| (layerDestGreen->variableType != VARIABLETYPE_UCHAR)
			|| (layerDestBlue->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestRedWidthTotal)
		return 0;
	if(dimX2>layerDestBlueWidthTotal)
		return 0;
	if(dimX3>layerDestGreenWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestRedHeightTotal)
		return 0;
	if(dimY2>layerDestGreenHeightTotal)
		return 0;
	if(dimY3>layerDestBlueHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestRedWidthTotal)
		dimWidth= layerDestRedWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestRedHeightTotal)
		dimHeight= layerDestRedHeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestGreenWidthTotal)
		dimWidth= layerDestGreenWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestGreenHeightTotal)
		dimHeight= layerDestGreenHeightTotal- dimY2;


	if((dimWidth+ dimX3)>layerDestBlueWidthTotal)
		dimWidth= layerDestBlueWidthTotal- dimX3;
	if((dimHeight+ dimY3)>layerDestBlueHeightTotal)
		dimHeight= layerDestBlueHeightTotal- dimY3;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestRed=(dimY1)*layerDestRedWidthTotal+dimX1;
	heightDestGreen=(dimY2)*layerDestGreenWidthTotal+dimX2;
	heightDestBlue=(dimY3)*layerDestBlueWidthTotal+dimX3;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestRed=layerDestRed->layerDataAddress+(heightDestRed);
	layerAddressDestGreen=layerDestGreen->layerDataAddress+(heightDestGreen);
	layerAddressDestBlue=layerDestBlue->layerDataAddress+(heightDestBlue);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
		    *((uint8_t*)layerAddressDestRed+width)= rojo;
		    *((uint8_t*)layerAddressDestGreen+width)= verde;
		    *((uint8_t*)layerAddressDestBlue+width)= azul;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestRed+=layerDestRedWidthTotal;
		layerAddressDestGreen+=layerDestGreenWidthTotal;
		layerAddressDestBlue+=layerDestBlueWidthTotal;
	}
	return 1;
}

uint32_t IMAGEPROC_16bRGBScaleSplitFull(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed, LTDC_TFT_TypeDef *layerDestGreen,LTDC_TFT_TypeDef *layerDestBlue,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestRed=0,heightDestGreen=0,heightDestBlue=0;

    uint32_t layerAddressDestRed;
    uint32_t layerAddressDestGreen;
    uint32_t layerAddressDestBlue;
    uint32_t layerAddressSource;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimX3=dim.X[3];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];
	uint32_t dimY3=dim.Y[3];

	uint32_t layerDestRedWidthTotal=layerDestRed->layerWidthTotal;
	uint32_t layerDestGreenWidthTotal=layerDestGreen->layerWidthTotal;
	uint32_t layerDestBlueWidthTotal=layerDestBlue->layerWidthTotal;
	uint32_t layerDestRedHeightTotal=layerDestRed->layerHeightTotal;
	uint32_t layerDestGreenHeightTotal=layerDestGreen->layerHeightTotal;
	uint32_t layerDestBlueHeightTotal=layerDestBlue->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestRed->variableType != VARIABLETYPE_UCHAR)
    		|| (layerDestGreen->variableType != VARIABLETYPE_UCHAR)
			|| (layerDestBlue->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestRedWidthTotal)
		return 0;
	if(dimX2>layerDestBlueWidthTotal)
		return 0;
	if(dimX3>layerDestGreenWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestRedHeightTotal)
		return 0;
	if(dimY2>layerDestGreenHeightTotal)
		return 0;
	if(dimY3>layerDestBlueHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestRedWidthTotal)
		dimWidth= layerDestRedWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestRedHeightTotal)
		dimHeight= layerDestRedHeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestGreenWidthTotal)
		dimWidth= layerDestGreenWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestGreenHeightTotal)
		dimHeight= layerDestGreenHeightTotal- dimY2;


	if((dimWidth+ dimX3)>layerDestBlueWidthTotal)
		dimWidth= layerDestBlueWidthTotal- dimX3;
	if((dimHeight+ dimY3)>layerDestBlueHeightTotal)
		dimHeight= layerDestBlueHeightTotal- dimY3;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestRed=(dimY1)*layerDestRedWidthTotal+dimX1;
	heightDestGreen=(dimY2)*layerDestGreenWidthTotal+dimX2;
	heightDestBlue=(dimY3)*layerDestBlueWidthTotal+dimX3;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestRed=layerDestRed->layerDataAddress+(heightDestRed);
	layerAddressDestGreen=layerDestGreen->layerDataAddress+(heightDestGreen);
	layerAddressDestBlue=layerDestBlue->layerDataAddress+(heightDestBlue);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);


			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			rojo<<=3;
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			verde<<=2;
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
			azul<<=3;
		    *((uint8_t*)layerAddressDestRed+width)= rojo;
		    *((uint8_t*)layerAddressDestGreen+width)= verde;
		    *((uint8_t*)layerAddressDestBlue+width)= azul;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestRed+=layerDestRedWidthTotal;
		layerAddressDestGreen+=layerDestGreenWidthTotal;
		layerAddressDestBlue+=layerDestBlueWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_16bRGBScaleSplitRed(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestRed=0;

    uint32_t layerAddressDestRed;
    uint32_t layerAddressSource;
    uint32_t rojo = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerDestRedWidthTotal=layerDestRed->layerWidthTotal;
	uint32_t layerDestRedHeightTotal=layerDestRed->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestRed->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestRedWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestRedHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestRedWidthTotal)
		dimWidth= layerDestRedWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestRedHeightTotal)
		dimHeight= layerDestRedHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestRed=(dimY1)*layerDestRedWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestRed=layerDestRed->layerDataAddress+(heightDestRed);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			*((uint8_t*)layerAddressDestRed+width)= rojo;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestRed+=layerDestRedWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_16bRGBScaleSplitFullRed(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestRed=0;

    uint32_t layerAddressDestRed;
    uint32_t layerAddressSource;
    uint32_t rojo = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerDestRedWidthTotal=layerDestRed->layerWidthTotal;
	uint32_t layerDestRedHeightTotal=layerDestRed->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestRed->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestRedWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestRedHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestRedWidthTotal)
		dimWidth= layerDestRedWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestRedHeightTotal)
		dimHeight= layerDestRedHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestRed=(dimY1)*layerDestRedWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestRed=layerDestRed->layerDataAddress+(heightDestRed);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);

			__ASM volatile ("UBFX %0, %1, #11, #5" : "=r" (rojo): "r"  (aux) );
			rojo<<=3;
			*((uint8_t*)layerAddressDestRed+width)= rojo;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestRed+=layerDestRedWidthTotal;
	}
	return 1;
}

uint32_t IMAGEPROC_16bRGBScaleSplitGreen(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestGreen,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestGreen=0;

    uint32_t layerAddressDestGreen;
    uint32_t layerAddressSource;
    uint32_t verde = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerDestGreenWidthTotal=layerDestGreen->layerWidthTotal;
	uint32_t layerDestGreenHeightTotal=layerDestGreen->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestGreen->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestGreenWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestGreenHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestGreenWidthTotal)
		dimWidth= layerDestGreenWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestGreenHeightTotal)
		dimHeight= layerDestGreenHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestGreen=(dimY1)*layerDestGreenWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestGreen=layerDestGreen->layerDataAddress+(heightDestGreen);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			*((uint8_t*)layerAddressDestGreen+width)= verde;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestGreen+=layerDestGreenWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_16bRGBScaleSplitFullGreen(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestGreen,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestGreen=0;

    uint32_t layerAddressDestGreen;
    uint32_t layerAddressSource;
    uint32_t verde = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerDestGreenWidthTotal=layerDestGreen->layerWidthTotal;
	uint32_t layerDestGreenHeightTotal=layerDestGreen->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestGreen->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestGreenWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestGreenHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestGreenWidthTotal)
		dimWidth= layerDestGreenWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestGreenHeightTotal)
		dimHeight= layerDestGreenHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestGreen=(dimY1)*layerDestGreenWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestGreen=layerDestGreen->layerDataAddress+(heightDestGreen);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=r" (verde): "r"  (aux) );
			verde<<=2;
			*((uint8_t*)layerAddressDestGreen+width)= verde;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestGreen+=layerDestGreenWidthTotal;
	}
	return 1;
}

uint32_t IMAGEPROC_16bRGBScaleSplitBlue(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestBlue,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestBlue=0;

    uint32_t layerAddressDestBlue;
    uint32_t layerAddressSource;
    uint32_t azul = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerDestBlueWidthTotal=layerDestBlue->layerWidthTotal;
	uint32_t layerDestBlueHeightTotal=layerDestBlue->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestBlue->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestBlueWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestBlueHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestBlueWidthTotal)
		dimWidth= layerDestBlueWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestBlueHeightTotal)
		dimHeight= layerDestBlueHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestBlue=(dimY1)*layerDestBlueWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestBlue=layerDestBlue->layerDataAddress+(heightDestBlue);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
			*((uint8_t*)layerAddressDestBlue+width)= azul;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestBlue+=layerDestBlueWidthTotal;
	}
	return 1;
}






uint32_t IMAGEPROC_16bRGBScaleSplitFullBlue(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestBlue,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDestBlue=0;

    uint32_t layerAddressDestBlue;
    uint32_t layerAddressSource;
    uint32_t azul = 0;
    uint32_t aux=0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerDestBlueWidthTotal=layerDestBlue->layerWidthTotal;
	uint32_t layerDestBlueHeightTotal=layerDestBlue->layerHeightTotal;

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT) || (layerDestBlue->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestBlueWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestBlueHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestBlueWidthTotal)
		dimWidth= layerDestBlueWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestBlueHeightTotal)
		dimHeight= layerDestBlueHeightTotal- dimY1;

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDestBlue=(dimY1)*layerDestBlueWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDestBlue=layerDestBlue->layerDataAddress+(heightDestBlue);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux=*((uint16_t*)layerAddressSource+width);
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=r" (azul): "r"  (aux) );
			azul<<=3;
			*((uint8_t*)layerAddressDestBlue+width)= azul;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDestBlue+=layerDestBlueWidthTotal;
	}
	return 1;
}

uint32_t IMAGEPROC_8bRedto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{


	int32_t width=0,height=0,heightDest=0,heightSourceRed=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSourceRed;
    uint32_t rojo = 0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceRedWidthTotal=layerSourceRed->layerWidthTotal;
	uint32_t layerSourceRedHeightTotal=layerSourceRed->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSourceRed->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceRedWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceRedHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceRedWidthTotal)
		dimWidth= layerSourceRedWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceRedHeightTotal)
		dimHeight= layerSourceRedHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSourceRed=(dimY0)*layerSourceRedWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSourceRed=layerSourceRed->layerDataAddress+(heightSourceRed);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			rojo=*((uint8_t*)layerAddressSourceRed+width);
			rojo<<=11;
			rojo&=0xF800;
		    *((uint16_t*)layerAddressDest+width)&=~0xF800;
		    *((uint16_t*)layerAddressDest+width)|=rojo;
		}
		layerAddressSourceRed+=layerSourceRedWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}

uint32_t IMAGEPROC_8bRedFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{


	int32_t width=0,height=0,heightDest=0,heightSourceRed=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSourceRed;
    uint32_t rojo = 0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceRedWidthTotal=layerSourceRed->layerWidthTotal;
	uint32_t layerSourceRedHeightTotal=layerSourceRed->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSourceRed->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceRedWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceRedHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceRedWidthTotal)
		dimWidth= layerSourceRedWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceRedHeightTotal)
		dimHeight= layerSourceRedHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSourceRed=(dimY0)*layerSourceRedWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSourceRed=layerSourceRed->layerDataAddress+(heightSourceRed);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			rojo=*((uint8_t*)layerAddressSourceRed+width);
			rojo<<=8;
			rojo&=0xF800;
		    *((uint16_t*)layerAddressDest+width)&=~0xF800;
		    *((uint16_t*)layerAddressDest+width)|=rojo;
		}
		layerAddressSourceRed+=layerSourceRedWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}


uint32_t IMAGEPROC_8bGreento16bRGBScale(LTDC_TFT_TypeDef*layerSourceGreen, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{


	int32_t width=0,height=0,heightDest=0,heightSourceGreen=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSourceGreen;
    uint32_t verde = 0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceGreenWidthTotal=layerSourceGreen->layerWidthTotal;
	uint32_t layerSourceGreenHeightTotal=layerSourceGreen->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSourceGreen->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceGreenWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceGreenHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceGreenWidthTotal)
		dimWidth= layerSourceGreenWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceGreenHeightTotal)
		dimHeight= layerSourceGreenHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSourceGreen=(dimY0)*layerSourceGreenWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;
	layerAddressSourceGreen=layerSourceGreen->layerDataAddress+(heightSourceGreen);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			verde=*((uint8_t*)layerAddressSourceGreen+width);
			verde<<=5;
			verde&=0x07E0;
		    *((uint16_t*)layerAddressDest+width)&=~0x07E0;
		    *((uint16_t*)layerAddressDest+width)|=verde;
		}
		layerAddressSourceGreen+=layerSourceGreenWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}

uint32_t IMAGEPROC_8bGreenFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceGreen, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{


	int32_t width=0,height=0,heightDest=0,heightSourceGreen=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSourceGreen;
    uint32_t verde = 0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceGreenWidthTotal=layerSourceGreen->layerWidthTotal;
	uint32_t layerSourceGreenHeightTotal=layerSourceGreen->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSourceGreen->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceGreenWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceGreenHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceGreenWidthTotal)
		dimWidth= layerSourceGreenWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceGreenHeightTotal)
		dimHeight= layerSourceGreenHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSourceGreen=(dimY0)*layerSourceGreenWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;
	layerAddressSourceGreen=layerSourceGreen->layerDataAddress+(heightSourceGreen);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			verde=*((uint8_t*)layerAddressSourceGreen+width);
			verde<<=3;
			verde&=0x07E0;
		    *((uint16_t*)layerAddressDest+width)&=~0x07E0;
		    *((uint16_t*)layerAddressDest+width)|=verde;
		}
		layerAddressSourceGreen+=layerSourceGreenWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}


uint32_t IMAGEPROC_8bBlueto16bRGBScale(LTDC_TFT_TypeDef*layerSourceBlue, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{


	int32_t width=0,height=0,heightDest=0,heightSourceBlue=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSourceBlue;
    uint32_t azul = 0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceBlueWidthTotal=layerSourceBlue->layerWidthTotal;
	uint32_t layerSourceBlueHeightTotal=layerSourceBlue->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSourceBlue->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceBlueWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceBlueHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceBlueWidthTotal)
		dimWidth= layerSourceBlueWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceBlueHeightTotal)
		dimHeight= layerSourceBlueHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSourceBlue=(dimY0)*layerSourceBlueWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;
	layerAddressSourceBlue=layerSourceBlue->layerDataAddress+(heightSourceBlue);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			azul=*((uint8_t*)layerAddressSourceBlue+width);
			azul&=0x001F;
		    *((uint16_t*)layerAddressDest+width)&=~0x001F;
		    *((uint16_t*)layerAddressDest+width)|=azul;
		}
		layerAddressSourceBlue+=layerSourceBlueWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}

uint32_t IMAGEPROC_8bBlueFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceBlue, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{


	int32_t width=0,height=0,heightDest=0,heightSourceBlue=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSourceBlue;
    uint32_t azul = 0;
    uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceBlueWidthTotal=layerSourceBlue->layerWidthTotal;
	uint32_t layerSourceBlueHeightTotal=layerSourceBlue->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSourceBlue->variableType != VARIABLETYPE_UCHAR) || (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceBlueWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceBlueHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceBlueWidthTotal)
		dimWidth= layerSourceBlueWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceBlueHeightTotal)
		dimHeight= layerSourceBlueHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightSourceBlue=(dimY0)*layerSourceBlueWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;
	layerAddressSourceBlue=layerSourceBlue->layerDataAddress+(heightSourceBlue);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			azul=*((uint8_t*)layerAddressSourceBlue+width);
			azul>>=3;
			azul&=0x001F;
		    *((uint16_t*)layerAddressDest+width)&=~0x001F;
		    *((uint16_t*)layerAddressDest+width)|=azul;
		}
		layerAddressSourceBlue+=layerSourceBlueWidthTotal;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;

}


uint32_t IMAGEPROC_16bAddMean(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t value1 = 0;
    uint32_t value2 = 0;
    uint32_t aux1 = 0;
    uint32_t result = 0;
    uint32_t byte1 = 0;
    uint32_t byte2 = 0;

    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t rojo2 = 0;
    uint32_t verde2 = 0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource1->variableType != VARIABLETYPE_USHORT) || (layerSource2->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;

	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource2=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1<<1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource1+width);
			value2=*((uint16_t*)layerAddressSource2+width);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (byte1): "r"  (value1) );//azul
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (verde): "r"  (value1) );//verde
			__ASM volatile ("BFI  %0, %1, #8, #8" : "=&r" (byte1): "r"  (verde) ); //azul verde
			__ASM volatile ("UBFX  %0, %1, #11, #5" : "=r" (rojo): "r"  (value1) ); //rojo
			byte1|=rojo<<16; //azul verde rojo

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (byte2): "r"  (value2) );//verde
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (verde2): "r"  (value2) );//verde
			__ASM volatile ("BFI  %0, %1, #8, #8" : "=&r" (byte2): "r"  (verde2) );
			__ASM volatile ("UBFX  %0, %1, #11, #5" : "=r" (rojo2): "r"  (value2) );
			byte2|=rojo2<<16;

			aux1=__UHADD8(byte1,byte2);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (result): "r"  (aux1) );//azul
			__ASM volatile ("UBFX %0, %1, #8, #6" : "=&r" (verde): "r"  (aux1) );//verde
			__ASM volatile ("BFI  %0, %1, #5, #6" : "=&r" (result): "r"  (verde) ); //azul verde
			__ASM volatile ("UBFX  %0, %1, #16, #5" : "=r" (rojo): "r"  (aux1) ); //rojo
			result|=rojo<<11; //azul verde rojo

			*((uint16_t*)layerAddressDest+width)= result;
		}
		layerAddressSource1+=layerSource1WidthTotal<<1;
		layerAddressSource2+=layerSource2WidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bAddConstant(LTDC_TFT_TypeDef*layerSource, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t redConstant,uint8_t greenConstant,uint8_t blueConstant )
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t aux1 = 0;
    uint32_t result = 0;
    uint32_t byte1 = 0;
    uint32_t byte2 = 0;

    uint32_t rojo = 0;
    uint32_t verde = 0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	if(redConstant>0x1F)
		redConstant=0x1F;
	if(greenConstant>0x3F)
		greenConstant=0x3F;
	if(blueConstant>0x1F)
		blueConstant=0x1F;

	byte2=(redConstant<<16)|(greenConstant)|(blueConstant<<8);

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (byte1): "r"  (value1) );//azul
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (verde): "r"  (value1) );//verde
			__ASM volatile ("BFI  %0, %1, #8, #8" : "=&r" (byte1): "r"  (verde) ); //azul verde
			__ASM volatile ("UBFX  %0, %1, #11, #5" : "=r" (rojo): "r"  (value1) ); //rojo
			byte1|=rojo<<16; //azul verde rojo

			aux1=__UHADD8(byte1,byte2);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (result): "r"  (aux1) );//azul
			__ASM volatile ("UBFX %0, %1, #8, #6" : "=&r" (verde): "r"  (aux1) );//verde
			__ASM volatile ("BFI  %0, %1, #5, #6" : "=&r" (result): "r"  (verde) ); //azul verde
			__ASM volatile ("UBFX  %0, %1, #16, #5" : "=r" (rojo): "r"  (aux1) ); //rojo
			result|=rojo<<11; //azul verde rojo

			*((uint16_t*)layerAddressDest+width)= result;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bAdd(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t value1 = 0;
    uint32_t value2 = 0;
    uint32_t aux1 = 0;
    uint32_t aux2= 0;
    uint32_t auxrojo= 0;
    uint32_t auxverde= 0;
    uint32_t auxazul= 0;
    uint32_t u32result=0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;
    float result=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource1->variableType != VARIABLETYPE_USHORT) || (layerSource2->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource1=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1<<1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource1+width);
			value2=*((uint16_t*)layerAddressSource2+width);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux2): "r"  (value2) );//azul2
			auxazul=aux1|aux2<<16; //azul1 azul2
			u32aux=__SMUAD(auxazul,auxazul);
		    arm_sqrt_f32((float)u32aux,&result);
		    u32aux= (uint32_t)result;
		    __ASM volatile ("USAT %0, #5, %1" : "=r" (u32aux) : "r" (u32aux) );


			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux1): "r"  (value1) );//rojo1
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux2): "r"  (value2) );//rojo2
			auxrojo=aux1|aux2<<16; //azul1 azul2aux1|=aux2<<16; //rojo1 rojo 2
			u32aux1=__SMUAD(auxrojo,auxrojo);
		    arm_sqrt_f32((float)u32aux1,&result);
		    u32aux1= (uint32_t)result;
		    __ASM volatile ("USAT %0, #5, %1" : "=r" (u32aux1) : "r" (u32aux1) );

			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux1): "r"  (value1) );//verde1
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux2): "r"  (value2) );//verde2
			auxverde=aux1|aux2<<16;//verde1 verde2 2
			u32aux2=__SMUAD(auxverde,auxverde);
		    arm_sqrt_f32((float)u32aux2,&result);
		    u32aux2= (uint32_t)result;
		    __ASM volatile ("USAT %0, #6, %1" : "=r" (u32aux2) : "r" (u32aux2) );

		    //u32result=0;
			__ASM volatile ("UBFX  %0, %1, #0, #5" : "=r" (u32result): "r"  (u32aux) ); //azul verde
			u32result|=u32aux2<<5; //azul verde rojo
			u32result|=u32aux1<<11; //azul verde rojo



			*((uint16_t*)layerAddressDest+width)= u32result;
		}
		layerAddressSource1+=layerSource1WidthTotal<<1;
		layerAddressSource2+=layerSource2WidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_16bAddBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,float blend)
{
	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t value1 = 0;
    uint32_t value2 = 0;
    uint32_t aux1 = 0;
    uint32_t aux2 = 0;
    float aux1float = 0;
    float aux2float = 0;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t u32Result = 0;
    float result=0;
    float blend1=1-blend;


	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((blend>1.0) || (blend<0))
    	return 0;
    if((layerSource1->variableType != VARIABLETYPE_USHORT) || (layerSource2->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource2=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1<<1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource1+width);
			value2=*((uint16_t*)layerAddressSource2+width);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux2): "r"  (value2) );//azul2
			aux1float= (float)aux1;
			aux2float= (float)aux2;
			aux1float*=aux1float;
			aux1float*=blend;
			aux2float*=aux2float;
			aux1float+=aux2float*blend1;
		    arm_sqrt_f32((float)aux1float,&result);
		    azul= (uint32_t)result;
		    __ASM volatile ("USAT %0, #5, %1" : "=r" (azul) : "r" (azul) );

			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux2): "r"  (value2) );//azul2
			aux1float= (float)aux1;aux2float= (float)aux2;aux1float*=aux1float;
			aux1float*=blend;
			aux2float*=aux2float;
			aux1float+=aux2float*blend1;
		    arm_sqrt_f32((float)aux1float,&result);
		    rojo= (uint32_t)result;
		    __ASM volatile ("USAT %0, #5, %1" : "=r" (rojo) : "r" (rojo) );

			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux2): "r"  (value2) );//azul2
			aux1float= (float)aux1;aux2float= (float)aux2;aux1float*=aux1float;
			aux1float*=blend;
			aux2float*=aux2float;
			aux1float+=aux2float*blend1;
		    arm_sqrt_f32((float)aux1float,&result);
		    verde= (uint32_t)result;
		    __ASM volatile ("USAT %0, #6, %1" : "=r" (verde) : "r" (verde) );

			__ASM volatile ("UBFX  %0, %1, #0, #5" : "=r" (u32Result): "r"  (azul) ); //azul verde
			u32Result|=rojo<<11; //azul verde rojo
			u32Result|=verde<<5; //azul verde rojo


		    *((uint16_t*)layerAddressDest+width)= u32Result;
		}
		layerAddressSource1+=layerSource1WidthTotal<<1;
		layerAddressSource2+=layerSource2WidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bAddMeanBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,float blend)
{
	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t value1 = 0;
    uint32_t value2 = 0;
    uint32_t aux1 = 0;
    uint32_t aux2 = 0;
    float aux1float = 0;
    float aux2float = 0;
    uint32_t rojo = 0;
    uint32_t verde = 0;
    uint32_t azul = 0;
    uint32_t u32Result = 0;
    float blend1=1-blend;


	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((blend>1.0) || (blend<0))
    	return 0;
    if((layerSource1->variableType != VARIABLETYPE_USHORT) || (layerSource2->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource1=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1<<1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource1+width);
			value2=*((uint16_t*)layerAddressSource2+width);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux2): "r"  (value2) );//azul2
			aux1float= (float)aux1;
			aux2float= (float)aux2;
			aux1float*=blend;
			aux1float+=aux2float*blend1;
		    azul= (uint32_t)aux1float;
		    //azul>>=1;
		    __ASM volatile ("USAT %0, #5, %1" : "=r" (azul) : "r" (azul) );

			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux2): "r"  (value2) );//azul2
			aux1float= (float)aux1;
			aux2float= (float)aux2;
			aux1float*=blend;
			aux1float+=aux2float*blend1;
		    rojo= (uint32_t)aux1float;
		    //rojo>>=1;
		    __ASM volatile ("USAT %0, #5, %1" : "=r" (rojo) : "r" (rojo) );

			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux1): "r"  (value1) );//azul1
			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux2): "r"  (value2) );//azul2
			aux1float= (float)aux1;
			aux2float= (float)aux2;
			aux1float*=blend;
			aux1float+=aux2float*blend1;
		    verde= (uint32_t)aux1float;
		    //verde>>=1;
		    __ASM volatile ("USAT %0, #6, %1" : "=r" (verde) : "r" (verde) );

			__ASM volatile ("UBFX  %0, %1, #0, #5" : "=r" (u32Result): "r"  (azul) ); //azul verde
			u32Result|=rojo<<11; //azul verde rojo
			u32Result|=verde<<5; //azul verde rojo


		    *((uint16_t*)layerAddressDest+width)= u32Result;
		}
		layerAddressSource1+=layerSource1WidthTotal<<1;
		layerAddressSource2+=layerSource2WidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_8bAdd(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral)
{

	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t aux1 = 0;
    uint32_t aux2 = 0;
    float aux = 0;
    float u32aux = 0;
    float result = 0;


	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource1->variableType != VARIABLETYPE_UCHAR) || (layerSource2->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource2=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux1=*((uint8_t*)layerAddressSource1+width);
			aux2=*((uint8_t*)layerAddressSource2+width);

			aux=aux1|aux2<<16; //azul1 azul2
			u32aux=__SMUAD(aux,aux);
		    arm_sqrt_f32((float)u32aux,&result);
		    u32aux= (uint32_t)result;
			if(u32aux>umbral)
				u32aux=umbral;

		    *((uint8_t*)layerAddressDest+width)= u32aux;
		}
		layerAddressSource1+=layerSource1WidthTotal;
		layerAddressSource2+=layerSource2WidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}

uint32_t IMAGEPROC_8bAddMean(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral)
{

	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t aux1 = 0;
    uint32_t aux2 = 0;
    uint32_t aux = 0;


	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource1->variableType != VARIABLETYPE_UCHAR) || (layerSource2->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource2=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux1=*((uint8_t*)layerAddressSource1+width);
			aux2=*((uint8_t*)layerAddressSource2+width);

			aux=__UHADD16(aux1,aux2);
			if(aux>umbral)
				aux=umbral;

		    *((uint8_t*)layerAddressDest+width)= aux;
		}
		layerAddressSource1+=layerSource1WidthTotal;
		layerAddressSource2+=layerSource2WidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_8bAddBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral,float blend)
{

	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t aux1 = 0;
    uint32_t aux2 = 0;
    uint32_t aux = 0;
    float aux1float=0;
    float aux2float=0;
    float blend1= 1-blend;
    float result=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

	if(blend>1.0)
		return 0;

    if((layerSource1->variableType != VARIABLETYPE_UCHAR) || (layerSource2->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource2=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux1=*((uint8_t*)layerAddressSource1+width);
			aux2=*((uint8_t*)layerAddressSource2+width);

			aux1float= (float)aux1;
			aux2float= (float)aux2;
			aux1float*=aux1float;
			aux1float*=blend;
			aux2float*=aux2float;
			aux1float+=aux2float*blend1;
			arm_sqrt_f32((float)aux1float,&result);
			aux= (uint32_t)result;
			if(aux>umbral)
				aux=umbral;

		    *((uint8_t*)layerAddressDest+width)= aux;
		}
		layerAddressSource1+=layerSource1WidthTotal;
		layerAddressSource2+=layerSource2WidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_8bAddMeanBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral,float blend)
{

	int32_t width=0,height=0,heightSource1=0,heightSource2=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource1;
    uint32_t layerAddressSource2;
    uint32_t aux1 = 0;
    uint32_t aux2 = 0;
    uint32_t aux = 0;
    float aux1float=0;
    float aux2float=0;
    float blend1= 1-blend;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimX2=dim.X[2];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];
	uint32_t dimY2=dim.Y[2];

	uint32_t layerSource1WidthTotal=layerSource1->layerWidthTotal;
	uint32_t layerSource2WidthTotal=layerSource2->layerWidthTotal;
	uint32_t layerSource1HeightTotal=layerSource1->layerHeightTotal;
	uint32_t layerSource2HeightTotal=layerSource2->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

	if(blend>1.0)
		return 0;

    if((layerSource1->variableType != VARIABLETYPE_UCHAR) || (layerSource2->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSource1WidthTotal)
		return 0;
	if(dimX1>layerSource2WidthTotal)
		return 0;
	if(dimX2>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSource1HeightTotal)
		return 0;
	if(dimY1>layerSource2HeightTotal)
		return 0;
	if(dimY2>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSource1WidthTotal)
		dimWidth= layerSource1WidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSource1HeightTotal)
		dimHeight= layerSource1HeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerSource2WidthTotal)
		dimWidth= layerSource2WidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerSource2HeightTotal)
		dimHeight= layerSource2HeightTotal- dimY1;


	if((dimWidth+ dimX2)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX2;
	if((dimHeight+ dimY2)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY2;


	heightSource1=(dimY0)*layerSource1WidthTotal+dimX0;
	heightSource2=(dimY1)*layerSource2WidthTotal+dimX1;
	heightDest=(dimY2)*layerDestWidthTotal+dimX2;

	layerAddressSource1=layerSource1->layerDataAddress+(heightSource1);
	layerAddressSource2=layerSource2->layerDataAddress+(heightSource2);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux1=*((uint8_t*)layerAddressSource1+width);
			aux2=*((uint8_t*)layerAddressSource2+width);

			aux1float= (float)aux1;
			aux2float= (float)aux2;
			aux1float*=blend;
			aux1float+=aux2float*blend1;
			aux= (uint32_t)aux1float;
			if(aux>umbral)
				aux=umbral;

		    *((uint8_t*)layerAddressDest+width)= aux;
		}
		layerAddressSource1+=layerSource1WidthTotal;
		layerAddressSource2+=layerSource2WidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_8bAddConstant(LTDC_TFT_TypeDef*layerSource, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t constant,uint8_t umbral,float blend)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t aux1 = 0;
    uint32_t aux = 0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;


    if((layerSource->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux1=*((uint8_t*)layerAddressSource+width);
			aux= (uint32_t)aux1+ constant;
			if(aux>umbral)
				aux=umbral;

		    *((uint8_t*)layerAddressDest+width)= aux;
		}
		layerAddressSource+=layerSourceWidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}




uint32_t IMAGEPROC_8bUmbral(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, uint8_t umbralCenter, uint8_t umbralLength)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t aux1 = 0;
    uint32_t aux = 0;
    uint32_t umbralMin=0;
    uint32_t umbralMax=255;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;


    if((layerSource->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

    if (((int32_t)umbralCenter-((int32_t)umbralLength/2))>0)
    	umbralMin=umbralCenter-(umbralLength>>1);
    if (((int32_t)umbralCenter+((int32_t)umbralLength/2))<255)
    	umbralMax=umbralCenter+(umbralLength>>1);

    heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			aux1=*((uint8_t*)layerAddressSource+width);
			if((aux1>=umbralMin) && (aux1<=umbralMax))
				aux=255;
			else
				aux=0;

		    *((uint8_t*)layerAddressDest+width)= aux;
		}
		layerAddressSource+=layerSourceWidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}


uint32_t IMAGEPROC_16bUmbral(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, uint16_t umbralCenter, uint8_t umbralLengthRed, uint8_t umbralLengthGreen, uint8_t umbralLengthBlue)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t aux1 = 0;
    uint32_t u32result=0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;


    uint32_t umbralAux=0;
    uint32_t umbralMinRed=0;
    uint32_t umbralMaxRed=31;
    uint32_t umbralMinGreen=0;
    uint32_t umbralMaxGreen=63;
    uint32_t umbralMinBlue=0;
    uint32_t umbralMaxBlue=31;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	umbralAux=((umbralCenter>>11)&0x1F)<<1;
    if (((int32_t)umbralAux-((int32_t)umbralLengthRed))>0)
    {
    	umbralMinRed=(umbralAux-umbralLengthRed)>>1;
    }
    if (((int32_t)umbralAux+((int32_t)umbralLengthRed))<63)
    {
    	umbralMaxRed=(umbralAux+umbralLengthRed)>>1;
    }

	umbralAux=((umbralCenter>>5)&0x3F)<<1;
    if (((int32_t)umbralAux-((int32_t)umbralLengthGreen))>0)
    {
    	umbralMinGreen=(umbralAux-umbralLengthGreen)>>1;
    }
    if (((int32_t)umbralAux+((int32_t)umbralLengthGreen))<127)
    {
    	umbralMaxGreen=(umbralAux+umbralLengthGreen)>>1;
    }

	umbralAux=((umbralCenter)&0x1F)<<1;
    if (((int32_t)umbralAux-((int32_t)umbralLengthBlue))>0)
    {
    	umbralMinBlue=(umbralAux-umbralLengthBlue)>>1;
    }
    if (((int32_t)umbralAux+((int32_t)umbralLengthBlue))<63)
    {
    	umbralMaxBlue=(umbralAux+umbralLengthBlue)>>1;
    }

	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			__ASM volatile ("UBFX %0, %1, #0, #5" : "=&r" (aux1): "r"  (value1) );//azul1

			if((aux1>=umbralMinBlue) && (aux1<=umbralMaxBlue))
				u32aux=1;
			else
				u32aux=0;

			__ASM volatile ("UBFX %0, %1, #11, #5" : "=&r" (aux1): "r"  (value1) );//rojo1
			if((aux1>=umbralMinRed) && (aux1<=umbralMaxRed))
				u32aux1=1;
			else
				u32aux1=0;

			__ASM volatile ("UBFX %0, %1, #5, #6" : "=&r" (aux1): "r"  (value1) );//verde1
			if((aux1>=umbralMinGreen) && (aux1<=umbralMaxGreen))
				u32aux2=1;
			else
				u32aux2=0;

			if((u32aux==u32aux1) && (u32aux1==u32aux2) && (u32aux2==1))
				u32result=0xFFFF;
			else
				u32result=0;

			*((uint16_t*)layerAddressDest+width)= u32result;
		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}


uint32_t IMAGEPROC_16bCrom(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;
    uint32_t u32suma=0;
    float faux=0;
    float faux1=0;
    float faux2=0;


	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=(value1&0x1F)+1; //blue
			u32aux<<=1;

			u32aux1=((value1>>11)&0x1F)+1; //red
			u32aux1<<=1;

			u32aux2=((value1>>5)&0x3F)+1;   //green

			u32suma= (u32aux+u32aux1);
			u32suma+=u32aux2;

			if((u32aux1==u32aux)&&(u32aux1==u32aux2))
			{
				u32aux=31/3;
				u32aux1=31/3;
				u32aux2=63/3;
			}
			else
			{
				faux=(float)u32aux/(float)u32suma;
				faux*=31;
				faux1=(float)u32aux1/(float)u32suma;
				faux1*=31;
				faux2=(float)u32aux2/(float)u32suma;
				faux2*=63;

				u32aux=(uint32_t)faux;
				u32aux1=(uint32_t)faux1;
				u32aux2=(uint32_t)faux2;


			}

			u32aux|=u32aux1<<11;
			u32aux|=u32aux2<<5;


			*((uint16_t*)layerAddressDest+width)= u32aux;


		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bWhitePatch(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;
	float RGB[3]={0};

    float faux=0;
    float faux1=0;
    float faux2=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);


	IMAGEPROC_16bMaxRGB(layerSource,dim,RGB,3);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=((value1>>11)&0x1F); //red
			u32aux1=((value1>>5)&0x3F);   //green
			u32aux2=(value1&0x1F); //blue

			if(u32aux>0)
			{

			    faux=(float)u32aux*(float)RGB[0];
			    u32aux=(uint32_t)faux;
			    if(u32aux>31)
			    	u32aux=31;
			}
			else if(RGB[0]==0)
			{
				u32aux=31;
			}

			if(u32aux1>0)
			{

			    faux1=(float)u32aux1*(float)RGB[1];
			    u32aux1=(uint32_t)faux1;
			    if(u32aux1>63)
			    	u32aux1=63;
			}
			else if(RGB[1]==0)
			{
				u32aux1=63;
			}

			if(u32aux2>0)
			{

			    faux2=(float)u32aux2*(float)RGB[2];
			    u32aux2=(uint32_t)faux2;
			    if(u32aux2>31)
			    	u32aux2=31;
			}
			else if(RGB[2]==0)
			{
				u32aux2=31;
			}

			u32aux2|=u32aux<<11;
			u32aux2|=u32aux1<<5;

			*((uint16_t*)layerAddressDest+width)= u32aux2;


		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bGrayWorld(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;
	float RGB[3]={0};

    float faux=0;
    float faux1=0;
    float faux2=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);


	IMAGEPROC_16bMeanNormRGB(layerSource,dim,RGB,0);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=((value1>>11)&0x1F); //red
			u32aux1=((value1>>5)&0x3F);   //green
			u32aux2=(value1&0x1F); //blue

			if(u32aux>0)
			{
			    faux=(float)u32aux*(float)RGB[0];
			    u32aux=(uint32_t)faux;
			    if(u32aux>31)
			    	u32aux=31;
			}
			else if(RGB[0]==0)
			{
				u32aux=31;
			}

			if(u32aux1>0)
			{
			    faux1=(float)u32aux1*(float)RGB[1];
			    u32aux1=(uint32_t)faux1;
			    if(u32aux1>63)
			    	u32aux1=63;
			}
			else if(RGB[1]==0)
			{
				u32aux1=63;
			}

			if(u32aux2>0)
			{
			    faux2=(float)u32aux2*(float)RGB[2];
			    u32aux2=(uint32_t)faux2;
			    if(u32aux2>31)
			    	u32aux2=31;
			}
			else if(RGB[2]==0)
			{
				u32aux2=31;
			}

			u32aux2|=u32aux<<11;
			u32aux2|=u32aux1<<5;

			*((uint16_t*)layerAddressDest+width)= u32aux2;


		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bGrayWorldMax(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;
	float RGB[3]={0};

    float faux=0;
    float faux1=0;
    float faux2=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);


	IMAGEPROC_16bMeanNormRGB(layerSource,dim,RGB,1);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=((value1>>11)&0x1F); //red
			u32aux1=((value1>>5)&0x3F);   //green
			u32aux2=(value1&0x1F); //blue

			if(u32aux>0)
			{
			    faux=(float)u32aux*(float)RGB[0];
			    u32aux=(uint32_t)faux;
			    if(u32aux>31)
			    	u32aux=31;
			}
			else if(RGB[0]==0)
			{
				u32aux=31;
			}

			if(u32aux1>0)
			{
			    faux1=(float)u32aux1*(float)RGB[1];
			    u32aux1=(uint32_t)faux1;
			    if(u32aux1>63)
			    	u32aux1=63;
			}
			else if(RGB[1]==0)
			{
				u32aux1=63;
			}

			if(u32aux2>0)
			{
			    faux2=(float)u32aux2*(float)RGB[2];
			    u32aux2=(uint32_t)faux2;
			    if(u32aux2>31)
			    	u32aux2=31;
			}
			else if(RGB[2]==0)
			{
				u32aux2=31;
			}

			u32aux2|=u32aux<<11;
			u32aux2|=u32aux1<<5;

			*((uint16_t*)layerAddressDest+width)= u32aux2;


		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bGrayWorldSquare(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;
	float RGB[3]={0};

    float faux=0;
    float faux1=0;
    float faux2=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);


	IMAGEPROC_16bMeanNormRGB(layerSource,dim,RGB,2);

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=((value1>>11)&0x1F); //red
			u32aux1=((value1>>5)&0x3F);   //green
			u32aux2=(value1&0x1F); //blue

			if(u32aux>0)
			{
			    faux=(float)u32aux*(float)RGB[0];
			    u32aux=(uint32_t)faux;
			    if(u32aux>31)
			    	u32aux=31;
			}
			else if(RGB[0]==0)
			{
				u32aux=31;
			}

			if(u32aux1>0)
			{
			    faux1=(float)u32aux1*(float)RGB[1];
			    u32aux1=(uint32_t)faux1;
			    if(u32aux1>63)
			    	u32aux1=63;
			}
			else if(RGB[1]==0)
			{
				u32aux1=63;
			}

			if(u32aux2>0)
			{
			    faux2=(float)u32aux2*(float)RGB[2];
			    u32aux2=(uint32_t)faux2;
			    if(u32aux2>31)
			    	u32aux2=31;
			}
			else if(RGB[2]==0)
			{
				u32aux2=31;
			}

			u32aux2|=u32aux<<11;
			u32aux2|=u32aux1<<5;

			*((uint16_t*)layerAddressDest+width)= u32aux2;


		}
		layerAddressSource+=layerSourceWidthTotal<<1;
		layerAddressDest+=layerDestWidthTotal<<1;
	}
	return 1;
}

uint32_t IMAGEPROC_16bMaxRGB(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim, float* RGB,uint32_t norm)
{

	int32_t width=0,height=0,heightSource=0;

    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;

    uint32_t rojoMax = 0;
    uint32_t verdeMax = 0;
    uint32_t azulMax = 0;
    uint32_t Max = 0;
    float frojoMax = 0;
    float fverdeMax = 0;
    float fazulMax = 0;
    float fMax = 0;


	RGB[0]=0;
	RGB[1]=0;
	RGB[2]=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimY0=dim.Y[0];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=((value1&0x1F)+1)<<1; //blue
			u32aux1=(((value1>>11)&0x1F)+1)<<1; //red
			u32aux2=((value1>>5)&0x3F)+1;   //green

			if(u32aux1>rojoMax)
				rojoMax=u32aux1;

			if(u32aux2>verdeMax)
				verdeMax=u32aux2;

			if(u32aux>azulMax)
				azulMax=u32aux;
		}

		if((rojoMax==0x64)&&(azulMax==0x64)&& (verdeMax==0x64))
			break;
		layerAddressSource+=layerSourceWidthTotal<<1;
	}

	if(norm==0)
	{

		Max=rojoMax+verdeMax+azulMax;
		Max/=3;

		frojoMax=(float)Max/(float)rojoMax;
		fverdeMax=(float)Max/(float)verdeMax;
		fazulMax=(float)Max/(float)azulMax;
	}
	else if(norm==1)
	{
		Max=rojoMax;
		if(verdeMax>Max)
			Max=verdeMax;
		if(azulMax>Max)
			Max=azulMax;

		frojoMax=(float)Max/(float)rojoMax;
		fverdeMax=(float)Max/(float)verdeMax;
		fazulMax=(float)Max/(float)azulMax;

	}
	else if(norm==2)
	{
        fMax=sqrt((rojoMax)*(rojoMax)+(verdeMax)*(verdeMax)+(azulMax)*(azulMax));
        frojoMax=(float)(rojoMax)/(float)fMax;
        fverdeMax=(float)(verdeMax)/(float)fMax;
        fazulMax=(float)(azulMax)/(float)fMax;


        fMax=frojoMax;
		if(fverdeMax>fMax)
			fMax=fverdeMax;
		if(fazulMax>fMax)
			fMax=fazulMax;


		frojoMax=(float)fMax/(float)frojoMax;
		fverdeMax=(float)fMax/(float)fverdeMax;
		fazulMax=(float)fMax/(float)fazulMax;

	}
	else
	{

		frojoMax=64.0/(float)rojoMax;
		fverdeMax=64.0/(float)verdeMax;
		fazulMax=64.0/(float)azulMax;
	}

	RGB[0]=frojoMax;
	RGB[1]=fverdeMax;
	RGB[2]=fazulMax;

	return 1;
}



uint32_t IMAGEPROC_16bMeanRGB(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim, uint32_t* RGB)
{

	int32_t width=0,height=0,heightSource=0;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;

    uint64_t rojoMean = 0;
    uint64_t verdeMean = 0;
    uint64_t azulMean = 0;


	RGB[0]=0;
	RGB[1]=0;
	RGB[2]=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimY0=dim.Y[0];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=(value1&0x1F); //blue

			u32aux1=((value1>>11)&0x1F); //red

			u32aux2=((value1>>5)&0x3F);   //green

			rojoMean+=u32aux1;
			verdeMean+=u32aux2;
			azulMean+=u32aux;
		}

		layerAddressSource+=layerSourceWidthTotal<<1;
	}
	rojoMean/=(dimHeight*dimWidth);
	verdeMean/=(dimHeight*dimWidth);
	azulMean/=(dimHeight*dimWidth);
	RGB[0]=rojoMean;
	RGB[1]=verdeMean;
	RGB[2]=azulMean;
	return 1;
}


uint32_t IMAGEPROC_16bMeanNormRGB(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim,float* RGB,uint32_t norm)
{

	int32_t width=0,height=0,heightSource=0;
    uint32_t layerAddressSource;
    uint32_t value1 = 0;
    uint32_t u32aux=0;
    uint32_t u32aux1=0;
    uint32_t u32aux2=0;

    uint64_t rojoMean = 0;
    uint64_t verdeMean = 0;
    uint64_t azulMean = 0;

    float frojoMean = 0;
    float fverdeMean = 0;
    float fazulMean = 0;
    uint64_t Mean = 0;
    float fMean = 0;


	RGB[0]=0;
	RGB[1]=0;
	RGB[2]=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimY0=dim.Y[0];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;

	layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{

			value1=*((uint16_t*)layerAddressSource+width);

			u32aux=(value1&0x1F); //blue

			u32aux1=((value1>>11)&0x1F); //red

			u32aux2=((value1>>5)&0x3F);   //green

			rojoMean+=u32aux1;
			verdeMean+=u32aux2;
			azulMean+=u32aux;
		}

		layerAddressSource+=layerSourceWidthTotal<<1;
	}
	rojoMean/=(dimHeight*dimWidth);
	rojoMean<<=1;
	verdeMean/=(dimHeight*dimWidth);
	azulMean/=(dimHeight*dimWidth);
	azulMean<<=1;

	if(norm==0)
	{

		Mean=rojoMean+verdeMean+azulMean;
		Mean/=3;

		frojoMean=(float)Mean/(float)rojoMean;
		fverdeMean=(float)Mean/(float)verdeMean;
		fazulMean=(float)Mean/(float)azulMean;
	}
	if(norm==1)
	{
		Mean=rojoMean;
		if(verdeMean>Mean)
			Mean=verdeMean;
		if(azulMean>Mean)
			Mean=azulMean;

		frojoMean=(float)Mean/(float)rojoMean;
		fverdeMean=(float)Mean/(float)verdeMean;
		fazulMean=(float)Mean/(float)azulMean;

	}
	if(norm==2)
	{
        fMean=sqrt((rojoMean)*(rojoMean)+(verdeMean)*(verdeMean)+(azulMean)*(azulMean));
        frojoMean=(float)(rojoMean)/(float)fMean;
        fverdeMean=(float)(verdeMean)/(float)fMean;
        fazulMean=(float)(azulMean)/(float)fMean;


        fMean=frojoMean;
		if(fverdeMean>fMean)
			fMean=fverdeMean;
		if(fazulMean>fMean)
			fMean=fazulMean;


		frojoMean=(float)fMean/(float)frojoMean;
		fverdeMean=(float)fMean/(float)fverdeMean;
		fazulMean=(float)fMean/(float)fazulMean;

	}
	RGB[0]=frojoMean;
	RGB[1]=fverdeMean;
	RGB[2]=fazulMean;
	return 1;
}

#define CALL_LabelComponent(xs,ys,xd,yd,returnLabel) { STACK[SP] = xs; STACK[SP+1] = ys; STACK[SP+2] = xd; STACK[SP+3] = yd; STACK[SP+4] = returnLabel; SP += 5; goto START; }
#define RETURN { SP -= 5;                \
                 switch (STACK[SP+4])    \
                 {                       \
                 case 1 : goto RETURN1;  \
                 case 2 : goto RETURN2;  \
                 case 3 : goto RETURN3;  \
                 case 4 : goto RETURN4;  \
                 default: return;        \
                 }	                       \
               }
#define Xsource (STACK[SP-5])
#define Ysource (STACK[SP-4])
#define Xdest (STACK[SP-3])
#define Ydest (STACK[SP-2])

void LabelComponent(uint16_t* STACK, uint32_t width, uint32_t height,  uint32_t dimX0, uint32_t dimY0,  uint32_t dimX1,  uint32_t dimY1,uint32_t input, uint32_t output, int32_t labelNo, uint32_t x, uint32_t y,AREA_TypeDef* area)
{
  STACK[0] = x+dimX0;
  STACK[1] = y+dimY0;
  STACK[2] = x+dimX1;
  STACK[3] = y+dimY1;
  STACK[4] = 0;  /* return - component is labelled */
  int SP   = 5;
  int indexSource;
  int indexDest;

START: /* Recursive routine starts here */

indexSource = Xsource + width*Ysource;
indexDest = Xdest + width*Ydest;
  if (*((uint16_t* )input+indexSource) == 0) RETURN;   /* This pixel is not part of a component */
  if (*((uint16_t* )output+indexDest) != 0) RETURN;   /* This pixel has already been labelled  */
  if(Xdest<area->Xmin)
	  area->Xmin=Xdest;
  if(Xdest>area->Xmax)
	  area->Xmax=Xdest;
  if(Ydest<area->Ymin)
	  area->Ymin=Ydest;
  if(Ydest>area->Ymax)
	  area->Ymax=Ydest;
  area->area++;
  *((uint16_t* )output+indexDest) = labelNo;

  if ((Xsource-dimX0) > 0) CALL_LabelComponent(Xsource-1, Ysource,Xdest-1, Ydest, 1);   /* left  pixel */
RETURN1:

  if ((Xsource-dimX0 )< width-1) CALL_LabelComponent(Xsource+1, Ysource,Xdest+1, Ydest, 2);   /* rigth pixel */
RETURN2:

  if ((Ysource-dimY0)> 0) CALL_LabelComponent(Xsource, Ysource-1,Xdest, Ydest-1, 3);   /* upper pixel */
RETURN3:

  if ((Ysource-dimY0) < height-1) CALL_LabelComponent(Xsource, Ysource+1,Xdest, Ydest+1, 4);   /* lower pixel */
RETURN4:

  RETURN;
}


uint32_t IMAGEPROC_16bConectivity4(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, AREA_TypeDef* area)
{

	int32_t width=0,height=0,heightDest=0;
    uint32_t layerAddressDest;
    uint32_t value=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

	AREA_TypeDef* actualArea=area;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
			*((uint16_t*)layerAddressDest+width)= 0;
		layerAddressDest+=layerDestWidthTotal<<1;
	}


	//uint16_t* STACK = (uint16_t*) malloc(5*sizeof(uint16_t)*(dimWidth*dimHeight + 1));
	uint16_t* STACK = (uint16_t*) malloc(5*sizeof(uint16_t)*(100*100 + 1));

	  int32_t labelNo = 0;

	  for ( height = 0; height < dimHeight; height++)
	  {
	    for ( width = 0; width < dimWidth; width++)
	    {
	      if (PIXs(layerSource,dimX0+width,dimY0+height)== 0) continue;   /* This pixel is not part of a component */
	      if (PIXs(layerDest,dimX1+width,dimY1+height) != 0) continue;   /* This pixel has already been labelled  */
	      /* New component found */
	      actualArea->Xmin=dimX1+width;
	      actualArea->Xmax=dimX1+width;
	      actualArea->Ymin=dimY1+height;
	      actualArea->Ymax=dimY1+height;
	      actualArea->area=1;
	      labelNo++;
	      LabelComponent(STACK, dimWidth, dimHeight,dimX0,dimY0,dimX1,dimY1, layerSource->layerDataAddress,layerDest->layerDataAddress, labelNo, width,height,actualArea);
	      actualArea++;
	    }
	  }
		layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
		for(height=0;height<dimHeight;height++)
		{
			for(width=0;width<dimWidth;width++)
			{
				value=*((uint16_t*)layerAddressDest+width);
				*((uint16_t*)layerAddressDest+width)=value*0x1061 +value*7500;
			}
			layerAddressDest+=layerDestWidthTotal<<1;
		}

	  free(STACK);
return labelNo;
}

#define RETURN8C { SP -= 5;                \
                 switch (STACK[SP+4])    \
                 {                       \
                 case 1 : goto RETURN1;  \
                 case 2 : goto RETURN2;  \
                 case 3 : goto RETURN3;  \
                 case 4 : goto RETURN4;  \
                 case 5 : goto RETURN5;  \
                 case 6 : goto RETURN6;  \
                 case 7 : goto RETURN7;  \
                 case 8 : goto RETURN8;  \
                 default: return;        \
                 }	                       \
               }

void LabelComponent8(uint16_t* STACK, uint32_t width, uint32_t height,  uint32_t dimX0, uint32_t dimY0,  uint32_t dimX1,  uint32_t dimY1,uint32_t input, uint32_t output, int32_t labelNo, uint32_t x, uint32_t y, AREA_TypeDef* area)
{
  STACK[0] = x+dimX0;
  STACK[1] = y+dimY0;
  STACK[2] = x+dimX1;
  STACK[3] = y+dimY1;
  STACK[4] = 0;  /* return - component is labelled */
  int SP   = 5;
  int indexSource;
  int indexDest;

START: /* Recursive routine starts here */

indexSource = Xsource + width*Ysource;
indexDest = Xdest + width*Ydest;
  if (*((uint16_t* )input+indexSource) == 0) RETURN8C;   /* This pixel is not part of a component */
  if (*((uint16_t* )output+indexDest) != 0) RETURN8C;   /* This pixel has already been labelled  */
  if(Xdest<area->Xmin)
	  area->Xmin=Xdest;
  if(Xdest>area->Xmax)
	  area->Xmax=Xdest;
  if(Ydest<area->Ymin)
	  area->Ymin=Ydest;
  if(Ydest>area->Ymax)
	  area->Ymax=Ydest;
  area->area++;
  *((uint16_t* )output+indexDest) = labelNo;

  if ((Xsource-dimX0) > 0) CALL_LabelComponent(Xsource-1, Ysource,Xdest-1, Ydest, 1);   /* left  pixel */
RETURN1:

  if ((Xsource-dimX0 )< width-1) CALL_LabelComponent(Xsource+1, Ysource,Xdest+1, Ydest, 2);   /* rigth pixel */
RETURN2:

  if ((Ysource-dimY0)> 0) CALL_LabelComponent(Xsource, Ysource-1,Xdest, Ydest-1, 3);   /* upper pixel */
RETURN3:

  if ((Ysource-dimY0) < height-1) CALL_LabelComponent(Xsource, Ysource+1,Xdest, Ydest+1, 4);   /* lower pixel */
RETURN4:

if (((Xsource-dimX0) > 0)&& ((Ysource-dimY0) > 0)) CALL_LabelComponent(Xsource-1, Ysource-1,Xdest-1, Ydest-1, 5);   /* left  pixel */
RETURN5:

if (((Xsource-dimX0) < width-1)&& ((Ysource-dimY0) > 0)) CALL_LabelComponent(Xsource+1, Ysource-1,Xdest+1, Ydest-1, 6);   /* left  pixel */
RETURN6:

if (((Xsource-dimX0) > 0)&& ((Ysource-dimY0)< height-1)) CALL_LabelComponent(Xsource-1, Ysource+1,Xdest-1, Ydest+1, 7);   /* left  pixel */
RETURN7:

if (((Xsource-dimX0) < width-1)&& ((Ysource-dimY0) < height-1)) CALL_LabelComponent(Xsource+1, Ysource+1,Xdest+1, Ydest+1, 8);   /* left  pixel */
RETURN8:

  RETURN8C;
}


uint32_t IMAGEPROC_16bConectivity8(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, AREA_TypeDef* area)
{

	int32_t width=0,height=0,heightDest=0;
    uint32_t layerAddressDest;
    uint32_t value=0;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

	AREA_TypeDef* actualArea=area;
    if((layerSource->variableType != VARIABLETYPE_USHORT)
			|| (layerDest->variableType != VARIABLETYPE_USHORT))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;

	heightDest=(dimY1)*layerDestWidthTotal+dimX1;

	layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
			*((uint16_t*)layerAddressDest+width)= 0;
		layerAddressDest+=layerDestWidthTotal<<1;
	}


	uint16_t* STACK = (uint16_t*) malloc(5*sizeof(uint16_t)*(dimWidth*dimHeight + 1));

	  int32_t labelNo = 0;

	  for ( height = 0; height < dimHeight; height++)
	  {
	    for ( width = 0; width < dimWidth; width++)
	    {
	      if (PIXs(layerSource,dimX0+width,dimY0+height)== 0) continue;   /* This pixel is not part of a component */
	      if (PIXs(layerDest,dimX1+width,dimY1+height) != 0) continue;   /* This pixel has already been labelled  */
	      /* New component found */
	      actualArea->Xmin=dimX1+width;
	      actualArea->Xmax=dimX1+width;
	      actualArea->Ymin=dimY1+height;
	      actualArea->Ymax=dimY1+height;
	      actualArea->area=1;
	      labelNo++;
	      LabelComponent8(STACK, dimWidth, dimHeight,dimX0,dimY0,dimX1,dimY1, layerSource->layerDataAddress,layerDest->layerDataAddress, labelNo, width,height,actualArea);
	      actualArea++;
	    }
	  }
		layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
		for(height=0;height<dimHeight;height++)
		{
			for(width=0;width<dimWidth;width++)
			{
				value=*((uint16_t*)layerAddressDest+width);
				*((uint16_t*)layerAddressDest+width)=value*0x1061 +value*7500;
			}
			layerAddressDest+=layerDestWidthTotal<<1;
		}

	  free(STACK);
return labelNo;
}


//

uint32_t IMAGEPROC_Rotation90Degree(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;

	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceWidthTotal2=layerSource->layerWidthTotal<<1;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;
	uint32_t layerDestWidthTotal2=layerDest->layerWidthTotal<<1;
	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if(layerSource->variableType != layerDest->variableType )
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimHeight+ dimX1)>layerDestWidthTotal)
		dimHeight= layerDestWidthTotal- dimX1;
	if((dimWidth+ dimY1)>layerDestHeightTotal)
		dimWidth= layerDestHeightTotal- dimY1;

	if(layerSource->variableType == VARIABLETYPE_UCHAR)
	{
		for(height=0; height<dimHeight;height++ )
		{
			for(width=0;width<dimWidth;width++)
			{
				PIXc(layerDest,dimX1+height,dimY1+width) = PIXc(layerSource,dimX0+width,dimY0+height);
			}
		}
	}
	else
	{
		heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
		heightDest=(dimY1)*layerDestWidthTotal+dimX1;
		layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
		for(height=0; height<dimHeight;height++ )
		{
			layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
			for(width=0;width<dimWidth;width++)
			{

			   *((uint16_t*)layerAddressDest)=*((uint16_t*)layerAddressSource+width);
				layerAddressDest+=layerDestWidthTotal2;

			}
			layerAddressSource+=layerSourceWidthTotal2;
			heightDest++;
		}
	}
	return 1;


}

//TOdO DMA
uint32_t IMAGEPROC_Flip(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t k;
	int32_t height=0,heightSource=0,heightDest=0;;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;


	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if(layerSource->variableType != layerDest->variableType )
      		return 0;


	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;
	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;

	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	k=dimHeight-1;
	if(layerSource->variableType == VARIABLETYPE_UCHAR)
	{
		DMA2_u8Stream0_Init();
		for(height=0; height<dimHeight;height++ )
		{
			DMA2_Mem2Mem((uint32_t)(layerSource->layerDataAddress+((height+dimY0)*layerSourceWidthTotal+dimX0)),
						(uint32_t)(layerDest->layerDataAddress+((k+dimY1)*layerDestWidthTotal+dimX1)),dimWidth);
			--k;
		}
	}
	else
	{

		heightSource=(dimY0)*layerSourceWidthTotal+dimX0;
		heightDest=(k+dimY1)*layerDestWidthTotal+dimX1;
		layerAddressSource=layerSource->layerDataAddress+(heightSource<<1);
		layerAddressDest=layerDest->layerDataAddress+(heightDest<<1);
		DMA2_u16Stream0_Init();

		for(height=dimHeight-1; height>=0;height-- )
		{
			DMA2_Mem2Mem((uint32_t)(layerAddressSource),
							(uint32_t)(layerAddressDest),dimWidth);
			layerAddressSource+=layerSourceWidthTotal<<1;
			layerAddressDest-=layerDestWidthTotal<<1;

		}
	}
	return 1;


}




uint32_t IMAGEPROC_Histograma(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim,uint32_t Hist[256])
{
	uint32_t width=0,height=0,heightSource=0,i=0,aux=0;

    uint32_t layerAddressSource;

	uint32_t dimX0=dim.X[0];
	uint32_t dimY0=dim.Y[0];
	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;


	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_UCHAR))
    		return 1;
	if(dimX0>layerSourceWidthTotal)
		return 	1;

	if(dimY0>layerSourceHeightTotal)
		return 1;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);

	for(i=0;i<256;i++)
		Hist[i]=0;

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			aux=*((uint8_t*)layerAddressSource+width);
			Hist[aux]++;
		}
		layerAddressSource+=layerSourceWidthTotal;
	}
	return 0;
}




uint32_t IMAGEPROC_HistogramaNorm(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim,float Hist[256])
{
	uint32_t width=0,height=0,heightSource=0,i=0,aux=0;
	uint32_t sumatoria=0, iHist[256];

    uint32_t layerAddressSource;

	uint32_t dimX0=dim.X[0];
	uint32_t dimY0=dim.Y[0];
	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;


	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;
    if((layerSource->variableType != VARIABLETYPE_UCHAR))
    		return 1;
	if(dimX0>layerSourceWidthTotal)
		return 1;

	if(dimY0>layerSourceHeightTotal)
		return 1;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;



	heightSource=(dimY0)*layerSourceWidthTotal+dimX0;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);
	sumatoria=dimHeight*dimWidth;
	for(i=0;i<256;i++)
		iHist[i]=0;

	for(height=0;height<dimHeight;height++)
	{
		for(width=0;width<dimWidth;width++)
		{
			aux=*((uint8_t*)layerAddressSource+width);
			iHist[aux]++;
		}
		layerAddressSource+=layerSourceWidthTotal;
	}

	for(i=0;i<256;i++)
		Hist[i]=(float)iHist[i]/(float)sumatoria;

	return 0;
}


uint32_t IMAGEPROC_LBPU(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim)
{

	int32_t width=0,height=0,heightSource=0,heightDest=0;

    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t aux1 = 0;
    uint32_t aux = 0;
    uint32_t i = 0;
    uint32_t j = 0;
    uint32_t LBPUvalue=0;
    uint8_t subImage[9];
	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;


    if((layerSource->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR))
    		return 0;
	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


    heightSource=(dimY0+1)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1+1)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	for(height=1;height<dimHeight-1;height++)
	{
		for(width=1;width<dimWidth-1;width++)
		{
			aux1=*((uint8_t*)layerAddressSource+width);
			aux=*((uint8_t*)layerAddressSource-layerSourceWidthTotal+width-1);
			if(aux>=aux1)
				subImage[0]=1;
			else
				subImage[0]=0;

			aux=*((uint8_t*)layerAddressSource-layerSourceWidthTotal+width);
			if(aux>=aux1)
				subImage[1]=1;
			else
				subImage[1]=0;

			aux=*((uint8_t*)layerAddressSource-layerSourceWidthTotal+width+1);
			if(aux>=aux1)
				subImage[2]=1;
			else
				subImage[2]=0;

			aux=*((uint8_t*)layerAddressSource+width-1);
			if(aux>=aux1)
				subImage[3]=1;
			else
				subImage[3]=0;

			aux=*((uint8_t*)layerAddressSource+width+1);
			if(aux>=aux1)
				subImage[5]=1;
			else
				subImage[5]=0;

			aux=*((uint8_t*)layerAddressSource+layerSourceWidthTotal+width-1);
			if(aux>=aux1)
				subImage[6]=1;
			else
				subImage[6]=0;

			aux=*((uint8_t*)layerAddressSource+layerSourceWidthTotal+width);
			if(aux>=aux1)
				subImage[7]=1;
			else
				subImage[7]=0;

			aux=*((uint8_t*)layerAddressSource+layerSourceWidthTotal+width+1);
			if(aux>=aux1)
				subImage[8]=1;
			else
				subImage[8]=0;

			subImage[4]=0;
			LBPUvalue=58;
			for(j=0;j<58;j++)
			{
				for(i=0;i<9;i++)
				{
					if(LBPU[j][i]==subImage[i])
						LBPUvalue=j;
					else
					{
						LBPUvalue=58;
						break;
					}
				}
				if(LBPUvalue==j)
				{
					break;
				}
			}

			LBPUvalue*=4;



		    *((uint8_t*)layerAddressDest+width)= LBPUvalue;
		}
		layerAddressSource+=layerSourceWidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	return 1;
}




uint32_t IMAGEPROC_Convolucion(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_TFT_TypeDef *Kernel,LTDC_DIMENSIONS_TypeDef dim )
{

	int32_t width=0,height=0,widthKernel=0,heightKernel=0,heightSource=0,heightDest=0,heightKernelCenter=0;
	LTDC_DIMENSIONS_TypeDef dimKernel;
	LTDC_TFT_TypeDef image;
    uint32_t layerAddressDest;
    uint32_t layerAddressSource;
    uint32_t AddressKernel;
    uint32_t aux1 = 0;
    uint32_t aux = 0;
    uint32_t sumatoria = 0;
    uint32_t division = 0;
    uint32_t i = 0;
    uint32_t j = 0;
	uint32_t dimX0=dim.X[0];
	uint32_t dimX1=dim.X[1];
	uint32_t dimY0=dim.Y[0];
	uint32_t dimY1=dim.Y[1];

	uint32_t layerSourceWidthTotal=layerSource->layerWidthTotal;
	uint32_t layerSourceHeightTotal=layerSource->layerHeightTotal;

	uint32_t layerDestWidthTotal=layerDest->layerWidthTotal;
	uint32_t layerDestHeightTotal=layerDest->layerHeightTotal;

	uint32_t KernelWidthTotal=Kernel->layerWidthTotal;
	uint32_t KernelHeightTotal=Kernel->layerHeightTotal;

	uint32_t KernelWidthTotal_M=Kernel->layerWidthTotal>>1;
	uint32_t KernelHeightTotal_M=Kernel->layerHeightTotal>>1;

	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

	uint8_t* kernelAux = (uint8_t*) malloc(sizeof(uint8_t)*(KernelWidthTotal*KernelHeightTotal+1));
    if((layerSource->variableType != VARIABLETYPE_UCHAR)
			|| (layerDest->variableType != VARIABLETYPE_UCHAR)
			|| (Kernel->variableType != VARIABLETYPE_UCHAR))
    		return 0;
    if(((Kernel->layerWidthTotal&1)==0)|| ((Kernel->layerHeightTotal&1)==0))
    {
    	return 0;
    }

	if(dimX0>layerSourceWidthTotal)
		return 0;
	if(dimX1>layerDestWidthTotal)
		return 0;

	if(dimY0>layerSourceHeightTotal)
		return 0;
	if(dimY1>layerDestHeightTotal)
		return 0;

	if((dimWidth+ dimX0)>layerSourceWidthTotal)
		dimWidth= layerSourceWidthTotal- dimX0;
	if((dimHeight+ dimY0)>layerSourceHeightTotal)
		dimHeight= layerSourceHeightTotal- dimY0;


	if((dimWidth+ dimX1)>layerDestWidthTotal)
		dimWidth= layerDestWidthTotal- dimX1;
	if((dimHeight+ dimY1)>layerDestHeightTotal)
		dimHeight= layerDestHeightTotal- dimY1;


	dimKernel.X[0]=0;
	dimKernel.X[1]=0;
	dimKernel.Y[0]=0;
	dimKernel.Y[1]=0;
	dimKernel.width=Kernel->layerWidthTotal;
	dimKernel.height=Kernel->layerHeightTotal;

	image.layerType=LAYER_TYPE_IMAGE_NOHEADER;
	image.layerDataAddress=(uint32_t)kernelAux;
	image.layerXInit=0;
	image.layerYInit=0;
	image.layerBGXInit=0;
	image.layerBGYInit=0;
	image.layerWidth=Kernel->layerWidthTotal;
	image.layerHeight=Kernel->layerHeightTotal;
	image.layerWidthTotal=Kernel->layerWidthTotal;
	image.layerHeightTotal=Kernel->layerHeightTotal;
	image.variableType = VARIABLETYPE_UCHAR;

	IMAGEPROC_Rotation90Degree(Kernel,&image,dimKernel);
	IMAGEPROC_Flip(&image,Kernel,dimKernel);
	IMAGEPROC_Rotation90Degree(Kernel,&image,dimKernel);
	IMAGEPROC_Flip(&image,Kernel,dimKernel);

	for (i=0; i<KernelHeightTotal; i++)
		for (j=0; j<KernelWidthTotal;j++)
			division+=*((uint8_t*)Kernel->layerDataAddress+(KernelWidthTotal*i)+(j));

	if(division==0)
		return 0;
	heightKernelCenter=(KernelHeightTotal_M)*KernelHeightTotal+KernelWidthTotal_M;
    heightSource=(dimY0+KernelHeightTotal_M)*layerSourceWidthTotal+dimX0;
	heightDest=(dimY1+KernelHeightTotal_M)*layerDestWidthTotal+dimX1;

	layerAddressSource=layerSource->layerDataAddress+(heightSource);
	layerAddressDest=layerDest->layerDataAddress+(heightDest);
	AddressKernel=Kernel->layerDataAddress+heightKernelCenter;
	for(height=KernelHeightTotal_M;height<(dimHeight-KernelHeightTotal_M);height++)
	{
		for(width=KernelWidthTotal_M;width<(dimWidth-KernelWidthTotal_M);width++)
		{
			sumatoria=0;
			for(heightKernel=-(int32_t)KernelHeightTotal_M; heightKernel<=(int32_t)KernelHeightTotal_M;heightKernel++)
			{
				for(widthKernel=-(int32_t)KernelWidthTotal_M; widthKernel<=(int32_t)KernelWidthTotal_M;widthKernel++)
				{

				aux1=*((uint8_t*)AddressKernel+(KernelWidthTotal*heightKernel)+(widthKernel));
				aux=*((uint8_t*)layerAddressSource+(layerSourceWidthTotal*heightKernel)+width+(widthKernel));
				sumatoria+=aux1*aux;

				}
			}
			sumatoria/=division;
			if(sumatoria>255)
				sumatoria=255;
			*((uint8_t*)layerAddressDest+width)= sumatoria;
		}
		layerAddressSource+=layerSourceWidthTotal;
		layerAddressDest+=layerDestWidthTotal;
	}
	free(kernelAux);
	return 1;
}


// Todo Iam Here
/*



void PROC_Sumatoria(sImagen *ImRGB, sImagen *ImGris,sImagen *ImSalida ,unsigned char umbral)
{
	short i;
	unsigned long rojoRGB = 0;
	unsigned long verdeRGB = 0;
	unsigned long azulRGB = 0;
	unsigned long rojoGris = 0;
	unsigned long verdeGris = 0;
	unsigned long azulGris = 0;
	unsigned long rojo = 0;
	unsigned long verde = 0;
	unsigned long azul = 0;
	for(i=0;i<ImSalida->alto*ImSalida->ancho;i++)
	{
		rojoRGB = (*(((unsigned short*)ImRGB->datos)+i)>>11 & 0x1F); //(max 31)
		verdeRGB = (*(((unsigned short*)ImRGB->datos)+i)>>5 & 0x3F); //(max 63)
		azulRGB = (*(((unsigned short*)ImRGB->datos)+i) & 0x1f);//(max 31)

	    rojoGris = *((unsigned char*)ImGris+i) *0x1F; //(max 31)
	    rojoGris /= umbral;
	    rojoGris&= 0x1F;
	    //rojo<<=11;

	    verdeGris = *((unsigned char*)ImGris+i) *0x3F; //(max 31)
	    verdeGris /= umbral;
	    verdeGris&= 0x3F;
	    //verde<<=5;


	    azulGris =rojoGris;

	    rojo=rojoGris+rojoRGB;
	    if(rojo>0x1F)
	    	rojo=0x1F;

	    rojo<<=11;

	    verde=verdeGris+verdeRGB;
	    if(verde>0x3F)
	    	verde=0x3F;
	    verde<<=5;
	    azul=azulGris+azulRGB;
	    if(azul>0x1F)
	    	azul=0x1F;

	    *(((unsigned short*)ImSalida->datos)+i)=rojo|verde|azul;
	}
}


void PROC_RestaGrises(sImagen *ImEntrada1, sImagen *ImEntrada2,sImagen *ImSalida ,unsigned char umbral)
{
	short x,y;

	for(y=0;y<ImSalida->alto;y++)
		for(x=0;x<ImSalida->ancho;x++)
		{
			if(*((ImEntrada2->datos)+x+((y)*ImEntrada2->ancho)) >= *(ImEntrada1->datos+x+(y*ImEntrada1->ancho)))
			{
				*(ImSalida->datos+x+(y*ImSalida->ancho))=*((ImEntrada2->datos)+x+((y)*ImEntrada2->ancho))-
				*(ImEntrada1->datos+x+(y*ImEntrada1->ancho));
			}
			else
				*(ImSalida->datos+x+(y*ImSalida->ancho))=0;
		}
}



void PROC_segRGB(sImagen* imagenEntrada,  sImagen *imagenSalida,unsigned char canal, unsigned char porc)
{
	int i=0;
	long relacion1,relacion2,comp,comp2,comp1;
	long rojo,verde,azul;
	for(i=0;i<imagenSalida->alto*imagenSalida->ancho;i++)
	{
	    rojo = *((unsigned short*)imagenEntrada->datos+i);
	    rojo>>=11;
	    rojo&= 0x1F;
	    rojo*= 255;
	    rojo/=0x1F;

	    verde = *((unsigned short*)imagenEntrada->datos+i);
	    verde>>=6;
	    verde&= 0x1F;
	    verde*=255;
	    verde/=0x1F;

	    azul = *((unsigned short*)imagenEntrada->datos+i);
	    azul&= 0x1f;
	    azul*=255;
	    azul/=0x1F;

	   if(canal==0)
	   {
		   relacion1=verde;
		   relacion2=azul;
		   comp=comp1=rojo;

	   }
	   else if (canal==1)
	   {
		   relacion1=rojo;
		   relacion2=azul;
		   comp=comp1=verde;
	   }
	   else
	   {
		   relacion1=verde;
		   relacion2=rojo;
		   comp=comp1=azul;
	   }

	   comp*=65;
	   comp/=100;

	   comp2*=50;
	   comp2/=100;
	   if(((relacion1<comp) && (relacion2<comp))||((relacion1<comp2) && (relacion2<comp))||((relacion1<comp) && (relacion2<comp2)))
		   *((unsigned short*)imagenSalida->datos+i)=*((unsigned short*)imagenEntrada->datos+i);
	   else
		   *((unsigned short*)imagenSalida->datos+i)=0;
	}
}

void PROC_Resta(sImagen *ImRGB, sImagen *ImGris,sImagen *ImSalida,unsigned char modo,unsigned char umbral)
{
	short i;
	unsigned long rojoRGB = 0;
	unsigned long verdeRGB = 0;
	unsigned long azulRGB = 0;
	unsigned long rojoGris = 0;
	unsigned long verdeGris = 0;
	unsigned long azulGris = 0;
	unsigned long rojo = 0;
	unsigned long verde = 0;
	unsigned long azul = 0;
	for(i=0;i<ImSalida->alto*ImSalida->ancho;i++)
	{
		rojoRGB = (*(((unsigned short*)ImRGB->datos)+i)>>11 & 0x1F); //(max 31)
		verdeRGB = (*(((unsigned short*)ImRGB->datos)+i)>>5 & 0x3F); //(max 63)
		azulRGB = (*(((unsigned short*)ImRGB->datos)+i) & 0x1f);//(max 31)

	    rojoGris = *((unsigned char*)ImGris+i) *0x1F; //(max 31)
	    rojoGris /= umbral;
	    rojoGris&= 0x1F;
	    //rojo<<=11;

	    verdeGris = *((unsigned char*)ImGris+i) *0x3F; //(max 31)
	    verdeGris /= umbral;
	    verdeGris&= 0x3F;
	    //verde<<=5;


	    azulGris =rojoGris;


	    if(modo==0)
	    {
	    	if(rojoGris>rojoRGB)
	    		rojo=rojoGris-rojoRGB;
	    	else
	    		rojo=0;

	    	if(verdeGris>verdeRGB)
	    		verde=verdeGris-verdeRGB;
	    	else
	    		verde=0;

	    	if(azulGris>azulRGB)
	    		azul=azulGris-azulRGB;
	    	else
	    		azul=0;

	    }
	    else
	    {
	    	if(rojoGris<rojoRGB)
	    		rojo=rojoRGB-rojoGris;
	    	else
	    		rojo=0;

	    	if(verdeGris<verdeRGB)
	    		verde=verdeRGB-verdeGris;
	    	else
	    		verde=0;

	    	if(azulGris<azulRGB)
	    		azul=azulRGB-azulGris;
	    	else
	    		azul=0;

	    }
	    rojo<<=11;
	    verde<<=5;
	    *(((unsigned short*)ImSalida->datos)+i)=rojo|verde|azul;
	}
}


void PROC_RestaRGB(sImagen *ImEntrada1, sImagen *ImEntrada2,sImagen *ImSalida )
{
	int i=0;

    unsigned long rojo1 = 0;
    unsigned long verde1 = 0;
    unsigned long azul1 = 0;
    unsigned long rojo2 = 0;
    unsigned long verde2 = 0;
    unsigned long azul2 = 0;
	for(i=0;i<ImEntrada1->ancho*ImEntrada1->alto;i++)
	{

	    rojo1 = *(((unsigned short*)ImEntrada1->datos)+i)>>11; //(max 31)
	    rojo1 &= 0x1F;

	    verde1 = *(((unsigned short*)ImEntrada1->datos)+i)>>5; //(max 31)
	    verde1 &= 0x3F;


	    azul1 = *(((unsigned short*)ImEntrada1->datos)+i); //(max 31)
	    azul1&= 0x001f;


	    rojo2 = *(((unsigned short*)ImEntrada2->datos)+i)>>11; //(max 31)
	    rojo2 &= 0x1F;

	    verde2 = *(((unsigned short*)ImEntrada2->datos)+i)>>5; //(max 31)
	    verde2 &= 0x3F;


	    azul2 = *(((unsigned short*)ImEntrada2->datos)+i); //(max 31)
	    azul2&= 0x1f;

	    if(rojo2>rojo1)
	    	rojo2-=rojo1;
	    else
	    	rojo2=0;

	    if(verde2>verde1)
	    	verde2-=verde1;
	    else
	    	verde2=0;

	    if(azul2>azul1)
	    	azul2-=azul1;
	    else
	    	azul2=0;

	    rojo1<<=11;
	    verde1<<=5;

	    *(((unsigned short*)ImEntrada2->datos)+i)= (rojo2|verde2|azul2);
	}


}

*/





uint32_t IMAGEPROC_GammaNoise(LTDC_TFT_TypeDef *layer,NOISE_TypeDef propierties,LTDC_DIMENSIONS_TypeDef dim)
{
	int32_t ruidoInt,i,width,height;
	float rx,ry,ruidoFloat,A,imagen1, theta;


	uint32_t layerWidthTotal=layer->layerWidthTotal;

	uint32_t layerHeightTotal=layer->layerHeightTotal;
	uint32_t dimXInit=dim.XInit;
	uint32_t dimYInit=dim.YInit;


	uint32_t dimWidth=dim.width;
	uint32_t dimHeight=dim.height;

    if(layer->variableType != VARIABLETYPE_UCHAR )
      		return 0;


	if(dimXInit>layerWidthTotal)
		return 0;
	if(dimYInit>layerHeightTotal)
		return 0;

	if(propierties.alfa<1)
		return 0;

	if((dimWidth+ dimXInit)>layerWidthTotal)
		dimWidth= layerWidthTotal- dimXInit;
	if((dimHeight+ dimYInit)>layerHeightTotal)
		dimHeight= layerHeightTotal- dimYInit;




	A=sqrt(propierties.varianza/propierties.alfa)/2;
	for(height=dimYInit;height<dimHeight;height++)
		for(width=dimXInit;width<dimWidth;width++)
		{
			imagen1=0;
			for(i=1;i<=propierties.alfa;i++)
			{
				ruidoFloat=sqrtf(-2*A*log(1-(float)Random15()/32767.1));
				theta=(float)Random15()*1.9175345E-4 - 3.14159265;
				rx=ruidoFloat*cosf(theta);
				ry=ruidoFloat*sinf(theta);
				ruidoFloat=rx*rx+ry*ry;
				//ruidoFloat=2*ruidoFloat*ruidoFloat;
				imagen1+=ruidoFloat;
			}
			ruidoInt=(int16_t)(imagen1+.5);
			ruidoInt*=propierties.umbral;
			ruidoInt/=0xFF;
			if(ruidoInt>propierties.umbral)
				ruidoInt=propierties.umbral;
			if(ruidoInt<0)
				ruidoInt=0;
			PIXc(layer,width,height)=ruidoInt;
		}
	return 1;
}

//filtros adaptivos

/*
void PROC_FiltroMMSE_RGB(sImagen *ImEntrada, sImagen *ImSalida, float varianzaRuido, unsigned char n  )
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroMMSE(ImInter[0],ImInter[3],varianzaRuido,n,0x1F);
	PROC_FiltroMMSE(ImInter[1],ImInter[0],varianzaRuido,n,0x3F);
	PROC_FiltroMMSE(ImInter[2],ImInter[1],varianzaRuido,n,0x1F);

	free(ImInter[2]->datos);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroMMSE(sImagen *ImEntrada, sImagen *ImSalida, float varianzaRuido, unsigned char n ,unsigned char umbral)
{
 int x,y,x1,y1,g;
 long total,sumatoria,sumatoria1,R;
 float fSecundaria,fVarianza,fMedia;
 long dato=0;
 R=ImEntrada->ancho;
 if((n%2)==0 || n>11)
	 n=5;//tamaño filtro

 for(y=n/2; y<(ImEntrada->alto)-(n/2);y++)
	 for(x=n/2; x<ImEntrada->ancho-(n/2);x++)
	 {

		 sumatoria=0;
		 sumatoria1=0;
		 total=0;
		 for(y1=-(n/2); y1<=(n/2); y1++)
			 for(x1=-(n/2);x1<=(n/2);x1++)
			 {
				 dato=(*(ImEntrada->datos+x+x1+((y+y1)*R))*0xFF);
				 dato/=umbral;
				 sumatoria+=dato;
				 sumatoria1+=dato*dato;
				total++;
			 }
		 fSecundaria=(float)sumatoria1/total;
		 fMedia=(float)sumatoria/total;
		 fVarianza=fSecundaria-(fMedia*fMedia);

		 fMedia*=umbral;
		 fMedia/=0xFF;
		 if(fVarianza==0.0)
			 g=(int)(fMedia+.5);
		 else
			 g=(int)(((1-(varianzaRuido/fVarianza))*(*(ImEntrada->datos+x+(y*R))))+ ((varianzaRuido/fVarianza)*fMedia) +.5);

		 if(g>umbral)
			 g=umbral;
		 if(g<0)
			 g=0;
		 *(ImSalida->datos+x+(y*R))=g;
	 }
}

void PROC_FiltroDWMTM_RGB(sImagen *ImEntrada, sImagen *ImSalida, float desviacionRuido, float K )
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroDWMTM(ImInter[0],ImInter[3],desviacionRuido,K,0x1F);
	PROC_FiltroDWMTM(ImInter[1],ImInter[0],desviacionRuido,K,0x3F);
	PROC_FiltroDWMTM(ImInter[2],ImInter[1],desviacionRuido,K,0x1F);

	free(ImInter[2]->datos);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroDWMTM(sImagen *ImEntrada, sImagen *ImSalida, float desviacionRuido, float K, unsigned char umbral )
{
 int x,y,x1,y1, filtroMed[9];
 int media;
 int grices,i,j,temporal;
 long total,sumatoria,R;
long dato;
 R=ImEntrada->ancho;
 for(y=2; y<ImEntrada->alto-2;y++)
	 for(x=2; x<ImEntrada->ancho-2;x++)
	 {
		 total=0;
		 for(y1=-1; y1<=1; y1++)
			 for(x1=-1;x1<=1;x1++)
			 {
				 dato=*(ImEntrada->datos+x+x1+((y+y1)*R))*0xFF;
				 dato/=umbral;
				filtroMed[total++]=dato;
			 }
		 for(j=1;j<=8;j++)
		 {
			 temporal=filtroMed[j];
			 i=j-1;
			 while(i>=0 && filtroMed[i]>temporal)
			 {
				 filtroMed[i+1]=filtroMed[i];
				 i=i-1;
			 }
			 filtroMed[i+1]=temporal;
		 }
		 media=filtroMed[4];
		 sumatoria=0;
		 total=0;
		 for(y1=-2; y1<=2; y1++)
		 	for(x1=-2;x1<=2;x1++)
		 	{
		 		grices=*(ImEntrada->datos+x+x1+((y+y1)*R))*0xFF;
		 		grices/=umbral;
		 		if((grices>=(media-(K*desviacionRuido))) && (grices<=(media+(K*desviacionRuido))) )
		 		{
		 			sumatoria=sumatoria+grices;
		 			total++;
		 		}
		 	}

		dato=(unsigned char)((float)sumatoria/(float)total);
		dato*=umbral;
		dato/=0xFF;
		*(ImSalida->datos+x+(y*R))=dato;
	 }
}

//codificacion y compresion

short PROC_Cadena(sImagen *ImEntrada,unsigned short x,unsigned short y,
				  unsigned char* codificacion,unsigned char umbral,unsigned short maximo)
{
	short tamano=1;

	while(tamano<maximo)
	{
		PIX(ImEntrada,x,y)=0;

		if(PIX(ImEntrada,x+1,y)>umbral)
		{
			*(codificacion++)=0;
			++x;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x+1,y-1)>umbral)
		{
			*(codificacion++)=1;
			++x;
			--y;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x,y-1)>umbral)
		{
			*(codificacion++)=2;
			--y;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x-1,y-1)>umbral)
		{
			*(codificacion++)=3;
			--x;
			--y;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x-1,y)>umbral)
		{
			*(codificacion++)=4;
			--x;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x-1,y+1)>umbral)
		{
			*(codificacion++)=5;
			--x;
			++y;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x,y+1)>umbral)
		{
			*(codificacion++)=6;
			++y;
			++tamano;
			continue;
		}

		if(PIX(ImEntrada,x+1,y+1)>umbral)
		{
			*(codificacion++)=7;
			++x;
			++y;
			++tamano;
			continue;
		}
		return tamano;

	}
	return tamano;
}

void PROC_CodificacionHuffman(sImagen *ImEntrada, char* Compresion)
{
	//todo
}

void PROC_RLE (sImagen *ImEntrada,unsigned char* codificacion,unsigned char compresion)
{
	short total,indice;
	unsigned char *Im,enProceso,valor;

	total=ImEntrada->alto*ImEntrada->ancho;
	Im=ImEntrada->datos;
	indice=0;
	if(compresion)
	{
		do{
			valor=*(Im++);
			--total;
			enProceso=1;
			while((valor==*Im)&& total)
			{
				++enProceso;
				++Im;
				--total;
				if(enProceso==255)
					break;
			}
			codificacion[indice++]=enProceso;
			codificacion[indice++]=valor;
		}while(total);
	}
	else
	{
		do
		{
		enProceso=codificacion[indice++];
		valor=codificacion[indice++];
		*Im++=valor;
		while(--enProceso && --total)
			*Im++=valor;
		}while(total);
	}
}



//color

void PROC_Copiar(sImagen *ImEntrada, sImagen *ImSalida,
		unsigned int xIniE,unsigned int yIniE,
		unsigned int xIniS,unsigned int yIniS,
		unsigned int ancho, unsigned int alto)
{
	int x,y,m=0,n=0;

		if(xIniE>ImEntrada->ancho || yIniE>ImEntrada->alto ||
		   xIniS>ImSalida->ancho || yIniS>ImSalida->alto)
				return;

		if((ancho+xIniE)>ImEntrada->ancho)
			ancho=ImEntrada->ancho-xIniE;
		if((alto+yIniE)>ImEntrada->alto)
			alto=ImEntrada->alto-yIniE;
		n=xIniS;
		m=yIniS;
		for(y=yIniE;y<alto+yIniE;++y)
		{
			for(x=xIniE;x<ancho+xIniE;++x)
			{
				if ((ImEntrada->tipo==TIPO_UCHAR) && (ImSalida->tipo==TIPO_UCHAR))
				{
				PIXc(ImSalida,n,m)=PIXc(ImEntrada,x,y);
				}
				else if ((ImEntrada->tipo==TIPO_USHORT) && (ImSalida->tipo==TIPO_USHORT))
				{
				PIXs(ImSalida,n,m)=PIXs(ImEntrada,x,y);
				}
				else if ((ImEntrada->tipo==TIPO_UCHAR) && (ImSalida->tipo==TIPO_USHORT))
				{
					PIXs(ImSalida,n,m)=PIXc(ImEntrada,x,y);
				}
				n+=1;
				if(n>=ImSalida->ancho)
					break;
			}
			m+=1;
			if(m>=ImSalida->alto)
				break;
			n=xIniS;
		}
}








//graficos


void PROC_Animacion(sImagen *ImInicio,sImagen *ImFinal, sImagen *ImSalida,unsigned char *Estado ,unsigned char *Terminado)
{
	long i,total;
	unsigned char *tempS,*tempF;

	if(*Terminado)
		return;
	tempS=ImSalida->datos;
	total=ImInicio->ancho*ImInicio->alto;
	if(*Estado==0)
	{
		for(i=0; i<total;i++)
			*(tempS++)=*(ImInicio->datos+i);
		*Estado=1;
		return;
	}
	++(*Estado);
	if(*Estado==256)
	{
		*Terminado=1;
		return;
	}
	tempF=ImFinal->datos;
	for(i=0;i<total;i++)
	{
		if(*tempS==*tempF)
			continue;
		if(*tempS<*tempF)
		{
			*tempS+=1;
		}
		else
		{
			*tempS-=1;
		}
	}
}

void PROC_Warp(sImagen *ImEntrada,sImagen *ImSalida,unsigned int xIniE,unsigned int yIniE,
		unsigned int xFinE,unsigned int yFinE,unsigned int* xS, unsigned int *yS)

{
	float a,b,c,d,e,f,g,h;
	float x,y,destX,destY;

	a=(float)(-(*xS)+*(xS+1))/(yFinE-yIniE);
	b=(float)(-(*xS)+*(xS+3))/(xFinE-xIniE);
	c=(float)((*xS)-*(xS+1)+*(xS+2)-*(xS+3))/((xFinE-xIniE)*(yFinE-yIniE));
	d=(float)(*xS);
	e=(float)(-(*yS)+*(yS+1))/(xFinE-xIniE);
	f=(float)(-(*yS)+*(yS+3))/(yFinE-yIniE);;
	g=(float)((*yS)-*(yS+1)+*(yS+2)-*(yS+3))/((xFinE-xIniE)*(yFinE-yIniE));
	h=(float)(*yS);

	if(ImEntrada->tipo==TIPO_UCHAR)
	{
	for(y=yIniE;y<yFinE;y+=0.5)
	{
		for(x=xIniE;x<xFinE;x+=0.5)
		{
			destX=a*x+b*y+c*x*y+d;
			destY=e*x+f*y+g*x*y+h;
			PIX(ImSalida,(int)destX,(int)(destY+0.5))=PIX(ImEntrada,(int)(x+0.5),(int)y);
		}
	}
	}
	else
	{
		for(y=yIniE;y<yFinE;y+=0.5)
		{
			for(x=xIniE;x<xFinE;x+=0.5)
			{
				destX=a*x+b*y+c*x*y+d;
				destY=e*x+f*y+g*x*y+h;
				PIXs(ImSalida,(int)destX,(int)(destY+0.5))=PIXs(ImEntrada,(int)(x+0.5),(int)y);
			}
		}
	}
}


void PROC_Zoom(sImagen *ImEntrada,sImagen *ImSalida,unsigned int xIniE,unsigned int yIniE,
		unsigned int xIniS,unsigned int yIniS,unsigned int ancho, unsigned int alto, int zoom)
{
	int x,y,m=0,n=0;

	if(xIniE>ImEntrada->ancho || yIniE>ImEntrada->alto ||
	   xIniS>ImSalida->ancho || yIniS>ImSalida->alto)
			return;

	if((ancho+xIniE)>ImEntrada->ancho)
		ancho=ImEntrada->ancho-xIniE;
	if((alto+yIniE)>ImEntrada->alto)
		alto=ImEntrada->alto-yIniE;
	n=xIniS;
	m=yIniS;
	if(ImEntrada->tipo==TIPO_UCHAR)
	{
	if(zoom)
	{
		for(y=yIniE;y<alto+yIniE;++y)
		{
			for(x=xIniE;x<ancho+xIniE;++x)
			{
				PIX(ImSalida,n,m)=
				PIX(ImSalida,n,m+1)=
				PIX(ImSalida,n+1,m)=
				PIX(ImSalida,n+1,m+1)=
				PIX(ImEntrada,x,y);
				n+=2;
				if(n>=ImSalida->ancho)
					break;
			}
			m+=2;
			if(m>=ImSalida->alto)
				break;
			n=xIniS;
		}
	}
	else
	{

		for(y=yIniE;y<alto+yIniE;y+=2)
		{
			for(x=xIniE;x<ancho+xIniE;x+=2)
			{
				PIX(ImSalida,n,m)=PIX(ImEntrada,x,y);
				++n;
				if(n>=ImSalida->ancho)
					break;
			}
			++m;
			if(m>=ImSalida->alto)
				break;
			n=xIniS;
		}
	}
	}
	else
	{
	if(zoom)
	{
		for(y=yIniE;y<alto+yIniE;++y)
		{
			for(x=xIniE;x<ancho+xIniE;++x)
			{
				PIXs(ImSalida,n,m)=
				PIXs(ImSalida,n,m+1)=
				PIXs(ImSalida,n+1,m)=
				PIXs(ImSalida,n+1,m+1)=
				PIXs(ImEntrada,x,y);
				n+=2;
				if(n>=ImSalida->ancho)
					break;
			}
			m+=2;
			if(m>=ImSalida->alto)
				break;
			n=xIniS;
		}
	}
	else
	{

		for(y=yIniE;y<alto+yIniE;y+=2)
		{
			for(x=xIniE;x<ancho+xIniE;x+=2)
			{
				PIXs(ImSalida,n,m)=PIXs(ImEntrada,x,y);
				++n;
				if(n>=ImSalida->ancho)
					break;
			}
			++m;
			if(m>=ImSalida->alto)
				break;
			n=xIniS;
		}
	}
	}
}





//histograma

void PROC_CorrBrilloRGB(sImagen *ImEntrada, sImagen *ImSalida,short porc)
{

	short brillo1=(porc*0x1F)/100;
	short brillo2=(porc*0x3F)/100;
	sImagen ImInte[3];
	sImagen* ImInter[3];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_CorrBrillo(ImInter[0],ImInter[0],brillo1,0x1F);
	PROC_CorrBrillo(ImInter[1],ImInter[1],brillo2,0x3F);
	PROC_CorrBrillo(ImInter[2],ImInter[2],brillo1,0x1F);

	PROC_Gris3sRGB(ImInter[0],ImInter[1],ImInter[2],ImSalida);

	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_CorrBrillo(sImagen *ImEntrada, sImagen *ImSalida,short brillo,unsigned char umbral )
{
	short x,y,i;
	for(y=0;y<(ImEntrada->alto);y++)
		for(x=0;x<(ImEntrada->ancho);x++)
		{
			i=*((ImEntrada->datos)+x+(y*ImEntrada->ancho))+brillo;
			if(i>umbral)
				i=umbral;
			if(i<0)
				i=0;
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=i;
		}
}

void PROC_CorrContrasteRGB(sImagen *ImEntrada, sImagen *ImSalida,float contraste)
{
	sImagen ImInte[3];
	sImagen* ImInter[3];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_CorrContraste(ImInter[0],ImInter[0],contraste,0x1F);
	PROC_CorrContraste(ImInter[1],ImInter[1],contraste,0x3F);
	PROC_CorrContraste(ImInter[2],ImInter[2],contraste,0x1F);

	PROC_Gris3sRGB(ImInter[0],ImInter[1],ImInter[2],ImSalida);

	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_CorrContraste(sImagen *ImEntrada, sImagen *ImSalida,float contraste,unsigned char umbral )
{
	short x,y,i;
	long sumatoria,j;
	float promedio;
	j=0;
	sumatoria=0;
	for(y=0;y<(ImEntrada->alto);y++)
		for(x=0;x<(ImEntrada->ancho);x++)
		{
			sumatoria+=PIX(ImEntrada,x,y);
			j++;//evita la multiplicacion
		}
	promedio=(float)(sumatoria)/(float)j;
	for(y=0;y<(ImEntrada->alto);y++)
		for(x=0;x<(ImEntrada->ancho);x++)
		{
			i=(contraste*((float)PIX(ImEntrada,x,y)-promedio))+promedio;
			if(i>umbral)
				i=umbral;
			if(i<0)
				i=0;
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=i;
		}
}




void PROC_HistogramaPorcentajeMax(sImagen *ImEntrada, long Hist[256], long long Max,unsigned char umbral)
{
	int x,y,i,aux;
	long sumatoria;
	float iHist[256];
	for(i=0;i<umbral+1;i++)
		iHist[i]=0;
	sumatoria=0;
	for(y=0; y<ImEntrada->alto;y++)
		for(x=0; x<ImEntrada->ancho; x++)
		{
			aux=PIX(ImEntrada,x,y);
			iHist[aux]++;
			sumatoria++;
		}
	for(i=0;i<umbral+1;i++)
	{
		iHist[i]/=(float)sumatoria;
		Hist[i]=(long)(iHist[i]*Max);
	}
}

void PROC_dibujarHistMax(short xPos,short yPos,sImagen *ImEntrada,long long max,unsigned char umbral)
{
	long iHist[256],i;
	PROC_HistogramaPorcentajeMax(ImEntrada, iHist, max,(umbral));
	TFT_LimpiarSec(TFT_VentanaActual->colorFondo,xPos-20,yPos,(umbral+1)+0,max+10);
	GRAF_DibujarLinea1(xPos,yPos,max+10,TFT_DIR_VERTICAL);
	GRAF_DibujarLinea1(xPos-20,yPos+max,(umbral+1)+30,TFT_DIR_HORIZONTAL);
	TFT_Fuente(&Fuente5x7);
	//TFT_ColorTexto(COLOR_BLACK);

	TFT_EnviarEntero(xPos-5,yPos+max,0);
	TFT_EnviarEntero(xPos-20,yPos+(3*max)/4,max/4);
	TFT_EnviarEntero(xPos-20,yPos+max/2,max/2);
	TFT_EnviarEntero(xPos-20,yPos+max/4,(3*max)/4);
	TFT_EnviarEntero(xPos-20,yPos,max);
	TFT_EnviarEntero(xPos+(umbral+1)/4+38,yPos+max+4,(umbral+1)/4);
	TFT_EnviarEntero(xPos+(umbral+1)/2+38,yPos+max+4,(umbral+1)/2);
	TFT_EnviarEntero(xPos+3*(umbral+1)/4+38,yPos+max+4,3*(umbral+1)/4);
	TFT_EnviarEntero(xPos+(umbral+1)+38,yPos+max+4,umbral+1);
	for(i=0;i<(umbral+1);i++)
	{
		GRAF_DibujarLinea1(xPos+i+10,max-iHist[i]+yPos,iHist[i],TFT_DIR_VERTICAL);
	}

}

void PROC_dibujarHistAdj(short xPos,short yPos,sImagen *ImEntrada,long long max,unsigned char umbral)
{
	long iHist[256],i;
	long long maximo=10,valor;
	PROC_HistogramaPorcentajeMax(ImEntrada, iHist, 1000000000,umbral);
	TFT_LimpiarSec(TFT_VentanaActual->colorFondo,xPos,yPos,umbral+50,max+10);
	GRAF_DibujarLinea1(xPos+30,yPos,max,TFT_DIR_VERTICAL);
	GRAF_DibujarLinea1(xPos,yPos+max,umbral+40,TFT_DIR_HORIZONTAL);
	TFT_Fuente(&Fuente5x7);
	//TFT_ColorTexto(COLOR_BLACK);
	for(i=0;i<(umbral+1);i++)
		if(iHist[i]>maximo)
			maximo=iHist[i];
	TFT_EnviarEntero(xPos+10,yPos+max,0);
	TFT_EnviarEntero(xPos,yPos+(3*max)/4,maximo/40000);
	TFT_EnviarEntero(xPos,yPos+max/2,maximo/20000);
	TFT_EnviarEntero(xPos,yPos+max/4,(3*maximo)/40000);
	TFT_EnviarEntero(xPos,yPos,maximo/10000);
	TFT_EnviarEntero(xPos+38,yPos+max+4,0);
	TFT_EnviarEntero(xPos+(umbral+1)/4+38,yPos+max+4,(umbral+1)/4);
	TFT_EnviarEntero(xPos+(umbral+1)/2+38,yPos+max+4,(umbral+1)/2);
	TFT_EnviarEntero(xPos+3*(umbral+1)/4+38,yPos+max+4,3*(umbral+1)/4);
	TFT_EnviarEntero(xPos+(umbral+1)+38,yPos+max+4,umbral+1);
	for(i=0;i<(umbral+1);i++)
	{
		valor=iHist[i]*max;
		valor/=maximo;
		GRAF_DibujarLinea1(xPos+i+40,(max-valor)+yPos,valor,TFT_DIR_VERTICAL);
	}

}

void PROC_HistogramaEcualizacionRGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[3];
	sImagen* ImInter[3];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_HistogramaEcualizacion(ImInter[0],ImInter[0],0x1F);
	PROC_HistogramaEcualizacion(ImInter[1],ImInter[1],0x3F);
	PROC_HistogramaEcualizacion(ImInter[2],ImInter[2],0x1F);

	PROC_Gris3sRGB(ImInter[0],ImInter[1],ImInter[2],ImSalida);

	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}
void PROC_HistogramaEcualizacion(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	short x,y,i,j;
	float Hist[256],sumatoria;
	short HistEQ[256];
	PROC_HistogramaPorcentaje(ImEntrada,Hist,umbral);
	for(i=0;i<umbral+1;i++)
	{
		sumatoria=0;
		for(j=0;j<=i;j++)
			sumatoria+=Hist[j];
		HistEQ[i]=(short)(umbral*sumatoria+.5);
	}
	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=
			HistEQ[PIX(ImEntrada,x,y)];
		}
}

void PROC_HistogramaDeterminado(sImagen *ImEntrada, sImagen *ImSalida, float HistREQ[256],unsigned char umbral)
{
	short x,y,i,j,valorMinimo, jMinimo;
	float sumatoria;
	short HistINV[umbral+1];
	short HistEQ[umbral+1];
	PROC_HistogramaEcualizacion(ImEntrada,ImSalida,umbral);
	for(i=0;i<umbral+1;i++)
	{
		sumatoria=0;
		for(j=0;j<=i;j++)
			sumatoria+=HistREQ[j];
		HistEQ[i]=(short)(umbral*sumatoria+.5);
	}
	for(i=0;i<umbral+1;i++)
	{
		valorMinimo=abs(i-HistEQ[0]);
		jMinimo=0;
		for(j=0;j<umbral+1;j++)
		{
			if(abs(i-HistEQ[j])<valorMinimo)
			{
				valorMinimo=abs(i-HistEQ[j]);
				jMinimo=j;
			}
			HistINV[i]=jMinimo;;
		}
	}
	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=
			HistINV[PIX(ImEntrada,x,y)];
		}
}

void PROC_TransformacionNoLineal(sImagen *ImEntrada,sImagen *ImSalida, unsigned char transformacion[256])
{
	long y,x;

	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=
					transformacion[PIX(ImEntrada,x,y)];
}

//basicos
void PROC_ConvDiscreta(sImagen *ImEntrada,sImagen *ImSalida,sImagen *Mascara, signed char division,unsigned char umbral )
{
	long y,x,ym,xm,dX,dY,yy,xx;
	short ms,im,val;
	if(division==0)
		return;
	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			val=0;
			yy=0;
			for(ym=-(Mascara->alto/2); ym<=(Mascara->alto/2);ym++)
			{
				xx=0;
				for(xm=-(Mascara->ancho/2); xm<=(Mascara->ancho/2);xm++)
				{
					ms=(signed char)*(Mascara->datos+xx+(yy*Mascara->ancho));
					dX=x+xm;
					dY=y+ym;
					if(dX>=0 && dY>=0)
					{
						im=*(ImEntrada->datos+(dX)+((dY)*ImEntrada->ancho));
						val+=ms*im;
					}
					xx++;
				}
				yy++;
			}
			val/=division;
			if(val>umbral)
				val=umbral;
			if(val<0)
				val=0;
			*(ImSalida->datos+x+(y*ImSalida->ancho))=(unsigned char)val;
		}

}

void PROC_ConvDiscreta2(sImagen *ImEntrada,sImagen *ImSalida,sImagen *Mascara, signed char division,unsigned char umbral )
{
	long y,x,ym,xm,dX,dY;
	short ms,im,val;
	if(division==0)
		return;
	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			val=0;
			for(ym=0; ym<=(Mascara->alto);ym++)
			{
				for(xm=0; xm<=(Mascara->ancho);xm++)
				{
					ms=(signed char)*(Mascara->datos+xm+(ym*Mascara->ancho));
					dX=x-xm;
					dY=y-ym;
					if(dX>=0 && dY>=0)
					{
						im=*(ImEntrada->datos+(dX)+((dY)*ImEntrada->ancho));
					val+=ms*im;
					}
				}
			}
			val/=division;
			if(val>umbral)
				val=umbral;
			if(val<0)
				val=0;
			*(ImSalida->datos+x+(y*ImSalida->ancho))=(unsigned char)val;
		}

}



void PROC_ConvDiscreta1(sImagen *ImEntrada,sImagen *ImSalida,sImagen *Mascara, signed long division,unsigned char umbral )
{
	long y,x,ym,xm,dX,dY,yy,xx;
	short ms,im,val;
	unsigned char flip[Mascara->alto*Mascara->ancho];
	sImagen mascara;
	mascara.datos=flip;
	mascara.alto=Mascara->alto;
	mascara.ancho=Mascara->ancho;
	mascara.tipo=Mascara->tipo;
	if(division==0)
		return;

	PROC_Voltear(Mascara,&mascara);
	for(y=0; y<ImEntrada->alto;y++)
		for(x=0; x<ImEntrada->ancho;x++)
		{
			val=0;
			yy=0;
			for(ym=-(mascara.alto/2); ym<=(mascara.alto/2);ym++)
			{
				xx=0;
				for(xm=-(mascara.ancho/2); xm<=(mascara.ancho/2);xm++)
				{
					ms=(signed char)*(mascara.datos+xx+(yy*mascara.ancho));
					dX=x+xm;
					dY=y+ym;
					if(dX>=0 && dY>=0)
					{
						im=*(ImEntrada->datos+(dX)+((dY)*ImEntrada->ancho));
						val+=ms*im;
					}
					xx++;
				}
				yy++;
			}
			val/=division;
			if(val>umbral)
				val=umbral;
			if(val<0)
				val=0;
			*(ImSalida->datos+x+(y*ImSalida->ancho))=(unsigned char)val;
		}

}

void PROC_Correlacion(sImagen *ImEntrada1,sImagen *ImEntrada2,sImagen *ImSalida)
{
//todo
}



//mediciones

//metodo que cuenta los pixeles de un mismo tono, no implementa separacion de obejtos
long PROC_Area(sImagen *ImEntrada,unsigned short x1,unsigned short y1,unsigned short x2,unsigned short y2,unsigned short valorGris )
{
	short i,j;
	long area=0;

	for(j=y1;j<=y2;++j)
		for(i=x1;i<=x2;++i)
			if(PIX(ImEntrada,i,j)==valorGris)
				++area;
	return area;
}

void PROC_Centroide(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
					unsigned short x2,unsigned short y2,unsigned short valorGris, Coord *coordenadas )
{
	long i,j;
	long area,xCentro=0,yCentro=0;

	area=PROC_Area(ImEntrada,x1,y1,x2,y2,valorGris);

	if(!area)
	{
		coordenadas->x=coordenadas->y=-1;
		return;
	}
	for(j=y1;j<=y2;++j)
		for(i=x1;i<=x2;++i)
			if(PIX(ImEntrada,i,j)==valorGris)
			{
				xCentro+=i;
				yCentro+=j;
			}
	coordenadas->x=(xCentro/area)+1;
	coordenadas->y=(yCentro/area)+1;

}

double PROC_Circularidad(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
		unsigned short x2,unsigned short y2,unsigned short valorGris)
{
	Coord centro;
	long x,y,puntos=0;
	double media=0,temp,devStd=0,varianza;

	PROC_Centroide(ImEntrada,x1,y1,x2,y2,valorGris,&centro);

	for(y=y1;y<=y2; ++y)
		for(x=x1;x<=x2; ++x)
		{
			if(PIX(ImEntrada,x,y)==valorGris)
			{
				media+=sqrt(((x-centro.x)*(x-centro.x))+((y-centro.y)*(y-centro.y)));
				++puntos;
			}
		}

	if(puntos==0)
		return -1;
	media/=(double)puntos;

	for(y=y1;y<=y2; ++y)
		for(x=x1;x<=x2; ++x)
		{
			if(PIX(ImEntrada,x,y)==valorGris)
			{
				temp=sqrt(((x-centro.x)*(x-centro.x))+((y-centro.y)*(y-centro.y)))-media;
				devStd+=temp*temp;
			}
		}
	devStd/=(double)puntos;
	varianza=sqrt(devStd);
	return(media/varianza);
}


void PROC_Cluster(sImagen *ImEntrada,sImagen *ImSalida,short tamano,unsigned char umbral)
{
	short n,x,y,k, nuevoCluster;
	float distEuclidiana, clusterXActual[256],clusterYActual[256];

	n=0;

	for(y=0; y<ImEntrada->alto;y++)
	{
		for(x=0;x<ImEntrada->ancho;x++)
		{
			if(n==0)
			{
				if(PIX(ImEntrada,x,y)!=0)
				{
					n=1;
					clusterXActual[n]=x;
					clusterYActual[n]=y;
					PIX(ImSalida,x,y)=n;
				}
			}
			else if(PIX(ImEntrada,x,y)!=0)
			{
				nuevoCluster=1;
				for(k=1;k<=n;++k)
				{
					distEuclidiana= sqrt(((x-clusterXActual[k])*(x-clusterXActual[k]))+
							((y-clusterYActual[k])*(y-clusterYActual[k])));
					if(distEuclidiana<=tamano)
					{
						PIX(ImSalida,x,y)=(unsigned char)k;
						nuevoCluster=0;
						k=n+1; //o poner break;
					}
				}
				if(nuevoCluster==1 && n<umbral)
				{
					n++;
					clusterXActual[n]=x;
					clusterYActual[n]=y;
					PIX(ImSalida,x,y)=(unsigned char)n;
				}
			}
		}
	}
}


double PROC_MomentoCentral(sImagen *ImEntrada,
		unsigned short x1,unsigned short y1,unsigned short x2,unsigned short y2,int p,int q)
{
	int x,y,xb,yb;
	double momento00=0,momento10=0,momento01=0,upq=0;

	if((p==1 && q==0) ||(p==0 && q==1))
		return 0;

	for(y=y1;y<y2;++y)
		for(x=x1;x<x2;++x)
			momento00+=PIX(ImEntrada,x,y);

	if(p==0 && q==0)
		return momento00;

	for(y=y1;y<y2;++y)
		for(x=x1;x<x2;++x)
			momento10+=x*PIX(ImEntrada,x,y);

	for(y=y1;y<y2;++y)
		for(x=x1;x<x2;++x)
			momento01+=y*PIX(ImEntrada,x,y);

	xb=floor(0.5+(momento10/momento00));
	yb=floor(0.5+(momento01/momento00));

	if(p==0)
	{
		for(y=y1;y<y2;++y)
			for(x=x1;x<x2;++x)
				upq+=pow(y-yb,q)*PIX(ImEntrada,x,y);
		return upq;

	}
	if(q==0)
	{
		for(y=y1;y<y2;++y)
			for(x=x1;x<x2;++x)
				upq+=pow(x-xb,p)*PIX(ImEntrada,x,y);
		return upq;

	}
	for(y=y1;y<y2;++y)
		for(x=x1;x<x2;++x)
			upq+=pow(x-xb,p)*pow(y-yb,q)*PIX(ImEntrada,x,y);
	return upq;

}


double PROC_EjeMaximo(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
										unsigned short x2,unsigned short y2)
{
	float momento20,momento02,momento11,b,theta;

	momento20=PROC_MomentoCentral(ImEntrada,x1,y1,x2,y2,2,0);
	momento02=PROC_MomentoCentral(ImEntrada,x1,y1,x2,y2,0,2);
	momento11=PROC_MomentoCentral(ImEntrada,x1,y1,x2,y2,1,1);

	b=(momento20-momento02)/momento11;
	theta=((-1*b)*sqrt(b*b+4))/2;
	return atan(theta);
}

double PROC_EjeMinimo(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
										unsigned short x2,unsigned short y2)
{
	return(PROC_EjeMaximo(ImEntrada,x1,y1,x2,y2)+1.5714285714);
}





//filtros morforlogicos


void PROC_ClosingBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short x,y;
	PROC_DilatacionBin(ImEntrada,ImSalida,Mascara);
	for(y=0; y<ImEntrada->alto;y++)
	{
		for(x=0;x<ImEntrada->ancho;x++)
		{
			PIX(ImEntrada,x,y)=*(ImSalida->datos+x+(y*ImEntrada->ancho));
		}
	}
	PROC_ErosionBin(ImEntrada,ImSalida,Mascara,umbral);
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}


void PROC_ClosingRGB3x3(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[3*3]=
{
		0,0,0,
		0,0,0,
		0,0,0,
};

sImagen masc={mascara1,3,3,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ClosingGrises(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ClosingGrises(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ClosingGrises(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_OpeningRGB3x3(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[3*3]=
{
		0,0,0,
		0,0,0,
		0,0,0,
};

sImagen masc={mascara1,3,3,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_OpeningGrises(ImInter[0],ImInter[3],&masc,0x1F);
PROC_OpeningGrises(ImInter[1],ImInter[0],&masc,0x3F);
PROC_OpeningGrises(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_ContornoERGB3x3(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[3*3]=
{
		0,0,0,
		0,0,0,
		0,0,0,
};

sImagen masc={mascara1,3,3,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ContornoE(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ContornoE(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ContornoE(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_ContornoDRGB3x3(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[3*3]=
{
		0,0,0,
		0,0,0,
		0,0,0,
};

sImagen masc={mascara1,3,3,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ContornoD(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ContornoD(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ContornoD(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}


void PROC_ClosingRGB5x5(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[5*5]=
{
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0
};

sImagen masc={mascara1,5,5,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ClosingGrises(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ClosingGrises(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ClosingGrises(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_OpeningRGB5x5(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[5*5]=
{
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0
};

sImagen masc={mascara1,5,5,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_OpeningGrises(ImInter[0],ImInter[3],&masc,0x1F);
PROC_OpeningGrises(ImInter[1],ImInter[0],&masc,0x3F);
PROC_OpeningGrises(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}


void PROC_ContornoERGB5x5(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[5*5]=
{
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0
};

sImagen masc={mascara1,5,5,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ContornoE(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ContornoE(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ContornoE(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_ContornoDRGB5x5(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[5*5]=
{
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0
};

sImagen masc={mascara1,5,5,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ContornoD(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ContornoD(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ContornoD(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}



void PROC_ClosingRGB7x7(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[7*7]=
{
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0
};

sImagen masc={mascara1,7,7,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ClosingGrises(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ClosingGrises(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ClosingGrises(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_OpeningRGB7x7(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[7*7]=
{
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0
};

sImagen masc={mascara1,7,7,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_OpeningGrises(ImInter[0],ImInter[3],&masc,0x1F);
PROC_OpeningGrises(ImInter[1],ImInter[0],&masc,0x3F);
PROC_OpeningGrises(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}
void PROC_ContornoERGB7x7(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[7*7]=
{
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0
};

sImagen masc={mascara1,7,7,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ContornoE(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ContornoE(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ContornoE(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}


void PROC_ContornoDRGB7x7(sImagen *ImEntrada,sImagen *ImSalida)
{
sImagen ImInte[5];
sImagen* ImInter[5];
unsigned char mascara1[7*7]=
{
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0
};

sImagen masc={mascara1,7,7,TIPO_UCHAR};

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_ContornoD(ImInter[0],ImInter[3],&masc,0x1F);
PROC_ContornoD(ImInter[1],ImInter[0],&masc,0x3F);
PROC_ContornoD(ImInter[2],ImInter[1],&masc,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}

void PROC_TopHatRGB(sImagen *ImEntrada,sImagen *ImSalida, unsigned char N)
{
sImagen ImInte[4];
sImagen* ImInter[4];

ImInter[0]=&ImInte[0];
ImInter[0]->alto=ImEntrada->alto;
ImInter[0]->ancho=ImEntrada->ancho;
ImInter[0]->tipo=TIPO_UCHAR;
ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[1]=&ImInte[1];
ImInter[1]->alto=ImEntrada->alto;
ImInter[1]->ancho=ImEntrada->ancho;
ImInter[1]->tipo=TIPO_UCHAR;
ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

ImInter[2]=&ImInte[2];
ImInter[2]->alto=ImEntrada->alto;
ImInter[2]->ancho=ImEntrada->ancho;
ImInter[2]->tipo=TIPO_USHORT;
ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

ImInter[3]=&ImInte[3];
ImInter[3]->alto=ImEntrada->alto;
ImInter[3]->ancho=ImEntrada->ancho;
ImInter[3]->tipo=TIPO_USHORT;
ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
PROC_TopHat(ImInter[0],ImInter[3],N,0x1F);
PROC_TopHat(ImInter[1],ImInter[0],N,0x3F);
PROC_TopHat(ImInter[2],ImInter[1],N,0x1F);
PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
free(ImInter[3]->datos);
free(ImInter[2]->datos);
free(ImInter[1]->datos);
free(ImInter[0]->datos);

}




void PROC_ClosingGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short x,y;
	PROC_DilatacionGrises(ImEntrada,ImSalida,Mascara,umbral);
	for(y=0; y<ImEntrada->alto;y++)
	{
		for(x=0;x<ImEntrada->ancho;x++)
		{
			PIX(ImEntrada,x,y)=*(ImSalida->datos+x+(y*ImEntrada->ancho));
		}
	}
	PROC_ErosionGrises(ImEntrada,ImSalida,Mascara,umbral);
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}

void PROC_OpeningBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short x,y;
	PROC_ErosionBin(ImEntrada,ImSalida,Mascara,umbral);
	for(y=0; y<ImEntrada->alto;y++)
	{
		for(x=0;x<ImEntrada->ancho;x++)
		{
			PIX(ImEntrada,x,y)=*(ImSalida->datos+x+(y*ImEntrada->ancho));
		}
	}
	PROC_DilatacionBin(ImEntrada,ImSalida,Mascara);
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}

void PROC_OpeningGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short x,y;
	PROC_ErosionGrises(ImEntrada,ImSalida,Mascara,umbral);
	for(y=0; y<ImEntrada->alto;y++)
	{
		for(x=0;x<ImEntrada->ancho;x++)
		{
			PIX(ImEntrada,x,y)=*(ImSalida->datos+x+(y*ImEntrada->ancho));
		}
	}
	PROC_DilatacionGrises(ImEntrada,ImSalida,Mascara,umbral);
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}



void PROC_DilatacionBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara )
{
	short x,y,i,j,smax;
	for(y=Mascara->alto/2;y<(ImEntrada->alto -(Mascara->alto/2));y++)
		for(x=Mascara->ancho/2;x<(ImEntrada->ancho -(Mascara->ancho/2));x++)
		{
			smax=0;
			for(j=-Mascara->alto/2;j<=Mascara->alto/2;j++)
				for(i=-Mascara->ancho/2;i<=Mascara->ancho/2;i++)
					if(PIX(Mascara,(i+Mascara->ancho/2),(j+Mascara->alto/2))==1)
						if(PIX(ImEntrada,(x+i),(y+j))>smax)
							smax=PIX(ImEntrada,(x+i),(y+j));
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=smax;
		}
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}

void PROC_DilatacionGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short alto=Mascara->alto;
	short ancho=Mascara->ancho;
	short* a;
	short x,y,i,j,smax;
	a=(short*)malloc((long)Mascara->ancho*(long)Mascara->alto*sizeof(short));

	for(y=alto/2;y<(ImEntrada->alto -(alto/2));y++)
		for(x=ancho/2;x<(ImEntrada->ancho -(ancho/2));x++)
		{
			smax=0;
			for(j=-alto/2;j<=alto/2;j++)
				for(i=-ancho/2;i<=ancho/2;i++)
					*(a+(i+ancho/2)+(ancho*(j+alto/2)))=PIX(ImEntrada,(x+i),(y+j))+(signed char)PIX(Mascara,(i+ancho/2),(j+alto/2));

			for(j=-alto/2;j<=alto/2;j++)
				for(i=-ancho/2;i<=ancho/2;i++)
					if(*(a+(i+ancho/2)+(ancho*(j+alto/2)))>smax)
						smax=*(a+(i+ancho/2)+(ancho*(j+alto/2)));
			if(smax>umbral)
				smax=umbral;
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=smax;
		}
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;

	free(a);
}

void PROC_ErosionBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short x,y,i,j,smin;
	for(y=Mascara->alto/2;y<(ImEntrada->alto -(Mascara->alto/2));y++)
		for(x=Mascara->ancho/2;x<(ImEntrada->ancho -(Mascara->ancho/2));x++)
		{
			smin=umbral;
			for(j=-Mascara->alto/2;j<=Mascara->alto/2;j++)
				for(i=-Mascara->ancho/2;i<=Mascara->ancho/2;i++)
					if(PIX(Mascara,(i+Mascara->ancho/2),(j+Mascara->alto/2))==1)
						if(PIX(ImEntrada,(x+i),(y+j))<smin)
							smin=PIX(ImEntrada,(x+i),(y+j));
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=smin;
		}
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}

void PROC_ErosionGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	short alto=Mascara->alto;
	short ancho=Mascara->ancho;
	short* a;
	short x,y,i,j,smin;
	a=(short*)malloc((long)Mascara->ancho*(long)Mascara->alto*sizeof(short));
	for(y=alto/2;y<(ImEntrada->alto -(alto/2));y++)
		for(x=ancho/2;x<(ImEntrada->ancho -(ancho/2));x++)
		{
			smin=umbral;
			for(j=-alto/2;j<=alto/2;j++)
				for(i=-ancho/2;i<=ancho/2;i++)
					*(a+(i+ancho/2)+(ancho*(j+alto/2)))=PIX(ImEntrada,(x+i),(y+j))-(signed char)PIX(Mascara,(i+ancho/2),(j+alto/2));

			for(j=-alto/2;j<=alto/2;j++)
				for(i=-ancho/2;i<=ancho/2;i++)
					if(*(a+(i+ancho/2)+(ancho*(j+alto/2)))<smin)
						smin=*(a+(i+ancho/2)+(ancho*(j+alto/2)));
			if(smin<0)
				smin=0;
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=smin;
		}
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;

	free(a);
}



void PROC_HitMiss(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara1[3*3]=
	{
			0,0,0,
			0,1,1,
			0,0,0,
	};
	unsigned char mascara2[3*3]=
	{
			0,0,0,
			1,0,0,
			0,0,0,
	};
	sImagen masc={mascara1,3,3,TIPO_UCHAR};
	int x,y;
	sImagen ImInte;
	sImagen* ImInter;
	ImInter=&ImInte;
	ImInter->alto=ImEntrada->alto;
	ImInter->ancho=ImEntrada->ancho;
	ImInter->tipo=ImEntrada->tipo;
	ImInter->datos=(unsigned char*)malloc((long)ImInter->ancho*(long)ImInter->alto*sizeof(char));

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
			*(ImInter->datos+x+(y*ImEntrada->ancho))=umbral-PIX(ImEntrada,x,y);
	PROC_ErosionBin(ImEntrada,ImSalida,&masc,umbral);
	masc.datos=mascara2;
	PROC_ErosionBin(ImInter,ImEntrada,&masc,umbral);

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=
					*(ImSalida->datos+x+(y*ImEntrada->ancho)) &
					PIX(ImEntrada,x,y);

	ImSalida->alto=ImEntrada->alto;
	ImSalida->ancho=ImEntrada->ancho;
	free(ImInter->datos);
}

void PROC_TopHat(sImagen *ImEntrada, sImagen *ImSalida,char tamano,unsigned char umbral)
{
	unsigned char* mascara=(unsigned char*)malloc(tamano*tamano*sizeof(char));
	sImagen masc={mascara,tamano,tamano,TIPO_UCHAR};
	int x,y,b;
	sImagen ImInte;
	sImagen* ImInter;
	ImInter=&ImInte;
	ImInter->alto=ImEntrada->alto;
	ImInter->ancho=ImEntrada->ancho;
	ImInter->tipo=ImEntrada->tipo;
	ImInter->datos=(unsigned char*)malloc((long)ImInter->ancho*(long)ImInter->alto*sizeof(char));
	for(y=0;y<tamano*tamano;y++)
			*(mascara+y)=0;

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			PIX(ImInter,x,y)=PIX(ImEntrada,x,y);
		}
	PROC_OpeningGrises(ImEntrada,ImSalida,&masc,umbral);

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			b=PIX(ImInter,x,y)-PIX(ImSalida,x,y);
			if(b<0)
				b=0;
			PIX(ImSalida,x,y)=b;
		}

	ImSalida->alto=ImEntrada->alto;
	ImSalida->ancho=ImEntrada->ancho;

	free(ImInter->datos);
	free(masc.datos);
}


void PROC_ContornoE(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	int x,y;
	PROC_ErosionGrises(ImEntrada,ImSalida,Mascara,umbral);
	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=
					PIX(ImEntrada,x,y)-*(ImSalida->datos+x+(y*ImEntrada->ancho));
	ImSalida->alto=ImEntrada->alto;
	ImSalida->ancho=ImEntrada->ancho;
}


void PROC_ContornoD(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	int x,y;
	PROC_DilatacionGrises(ImEntrada,ImSalida,Mascara,umbral);
	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=
					*(ImSalida->datos+x+(y*ImEntrada->ancho))-PIX(ImEntrada,x,y);
	ImSalida->alto=ImEntrada->alto;
	ImSalida->ancho=ImEntrada->ancho;
}

void PROC_EsqueletoBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral )
{
	int x,y;
	int pixelActivo,falso,verdadero,pixel;
	sImagen *filtro,*filtro1;
	sImagen A={0,ImEntrada->ancho,ImEntrada->alto,ImEntrada->tipo};
	sImagen A1={0,ImEntrada->ancho,ImEntrada->alto,ImEntrada->tipo};
	filtro=&A;
	filtro1=&A1;
	filtro->datos=(unsigned char*)malloc(filtro->ancho*filtro->alto*sizeof(char));
	filtro1->datos=(unsigned char*)malloc(filtro1->ancho*filtro1->alto*sizeof(char));
	verdadero=1;
	falso=0;
	pixelActivo=verdadero;
	for(y=Mascara->alto/2;y<ImEntrada->alto-(Mascara->alto/2);y++)
	{
		for(x=Mascara->ancho/2;x<ImEntrada->ancho-(Mascara->ancho/2);x++)
		{
			PIX(ImSalida,x,y)=0;
		}
	}

	while(pixelActivo==verdadero)
	{
		pixelActivo=falso;
		PROC_ErosionBin(ImEntrada,filtro,Mascara,umbral);
		PROC_DilatacionBin(filtro,filtro1,Mascara);
		for(y=Mascara->alto/2;y<ImEntrada->alto-(Mascara->alto/2);y++)
		{
			for(x=Mascara->ancho/2;x<ImEntrada->ancho-(Mascara->ancho/2);x++)
			{
				pixel=PIX(ImEntrada,x,y)-PIX(filtro1,x,y);
				PIX(ImSalida,x,y)=PIX(ImSalida,x,y)|pixel;
				if(pixel==umbral)
					pixelActivo=verdadero;
			}
		}
	}

	free(filtro1->datos);
	free(filtro->datos);
}


void PROC_thickeningBin(sImagen* ImEntrada, sImagen* ImSalida, int iteraciones,unsigned char umbral)
{

	unsigned char mascara01[9]=
	{	1,1,1,
		0,0,0,
		0,0,0
	};
	unsigned char mascara02[9]=
	{	0,0,0,
		0,0,0,
		1,1,1
	};
	unsigned char mascara03[9]=
	{	1,0,0,
		1,0,0,
		1,0,0
	};
	unsigned char mascara04[9]=
	{	0,0,1,
		0,0,1,
		0,0,1
	};
	unsigned char mascara05[9]=
	{
		0,1,1,
		0,0,1,
		0,0,0
	};
	unsigned char mascara06[9]=
	{	0,0,0,
		1,0,0,
		1,1,0
	};
	unsigned char mascara07[9]=
	{	0,0,0,
		0,0,1,
		0,1,1
	};
	unsigned char mascara08[9]=
	{	1,1,0,
		1,0,0,
		0,0,0
	};

	unsigned char mascara11[9]=
	{	0,0,0,
		1,1,1,
		1,1,1
	};
	unsigned char mascara12[9]=
	{	1,1,1,
		1,1,1,
		0,0,0
	};
	unsigned char mascara13[9]=
	{	0,1,1,
		0,1,1,
		0,1,1
	};
	unsigned char mascara14[9]=
	{	1,1,0,
		1,1,0,
		1,1,0
	};
	unsigned char mascara15[9]=
	{
		1,0,0,
		1,1,0,
		1,1,1
	};
	unsigned char mascara16[9]=
	{	1,1,1,
		0,1,1,
		0,0,1
	};
	unsigned char mascara17[9]=
	{	1,1,1,
		1,1,0,
		1,0,0
	};
	unsigned char mascara18[9]=
	{	0,0,1,
		0,1,1,
		1,1,1
	};
	unsigned char  mascara2[9],mascara3[9];
	int x,y,i,j,z,parada=0;
	sImagen masc0[8]={{mascara01,3,3,TIPO_UCHAR},
					{mascara02,3,3,TIPO_UCHAR},
					{mascara03,3,3,TIPO_UCHAR},
					{mascara04,3,3,TIPO_UCHAR},
					{mascara05,3,3,TIPO_UCHAR},
					{mascara06,3,3,TIPO_UCHAR},
					{mascara07,3,3,TIPO_UCHAR},
					{mascara08,3,3,TIPO_UCHAR}};

	sImagen masc1[8]={{mascara11,3,3,TIPO_UCHAR},
					{mascara12,3,3,TIPO_UCHAR},
					{mascara13,3,3,TIPO_UCHAR},
					{mascara14,3,3,TIPO_UCHAR},
					{mascara15,3,3,TIPO_UCHAR},
					{mascara16,3,3,TIPO_UCHAR},
					{mascara17,3,3,TIPO_UCHAR},
					{mascara18,3,3,TIPO_UCHAR}};

	sImagen masc2={mascara2,3,3,TIPO_UCHAR};
	sImagen masc3={mascara3,3,3,TIPO_UCHAR};

	sImagen *filtro,*imagenc;
	sImagen A={0,ImEntrada->ancho,ImEntrada->alto,ImEntrada->tipo};
	sImagen A1={0,ImEntrada->ancho,ImEntrada->alto,ImEntrada->tipo};
	filtro=&A;
	imagenc=&A1;
	filtro->datos=(unsigned char*)malloc(filtro->ancho*filtro->alto*sizeof(char));
	imagenc->datos=(unsigned char*)malloc(imagenc->ancho*imagenc->alto*sizeof(char));
	while(parada<iteraciones)
	{
		for(z=0;z<=7;z++)
		{
			for(j=0;j<2;j++)
				for(i=0;i<2;i++)
				{
					*(masc2.datos+i+(j*masc2.ancho))=*(masc1[z].datos+i+(j*masc1[z].ancho));
					*(masc3.datos+i+(j*masc3.ancho))=*(masc0[z].datos+i+(j*masc0[z].ancho));
				}
			for(y=0;y<ImEntrada->alto;y++)
				for(x=0;x<ImEntrada->ancho;x++)
					PIX(imagenc,x,y)=umbral-PIX(ImEntrada,x,y);
			PROC_ErosionBin(ImEntrada,filtro,&masc2,umbral);
			PROC_ErosionBin(imagenc,ImSalida,&masc3,umbral);
			for(y=masc0[0].alto/2;y<ImEntrada->alto - (masc0[0].alto/2);y++)
				for(x=masc0[0].ancho/2;x<ImEntrada->ancho - (masc0[0].ancho/2);x++)
					PIX(filtro,x,y)=PIX(filtro,x,y) & PIX(ImSalida,x,y);
			for(y=masc0[0].alto/2;y<ImEntrada->alto - (masc0[0].alto/2);y++)
				for(x=masc0[0].ancho/2;x<ImEntrada->ancho - (masc0[0].ancho/2);x++)
					PIX(ImSalida,x,y)=PIX(ImEntrada,x,y)| PIX(filtro,x,y);
		}
		parada++;
	}
	free(imagenc->datos);
	free(filtro->datos);

}

void PROC_thinningBin(sImagen* ImEntrada, sImagen* ImSalida, int iteraciones,unsigned char umbral)
{

	unsigned char mascara01[9]=
	{	1,1,1,
		0,0,0,
		0,0,0
	};
	unsigned char mascara02[9]=
	{	0,0,0,
		0,0,0,
		1,1,1
	};
	unsigned char mascara03[9]=
	{	1,0,0,
		1,0,0,
		1,0,0
	};
	unsigned char mascara04[9]=
	{	0,0,1,
		0,0,1,
		0,0,1
	};
	unsigned char mascara05[9]=
	{
		0,1,1,
		0,0,1,
		0,0,0
	};
	unsigned char mascara06[9]=
	{	0,0,0,
		1,0,0,
		1,1,0
	};
	unsigned char mascara07[9]=
	{	0,0,0,
		0,0,1,
		0,1,1
	};
	unsigned char mascara08[9]=
	{	1,1,0,
		1,0,0,
		0,0,0
	};

	unsigned char mascara11[9]=
	{	0,0,0,
		1,1,1,
		1,1,1
	};
	unsigned char mascara12[9]=
	{	1,1,1,
		1,1,1,
		0,0,0
	};
	unsigned char mascara13[9]=
	{	0,1,1,
		0,1,1,
		0,1,1
	};
	unsigned char mascara14[9]=
	{	1,1,0,
		1,1,0,
		1,1,0
	};
	unsigned char mascara15[9]=
	{
		1,0,0,
		1,1,0,
		1,1,1
	};
	unsigned char mascara16[9]=
	{	1,1,1,
		0,1,1,
		0,0,1
	};
	unsigned char mascara17[9]=
	{	1,1,1,
		1,1,0,
		1,0,0
	};
	unsigned char mascara18[9]=
	{	0,0,1,
		0,1,1,
		1,1,1
	};
	unsigned char  mascara2[9],mascara3[9];
	int x,y,i,j,z,parada=0;
	sImagen masc0[8]={{mascara01,3,3,TIPO_UCHAR},
					{mascara02,3,3,TIPO_UCHAR},
					{mascara03,3,3,TIPO_UCHAR},
					{mascara04,3,3,TIPO_UCHAR},
					{mascara05,3,3,TIPO_UCHAR},
					{mascara06,3,3,TIPO_UCHAR},
					{mascara07,3,3,TIPO_UCHAR},
					{mascara08,3,3,TIPO_UCHAR}};

	sImagen masc1[8]={{mascara11,3,3,TIPO_UCHAR},
					{mascara12,3,3,TIPO_UCHAR},
					{mascara13,3,3,TIPO_UCHAR},
					{mascara14,3,3,TIPO_UCHAR},
					{mascara15,3,3,TIPO_UCHAR},
					{mascara16,3,3,TIPO_UCHAR},
					{mascara17,3,3,TIPO_UCHAR},
					{mascara18,3,3,TIPO_UCHAR}};

	sImagen masc2={mascara2,3,3,TIPO_UCHAR};
	sImagen masc3={mascara3,3,3,TIPO_UCHAR};

	sImagen *filtro,*imagenc;
	sImagen A={0,ImEntrada->ancho,ImEntrada->alto,ImEntrada->tipo};
	sImagen A1={0,ImEntrada->ancho,ImEntrada->alto,ImEntrada->tipo};
	filtro=&A;
	imagenc=&A1;
	filtro->datos=(unsigned char*)malloc(filtro->ancho*filtro->alto*sizeof(char));
	imagenc->datos=(unsigned char*)malloc(imagenc->ancho*imagenc->alto*sizeof(char));
	while(parada<iteraciones)
	{
		for(z=0;z<=7;z++)
		{
			for(j=0;j<2;j++)
				for(i=0;i<2;i++)
				{
					*(masc2.datos+i+(j*masc2.ancho))=*(masc0[z].datos+i+(j*masc0[z].ancho));
					*(masc3.datos+i+(j*masc3.ancho))=*(masc1[z].datos+i+(j*masc1[z].ancho));
				}
			for(y=0;y<ImEntrada->alto;y++)
				for(x=0;x<ImEntrada->ancho;x++)
					PIX(imagenc,x,y)=umbral-PIX(ImEntrada,x,y);
			PROC_ErosionBin(ImEntrada,filtro,&masc2,umbral);
			PROC_ErosionBin(imagenc,ImSalida,&masc3,umbral);
			for(y=masc0[0].alto/2;y<ImEntrada->alto - (masc0[0].alto/2);y++)
				for(x=masc0[0].ancho/2;x<ImEntrada->ancho - (masc0[0].ancho/2);x++)
					PIX(filtro,x,y)=PIX(filtro,x,y) & PIX(ImSalida,x,y);
			for(y=masc0[0].alto/2;y<ImEntrada->alto - (masc0[0].alto/2);y++)
				for(x=masc0[0].ancho/2;x<ImEntrada->ancho - (masc0[0].ancho/2);x++)
					PIX(ImSalida,x,y)=PIX(ImEntrada,x,y)&(umbral- PIX(filtro,x,y));
		}
		parada++;
	}

	free(imagenc->datos);
	free(filtro->datos);

}


void PROC_RuidoGammaRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza, short alfa)
{
	sImagen ImInte[2];
	sImagen* ImInter[2];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=ImEntrada->tipo;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_RuidoGamma(ImInter[0],varianza,alfa,0xFF);
	PROC_GrisesRGB(ImInter[0], ImInter[1]);
	PROC_SumatoriaRGB(ImInter[1],ImEntrada,ImSalida);

	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}



void PROC_RuidoGaussiano(sImagen *ImEntrada,float varianza, short media,unsigned char umbral)
{
	short x,y;
	double ruido,theta;

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{

			ruido=sqrt(-2*varianza*log(1-(double)(Random15())/32767.1));

			theta=(double)Random15() * 1.9175345E-4 - 3.14159265;
			ruido=ruido*cos(theta);
			ruido=(ruido+media)+0.5;

			ruido*=umbral;
			ruido/=0xFF;

			if(ruido>umbral)
				ruido=umbral;

			if(ruido<0)
				ruido=0;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido);
		}
}

void PROC_RuidoGaussiano2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza, short media,unsigned char umbral)
{
	short x,y;
	double ruido,theta;

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{

			ruido=sqrt(-2*varianza*log(1-(double)(Random15())/32767.1));

			theta=(double)Random15() * 1.9175345E-4 - 3.14159265;
			ruido=ruido*cos(theta);
			ruido=ruido+media;

			if(ruido>umbral)
				ruido=umbral;

			if(ruido<0)
				ruido=0;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido+.5);
			PIX(ImEntrada2,x,y)=((unsigned char)(ruido+.5))<<1;
		}
}
void PROC_RuidoGaussianoRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza, short media)
{
	sImagen ImInte[2];
	sImagen* ImInter[2];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=ImEntrada->tipo;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_RuidoGaussiano(ImInter[0],varianza,media,0xFF);
	PROC_GrisesRGB(ImInter[0], ImInter[1]);
	PROC_SumatoriaRGB(ImInter[1],ImEntrada,ImSalida);

	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_RuidoNegativoExp(sImagen *ImEntrada,float varianza,unsigned char umbral)
{
	short x,y;
	float ruido,theta,a,rx,ry;


	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			a=sqrt((double)varianza)/2;
			ruido=sqrt(-2*a*log(1-(float)(Random15())/32767.1));
			theta=(float)(Random15())*(1.9175345E-4) - 3.14159265;
			rx=ruido*cos(theta);
			ry=ruido*sin(theta);
			ruido=rx*rx+ry*ry;

			ruido+=0.5;
			ruido*=umbral;
			ruido/=0xFF;

			if(ruido>umbral)
				ruido=umbral;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido);
		}
}
void PROC_RuidoNegativoExp2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza,unsigned char umbral)
{
	short x,y;
	float ruido,theta,a,rx,ry;


	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			a=sqrt((double)varianza)/2;
			ruido=sqrt(-2*a*log(1-(float)(Random15())/32767.1));
			theta=(float)(Random15())*(1.9175345E-4) - 3.14159265;
			rx=ruido*cos(theta);
			ry=ruido*sin(theta);
			ruido=rx*rx+ry*ry;
			if(ruido>umbral)
				ruido=umbral;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido+.5);
			PIX(ImEntrada2,x,y)=((unsigned char)(ruido+.5))<<1;
		}
}
void PROC_RuidoNegativoExpRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza)
{

	sImagen ImInte[2];
	sImagen* ImInter[2];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=ImEntrada->tipo;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_RuidoNegativoExp(ImInter[0],varianza,0xFF);
	PROC_GrisesRGB(ImInter[0], ImInter[1]);
	PROC_SumatoriaRGB(ImInter[1],ImEntrada,ImSalida);

	free(ImInter[1]->datos);
	free(ImInter[0]->datos);

}
void PROC_RuidoRayleigh(sImagen *ImEntrada,float varianza,unsigned char umbral)
{
	short x,y;
	float ruido,a;


	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			a=2.3299*varianza;
			ruido=sqrt(-2*a*log(1-(float)(Random15())/32767.1));

			ruido+=0.5;
			ruido*=umbral;
			ruido/=0xFF;

			if(ruido>umbral)
				ruido=umbral;
			if(ruido<0)
				ruido=0;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido);
		}
}
void PROC_RuidoRayleigh2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza,unsigned char umbral)
{
	short x,y;
	float ruido,a;


	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			a=2.3299*varianza;
			ruido=sqrt(-2*a*log(1-(float)(Random15())/32767.1));
			if(ruido>umbral)
				ruido=umbral;
			if(ruido<0)
				ruido=0;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido+.5);
			PIX(ImEntrada2,x,y)=((unsigned char)(ruido+.5))<<1;
		}
}

void PROC_RuidoRayleighRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza)
{
	sImagen ImInte[2];
	sImagen* ImInter[2];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=ImEntrada->tipo;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_RuidoRayleigh(ImInter[0],varianza,0xFF);
	PROC_GrisesRGB(ImInter[0], ImInter[1]);
	PROC_SumatoriaRGB(ImInter[1],ImEntrada,ImSalida);

	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_RuidoSalyPimienta(sImagen *ImEntrada,float probabilidad,unsigned char umbral)
{
	short x,y,dato,dato1,dato2;

	dato=(short)(probabilidad*32768/2);
	dato1=dato+16384;
	dato2=16384-dato;
	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			dato=Random15();
			if((dato>=16384) && (dato<dato1))
				PIX(ImEntrada,x,y)=0;
			if((dato<16384) && (dato>=dato2))
				PIX(ImEntrada,x,y)=umbral;
		}
}
void PROC_RuidoSalyPimienta2(sImagen *ImEntrada,sImagen *ImEntrada2,sImagen *ImEntrada3, float probabilidad)
{
	short x,y,dato,dato1,dato2;

	dato=(short)(probabilidad*32768/2);
	dato1=dato+16384;
	dato2=16384-dato;
	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			dato=Random15();
			if((dato>=16384) && (dato<dato1))
			{
				PIX(ImEntrada,x,y)=0x1F;
				PIX(ImEntrada2,x,y)=0x3F;
				PIX(ImEntrada2,x,y)=0x1F;
			}
			if((dato<16384) && (dato>=dato2))
			{
				PIX(ImEntrada,x,y)=0;
				PIX(ImEntrada2,x,y)=0;
				PIX(ImEntrada3,x,y)=0;
			}
		}
}
void PROC_RuidoSalyPimientaRGB(sImagen *ImEntrada,sImagen *ImSalida,float probabilidad)
{
	sImagen ImInte[3];
	sImagen* ImInter[3];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=ImEntrada->tipo;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[2]=&ImInte[2];
	ImInter[2]->alto=ImEntrada->alto;
	ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[2]->tipo=ImEntrada->tipo;
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1], ImInter[2]);

	PROC_RuidoSalyPimienta2(ImInter[0],ImInter[1],ImInter[2],probabilidad);
	PROC_Gris3sRGB(ImInter[0],ImInter[1],ImInter[2],ImSalida);

	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}
void PROC_RuidoUniforme(sImagen *ImEntrada,float varianza, short media,unsigned char umbral)
{
	short x,y;
	float ruido;

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			ruido=sqrt(varianza);
			ruido*=1.057192E-4;
			ruido*=Random15();
			ruido+=media;
			ruido-=(sqrt(varianza)*1.7320508);

			ruido+=0.5;
			ruido*=umbral;
			ruido/=0xFF;

			if(ruido>umbral)
				ruido=umbral;
			if(ruido<0)
				ruido=0;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido);
		}
}
void PROC_RuidoUniforme2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza, short media,unsigned char umbral)
{
	short x,y;
	float ruido;

	for(y=0;y<ImEntrada->alto;y++)
		for(x=0;x<ImEntrada->ancho;x++)
		{
			ruido=sqrt(varianza);
			ruido*=1.057192E-4;
			ruido*=Random15();
			ruido+=media;
			ruido-=(sqrt(varianza)*1.7320508);
			if(ruido>umbral)
				ruido=umbral;
			if(ruido<0)
				ruido=0;
			PIX(ImEntrada,x,y)=(unsigned char)(ruido+.5);
			PIX(ImEntrada2,x,y)=((unsigned char)(ruido+.5))<<1;
		}
}
void PROC_RuidoUniformeRGB(sImagen *ImEntrada,sImagen* ImSalida,float varianza, short media)
{


	sImagen ImInte[2];
	sImagen* ImInter[2];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=ImEntrada->tipo;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_RuidoUniforme(ImInter[0],varianza,media,0xFF);
	PROC_GrisesRGB(ImInter[0], ImInter[1]);
	PROC_SumatoriaRGB(ImInter[1],ImEntrada,ImSalida);

	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

//filtros no lineales

//tamaño del filtro menor a 12 y debe ser impar, P indica cuantos vamores no se toman en cuenta , P=0 es un filtro  de media y P=(N¨*N)/2-1/ es giltr d mediana
void PROC_FiltroATMF_RGB(sImagen *ImEntrada, sImagen *ImSalida,short P ,unsigned char N )
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroATMF(ImInter[0],ImInter[3],P,N);
	PROC_FiltroATMF(ImInter[1],ImInter[0],P,N);
	PROC_FiltroATMF(ImInter[2],ImInter[1],P,N);



	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}
void PROC_FiltroATMF(sImagen *ImEntrada, sImagen *ImSalida,short P ,unsigned char N )
{
	short x,y,i,j,sumatoria,z;
	short *Ar,A;
	if((N%2)==0 || N>11)
		N=7;
	Ar=(short*)malloc((long)N*(long)N*sizeof(short));
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					Ar[z]=*((ImEntrada->datos)+x+i+((y+j)*ImEntrada->ancho));
					z++;
				}
			for(j=1;j<=((N*N)-1);j++)
			{
				A=Ar[j];
				i=j-1;
				while((i>=0) && (Ar[i]>A))
				{
					Ar[i+1]=Ar[i];
					i--;
				}
				Ar[i+1]=A;
			}
			sumatoria=0;
			z=0;
			for(j=P;j<=((N*N)-1-P);j++)
			{
				sumatoria+=Ar[j];
				z++;
			}
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=(unsigned short)((float)sumatoria/(float)z+0.5);
		}
	free(Ar);
}

void PROC_FiltroCHM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroCHM(ImInter[0],ImInter[3],N,P,0x1F);
	PROC_FiltroCHM(ImInter[1],ImInter[0],N,P,0x3F);
	PROC_FiltroCHM(ImInter[2],ImInter[1],N,P,0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroCHM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P ,unsigned char umbral)
{
	short x,y,i,j,z;
	short *AR,a;
	float sumatoria,sumatoria1;

	if((N%2)==0 || N>11)
		N=5;
	AR=(short*)malloc((long)N*(long)N*sizeof(short));
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					AR[z]=PIX(ImEntrada,(x+i),(y+j));
					z++;
				}
			z=0;
			sumatoria=sumatoria1=0;
			for(j=0;j<(N*N)-1;j++)
			{
				if(AR[j]==0 && P<0)//significa divison entre 0
				{
					z=1;
				}
				else
				{
					sumatoria+=pow((double)AR[j],(double)(P+1));
					sumatoria1+=pow((double)AR[j],(double)(P));
				}
			}
			if(z==1)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=0;
			else
			{
				if(sumatoria1==0)
					a=0;
				else
					a=(short)(sumatoria/sumatoria1);
				if(a>umbral)
					a=umbral;
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=(unsigned char)a;
			}
		}
	free(AR);
}


void PROC_FiltroGM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroGM(ImInter[0],ImInter[3],N,0x1F);
	PROC_FiltroGM(ImInter[1],ImInter[0],N,0x3F);
	PROC_FiltroGM(ImInter[2],ImInter[1],N,0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroGM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N,unsigned char umbral)
{
	short x,y,i,j,z;
	short *AR;
	float producto;
	if((N%2)==0 || N>11)
		N=5;
	AR=(short*)malloc((long)N*(long)N*sizeof(short));
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					AR[z]=PIX(ImEntrada,(x+i),(y+j));
					z++;
				}
			producto=1.0;
			for(j=0;j<(N*N)-1;j++)
			{
				producto*=pow((double)AR[j],(double)(1.0/(float)(N*N)));
			}

			if(producto>umbral)
				producto=umbral;
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=(unsigned char)producto;
		}
	free(AR);
}

void PROC_FiltroHM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroHM(ImInter[0],ImInter[3],N,0x1F);
	PROC_FiltroHM(ImInter[1],ImInter[0],N,0x3F);
	PROC_FiltroHM(ImInter[2],ImInter[1],N,0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroHM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N,unsigned char umbral )
{
	short x,y,i,j,z;
	short *AR,a;
	float sumatoria;
	if((N%2)==0 || N>11)
		N=5;
	AR=(short*)malloc((long)N*(long)N*sizeof(short));
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					AR[z]=PIX(ImEntrada,(x+i),(y+j));
					z++;
				}
			z=0;
			sumatoria=0;
			for(j=0;j<(N*N)-1;j++)
			{
				if(AR[j]==0)//significa divison entre 0
				{
					z=1;
					sumatoria=0;
				}
				else
				{
					sumatoria+=1.0/(float)AR[j];
				}
			}
			if(z==1)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=0;
			else
			{
				a=(int)((float)(N*N)/sumatoria+0.5);
				if(a>umbral)
					a=umbral;
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=(unsigned char)a;
			}
		}
	free(AR);
}
void PROC_MaxFilter_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_MaxFilter(ImInter[0],ImInter[3],N);
	PROC_MaxFilter(ImInter[1],ImInter[0],N);
	PROC_MaxFilter(ImInter[2],ImInter[1],N);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_MaxFilter(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N )
{
	short x,y,i,j,smax,*a;
	if((N%2)==0 || N>11)
		N=3;
	a=(short*)malloc((long)N*(long)N*sizeof(short));

	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			smax=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
					*(a+(i+N/2)+(N*(j+N/2)))=PIX(ImEntrada,(x+i),(y+j));
			for(j=0;j<N-1;j++)
				for(i=0;i<N-1;i++)
					if(*(a+i+(N*j))>smax)
						smax=*(a+i+(N*j));

			*(ImSalida->datos+x+(y*ImEntrada->ancho))=smax;
		}
	free(a);
}


void PROC_FiltroMediana_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroMediana(ImInter[0],ImInter[3],N);
	PROC_FiltroMediana(ImInter[1],ImInter[0],N);
	PROC_FiltroMediana(ImInter[2],ImInter[1],N);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroMediana(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N )
{
	short x,y,i,j,z;
	short *AR,a;
	if((N%2)==0 || N>11)
		N=7;
	AR=(short*)malloc((long)N*(long)N*sizeof(short));

	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					AR[z]=PIX(ImEntrada,(x+i),(y+j));
					z++;
				}
			for(j=1;j<(N*N)-1;j++)
			{
				a=AR[j];
				i=j-1;
				while(i>=0 && AR[i]>a)
				{
					AR[i+1]=AR[i];
					i--;
				}
				AR[i+1]=a;
			}
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=AR[N*N/2];
		}
	free(AR);
}
void PROC_PuntoMedioFilter_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_PuntoMedioFilter(ImInter[0],ImInter[3],N,0x1F);
	PROC_PuntoMedioFilter(ImInter[1],ImInter[0],N,0x3F);
	PROC_PuntoMedioFilter(ImInter[2],ImInter[1],N,0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_PuntoMedioFilter(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N,unsigned char umbral )
{
	short x,y,i,j,smax,smin,*a;
	if((N%2)==0 || N>11)
		N=3;
	a=(short*)malloc((long)N*(long)N*sizeof(short));
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			smin=umbral;
			smax=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
					*(a+(i+N/2)+(N*(j+N/2)))=PIX(ImEntrada,(x+i),(y+j));

			for(j=0;j<N-1;j++)
				for(i=0;i<N-1;i++)
					if(*(a+i+(N*(j)))<smin)
						smin=*(a+i+(N*(j)));

			for(j=0;j<N-1;j++)
				for(i=0;i<N-1;i++)
					if(*(a+i+(N*(j)))>smax)
						smax=*(a+i+(N*(j)));
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=(smax+smin)/2;
		}
	free(a);
}

void PROC_MinFilter_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_MinFilter(ImInter[0],ImInter[3],N,0x1F);
	PROC_MinFilter(ImInter[1],ImInter[0],N,0x3F);
	PROC_MinFilter(ImInter[2],ImInter[1],N,0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_MinFilter(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N,unsigned char umbral )
{
	short x,y,i,j,smin,*a;
	if((N%2)==0 || N>11)
		N=5;
	a=(short*)malloc((long)N*(long)N*sizeof(short));

	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			smin=umbral;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
					*(a+(i+N/2)+(N*(j+N/2)))=PIX(ImEntrada,(x+i),(y+j));
			for(j=0;j<N-1;j++)
				for(i=0;i<N-1;i++)
					if(*(a+i+(N*(j)))<smin)
						smin=*(a+i+(N*(j)));

			*(ImSalida->datos+x+(y*ImEntrada->ancho))=smin;
		}
	free(a);
}

void PROC_FiltroRango_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroRango(ImInter[0],ImInter[3],N,0x1F);
	PROC_FiltroRango(ImInter[1],ImInter[0],N,0x3F);
	PROC_FiltroRango(ImInter[2],ImInter[1],N,0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroRango(sImagen *ImEntrada, sImagen *ImSalida, unsigned char N,unsigned char umbral)
{
	short x,y,i,j,sMinimo,sMaximo;
	short a[11][11];
	if((N%2)==0 || N>11)
		N=3;
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			sMinimo=umbral;
			sMaximo=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
					a[i+N/2][j+N/2]=*((ImEntrada->datos)+x+i+((y+j)*ImEntrada->ancho));
			for(j=0;j<=(N-1);j++)
				for(i=0;i<=(N-1);i++)
					if(a[i][j]<sMinimo)
						sMinimo=a[i][j];
			for(j=0;j<=(N-1);j++)
				for(i=0;i<=(N-1);i++)
					if(a[i][j]>sMaximo)
						sMaximo=a[i][j];

			*(ImSalida->datos+x+(y*ImEntrada->ancho))=sMaximo-sMinimo;
		}
}

void PROC_FiltroMedianaPonderado_RGB(sImagen *ImEntrada, sImagen *ImSalida,sImagen *Mascara )
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroMedianaPonderado(ImInter[0],ImInter[3],Mascara );
	PROC_FiltroMedianaPonderado(ImInter[1],ImInter[0],Mascara );
	PROC_FiltroMedianaPonderado(ImInter[2],ImInter[1],Mascara );

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroMedianaPonderado(sImagen *ImEntrada, sImagen *ImSalida,sImagen *Mascara )
{
	short x,y,i,j,M,z,N;
	short *AR,a;
	if((Mascara->ancho%2)==0 || (Mascara->alto%2)==0|| Mascara->alto>11|| Mascara->ancho>11)
		Mascara->ancho=Mascara->alto=7;
	N=Mascara->ancho;
	AR=(short*)malloc(((long)N*(long)N+10)*sizeof(short));

	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					for(M=1;M<=PIX(Mascara,(N/2)+i,(N/2)+j);M++)
					{
					AR[z]=PIX(ImEntrada,(x+i),(y+j));
					z++;
					}
				}
			for(j=1;j<z-1;j++)
			{
				a=AR[j];
				i=j-1;
				while(i>=0 && AR[i]>a)
				{
					AR[i+1]=AR[i];
					i--;
				}
				AR[i+1]=a;
			}
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=AR[z/2];
		}
	free(AR);
}

void PROC_FiltroYp_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P  )
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroYp(ImInter[0],ImInter[3],N,P,0x1F);
	PROC_FiltroYp(ImInter[1],ImInter[0],N,P,0x3F );
	PROC_FiltroYp(ImInter[2],ImInter[1],N,P,0x1F );

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroYp(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P ,unsigned char umbral)
{
	short x,y,i,j,z;
	short *AR,a;
	float sumatoria;
	if((N%2)==0 || N>11)
		N=5;
	AR=(short*)malloc(((long)N*(long)N)*sizeof(short));


	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			z=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
				{
					AR[z]=PIX(ImEntrada,(x+i),(y+j));
					z++;
				}
			z=0;
			sumatoria=0;
			for(j=0;j<(N*N)-1;j++)
			{
				if(AR[j]==0 && P<0)//significa divison entre 0
				{
					z=1;
				}
				else
				{
					sumatoria+=pow((double)AR[j],(double)(P));
				}
			}
			if(z==1)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=0;
			else
			{
				if(sumatoria==0)
					a=0;
				else
					a=(short)pow(sumatoria/(N*N),1.0/P);
				if(a>umbral)
					a=umbral;
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=(unsigned char)a;
			}
		}
	free(AR);
}



//segmentacion

void PROC_DetectorLineaH_RGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[5];
	sImagen* ImInter[5];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=TIPO_UCHAR;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=TIPO_UCHAR;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[2]=&ImInte[2];
	ImInter[2]->alto=ImEntrada->alto;
	ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[2]->tipo=TIPO_USHORT;
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

	ImInter[3]=&ImInte[3];
	ImInter[3]->alto=ImEntrada->alto;
	ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[3]->tipo=TIPO_USHORT;
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
	PROC_DetectorLineaH(ImInter[0],ImInter[3],0x1F);
	PROC_DetectorLineaH(ImInter[1],ImInter[0],0x3F);
	PROC_DetectorLineaH(ImInter[2],ImInter[1],0x1F);
	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
	//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_DetectorLineaH(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
		{
				-1,-1,-1,
				2,2,2,
				-1,-1,-1,
		};
		sImagen masc={mascara,3,3,TIPO_UCHAR};
		PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}
void PROC_DetectorLineaV_RGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[5];
	sImagen* ImInter[5];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=TIPO_UCHAR;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=TIPO_UCHAR;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[2]=&ImInte[2];
	ImInter[2]->alto=ImEntrada->alto;
	ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[2]->tipo=TIPO_USHORT;
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

	ImInter[3]=&ImInte[3];
	ImInter[3]->alto=ImEntrada->alto;
	ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[3]->tipo=TIPO_USHORT;
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
	PROC_DetectorLineaV(ImInter[0],ImInter[3],0x1F);
	PROC_DetectorLineaV(ImInter[1],ImInter[0],0x3F);
	PROC_DetectorLineaV(ImInter[2],ImInter[1],0x1F);
	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
	//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}
void PROC_DetectorLineaV(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
		{
				-1,2,-1,
				-1,2,-1,
				-1,2,-1,
		};
		sImagen masc={mascara,3,3,TIPO_UCHAR};
		PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}


void PROC_DetectorLineaDI_RGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[5];
	sImagen* ImInter[5];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=TIPO_UCHAR;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=TIPO_UCHAR;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[2]=&ImInte[2];
	ImInter[2]->alto=ImEntrada->alto;
	ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[2]->tipo=TIPO_USHORT;
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

	ImInter[3]=&ImInte[3];
	ImInter[3]->alto=ImEntrada->alto;
	ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[3]->tipo=TIPO_USHORT;
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
	PROC_DetectorLineaDI(ImInter[0],ImInter[3],0x1F);
	PROC_DetectorLineaDI(ImInter[1],ImInter[0],0x3F);
	PROC_DetectorLineaDI(ImInter[2],ImInter[1],0x1F);
	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
	//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_DetectorLineaDI(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
		{
				2,-1,-1,
				-1,2,-1,
				-1,-1,2,
		};
		sImagen masc={mascara,3,3,TIPO_UCHAR};
		PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_DetectorLineaDD_RGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[5];
	sImagen* ImInter[5];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=TIPO_UCHAR;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=TIPO_UCHAR;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[2]=&ImInte[2];
	ImInter[2]->alto=ImEntrada->alto;
	ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[2]->tipo=TIPO_USHORT;
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

	ImInter[3]=&ImInte[3];
	ImInter[3]->alto=ImEntrada->alto;
	ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[3]->tipo=TIPO_USHORT;
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
	PROC_DetectorLineaDD(ImInter[0],ImInter[3],0x1F);
	PROC_DetectorLineaDD(ImInter[1],ImInter[0],0x3F);
	PROC_DetectorLineaDD(ImInter[2],ImInter[1],0x1F);
	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
	//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_DetectorLineaDD(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
		{
				-1,-1,2,
				-1,2,-1,
				2,-1,-1,
		};
		sImagen masc={mascara,3,3,TIPO_UCHAR};
		PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}




void PROC_MultiUmbral(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral1,unsigned char umbral2,unsigned char umbral )
{
	long y,x,g2,g1,g0,gr,aux1,aux2;
	g2=umbral;
	g1=(umbral>>1)+1;
	g0=0;
	aux1=umbral1;
	aux2=umbral2;
	if(umbral1>umbral2)
	{
		aux1=umbral2;
		aux2=umbral1;
	}

	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			gr=PIX(ImEntrada,x,y);
			if(gr>aux2)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=g2;
			if(gr<=aux2 && gr>aux1 )
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=g1;
			if(gr<=aux1)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=g0;
		}
}

void PROC_MultiUmbralInv(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral1,unsigned char umbral2,unsigned char umbral )
{
	long y,x,g2,g1,g0,gr,aux1,aux2;
	g2=0;
	g1=(umbral>>1)+1;
	g0=umbral;
	aux1=umbral1;
	aux2=umbral2;
	if(umbral1>umbral2)
	{
		aux1=umbral2;
		aux2=umbral1;
	}

	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			gr=PIX(ImEntrada,x,y);
			if(gr>aux2)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=g2;
			if(gr<=aux2 && gr>aux1 )
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=g1;
			if(gr<=aux1)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=g0;
		}
}


void PROC_QuickSort(unsigned char arreglo[], unsigned char izquierda, unsigned char derecha) {

      short i = izquierda, j = derecha;
      short temporal;
      short pivot = arreglo[(izquierda + derecha) / 2];

      while (i <= j)
      {
            while (arreglo[i] < pivot) i++;
            while (arreglo[j] > pivot) j--;
            if (i <= j)
            {
            	temporal = arreglo[i];
            	arreglo[i] = arreglo[j];
            	arreglo[j] = temporal;
            	i++;
                j--;
            }

      }
      if (izquierda < j) PROC_QuickSort(arreglo, izquierda, j);
      if (i < derecha) PROC_QuickSort(arreglo, i, derecha);
}

void PROC_MultiUmbralesInv(sImagen *ImEntrada,sImagen *ImSalida, unsigned char* umbrales,unsigned char cantidad,unsigned char umbral )
{
	long y,x,div,gr,i;

	PROC_QuickSort( umbrales,0,cantidad-1);
	div=umbral/(cantidad-1);
	div+=1;
	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			for(i=1;i<cantidad;i++)
			{
				gr=PIX(ImEntrada,x,y);
				if(gr<=umbrales[i]  && gr>umbrales[i-1] )
				{
						*(ImSalida->datos+x+(y*ImEntrada->ancho))= div*(i-1);
						break;
				}
			}
		}
}

void PROC_MultiUmbrales(sImagen *ImEntrada,sImagen *ImSalida, unsigned char* umbrales,unsigned char cantidad,unsigned char umbral )
{
	long y,x,div,gr,i;

	PROC_QuickSort( umbrales,0,cantidad-1);
	div=umbral/(cantidad-1);
	div+=1;
	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			for(i=1;i<cantidad;i++)
			{
				gr=PIX(ImEntrada,x,y);
				if(gr<=umbrales[i]  && gr>umbrales[i-1] )
				{
						*(ImSalida->datos+x+(y*ImEntrada->ancho))= umbral-div*(i-1);
						break;
				}
			}
		}
}


void PROC_Binarizacion(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral,unsigned char umbral1 )
{
	long y,x;

	if(umbral1<umbral)
		umbral1=umbral;
	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			if(PIX(ImEntrada,x,y)>=umbral)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=umbral1;
			else
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=0;
		}
}

void PROC_BinarizacionInv(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral,unsigned char umbral1 )
{
	long y,x;

	if(umbral1<umbral)
		umbral1=umbral;
	for(y=0; y<ImEntrada->alto;++y)
		for(x=0; x<ImEntrada->ancho;++x)
		{
			if(PIX(ImEntrada,x,y)>=umbral)
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=0;
			else
				*(ImSalida->datos+x+(y*ImEntrada->ancho))=umbral1;
		}
}



void PROC_FiltroDetectorPuntos_RGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[5];
	sImagen* ImInter[5];
	ImInter[0]=&ImInte[0];
	ImInter[0]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=TIPO_UCHAR;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[1]=&ImInte[1];
	ImInter[1]->alto=ImEntrada->alto;
	ImInter[1]->ancho=ImEntrada->ancho;
	ImInter[1]->tipo=TIPO_UCHAR;
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	ImInter[2]=&ImInte[2];
	ImInter[2]->alto=ImEntrada->alto;
	ImInter[2]->ancho=ImEntrada->ancho;
	ImInter[2]->tipo=TIPO_USHORT;
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));

	ImInter[3]=&ImInte[3];
	ImInter[3]->alto=ImEntrada->alto;
	ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[3]->tipo=TIPO_USHORT;
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(short));


	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);
	PROC_FiltroDetectorPuntos(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroDetectorPuntos(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroDetectorPuntos(ImInter[2],ImInter[1],0x1F);
	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);
	//PROC_SumatoriaRGB(ImEntrada,ImInter[2],ImSalida);
	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);

}

void PROC_FiltroDetectorPuntos(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			-1,-1,-1,
			-1,8,-1,
			-1,-1,-1,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_UmbralOptimo(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	int x,y,bandera,j,umbral1,objeto,fondo;
	float Hist[umbral+1],sumatoria;
	objeto=umbral;
	fondo=0;
	PROC_HistogramaPorcentaje(ImEntrada,  Hist,umbral);
	for(y=0;y<umbral;y++)
	{
		sumatoria=0;
		j=0;
		for(x=-15;x<=15;x++)
		{
			j++;
			if((y-x)>=0)
				sumatoria+=Hist[y-x];
		}
		Hist[y]=sumatoria/(float)j;
	}
	y=2;
	bandera=0;
	umbral1=0;
	while(bandera==0 && y<umbral-1)
	{
		if((Hist[y-1]>=Hist[y]) && (Hist[y]<Hist[y+1]))
		{
			bandera=1;
			umbral1=y;
		}
		y++;
	}

	for(y=0;y<(umbral+1)*2;y++)
	{
		for(x=0;x<(umbral+1)*2;x++)
		{
			if(PIX(ImEntrada,x,y)>umbral1)
				PIX(ImSalida,x,y)=objeto;
			else
				PIX(ImSalida,x,y)=fondo;
		}
	}
}
void PROC_UmbralOptimoInv(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	int x,y,bandera,j,umbral1,objeto,fondo;
	float Hist[umbral+1],sumatoria;
	objeto=0;
	fondo=umbral;
	PROC_HistogramaPorcentaje(ImEntrada,  Hist,umbral);
	for(y=0;y<umbral;y++)
	{
		sumatoria=0;
		j=0;
		for(x=-15;x<=15;x++)
		{
			j++;
			if((y-x)>=0)
				sumatoria+=Hist[y-x];
		}
		Hist[y]=sumatoria/(float)j;
	}
	y=2;
	bandera=0;
	umbral1=0;
	while(bandera==0 && y<umbral-1)
	{
		if((Hist[y-1]>=Hist[y]) && (Hist[y]<Hist[y+1]))
		{
			bandera=1;
			umbral1=y;
		}
		y++;
	}

	for(y=0;y<(umbral+1)*2;y++)
	{
		for(x=0;x<(umbral+1)*2;x++)
		{
			if(PIX(ImEntrada,x,y)>umbral1)
				PIX(ImSalida,x,y)=objeto;
			else
				PIX(ImSalida,x,y)=fondo;
		}
	}
}

//filtros espaciales




//filtro de promedio aritmetico
void PROC_FiltroAM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N )
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroAM(ImInter[0],ImInter[3],N);
	PROC_FiltroAM(ImInter[1],ImInter[0],N);
	PROC_FiltroAM(ImInter[2],ImInter[1],N);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroAM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N )
{
	short x,y,i,j,sumatoria;
	if((N%2)==0 || N>11)
		N=7;
	for(y=(N/2);y<((ImEntrada->alto)-(N/2));y++)
		for(x=N/2;x<((ImEntrada->ancho)-(N/2));x++)
		{
			sumatoria=0;
			for(j=(-N/2);j<=(N/2);j++)
				for(i=(-N/2);i<=(N/2);i++)
					sumatoria+=*((ImEntrada->datos)+x+i+((y+j)*ImEntrada->ancho));
			*(ImSalida->datos+x+(y*ImEntrada->ancho))=(sumatoria/N)/N;
		}
}

void PROC_FiltroGausiano7x7_RGB(sImagen *ImEntrada, sImagen *ImSalida)
{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroGausiano7x7(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroGausiano7x7(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroGausiano7x7(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroGausiano7x7(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[7*7]=
	{
			1,1,2,2,2,1,1,
			1,2,2,4,2,2,1,
			2,2,4,8,4,2,2,
			2,4,8,16,8,4,2,
			2,2,4,8,4,2,2,
			1,2,2,4,2,2,1,
			1,1,2,2,2,1,1,
	};
	sImagen masc={mascara,7,7,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,273,umbral);
}



void PROC_FiltroPrewitN3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			-1,-1,-2,
			0,0,0,
			1,1,2,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPrewitO3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			-1,0,1,
			-2,0,2,
			-1,0,1,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPrewitE3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			1,0,-1,
			2,0,-2,
			1,0,-1,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPrewitS3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			1,1,2,
			0,0,0,
			-1,-1,-2,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPrewitNE3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			0,-1,-2,
			1,0,-1,
			2,1,0,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPrewitSE3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			2,1,0,
			1,0,-1,
			0,-1,-2,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}



void PROC_FiltroPrewitSO3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			0,1,2,
			-1,0,1,
			-2,-1,0,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPrewitNO3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			-2,-1,0,
			-1,0,1,
			0,1,2,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroPA3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroPA3x3(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroPA3x3(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroPA3x3(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroPA3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			-1,-1,-1,
			-1,9,-1,
			-1,-1,-1,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}


void PROC_FiltroPA5x5_1_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroPA5x5_1(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroPA5x5_1(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroPA5x5_1(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroPA5x5_1(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[5*5]=
	{
			 0,-1, -1,-1, 0,
			-1, 2, -4, 2,-1,
			-1,-4, 13,-4,-1,
			-1, 2, -4, 2,-1,
			 0,-1, -1,-1, 0,
	};
	sImagen masc={mascara,5,5,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,-7,umbral);
}

void PROC_FiltroPA5x5_2_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroPA5x5_2(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroPA5x5_2(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroPA5x5_2(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroPA5x5_2(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[5*5]=
	{
			 -1,-1, -1,-1, -1,
			-1, 2, 2, 2,-1,
			-1,2, 8,2,-1,
			-1, 2, 2, 2,-1,
			 -1,-1, -1,-1, -1,
	};
	sImagen masc={mascara,5,5,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,8,umbral);
}


void PROC_FiltroPB3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroPB3x3(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroPB3x3(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroPB3x3(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroPB3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			1,2,1,
			2,4,2,
			1,2,1,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,16,umbral);
}

void PROC_FiltroPB5x5_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroPB5x5(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroPB5x5(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroPB5x5(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroPB5x5(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[5*5]=
	{
			1,1,1,1,1,
			1,4,4,4,1,
			1,4,12,4,1,
			1,4,4,4,1,
			1,1,1,1,1,
	};
	sImagen masc={mascara,5,5,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,60,umbral);
}


void PROC_FiltroLaplaciano3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroLaplaciano3x3(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroLaplaciano3x3(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroLaplaciano3x3(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroLaplaciano3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[3*3]=
	{
			0,-1,0,
			-1,4,-1,
			0,-1,0,
	};
	sImagen masc={mascara,3,3,TIPO_UCHAR};

	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}

void PROC_FiltroGradienteRobert2x2(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[2*2]=
	{
			0,-1,
			-1,0,
	};
	sImagen masc={mascara,2,2,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);
}


void PROC_FiltroSobel3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroSobel3x3(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroSobel3x3(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroSobel3x3(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}


void PROC_FiltroSobel3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{

	unsigned char mascara1[3*3]=
	{
			-1,-2,-1,
			0,0,0,
			1,2,1,
	};
	unsigned char mascara2[3*3]=
	{
			-1,0,1,
			-2,0,2,
			-1,0,1,
	};
	short x=0,y=0,aux;
	sImagen masc={mascara1,3,3,TIPO_UCHAR};
	sImagen ImInte;
	sImagen* ImInter;
	ImInter=&ImInte;
	ImInter->alto=ImEntrada->alto;
	ImInter->ancho=ImEntrada->ancho;
	ImInter->tipo=ImEntrada->tipo;
	ImInter->datos=(unsigned char*)malloc((long)ImInter->ancho*(long)ImInter->alto*sizeof(char));
	PROC_ConvDiscreta1(ImEntrada,ImInter,&masc,1,umbral);
	masc.datos=mascara2;
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,1,umbral);


	for(y=0;y<ImSalida->alto;y++)
		for(x=0;x<ImSalida->ancho;x++)
		{
				aux=PIX(ImInter,x,y)+PIX(ImSalida,x,y);
				if(aux>umbral) aux=umbral;
				PIX(ImSalida,x,y)=aux;

		}
	free(ImInter->datos);

}

void PROC_FiltroMedia5x5_RGB(sImagen *ImEntrada, sImagen *ImSalida)

{
	sImagen ImInte[4];
	sImagen* ImInter[4];
	ImInter[0]=&ImInte[0];
	ImInter[1]=&ImInte[1];
	ImInter[2]=&ImInte[2];
	ImInter[3]=&ImInte[3];
	ImInter[0]->alto=ImInter[1]->alto=ImInter[2]->alto=ImInter[3]->alto=ImEntrada->alto;
	ImInter[0]->ancho=ImInter[1]->ancho=ImInter[2]->ancho=ImInter[3]->ancho=ImEntrada->ancho;
	ImInter[0]->tipo=ImInter[1]->tipo=ImInter[2]->tipo=ImInter[3]->tipo=ImEntrada->tipo;
	ImInter[0]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[1]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[2]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));
	ImInter[3]->datos=(unsigned char*)malloc((long)ImEntrada->ancho*(long)ImEntrada->alto*sizeof(char));

	PROC_Gris3s(ImEntrada,ImInter[0],ImInter[1],ImInter[2]);

	PROC_FiltroMedia5x5(ImInter[0],ImInter[3],0x1F);
	PROC_FiltroMedia5x5(ImInter[1],ImInter[0],0x3F);
	PROC_FiltroMedia5x5(ImInter[2],ImInter[1],0x1F);

	PROC_Gris3sRGB(ImInter[3],ImInter[0],ImInter[1],ImSalida);

	free(ImInter[3]->datos);
	free(ImInter[2]->datos);
	free(ImInter[1]->datos);
	free(ImInter[0]->datos);
}

void PROC_FiltroMedia5x5(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral)
{
	unsigned char mascara[5*5]=
	{
			1,1,1,1,1,
			1,2,2,2,1,
			1,2,3,2,1,
			1,2,2,2,1,
			1,1,1,1,1,
	};
	sImagen masc={mascara,5,5,TIPO_UCHAR};
	PROC_ConvDiscreta1(ImEntrada,ImSalida,&masc,35,umbral);
}




//investigar tinta y saturaicion para RGB565

//filtros espaciales frecuencia
void PROC_ObtenerFiltroCS(sImagen *ImFiltro,float FrecCorte,short orden )
{
	short x,y,l,m,filas,columnas;
	float *castFloat,transferencia,potencia,potencia1;

	castFloat=(float*)ImFiltro->datos;
	filas=ImFiltro->alto;
	columnas=ImFiltro->ancho;

	if(filas>columnas)
		filas=columnas;
	else
		columnas=filas;
	potencia=sqrt(columnas);
	potencia1=(potencia-(long)(potencia))*1000;
	if(potencia1)
		columnas=filas=pow((long)(potencia),2);

	for(y=0,l=(filas-1);y<(filas-1);++y,--l)
		for(x=0,m=(columnas-1);x<(columnas-1);++x,--m)
		{
			transferencia=1/(1+pow(sqrt((x*x)+(y*y)/FrecCorte),2*orden));
			*(castFloat+(x+(y*ImFiltro->ancho)))=*(castFloat+(x+(y*ImFiltro->ancho))+1)=transferencia;
			*(castFloat+(m+(l*ImFiltro->ancho)))=*(castFloat+(m+(l*ImFiltro->ancho))+1)=transferencia;
			*(castFloat+(m+(y*ImFiltro->ancho)))=*(castFloat+(m+(y*ImFiltro->ancho))+1)=transferencia;
			*(castFloat+(x+(l*ImFiltro->ancho)))=*(castFloat+(x+(l*ImFiltro->ancho))+1)=transferencia;
		}
}




//transformadas

void PROC_TransCos(sImagen *ImEntrada, sImagen *ImSalida,short tipo)
{
	int x,y,n,m,numx,numy;
	float sum,kx0,kx1,ky0,ky1,ktx,kty,A;
	double pi;
	pi=3.141592654;
	numy=ImEntrada->alto;
	numx=ImEntrada->ancho;
	kx0=sqrt(1.0/(double)numx);
	kx1=sqrt(2.0/(double)numx);
	ky0=sqrt(1.0/(double)numy);
	ky1=sqrt(2.0/(double)numy);
	for(m=0;m<numy;m++)
		for(n=0;n<numx;m++)
		{
			sum=0;
			for(y=0;y<numy;y++)
			{
				if (tipo==NOINVERSE)
					A=cos((((2.0*y)+1)*(m*pi))/(2*numy));
				if(tipo==INVERSE)
					A=cos((((2.0*m)+1)*(y*pi))/(2*numy));
				for(x=0;x<numx;x++)
				{
					if(tipo==INVERSE)
					{
						if(x==0)
							ktx=kx0;
						else
							ktx=kx1;

						if(y==0)
							kty=ky0;
						else
							kty=ky1;

						switch(ImEntrada->tipo)
							{
							case TIPO_UCHAR:
								sum+=kty*ktx* (*(((unsigned char*)ImEntrada->datos)+(x)+((y)*ImEntrada->ancho)))*A*
									cos((((2.0*n)+1)*(x*pi))/(2*numx));
								break;
							case TIPO_USHORT:
								sum+=kty*ktx* (*(((unsigned short*)ImEntrada->datos)+(x)+((y)*ImEntrada->ancho)))*A*
									cos((((2.0*n)+1)*(x*pi))/(2*numx));
								break;
							case TIPO_COMPLEJO:
							case TIPO_FLOAT:
								sum+=kty*ktx* (*(((float*)ImEntrada->datos)+(x)+((y)*ImEntrada->ancho)))*A*
									cos((((2.0*n)+1)*(x*pi))/(2*numx));
								break;
							default:
								return;
								break;
							}



					}
					if(tipo==NOINVERSE)

						switch(ImEntrada->tipo)
							{
							case TIPO_UCHAR:
								sum+=*(((unsigned char*)ImEntrada->datos)+(x)+((y)*ImEntrada->ancho))*A*
									cos((((2.0*x)+1)*(n*pi))/(2*numx));
								break;
							case TIPO_USHORT:
								sum+=*(((unsigned short*)ImEntrada->datos)+(x)+((y)*ImEntrada->ancho))*A*
									cos((((2.0*x)+1)*(n*pi))/(2*numx));
								break;
							case TIPO_COMPLEJO:
							case TIPO_FLOAT:
								sum+=*(((float*)ImEntrada->datos)+(x)+((y)*ImEntrada->ancho))*A*
									cos((((2.0*x)+1)*(n*pi))/(2*numx));
								break;
							default:
								return;
								break;
							}



				}
			}
			if(tipo==NOINVERSE)
			{
				if(n==0)
					sum*=kx0;
				else
					sum*=kx1;

				if(m==0)
					sum*=ky0;
				else
					sum*=ky1;
			}
			switch(ImEntrada->tipo)
				{
				case TIPO_UCHAR:
					*(((unsigned char*)ImSalida->datos)+n+(m*ImEntrada->ancho))=(unsigned char)sum;
					break;
				case TIPO_USHORT:
					*(((unsigned short*)ImSalida->datos)+n+(m*ImEntrada->ancho))=(unsigned short)sum;
					break;
				case TIPO_COMPLEJO:
				case TIPO_FLOAT:
					*(((float*)ImSalida->datos)+n+(m*ImEntrada->ancho))=(float)sum;
					break;
				default:
					return;
					break;
				}
		}
	ImSalida->ancho=ImEntrada->ancho;
	ImSalida->alto=ImEntrada->alto;
}

//trandformada discreta de fourier y FFT

*/






