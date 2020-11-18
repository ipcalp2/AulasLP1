/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Header File com finções e parâmetros variável
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#include "Funcoes.h"
#include <string.h>

/**
 * .
 * 
 * \param x
 * \param y
 * \return 
 */
int changeValues(int* x, int* y) {
	int t = *x;

	if (*x == *y) return 0;
	*x = *y;
	*y = t;
	return 1;
}

/**
 * Incrementa um valor numa variável
 * 
 * \param v
 */
void incValue(int* v) {
	//analisar
	//*v++;
	(*v)++;
}

