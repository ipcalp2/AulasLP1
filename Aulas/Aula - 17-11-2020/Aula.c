/*****************************************************************//**
 * \file   Aula.c
 * \brief  Par�metros vari�vel em M�todos (Fun��es e Procedimentos)
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
 * Testar fun��es com par�metros vari�vel
 * 
 * \return 
 */
int main(void) {

	int x = 12, y=14;

	int aux = changeValues(&x, &y);
	incValue(&aux);
	printf("Endere�o de aux=%p - Valor de aux= %d \n", (void*)&aux, aux);
	//Analisar
	//incValue(aux);

}