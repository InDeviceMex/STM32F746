/*
 * Proce_Imagenes.h
 *
 *  Created on: Jun 22, 2016
 *      Author: Lalo
 */

#ifndef IMAGE_PROCESSING_H_
#define IMAGE_PROCESSING_H_


#include <stdio.h>
#include <stdlib.h>
#include "usart.h"
#include "font.h"
#include "LTDC.h"
#include "Colors.h"
#include "DCMI.h"
#include "RNG.h"
#include "arm_math.h"
#include "LBPU.h"

typedef struct {
	unsigned char *data;
	int width;
	int height;
	unsigned char  type;
}sImage;

typedef struct {
	float varianza;
	int16_t alfa;
	uint8_t umbral;
}NOISE_TypeDef;

typedef struct {
	uint32_t area;
	uint16_t Xmin;
	uint16_t Ymin;
	uint16_t Xmax;
	uint16_t Ymax;
}AREA_TypeDef;

#define PIX(im,x,y) *(im->layerDataAddress+(x)+((y)*im->layerWidthTotal))
#define PIXc(im,x,y) *((uint8_t*)im->layerDataAddress+(x)+((y)*im->layerWidthTotal))
#define PIXs(im,x,y) *((uint16_t*)im->layerDataAddress+(x)+((y)*im->layerWidthTotal))
#define PIXs(im,x,y) *((uint16_t*)im->layerDataAddress+(x)+((y)*im->layerWidthTotal))
#define PIX1(im,x,y,ancho) *((&im)+(x)+((y)*(ancho)))
#define NOINVERSE 1
#define INVERSE -1
#define CODIFICATION 1
#define DECODIFICATION 0
#define ZOOM 1
#define DEZOOM 0
#define abs(x) ((signed long)(x)<0?-(x):(x))


