/*****************************************************************//**
 * \file   Aula.c
 * \brief  Parâmetros variável em Métodos (Funções e Procedimentos)
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#include <stdio.h>
#include "Funcoes.h"

//-----------------------------------------------------------------
//Desafio para analisar
//Qual o resultado?
#define merge(a, b) b##a 
//experimentar fazer printf("%d",merge(2,3));
//-----------------------------------------------------------------

/**
 * Testar funções com parâmetros variável
 * 
 * \return 
 */
int main(void) {

	int x = 12, y=14;

	int aux = changeValues(&x, &y);
	incValue(&aux);
	printf("Endereço de aux=%p - Valor de aux= %d \n", (void*)&aux, aux);
	//Analisar
	//incValue(aux);

}