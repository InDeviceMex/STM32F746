/*
 * CONV.c
 *
 *  Created on: 8 mar. 2018
 *      Author: InDev
 */

#include "CONV.h"



uint8_t CONV_u8DIntToString(int64_t s64Number,uint8_t u8Positive,uint8_t u8Padding0,uint8_t u8Deci, uint8_t* pu8Conv)
{
    uint8_t pu8ConvTemp[21]={0}; //longitud maxima de long 12 digitos con signo
    uint8_t u8DeciActual=0;
    uint8_t *pu8PointerActual;
    int8_t s8Num=0;
    int8_t i=0;
    uint8_t u8FlagSign=1;
    int64_t  s64NumberReg = s64Number;//paso el Numero a un registro para aumentar rendimiento

    pu8PointerActual = &pu8ConvTemp[21 - 1]; //empezamos llenando desde la ultima posicion
    *pu8PointerActual = 0; //guarda el fin de cadena en la ultima posicion
    //if( s64NumberReg < 0)
   // {
  //      s64NumberReg*=-1;
   // }

    if (u8Deci>19)
        u8Deci=19;

    do {
        pu8PointerActual--;//se decrementa la posicion donse guardara el valor
        s8Num=(s64NumberReg % 10); //obtiene el digito de menor peso
        if(s8Num<0)
            s8Num*=-1;

        if (s64NumberReg ||(u8DeciActual==0))
        {
            *pu8PointerActual = (uint8_t)s8Num  + '0'; //pu8Convierte el valor en caracter
            u8DeciActual++;
        }
        else
        {
            if(u8Padding0)
            {
                *pu8PointerActual = '0'; //pu8Convierte el valor en caracter
                u8DeciActual++;
            }
            else if (u8FlagSign)
                {
                    if ( s64Number < 0)
                    {
                        *pu8PointerActual = '-';//si el s32Numero es negativo guarda el signo negativo
                    }
                    else if (u8Positive)
                    {
                        *pu8PointerActual = '+';//si el s32Numero es negativo guarda el signo negativo
                    }
                    u8FlagSign=0;
                }
            else
            {
                *pu8PointerActual= ' ';
                u8DeciActual++;
            }

        }

    }  while((s64NumberReg /= 10) || (u8DeciActual<u8Deci)); //mientras exista un digito sigue el ciclo

    if(u8FlagSign)
    {
        if ( s64Number < 0)
        {
            pu8PointerActual--;
            *pu8PointerActual = '-';//si el s32Numero es negativo guarda el signo negativo
        }
        else if (u8Positive)
        {
            pu8PointerActual--;
            *pu8PointerActual = '+';//si el s32Numero es negativo guarda el signo negativo
        }
    }


    s64NumberReg=&pu8ConvTemp[21 - 1]-pu8PointerActual+1;//realiza la resta de cuantos caracteres se utilizaron
    for (i =  s64NumberReg-1; i>=0; i--) //hace un ciclo burbuja optimizado
    {
        pu8Conv[(uint8_t)i] = pu8PointerActual[(uint8_t)i];
    }

    return (uint8_t)s64NumberReg - 1;
}



uint8_t CONV_u8IntToString(int64_t s64Number, uint8_t* pu8Conv)
{
    uint8_t pu8ConvTemp[21]={0}; //longitud maxima de long 12 digitos con signo
    register uint8_t *pu8PointerActual;
    register int32_t s32Num=0;
    register int8_t i=0;
    register int64_t  s64NumberReg = s64Number;//paso el s32Numero a un registro para aumentar rendimiento

    pu8PointerActual = &pu8ConvTemp[21 - 1]; //empezamos llenando desde la ultima posicion
    *pu8PointerActual = 0; //guarda el fin de cadena en la ultima posicion
    if( s64NumberReg < 0)
    {
        s64NumberReg*=-1;
    }

    do {
        pu8PointerActual--;//se decrementa la posicion donse guardara el valor
        s32Num=s64NumberReg % 10; //obtiene el digito de menor peso
        //s32Num1=abs(s32Num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *pu8PointerActual = s32Num  + '0'; //pu8Convierte el valor en caracter
    }  while((s64NumberReg /= 10)); //mientras exista un digito sigue el ciclo

    if ( s64Number < 0)
    {
        pu8PointerActual--;
        *pu8PointerActual = '-';//si el s32Numero es negativo guarda el signo negativo
    }

    s64NumberReg=pu8ConvTemp+21-pu8PointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = s64NumberReg-1; i>=0; i--) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // pu8ConvTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //pu8Conv="-156\0"
        ((uint8_t *)pu8Conv)[(uint8_t)i] = ((const uint8_t *)pu8PointerActual)[(uint8_t)i];
    }

    return s64NumberReg - 1;
}



