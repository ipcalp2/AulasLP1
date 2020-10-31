
/**
 * @file hoje.c
 * @author lufer (you@domain.com)
 * @brief  Estruturas de um programa em C
 * @version 0.1
 * @date 2020-10-30
 * 
 * //tipoRetorno nomeFuncao(parametros){}
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

/*Declaração de Funções (protótipos ou assianturas) */
int calculaSoma(int z, int w);


/**
 * @brief 
 * 
 * @return int 
 */
int main(){


#pragma region H1

    /*Declarar variáveis e inicializam*/
    int x=0, y, soma;

    /*Obter valores*/
    x=15;
    y=15;

    /*Calculo*/
    soma = x+y;

    /*Apresentar ou devolver o resultado */
    printf("A soma de %d com %d = %d\n", x,y,soma);

#pragma endregion

#pragma region H2

 /*Declarar variáveis e inicializam*/
    int a,b;
    int soma2;

    /*Obter valores*/
    printf("Valor 1:");
    scanf("%d",&a);
    printf("Valor 2:");
    scanf("%d",&b);

    /*Calculo*/
    soma2 = calculaSoma(a,b);      //invoca a função soma


    /*Apresentar ou devolver o resultado */
    printf("A soma de %d com %d = %d\n", a,b,soma2);


#pragma endregion

}


#pragma region Funções

/**
 * @brief Calcula da soma de dois valores...
 * 
 * @param x Valor 1
 * @param y Valor 2
 * @return int 
 */
int calculaSoma(int x, int y){

    /*Declarar variáveis e inicializam*/
    //int aux;

    /*Obter valores*/


    /*Calculo*/
    //aux=x+y;


    /*Apresentar ou devolver o resultado */
    //return aux;
    return (x+y);
}

/**
 * @brief Calcula a média de dois valores inteiros
 * 
 * @param x 
 * @param y 
 * @return double 
 */
double calculaMedia(int x, int y)
{

     /*Declarar variáveis e inicializam*/
    double media;

    /*Obter valores*/


    /*Calculo*/
    media = ((double)x+y)/2;

    /*Apresentar ou devolver o resultado */

    return media;
}


/**
 * @brief Procedimento
 * 
 */
void incrementaValor(){
    //Não faz nada!
}

#pragma endregion
