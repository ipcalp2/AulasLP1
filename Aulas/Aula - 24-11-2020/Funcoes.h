#pragma once

#pragma region A
typedef enum  {false, true} boolean;

#define PI 3.14

extern int changeValues(int *x, int *y);	//troca valores
extern void incValue(int* v);				//incrementa valor

//Função calcula a soma dois valores
//Encontra o Maior
//

//Exercício
extern int fact(int n);						//Factorial de um número
boolean eNumeroPrimo(int x);				//Verifica se número é primo
//Mostrar todos os pares existente num intervalo de valores

#pragma endregion


extern void troca(int x, int y);
extern void trocaII(int *x, int *y);

//Verifica se um valor é maior do que outro
//Se sim, devolve true; senão devolve false;
//devolve ainda qual o maior e o menor
boolean numeroMaior(int x, int y, int *maior, int *menor);

extern boolean calculaArea(int x, float *area);			//calcula a área de uma circ
extern void calculaPerimetro(int y, float* per);
