/*****************************************************************//**
 * \file   ExercicioAula.c
 * \brief  Organizar código em funções
 * Header Files (.h)
 * \author lufer
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "meu.h"

const int MAX=30;

int main() {

    int x=7; 
    int y = 6;

    //h1
    printf("%d + %d == %d\n", x, y, x + y);
    printf("%d - %d == %d\n", x, y, x - y);
    printf("%d * %d == %d\n", x, y, x * y);
    printf("%d + %d == %2.2f\n", x, y, (double) x / y);
    
    printf("MAX= %d\n", MAX);

    //h2
    printf(" %d * %d == %d\n", x,y,calculaProduto(x,y));
    printf(" %d + %d == %d\n", x,y,calculaSoma(x,y));

    printf("%s\n", numeroExtenso(1));
   
    //Analisar
    //char ch = 0;   
    //while (ch != '\r')  //13
    //{
    //    ch = getch();
    //    if (ch!='\r') putchar('*');
    //}


    system("pause");
    
    return(1);

}