uint8_t CONV_u8IntToStringCeros(int64_t s64Number,int8_t s8CerosLeft, int8_t* pu8Conv)
{
    int8_t pu8ConvTemp[30]={0}; //longitud maxima de long 12 digitos con signo
    register int8_t *pu8PointerActual;
    register int32_t s32Num=0;
    register int8_t i=0;
    register int64_t  s64NumberReg = s64Number;//paso el s32Numero a un registro para aumentar rendimiento

    if(s8CerosLeft>29)
    {
        s8CerosLeft=29;
    }
    pu8PointerActual = &pu8ConvTemp[30 - 1]; //empezamos llenando desde la ultima posicion
    *pu8PointerActual = 0; //guarda el fin de cadena en la ultima posicion
    if( s64NumberReg < 0)
    {
        s64NumberReg*=-1;
    }

    do {
        pu8PointerActual--;//se decrementa la posicion donse guardara el valor
        s32Num=s64NumberReg % 10; //obtiene el digito de menor peso
        //s32Num1=abs(s32Num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *pu8PointerActual = s32Num  + '0'; //pu8Convierte el valor en caracter
        s8CerosLeft--;
    }  while((s64NumberReg /= 10)&&(pu8PointerActual>pu8ConvTemp)); //mientras exista un digito sigue el ciclo

    while(s8CerosLeft>0)
    {
        pu8PointerActual--;
        *pu8PointerActual ='0';
        s8CerosLeft--;
    }
    if ( s64Number < 0)
    {
        pu8PointerActual--;
        *pu8PointerActual = '-';//si el s32Numero es negativo guarda el signo negativo
    }

    s64NumberReg=pu8ConvTemp+30-pu8PointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = s64NumberReg-1; i>=0 ; i--) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // pu8ConvTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //pu8Conv="-156\0"
        ((uint8_t *)pu8Conv)[(uint8_t)i] = ((const uint8_t *)pu8PointerActual)[(uint8_t)i];
    }

    return s64NumberReg - 1;
}




uint8_t CONV_u8UIntToString(uint64_t u64Number, int8_t* s8Conv)
{
    int8_t s8ConvTemp[23]={0}; //longitud maxima de long 12 digitos con signo
    register int8_t *s8PointerActual;
    register int32_t s32Num=0;
    register int8_t i=0;
    register uint64_t  u64NumberReg = u64Number;//paso el s32Numero a un registro para aumentar rendimiento

    s8PointerActual = &s8ConvTemp[21 - 1]; //empezamos llenando desde la ultima posicion
    *s8PointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        s8PointerActual--;//se decrementa la posicion donse guardara el valor
        s32Num=u64NumberReg % 10; //obtiene el digito de menor peso
        //s32Num1=abs(s32Num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *s8PointerActual = s32Num  + '0'; //s8Convierte el valor en caracter
    }  while((u64NumberReg /= 10)); //mientras exista un digito sigue el ciclo


    u64NumberReg=s8ConvTemp+21-s8PointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = u64NumberReg-1; i>=0; i--) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // s8ConvTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //s8Conv="-156\0"
        ((uint8_t *)s8Conv)[(uint8_t)i] = ((const uint8_t *)s8PointerActual)[(uint8_t)i];
    }

    return u64NumberReg - 1;
}


const int64_t s64Dec[16]=
{0,10,100,1000,10000,100000,1000000,10000000,100000000,
 1000000000,10000000000,100000000000,1000000000000,
 10000000000000,100000000000000,1000000000000000
};

