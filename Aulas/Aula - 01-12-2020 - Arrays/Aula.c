#include <stdio.h>
#include <stdlib.h>

#define MAX 5

#pragma warning (disable: 4996);

typedef enum {False, True} boolean;

void mostraArray(int n[], int nElementos);	//asssinatura
boolean getValues(int v[], int nElementos);
void alteraArray(int v[], int n);

int main(void) {

	int x1, x2, x3, x4, x5;
	x1 = x2 = x3 = x4 = x5 = 0;

	//tipo nome[tamanho]
	int valores[MAX];		//declarar um array de 5 posições!
	float valores1[MAX * 2];	//posições: MAX; última=MAx-1; primeira=0

	int notas[MAX] = { 12,13,7,2,12 };
	char car[50] = { 'a','b','c','\0' };

	char* nomes[10];

	//char car1[20][10];
	//strcpy(nomes[0], "ola mundo")
	//char* s; //malloc()

	notas[0] = 12;
	notas[0] = notas[1] + 1;
	notas[1]++;	//notas[1] = notas[1]+1
	printf("%d\n", notas[2] * 3);
	//notas++; //Erro!!!

	valores[0] = 0;
	valores[1] = 0;
	valores[2] = 0;

	//valores[i]=0;
	int i = 0;
	do {
		valores[i] = 0;
		i++;
	} while (i<MAX);

	//for
	for (i = 0; i < MAX; i++) {
		valores[i] = 0;
	}

	//while
	i = 0;
	while (i < MAX)
	{
		valores[i++] = 0;
	}

	//mostrar array
	for (i = 0; i < MAX; i++) {
		printf("%d\n", valores[i]);
	}

	//tamanho de um array
	printf("%d\n", (int)sizeof(i));
	printf("%d\n", (int)sizeof(valores));
	printf("%d\n", (int)(sizeof(valores) / sizeof(valores[0])));

	//mostrar array com função
	mostraArray(valores, MAX);

	alteraArray(valores, MAX);

	printf("Ler valores para Array\n");
	//getValues(valores, MAX);

	//mostraArrayII(valores, MAX);
}


/**
 * .
 * 
 * \param n
 * \param nElementos
 */
void mostraArray(int n[], int nElementos) {
	for (int i = 0; i < nElementos; i++) {
		printf("%d\n", n[i]);
	}
}
/**
 * Apresenta o array caso seja possível
 * 
 * \param n
 * \param nElementos
 * \return 
 */
boolean mostraArrayII(int n[], int nElementos) {
	//int sizeArray = (sizeof(n) / sizeof(n[0]));	//"não é possível pois int n[]==int *n" calcula o tamanho do array
	//if ((nElementos <= 0) || (nElementos > sizeArray))  //caso nElementos exceda o tamanho do array -> False
	if ((nElementos <= 0) || (nElementos > MAX)) 
		return False;									//caso nElementos seja 0 ou negativo -> Falso
	mostraArray(n, nElementos);
	return True;
}

/**
 * .
 * 
 * \param v
 * \param nElementos
 * \return 
 */
boolean getValues(int v[], int nElementos) 
{
	//testar nElementos;
	for (int i = 0; i < nElementos; i++) {
		printf("%dº  - ", i);
		scanf("%d", v[i]);
	}
	return True;
}

/**
 * Devolve array com todos os pares existentes no array de entrada!
 * Array qie entra não é alterado
 * \param v
 * \param nElementos
 * \return 
 */
int* getValoresPares(int v[], int nElementos, int outro[])
{
	//Testar condições
	int aux[MAX];
	//testar nElementos;
	
	return aux;
}

void alteraArray(int v[], int n) {
	v[2] +=3;
}

/**
 * Devolver um array...como apontaddor
 * 
 * \param v
 * \param n
 * \return 
 */
int* getOddNumbers(int v[], int n) {
	static int aux[MAX];
	int j = 0;

	if (n >= MAX) return NULL;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) aux[j++] = v[i];
	}
	return aux;
}

//Ordenar um array!!!
//Inverter um array
//Contar ocorrências num array
