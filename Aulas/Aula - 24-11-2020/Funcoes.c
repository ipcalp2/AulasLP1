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
 * Função que devolde três resultados
 * 
 * \param x
 * \param y
 * \return True or False
 */
int changeValues(int* x, int* y) {
	int t = *x;

	if (*x == *y) return 0;
	*x = *y;
	*y = t;
	
	return 1;           //devolve sucesso..alterar para devolver True or False
}

/**
 * Procedimento
 * Incrementa um valor numa variável
 * 
 * \param v
 */
void incValue(int* v) {
	//analisar
	//*v++;
    *v = *v + 1;
    //ou
	//(*v)++;
}

/**
 * Calcula o Factorial de um némero
 * n! = n * (n-1)!
 * 0! = 1
 */
int fact(int n)
{
    int f = 1;

    while (n > 0) {
        f = n * f;
        n--;
    }
    return f;
}

/**
 * Verifica se número é primo
 * 
 * \param n1
 * \return 
 */
int eNumeroPrimo(int n)
{
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)         //se for par não é primo!   
            return 0;
        else
            i++;
    }
    return 1;

    // ou
    // booleand flag=false;
    //for (i = 2; i <= n / 2; ++i) {

    //    // condition for non-prime
    //    if (n % i == 0) {
    //        flag = true;
    //        break;
    //    }
    //}
}
