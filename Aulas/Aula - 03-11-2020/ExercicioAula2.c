/*****************************************************************//**
 * \file   ExercicioAula.c
 * \brief  Módulo apenas com funções
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>

#include "meu.h"

#pragma region Funcoes

#pragma region TIPOX
/**
 * .
 * 
 * \param x
 * \param y
 * \return 
 */
int calculaProduto(int x, int y){

    //variáveis
    int aux;            //true or false
    int prod;

    //valores variáveis
    aux = 0;            //false

    //calculo
    prod = x*y;

    //devolve resultado
    return (prod);
    //ou
    //return (x*y);
}
#pragma endregion

int calculaSoma(int x, int y){
    return (x+y);
}

#pragma endregion