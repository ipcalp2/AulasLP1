/**
 * @file operadores.c
 * @author lufer (you@domain.com)
 * @brief Manipular Operadores
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

/**
 * @brief 
 * 
 * Analisar o resultado?
 * @return int 
 */
int main(){

    int x;
    int y;

    x=7;
    y=x*2;

    x=y++;                                  //x=14; y=15
    x=++y;                                  //x=16; y=16

    x+=1;                                   //x==17
    x-=y;                                   //x = x -y -> x=1

    printf("%d\n", x>y);                    //? Façso ou Zero (0)?
    printf("X= %d, X=%d \n", x++, --x);    //?

    y*=2;
    x/=3;

}
