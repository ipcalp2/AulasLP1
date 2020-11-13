/**
 * @file funcoes.c
 * @author lufer (lufer@ipca.pt)
 * @brief Módulo com implementação de funções
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

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


/**
 */
int maiorValor(int x,int y ){
    //h1
    return (x>y);           //bool

    //h2
    if (x>y) 
        {
            return (x); 
        }
    else {
        return (y);
    }

    //h3
     if (x>y) 
        return (x); 
    else 
        return (y);

    //h4
     if (x>y) 
        return (x);  
    return (y);

    // ?:
    return ( (x>y) ? 1 : 0);

    // aux

    int aux=0;
    if (x>y) 
        aux = 0;
    else
    {
        aux = 1;
    }
    return (aux);
    
}


char* numeroExtenso(int num) {
    char* valor;

    switch (num) {
    case 1:
        valor = "Um";
        break;
    case 2:
        valor = "Dois";
        break;
    default:
        valor = "UPS";
    }
}
#pragma endregion