/*****************************************************************//**
 * \file   Aula.c
 * \brief  
 *  Estruturas repetitivas
 *  do; while; for
 *  Estrutura��o de c�digo em m�dulos (cont.)
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
//#include <conio.h>
#include <malloc.h>
#include "Tipos.h"
#include "Variaveis.h"


/**
 * V�rios exemplos para manipular estruturas repetitivas
 * 
 * \return 
 */
//int main(void)
//int main(int argc, char** argv)
int main() {
    char op = '0';
   
    do {
        //escrever menu

        menu();

        //ler op��o
        //while (((op = getch()) < '0') || (op > '4')); //getch n�o � standard - conio.h
        op = leOpcao('0', '4');

        /*while (1) {
            op = getche();
            if ((op>='0') && (op<='4')) 
                break;
        }*/

       /* while (op < '0' || op>'4') {
            op = getche();
        }*/
                                                       
        //putchar('\a');                                  // \a == 7 == bell
        //ler valores para calculo, se for necesss�rio!

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
            printf("Pass= %s\n", lePassword(8));
        }
        puts("Any key to continue..."); getch();
        system("cls");                              //apaga ecr�
       
    } while (op != '0');
   
    return (0);                                     //main
}


