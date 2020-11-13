/*
	Autor:lufer@ipca.pt & oribeiro@ipca.pt
	Date: 2020
	Desc: 
		- Fun��es de Input e Output
		- Analisar quest�es com entrada e sa�da de dados

	Obs:
		int scanf(const char *format, ...);
		int fscanf(FILE *stream, const char *format, ...);
		int c = getchar();

		"%c" l� caracteres...tem de interpretar todo o tipo de caracteres, incluindo os espa�os, \n, etc...
		" %c" ignora caracteres especiais como espa�os, \n, etc...

		Quando for necess�rio mais que uma leitura consecutiva de um char, deve usar-se "scanf(" %c",&var);"

		Ver: https://gsamaras.wordpress.com/code/caution-when-reading-char-with-scanf-c/

*/


#include <stdio.h>

int main_1(void)
{
	char c;

	printf("Input 1: \n");
	scanf("%c", &c);		//getchar()
	printf("c = %c\n", c);

	printf("Input 2:\n");
	scanf("%c", &c);		//coloca o \n no buffer de leitura
	//scanf(" %c", &c);		//" %c" ignora caracteres especiais..ignora o \n
	printf("c = %c\n", c);

	printf("Input 3:\n");
	scanf(" %c", &c);
	printf("c = %c\n", c);

	/*Outra Hipotese: ler como inteiro*/
	/*int c1;
	printf("Input 4:\n");
	scanf("%d", &c1);
	printf("c = %c\n", c1);*/

	printf("Qualquer tecla para continuar...");
	getch();
	return 0;
}