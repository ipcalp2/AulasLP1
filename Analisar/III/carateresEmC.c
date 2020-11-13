/*****************************************************************//**
 * \file   carateresEmC.c
 * \brief  
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/


#include <stdio.h>
#include <locale.h>

#pragma warning (disable: 4996)     //ignorar _CRT_SECURE_NO_WARNINGS

// declara��o ou assinatura das fun��es locais
char converteParaMinuscula(char letra);

// fun��o principal
int main2() {  
	setlocale(LC_ALL, "Portuguese");
	// declara��o e inicializa��o de vari�veis
	char letra = 'A'; 
			
	// ler dados de entrada

	
	// c�lculos
	// resultados
	printf(" %c (c�digo ASCII %d) \n", letra, letra );	      // 'A'  ( 65 )
	printf(" %c (c�digo ASCII %d) \n \n", letra+1, letra+1 ); // 'B' ( 66 )
	printf(" %c (c�digo ASCII %d) \n", 'Z', 'Z');    // 'Z' ( 90 )
	printf(" %c (c�digo ASCII %d) \n", 'a', 'a' );	 // 'a' ( 97 )
	printf(" %c (c�digo ASCII %d) \n", 'z', 'z' );   // 'z' ( 122 )
	
	printf("--- \n");
	scanf("%c",&letra);
	printf("letra %c min�scula %c \n", letra, converteParaMinuscula(letra));
	return 0; 
}

/**
 * .
 * 
 * \param letra
 * \return 
 */
char converteParaMinuscula(char letra) {
	char resultado;
	resultado = 'a' + (letra - 'A');
	return resultado;
}

