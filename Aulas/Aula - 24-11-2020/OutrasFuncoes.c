
#include "Funcoes.h"

/**
 * .
 * 
 * \param x
 * \param y
 */
void troca(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
}

/**
 * .
 * 
 * \param x
 * \param y
 */
void trocaII(int *a, int *b) {
	int t;

    //printf("100= %d   1=%d\n", sizeof(100), sizeof(1));
    //printf("%d\n", sizeof(a));
    //printf("%d\n", sizeof(*a));

	t = *a;						//*x = apontado por x
	*a = *b;
	*b = t;
}

/**
 * Verifica se um valor é maior do que outro
 * Se sim, devolve true; senão devolve false;
 * devolve ainda qual o maior e o menor.
 * 
 * \param x
 * \param y
 * \param maior
 * \param menor
 * \return 
 */
boolean numeroMaior(int x, int y, int* maior, int* menor) {

    if (x == y)
        return false;

    if (x > y) {
        *maior = x;         //*maior=x
        *menor = y;
    }
    else {
        *maior = y;
        *menor = x;
    }

    return true;


    /*if (x > y || x<y) {

        return true;
    }
    else
    {
        if (x==y)
            return false;
        return true;
    }*/

}

/**
 * Calcula a área
 * 
 * \param raio
 * \param area
 * \return 
 */
boolean calculaArea(int raio, float* area) {
    if (raio < 0)
    {
        *area = -1;
        return false;
    }
    else
    {
        *area = PI * raio * raio;
        return true;
    }

}