/*****************************************************************//**
 * \file   Aula.c
 * \brief  
 *  Estruturas repetitivas
 *  do; while; for
 *  Estruturação de código em módulos (cont.)
 *  Enumerados
 *  Typedef
 *  #pragma once
 * \see https://gcc.gnu.org/onlinedocs/cpp/Pragmas.html
 *  getch | getche
 * \see https://www.geeksforgeeks.org/getch-function-in-c-with-examples/
 * Typedef
 * \author lufer
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <malloc.h>
#include "Tipos.h"
#include "Funcoes.h"
#include "Variaveis.h"

//Desafio para analisar
//Qual o resultado?
#define merge(a, b) b##a 
//experimentar fazer printf("%d",merge(2,3));

/**
 * Vários exemplos para manipular estruturas repetitivas
 * 
 * \return 
 */
//int main(void)
//int main(int argc, char** argv)
int main() {
    char op = 0;
   
    do {
        puts("[0] - Sair");
        puts("[1] - Mostra Todos os valores");
        puts("[2] - Mostra apenas ímpares");
        puts("[3] - Conta valores pares");
        puts("[3] - Ler password");
        while (((op = getche()) < '0') || (op > '4')); //getch não é standard - conio.h
        //putchar('\a');                                  // \a == 7 == bell
        switch (op) {
            case '0':
                puts("Xauzinho!");
                break;
            case '1':
                mostraTudo(10, 20);
                break;
            case '2': 
                mostraImpares(10, 20); 
                break;
            case '3': 
                printf("Tot Pares: %d \n", contaPares(20, MAX));
                break;
            case '4':
                printf("Password (max 8 chars): ");
                printf("Pass= %s\n",lePassword(8));
        }
        puts("Any key to continue..."); getch();
        system("cls");                              //apaga ecrã
    } while (op != '0');
   
    return (0);                                     //main
}


