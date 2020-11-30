/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Definição de funções
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/

#include "Dados.h"


const float PI = 3.14;        //declarado em Dados.h

/**
 * calcula a área de uma circ....
 * 
 * \param raio
 * \return 
 */
float calculaArea(int raio){
    return (float)(PI * raio * raio);
}

/**
 * .
 * 
 * \param r
 * \return 
 */
float calculaPerimetro(int r) {
    return (float)(2 * PI * r);
}

/**
 * Calcula o maior valor entre dois limites.
 * 
 * \param x
 * \param y
 * \return 
 */
int calculaMaior(int x, int y) {
    int maior = x;
    int menor = x;
    for (int i = x + 1; i <= y; i++) {
        //calcular o maior
        //if (i % 2 == 0) continue;
        if (maior < i)
            maior = i;    
    }

    //calcula o menor
    for (int i = x + 1; i <= y; i++) {
        //calcular o maior
        if (menor > i)
            maior = i;
    }

    return maior;
}