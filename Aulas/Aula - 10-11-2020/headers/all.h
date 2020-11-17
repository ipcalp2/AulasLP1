/*****************************************************************//**
 * \file   all.h
 * \brief  
 * Extern
 * Enumerados
 * Boolean
 * #pragma once
 * \see https://gcc.gnu.org/onlinedocs/cpp/Pragmas.html
 * Typedef
 * \author lufer
 * \date   November 2020
 *********************************************************************/

//#pragma once  //equivalente a #indef...mas menos portável!
//Ou
#ifndef GLOBAL
#define GLOBAL

#define MAX 30
#define TRUE 1
#define FALSE 0
extern int dobro(int x);
extern int soma(int x, int y, int z);
extern int validaValor(int v, int x, int y);

extern const int TOT;       //constantes apenas se declaram no .h



/*
 caso (x)
    0: escrevo "Segunda"
    ou
    SEG: escrevo "Segunda"
*/

typedef enum color
{
    RED,
    GREEN,
    BLUE
}color ;

#endif // !GLOBAL

#ifndef _STDBOOL
#define _STDBOOL
//typedef int boolean;
typedef enum  { False, True } boolean;    //False==0; True==1
#define true True
#define false False

#endif
