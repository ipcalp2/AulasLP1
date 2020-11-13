/*
	Author: lufer@ipca.pt & oribeiro@ipca.pt
	Name: Ascii.c
	Date: 2020
	Desc: 
		- Tratamento de leitura e escrita
		- Tipo de dados "char"
		- Analisa Tabela de ASCII
	Obs:
		- Converter minusculas/maiusculas (algoritmo)
			Verificar se �  A - Z
			letra = letra + 32;	

			Verificar se �  a - z
			letra = letra - 32;	
*/

#include <stdio.h>
#include <locale.h>

/*------------------------------------------------------------------*/
// declara��o ou assinatura das fun��es locais
char converteParaMinuscula(char letra);
void mostraTabelaAscii();

char inverteChar(char c);

/*------------------------------------------------------------------*/

// fun��o principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	// declara��o e inicializa��o de vari�veis
	char letra = 'A';	//letra=65;

	//valores diretos
	// V�rios resultados
	printf(" %c (c�digo ASCII %d) \n", letra, letra);				// 'A'  ( 65 )
	printf(" %c (c�digo ASCII %d) \n \n", letra + 1, letra + 1);	// 'B' ( 66 )
	printf(" %c (c�digo ASCII %d) \n", 'Z', 'Z');					// 'Z' ( 90 )
	printf(" %c (c�digo ASCII %d) \n", 'a', 'a');					// 'a' ( 97 )
	printf(" %c (c�digo ASCII %d) \n", 'z', 'z');					// 'z' ( 122 )

	//valores lidos
	printf("\nInserir letra: ");
	scanf(" %c", &letra);			//aten��o, usar " %c" ara ignorar caracter "\n"
	printf(" Caracter inserido: %c (c�digo ASCII %d) \n", letra, letra);		

	//Converter minusculas/maiusculas
	//Verificar se �  A - Z
	//letra = letra + 32;	//???

	//Verificar se �  a - z
	//letra = letra - 32;	//???

	//Analisar:
	printf("letra %c mai�scula %c \n", letra, toupper(letra));
	printf("letra %c min�scula %c \n", letra, tolower(letra));
	printf("Fun��o: letra %c min�scula %c \n", letra, converteParaMinuscula(letra));

	getch();

	/*Mostra toda a Tabela de Ascii*/
	printf("\nTabela de ASCII:\n");
	mostraTabelaAscii();

	//Exerc�cio TPC:
	//Fun��o que "inverte" um catacter???

	getch();
	return 0;
}


/*--------------------------Fun��es-----------------------------------*/

// Fun��o que converte maiusculas em minusculas
char converteParaMinuscula(char letra) {
	char resultado;

	resultado = letra;
	if (letra >= 'A' && letra <= 'Z'){	//s� converte se for maiuscula
		resultado = letra + 32;			// +'a' - 'A';
	}
	
	//resultado = 'a' + (letra - 'A');
	return resultado;
}


// Procedimento para apresentar todos os caracteres de 0 a 255
void mostraTabelaAscii(){

	for (int i = 0; i < 255; i++)
	{
		//escreve inteiro, hexadecimal e caracter correspondente
		printf("%d - %x - %c\n", i, i, i);	

		/*if (i % 15 == 0){			//pausa de 15 em 15 linhas
			getch();
		}*/
	}
}


/*
Fun��o que inverte um caracter, ie, maiusculas para minusculas ou vice-versa
*/
char inverteChar(char c){
	int aux=c;

	//Verificar se � maiuscula
	if (c >= 'A' && c <= 'Z'){
		aux = c + 32;
		//return (c + 32);
	}
	else{
		if (c >= 'a' && c <= 'z')
			aux = c - 32;
			//return (c - 32);
	}

	//se n�o for letra, mant�m o caracter de entrada!!
	return aux;

}
