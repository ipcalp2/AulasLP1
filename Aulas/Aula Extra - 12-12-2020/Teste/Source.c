/*****************************************************************//**
 * \file   Source.c
 * \brief  Using Libraries
 * .lib
 * .dll (via implicit linking)
 * \seealso https://docs.microsoft.com/en-us/cpp/build/linking-an-executable-to-a-dll?view=msvc-160
 * \seealso https://docs.microsoft.com/en-us/windows/win32/Dlls/dynamic-link-library-search-order
 * \author lufer
 * \date   December 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
 //#include "Funcoes.h"  //.lib
//#include "FuncoesDll.h" //.dll

int main() {
    int i, n;
    time_t t;

    n = 5;

    /* Intializes random number generator */
    srand((unsigned)time(&t));

    /* Print 5 random numbers from 0 to 49 */
    for (i = 0; i < n; i++) {
        printf("%d\n", rand() % 50);
    }

    printf("2*3=%d", Mult(2,3));
    printf("2+3=%d", Soma(2,3));

    return(0);
}