uint8_t CONV_u8FloatToString(double dNumber,uint8_t u8Positive,uint8_t u8Padding0,int32_t s32Enteros,int32_t s32Decimals,uint8_t* pu8Conv)
{
    register int64_t s64Deci=0; //contiene los s64Decimales en version entero
    register double s64Decimal=0;//contiene el valor de s64Decimales en version double
    register uint8_t u8Values=0;//cuantos digitos se imprimen

    s64Decimal=dNumber-(int64_t)dNumber; //obtiene la parte s64Decimal
    s64Decimal*=s64Dec[(uint32_t)s32Decimals];//hace la multiplicacion depende de cuantos s64Decimales necesitemos
    s64Deci=(int64_t)s64Decimal;//castea la parte s64Decimal a un int64_t (64 bits)
    if(s64Deci<0)//si el numero es negativo elimina el signo
      s64Deci*=-1;
    u8Values= CONV_u8DIntToString((int64_t)dNumber,u8Positive,u8Padding0,s32Enteros, pu8Conv); //pu8Convierte la parte entera del numero
    pu8Conv[u8Values]='.';//agrega un '.' en la posicion del fin de cadena
    u8Values++;//aumenta a la siguiente posicion
    u8Values+=CONV_u8DIntToString(s64Deci,0,1,s32Decimals, &pu8Conv[u8Values]);//pu8Convierte la parte s64Decimal despues del punto
    return u8Values;//regresa la cantidad de digitos pu8Convertidos
}


const int8_t ps8HEXA[16]=
{
 '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
};

const int8_t ps8Hexa[16]=
{
 '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'
};

uint8_t CONV_u8HexToString(int64_t s64Number, uint8_t* conv)
{
    uint8_t pu8ConvTemp[19]={0}; //longitud maxima de long 16 digitos
    register uint8_t *pu8PointerActual;
    register int32_t s32Num=0;
    register int8_t i=0;
    register uint64_t  u64NumberReg = (uint64_t) s64Number;//paso el s32Numero a un registro para aumentar rendimiento

    pu8PointerActual = &pu8ConvTemp[19 - 1]; //empezamos llenando desde la ultima posicion
    *pu8PointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pu8PointerActual--;//se decrementa la posicion donse guardara el valor
        s32Num=u64NumberReg&0xF; //obtiene el digito de menor peso
        *pu8PointerActual = ps8Hexa[(uint32_t)s32Num]; //convierte el valor en caracter
        u64NumberReg>>=1;
        u64NumberReg>>=1;
        u64NumberReg>>=1;
        u64NumberReg>>=1;
       // s32NumeriReg>>=4;
    }  while((u64NumberReg > 0)); //mientras exista un digito sigue el ciclo

    pu8PointerActual--;
    *pu8PointerActual = 'x';
    pu8PointerActual--;
    *pu8PointerActual = '0';
    u64NumberReg=pu8ConvTemp+19-pu8PointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = u64NumberReg-1; i>=0 ; i--) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[(uint8_t)i] = ((const uint8_t *)pu8PointerActual)[(uint8_t)i];
    }

    return u64NumberReg - 1;
}

uint8_t HEX_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[19]={0}; //longitud maxima de long 16 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t)number;//paso el numero a un registro para aumentar rendimiento

    pointerActual = &convTemp[19 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0xF; //obtiene el digito de menor peso
        *pointerActual = ps8HEXA[(uint32_t)num]; //convierte el valor en caracter
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo

    pointerActual--;
    *pointerActual = 'X';
    pointerActual--;
    *pointerActual = '0';
    numberReg=convTemp+19-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i =numberReg-1; i>=0 ; i--) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[(uint8_t)i] = ((const uint8_t *)pointerActual)[(uint8_t)i];
    }

    return numberReg - 1;
}


uint8_t Oct_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[24]={0}; //longitud maxima de long 22 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t)number;//paso el number a un registro para aumentar rendimiento

    pointerActual = &convTemp[24 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0x7; //obtiene el digito de menor peso
        *pointerActual = num+'0'; //convierte el valor en caracter
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo


    pointerActual--;
    *pointerActual = '0';//si el number es negativo guarda el signo negativo

    numberReg=convTemp+24-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = numberReg-1; i>=0 ; i--) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[(uint8_t)i] = ((const uint8_t *)pointerActual)[(uint8_t)i];
    }

    return numberReg - 1;
}


uint8_t Bin_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[40]={0}; //longitud maxima de long 22 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t)number;//paso el number a un registro para aumentar rendimiento

    pointerActual = &convTemp[40 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0x1; //obtiene el digito de menor peso
        *pointerActual = num+'0'; //convierte el valor en caracter
        numberReg>>=1;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo


    pointerActual--;
    *pointerActual = 'b';//si el number es negativo guarda el signo negativo

    numberReg=convTemp+40-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = numberReg-1; i>=0 ; i--) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[(uint8_t)i] = ((const uint8_t *)pointerActual)[(uint8_t)i];
    }

    return numberReg - 1;
}




