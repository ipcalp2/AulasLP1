/*
	Author: lufer@ipca.pt & oribeiro@ipca.pt
	Date: 2020
	Desc: 
		- Fun��es e Procedimentos
	Obs:

	Procedimento ou Fun��o
	 - Procedimento: Executa uma a��o e n�o devolve qualquer resultado!
	 - Fun��o: Executa uma a��o e devolve um resultado
*/
#include <stdio.h>


/*------------------------------------------------------------------*/

//Prot�tipos ou Assinatura de Procedimentos/Fun��es
//Descri��o do cabe�alho da fun��o
void parar();

int dobro(int x);

float perimetro(float raio);


/*------------------------------------------------------------------*/


int main_3(){

	int valor=20;

	printf("\nO dobro de %d = %d", valor, calculaDobro(valor));	//invoca a fun��o dobro com valor numa vari�vel

	printf("\nO dobro de %d = %d", 120, calculaDobro(120));		//reinvoca a fun��o dobro com valor direto

	printf("\n\nO Benfica � o maior..\n\n");				//inevit�vel...nada a dizer :)

	//Exerc�cio: Calcular o Perimetro de uma circunfer�ncia, com recurso a uma fun��o
	//pedir o valor do raio da circunf
	//ler o valor do raio 
	//calcular o perimetro
	//mostrar o perimetro

	parar();												//invoca um procedximento
}


/* -------------------- Fun��es/Procedimentos ----------------------*/

//Procedimento para ajudar na gest�o da execu��o do programa...
void parar(){
	printf("Premir qualquer tecla para continuar.....");
	getch();
}


//Fun��o que calcula o dobro de um valor...
int calculaDobro(int x){
	int aux;

	aux = 2 * x;

	return aux;	//devolve
}

//Fun��o que calcula o perimero de uma circunfer�ncia
float calculaPerimetro(float r){
	const float PI = 3.14;

	float aux = 2 * PI *r;
	return (aux);

}
