/*****************************************************************//**
 * \file   Aula.c
 * \brief  Par�metros vari�vel em M�todos (Fun��es e Procedimentos)
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#include <stdio.h>
#include "Funcoes.h"
//#include "framework.h"

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
    //char* s = "ola mundo";      //mem�ria s� de leitura

    //printf("%d\n", sizeof(s));
    //printf("%d\n", sizeof(*s));
    
    //s[0] = 'a';               //inv�lido
    //strcpy(s, "Ole");         //inv�lido

	int aux = changeValues(&x, &y);
	incValue(&aux);
	printf("Endere�o de aux=%p - Valor de aux= %d \n", &aux, aux);*/
	//Analisar
	//incValue(aux);

    //aux = fact(5);

    //library
    aux = soma(2, 3);

    printf("ANTES: X= %d - Y=%d\n", x, y);
    troca(x, y);
    printf("DEPOIS: X= %d - Y=%d\n", x, y);
    //&x corresponde ao endere�o de mem�ria da variavel x
    trocaII(&x, &y);                            
    printf("DEPOIS &: X= %d - Y=%d\n", x, y);

    int maior, menor;
    boolean aux = numeroMaior(x, y, &maior, &menor);

    float area;
    aux = calculaArea(2, &area);
}