/*****************************************************************//**
 * \file   Aula.c
 * \brief  Parâmetros variável em Métodos (Funções e Procedimentos)
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
 * Testar funções com parâmetros variável
 * 
 * \return 
 */
int main(void) {

	int x = 12, y=14;           
    //char* s = "ola mundo";      //memória só de leitura

    //printf("%d\n", sizeof(s));
    //printf("%d\n", sizeof(*s));
    
    //s[0] = 'a';               //inválido
    //strcpy(s, "Ole");         //inválido

	int aux = changeValues(&x, &y);
	incValue(&aux);
	printf("Endereço de aux=%p - Valor de aux= %d \n", &aux, aux);*/
	//Analisar
	//incValue(aux);

    //aux = fact(5);

    //library
    aux = soma(2, 3);

    printf("ANTES: X= %d - Y=%d\n", x, y);
    troca(x, y);
    printf("DEPOIS: X= %d - Y=%d\n", x, y);
    //&x corresponde ao endereço de memória da variavel x
    trocaII(&x, &y);                            
    printf("DEPOIS &: X= %d - Y=%d\n", x, y);

    int maior, menor;
    boolean aux = numeroMaior(x, y, &maior, &menor);

    float area;
    aux = calculaArea(2, &area);
}