int32_t String_To_Hex(int8_t* string,int64_t*num)
{
    int32_t length=0;
      (*num)=0;
      while((*string) && ( *string!='0'))
      {
          string++;
      }
      while((*string)&& (*string)!='X' && (*string)!='x')
      {
          string++;
      }

       while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
       {
           if(*string>='0' && *string<='9')
           {
               (*num)<<=4;
               (*num)+=*string-'0';
               length++;
           }
           else if(*string>='A' && *string<='F')
           {
              (*num)<<=4;
              (*num)+=(*string-'A')+10;
              length++;
           }
           else if(*string>='a' && *string<='f')
           {
              (*num)<<=4;
              (*num)+=(*string-'a')+10;
              length++;
           }
           else if((*string==0x8)&& length)
           {
               (*num)>>=4;
               length--;
           }
           string++;
       }
       return length;
}


//todo modificar HEXhex Oct BIn and FLoat como se modifico INt

int32_t String_To_HEX(int8_t* string,int64_t*num)
{
    int32_t length=0;
    (*num)=0;
    while((*string) && ( *string!='0'))
    {
        string++;
    }
    while((*string)&& (*string)!='X' && (*string)!='x')
    {
        string++;
    }

     while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
     {
         if(*string>='0' && *string<='9')
         {
             (*num)<<=4;
             (*num)+=*string-'0';
             length++;
         }
         else if(*string>='A' && *string<='F')
         {
            (*num)<<=4;
            (*num)+=(*string-'A')+10;
            length++;
         }
         else if(*string>='a' && *string<='f')
         {
            (*num)<<=4;
            (*num)+=(*string-'a')+10;
            length++;
         }
         else if((*string==0x8)&& length)
         {
             (*num)>>=4;
             length--;
         }
         string++;
     }
     return length;
}


int32_t String_To_Oct(int8_t* string,int64_t*num)
{
    int32_t length=0;
    (*num)=0;
    while((*string) && *string!='0')
    {
        string++;
    }


    if(*string!='0')
        return length;
    string++;

    while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
    {
        if(*string>='0' && *string<='7')
        {
            (*num)<<=3;
            (*num)+=*string-'0';
            length++;
        }
        else if((*string==0x8)&& length)
        {
            (*num)>>=3;
            length--;
        }
        string++;
    }
    return length;
}



int32_t String_To_Bin(int8_t* string,int64_t*num)
{
    int32_t length=0;
    (*num)=0;
    while((*string) && (*string!='b'))
    {
        string++;
    }


    if(*string!='b')
        return length;
    string++;

    while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
    {
        if(*string>='0' && *string<='1')
        {
            (*num)<<=1;
            (*num)+=*string-'0';
            length++;
        }
        else if((*string==0x8)&& length)
        {
            (*num)>>=1;
            length--;
        }
        string++;
    }
    return length;
}


int32_t String_To_Int(int8_t* string,int64_t*num)
{
    register int32_t sign=0;
    int32_t length=0;
    (*num)=0;

    while(((*string) && ((*string<'0') || (*string>'9')) && *string!='-'))
    {
        string++;
    }
    if(*string=='-')
    {
        sign=1;
        string++;
    }

    while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
    {
        if(*string>='0' && *string<='9')
        {
            (*num)*=10;
            (*num)+=*string-'0';
            length++;
        }
        else if((*string==0x8)&& length)
        {
            (*num) /= 10;
            length--;
        }
        string++;
    }
    if(length)
    {
        if(sign)
            (*num)*=-1;
    }
    return length;

}
int32_t String_To_UInt(int8_t* string,uint64_t* numU )
{
    int64_t numS=0;
    if(!String_To_Int(string,&numS))
        return 0;
    *numU= (uint64_t)numS;

    return 1;
}




float String_To_Float(int8_t* string,int8_t deci)
{
    float numInt=0;
    float numDec=0;
    float numAux=1;
    float numD=0;
    float num=0;
    int32_t find=0;
    int8_t deciActual=0;
    while((*string) && (deciActual<deci))
    {
      if((*string=='.') && (find==0))
      {
          find=1;
      }
      else if(find==0)
      {
          numInt*=10;
          if((*string>='0') && (*string<='9'))
                numInt+=*string-'0';
          else
             return 0;
      }
      else if(find==1)
      {
          numAux/=10;
          if((*string>='0') && (*string<='9'))
          {
                numDec=*string-'0';
                numDec*=numAux;
                numD+=numDec;
          }
          deciActual++;
         // else
           //  return 0;
      }
      else
          return 0;
      string++;
    }
    num=numInt+numD;
    return num;
}