/*Color*/
uint32_t IMAGEPROC_Get16bRGBScaleHSI(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_GetHSI16bRGBScale(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);


uint32_t IMAGEPROC_16bRGBScale216bGrayScale(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScale216bGrayScaleRed(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScale216bGrayScaleGreen(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScale216bGrayScaleBlue(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);

uint32_t IMAGEPROC_16bRGBScale28bGrayScale(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bGrayScale216bGrayScale(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);

uint32_t IMAGEPROC_16bRGBScaleSplit(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed, LTDC_TFT_TypeDef *layerDestGreen,LTDC_TFT_TypeDef *layerDestBlue,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitFull(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed, LTDC_TFT_TypeDef *layerDestGreen,LTDC_TFT_TypeDef *layerDestBlue,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitRed(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitGreen(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDestGreen,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitBlue(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDestBlue,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitFullRed(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef*layerDestRed,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitFullGreen(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDestGreen,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bRGBScaleSplitFullBlue(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDestBlue,LTDC_DIMENSIONS_TypeDef dim);



uint32_t IMAGEPROC_8bRGBto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerSourceGreen,LTDC_TFT_TypeDef *layerSourceBlue,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bRGBFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerSourceGreen,LTDC_TFT_TypeDef *layerSourceBlue,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bRedto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bRedFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bGreento16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bGreenFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bBlueto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_8bBlueFullto16bRGBScale(LTDC_TFT_TypeDef*layerSourceRed, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);

uint32_t IMAGEPROC_16bAdd(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bAddMean(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bAddBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,float blend);
uint32_t IMAGEPROC_16bAddMeanBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,float blend);
uint32_t IMAGEPROC_16bAddConstant(LTDC_TFT_TypeDef*layerSource, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t redConstant,uint8_t greenConstant,uint8_t blueConstant );
uint32_t IMAGEPROC_8bAdd(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral);
uint32_t IMAGEPROC_8bAddMean(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral);
uint32_t IMAGEPROC_8bAddBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral,float blend);
uint32_t IMAGEPROC_8bAddMeanBlend(LTDC_TFT_TypeDef*layerSource1,LTDC_TFT_TypeDef*layerSource2, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t umbral,float blend);
uint32_t IMAGEPROC_8bAddConstant(LTDC_TFT_TypeDef*layerSource, LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim,uint8_t constant,uint8_t umbral,float blend);



/*
void PROC_Sumatoria(sImagen *ImRGB, sImagen *ImGris,sImagen *ImSalida, unsigned char umbral);

void PROC_RestaGrises(sImagen *ImEntrada1, sImagen *ImEntrada2,sImagen *ImSalida ,unsigned char umbral);
void PROC_RestaRGB(sImagen *ImEntrada1, sImagen *ImEntrada2,sImagen *ImSalida );
void PROC_Resta(sImagen *ImRGB, sImagen *ImGris,sImagen *ImSalida,unsigned char modo,unsigned char umbral);
void PROC_segRGB(sImagen* imagenEntrada,  sImagen *imagenSalida,unsigned char canal, unsigned char porc);
*/



uint32_t IMAGEPROC_8bUmbral(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim, uint8_t umbralCenter, uint8_t umbralLenght);
uint32_t IMAGEPROC_16bUmbral(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, uint16_t umbralCenter, uint8_t umbralLenghtRed, uint8_t umbralLenghtGreen, uint8_t umbralLenghtBlue);

uint32_t IMAGEPROC_16bCrom(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bWhitePatch(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bGrayWorld(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bGrayWorldMax(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bGrayWorldSquare(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_16bMaxRGB(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim, float* RGB,uint32_t norm);
uint32_t IMAGEPROC_16bMeanRGB(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim, uint32_t* RGB);
uint32_t IMAGEPROC_16bMeanNormRGB(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim, float* RGB,uint32_t norm);


uint32_t IMAGEPROC_16bConectivity4(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, AREA_TypeDef* area);
uint32_t IMAGEPROC_16bConectivity8(LTDC_TFT_TypeDef *layerSource,LTDC_TFT_TypeDef *layerDest, LTDC_DIMENSIONS_TypeDef dim, AREA_TypeDef* area);


uint32_t IMAGEPROC_Histograma(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim,uint32_t Hist[256]);
uint32_t IMAGEPROC_HistogramaNorm(LTDC_TFT_TypeDef *layerSource, LTDC_DIMENSIONS_TypeDef dim,float Hist[256]);


uint32_t IMAGEPROC_LBPU(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_Convolucion(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_TFT_TypeDef *Kernel,LTDC_DIMENSIONS_TypeDef dim );




uint32_t IMAGEPROC_Rotation90Degree(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);
uint32_t IMAGEPROC_Flip(LTDC_TFT_TypeDef *layerSource, LTDC_TFT_TypeDef *layerDest,LTDC_DIMENSIONS_TypeDef dim);


uint32_t IMAGEPROC_GammaNoise(LTDC_TFT_TypeDef *layer,NOISE_TypeDef propierties,LTDC_DIMENSIONS_TypeDef dim);

int32_t Random32(void);
int16_t Random16(void);
int16_t Random15(void);
/*
//codificacion y compresion
short PROC_Cadena(sImagen *ImEntrada,unsigned short x,unsigned short y,
				  unsigned char* codificacion,unsigned char umbral,unsigned short maximo);
void PROC_CodificacionHuffman(sImagen *ImEntrada, char* Compresion);//ToDo
void PROC_RLE (sImagen *ImEntrada,unsigned char* codificacion,unsigned char compresion);



//graficos
void PROC_Zoom(sImagen *ImEntrada,sImagen *ImSalida,unsigned int xIniE,unsigned int yIniE,
		unsigned int xIniS,unsigned int yIniS,unsigned int ancho, unsigned int alto, int zoom);

/////////
void PROC_Animacion(sImagen *ImInicio,sImagen *ImFinal, sImagen *ImSalida,unsigned char *Estado ,unsigned char *Terminado);
void PROC_Warp(sImagen *ImEntrada,sImagen *ImSalida,unsigned int xIniE,unsigned int yIniE,
		unsigned int xFinE,unsigned int yFin,unsigned int* xS, unsigned int *yS);


//Ruido

void PROC_RuidoGammaRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza, short alfa);

void PROC_RuidoGaussiano(sImagen *ImEntrada,float varianza, short media,unsigned char umbral);
void PROC_RuidoGaussiano2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza, short media,unsigned char umbral);
void PROC_RuidoGaussianoRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza, short media);


void PROC_RuidoNegativoExp(sImagen *ImEntrada,float varianza,unsigned char umbral);
void PROC_RuidoNegativoExp2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza,unsigned char umbral);
void PROC_RuidoNegativoExpRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza);

void PROC_RuidoRayleigh(sImagen *ImEntrada,float varianza,unsigned char umbral);
void PROC_RuidoRayleigh2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza,unsigned char umbral);
void PROC_RuidoRayleighRGB(sImagen *ImEntrada,sImagen *ImSalida,float varianza);

void PROC_RuidoSalyPimienta(sImagen *ImEntrada,float probabilidad,unsigned char umbral);
void PROC_RuidoSalyPimienta2(sImagen *ImEntrada,sImagen *ImEntrada2,sImagen *ImEntrada3, float probabilidad);
void PROC_RuidoSalyPimientaRGB(sImagen *ImEntrada,sImagen *ImSalida,float probabilidad);


void PROC_RuidoUniforme(sImagen *ImEntrada,float varianza, short media,unsigned char umbral);
void PROC_RuidoUniforme2(sImagen *ImEntrada,sImagen *ImEntrada2,float varianza, short media,unsigned char umbral);
void PROC_RuidoUniformeRGB(sImagen *ImEntrada,sImagen* ImSalida,float varianza, short media);



//filtros adaptivos
void PROC_FiltroDWMTM_RGB(sImagen *ImEntrada, sImagen *ImSalida, float desviacionRuido, float K );
void PROC_FiltroDWMTM(sImagen *ImEntrada, sImagen *ImSalida, float desviacionRuido, float K, unsigned char umbral );

void PROC_FiltroMMSE_RGB(sImagen *ImEntrada, sImagen *ImSalida, float varianzaRuido, unsigned char n  );
void PROC_FiltroMMSE(sImagen *ImEntrada, sImagen *ImSalida, float varianzaRuido, unsigned char n ,unsigned char umbral);




//Histograma
void PROC_CorrBrillo(sImagen *ImEntrada, sImagen *ImSalida,short brillo,unsigned char umbral );
void PROC_CorrBrilloRGB(sImagen *ImEntrada, sImagen *ImSalida,short brillo);

void PROC_CorrContraste(sImagen *ImEntrada, sImagen *ImSalida,float contraste ,unsigned char umbral);
void PROC_CorrContrasteRGB(sImagen *ImEntrada, sImagen *ImSalida,float contraste);

void PROC_HistogramaEcualizacion(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_HistogramaEcualizacionRGB(sImagen *ImEntrada, sImagen *ImSalida);


/////////
void PROC_HistogramaDeterminado(sImagen *ImEntrada, sImagen *ImSalida, float HistREQ[256],unsigned char umbral);
void PROC_Histograma(sImagen *ImEntrada, long Hist[256],unsigned char umbral);
void PROC_HistogramaPorcentaje(sImagen *ImEntrada, float Hist[256],unsigned char umbral);
void PROC_HistogramaPorcentajeMax(sImagen *ImEntrada, long Hist[256], long long Max,unsigned char umbral);
void PROC_dibujarHistMax(short xPos,short yPos,sImagen *ImEntrada,long long max,unsigned char umbral);
void PROC_TransformacionNoLineal(sImagen *ImEntrada,sImagen *ImSalida, unsigned char transformacion[256]);
void PROC_dibujarHistAdj(short xPos,short yPos,sImagen *ImEntrada,long long max,unsigned char umbral);


//filtros no lineales

void PROC_FiltroATMF(sImagen *ImEntrada, sImagen *ImSalida,short P ,unsigned char N );
void PROC_FiltroATMF_RGB(sImagen *ImEntrada, sImagen *ImSalida,short P ,unsigned char N );


void PROC_FiltroCHM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P ,unsigned char umbral);
void PROC_FiltroCHM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P);


void PROC_FiltroGM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N,unsigned char umbral);
void PROC_FiltroGM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N);


void PROC_FiltroHM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N ,unsigned char umbral);
void PROC_FiltroHM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );

void PROC_MaxFilter(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );
void PROC_MaxFilter_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );


void PROC_FiltroMediana(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );
void PROC_FiltroMediana_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );

void PROC_PuntoMedioFilter(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N ,unsigned char umbral);
void PROC_PuntoMedioFilter_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );

void PROC_MinFilter(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N ,unsigned char umbral);
void PROC_MinFilter_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );

void PROC_FiltroRango(sImagen *ImEntrada, sImagen *ImSalida, unsigned char N,unsigned char umbral);
void PROC_FiltroRango_RGB(sImagen *ImEntrada, sImagen *ImSalida, unsigned char N);

void PROC_FiltroYp(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P ,unsigned char umbral);
void PROC_FiltroYp_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N, short P);


/////////
void PROC_FiltroMedianaPonderado(sImagen *ImEntrada, sImagen *ImSalida,sImagen *Mascara );
void PROC_FiltroMedianaPonderado_RGB(sImagen *ImEntrada, sImagen *ImSalida,sImagen *Mascara );//falta memoria




//basicos

void PROC_ConvDiscreta(sImagen *ImEntrada,sImagen *ImSalida,sImagen *Mascara ,signed char division,unsigned char umbral );
void PROC_ConvDiscreta1(sImagen *ImEntrada,sImagen *ImSalida,sImagen *Mascara, signed long division,unsigned char umbral );
void PROC_ConvDiscreta2(sImagen *ImEntrada,sImagen *ImSalida,sImagen *Mascara, signed char division,unsigned char umbral );



//filtros espaciales


void PROC_FiltroAM(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );
void PROC_FiltroAM_RGB(sImagen *ImEntrada, sImagen *ImSalida,unsigned char N );


void PROC_FiltroGausiano7x7(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroGausiano7x7_RGB(sImagen *ImEntrada, sImagen *ImSalida);

void PROC_FiltroPrewitN3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitO3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitE3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitS3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitNE3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitSE3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitSO3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPrewitNO3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroSobel3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroSobel3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida);

void PROC_FiltroGradienteRobert2x2(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);



void PROC_FiltroPA3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPA5x5_1(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPA5x5_2(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);

void PROC_FiltroPA3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_FiltroPA5x5_1_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_FiltroPA5x5_2_RGB(sImagen *ImEntrada, sImagen *ImSalida);


void PROC_FiltroPB3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroPB5x5(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);

void PROC_FiltroPB3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_FiltroPB5x5_RGB(sImagen *ImEntrada, sImagen *ImSalida);

void PROC_FiltroLaplaciano3x3(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroLaplaciano3x3_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_FiltroMedia5x5(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroMedia5x5_RGB(sImagen *ImEntrada, sImagen *ImSalida);



//segmentacion

void PROC_DetectorLineaDD(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_DetectorLineaH(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_DetectorLineaV(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_DetectorLineaDI(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);

void PROC_DetectorLineaDD_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_DetectorLineaH_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_DetectorLineaV_RGB(sImagen *ImEntrada, sImagen *ImSalida);
void PROC_DetectorLineaDI_RGB(sImagen *ImEntrada, sImagen *ImSalida);

void PROC_FiltroDetectorPuntos(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_FiltroDetectorPuntos_RGB(sImagen *ImEntrada, sImagen *ImSalida);



void PROC_MultiUmbral(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral1,unsigned char umbral2 ,unsigned char umbral);
void PROC_MultiUmbralInv(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral1,unsigned char umbral2,unsigned char umbral);
void PROC_MultiUmbrales(sImagen *ImEntrada,sImagen *ImSalida, unsigned char* umbrales,unsigned char cantidad,unsigned char umbral );
void PROC_MultiUmbralesInv(sImagen *ImEntrada,sImagen *ImSalida, unsigned char* umbrales,unsigned char cantidad ,unsigned char umbral);


void PROC_Binarizacion(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral,unsigned char umbral1 );
void PROC_BinarizacionInv(sImagen *ImEntrada,sImagen *ImSalida, unsigned char umbral ,unsigned char umbral1);
void PROC_UmbralOptimoInv(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);
void PROC_UmbralOptimo(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);



//mediciones
/////////
long PROC_Area(sImagen *ImEntrada,unsigned short x1,unsigned short y1,unsigned short x2,unsigned short y2,unsigned short valorGris );
void PROC_Centroide(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
					unsigned short x2,unsigned short y2,unsigned short valorGris, Coord *coordenadas );
double PROC_Circularidad(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
		unsigned short x2,unsigned short y2,unsigned short valorGris);
void PROC_Cluster(sImagen *ImEntrada,sImagen *ImSalida,short tamano,unsigned char umbral);

double PROC_MomentoCentral(sImagen *ImEntrada,
		unsigned short x1,unsigned short y1,unsigned short x2,unsigned short y2,int p,int q);
double PROC_EjeMaximo(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
										unsigned short x2,unsigned short y2);
double PROC_EjeMinimo(sImagen *ImEntrada,unsigned short x1,unsigned short y1,
										unsigned short x2,unsigned short y2);

//filtros Morfologicos

void PROC_DilatacionBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara);
void PROC_DilatacionGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );
void PROC_ErosionBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );
void PROC_ErosionGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );

void PROC_HitMiss(sImagen *ImEntrada, sImagen *ImSalida,unsigned char umbral);

void PROC_ClosingBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );
void PROC_ClosingGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );

void PROC_ClosingRGB3x3(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_ClosingRGB5x5(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_ClosingRGB7x7(sImagen *ImEntrada,sImagen *ImSalida);


void PROC_OpeningBin(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );
void PROC_OpeningGrises(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral);

void PROC_OpeningRGB3x3(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_OpeningRGB5x5(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_OpeningRGB7x7(sImagen *ImEntrada,sImagen *ImSalida);


void PROC_ContornoE(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );
void PROC_ContornoERGB3x3(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_ContornoERGB5x5(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_ContornoERGB7x7(sImagen *ImEntrada,sImagen *ImSalida);

void PROC_ContornoD(sImagen *ImEntrada,sImagen *ImSalida, sImagen *Mascara,unsigned char umbral );
void PROC_ContornoDRGB3x3(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_ContornoDRGB5x5(sImagen *ImEntrada,sImagen *ImSalida);
void PROC_ContornoDRGB7x7(sImagen *ImEntrada,sImagen *ImSalida);

void PROC_TopHat(sImagen *ImEntrada, sImagen *ImSalida,char tamano,unsigned char umbral);
void PROC_TopHatRGB(sImagen *ImEntrada,sImagen *ImSalida, unsigned char N);

void PROC_thickeningBin(sImagen* ImEntrada, sImagen* ImSalida, int iteraciones,unsigned char umbral);
void PROC_thinningBin(sImagen* ImEntrada, sImagen* ImSalida, int iteraciones,unsigned char umbral);






//filtros espaciales frecuencia

void PROC_ObtenerFiltroCS(sImagen *ImFiltro,float FrecCorte,short orden );

//transformadas
void PROC_TransCos(sImagen *ImEntrada, sImagen *ImSalida,short tipo);

*/
#endif /* IMAGE_PROCESSING_H_ */
