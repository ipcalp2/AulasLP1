/*****************************************************************//**
 * \file   Aula.c
 * \brief  
 * 
 * NOTA: reorganizar código!!!
 * 
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include <stdio.h>

#pragma warning (disable: 4996)

#define MAXNOME 25

typedef enum {False, True} boolean;

typedef struct pessoa {
    int idade;
    char nome[MAXNOME];
}pessoa;

//typedef struct pessoa pessoa;

/**
 * .
 * 
 * \param v
 * \param s
 * \return 
 */
int maiorArray(int v[], int s) {
	int max = v[0];
	for (int i = 1; i < s; i++) {
		if (v[i] > max) max = v[i];
	}
	return max;
}

/**
 * Devolve o maior e menor de uma array.
 * 
 * \param v
 * \param s
 * \param out
 * \return 
 */
int maiorMenorArray(int v[], int s, int *out) {
    int max = v[0];
    int min = v[0];
    for (int i = 1; i < s; i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }
    *out = min;
    return max;
}



/**
 * .
 * 
 * \param v
 * \param s
 * \return 
 */
boolean ordenaArray(int v[], int s) {
    for(int i=0; i<(s-1); i++)
        for (int j = i + 1; j < s; j++)
        {
            if (v[i] > v[j]) {
                int t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    return True;
}

void mostraArrayPessoa(pessoa v[], int s) {
    for (int i = 0; i < s; i++) {
        printf("Nome: %s\n", v[i].nome);
        printf("Idade: %d\n", v[i].idade);
    }
}

boolean lerValoresArrayPessoa(pessoa v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%dª Pessoa\n", i + 1);
        puts("Nome: ");
        scanf("%s", v[i].nome);
        puts("Idade: ");
        scanf("%d", &v[i].idade);
    }
}

boolean ordenaArrayPessoas(pessoa v[], int s) {
    for (int i = 0; i < (s - 1); i++)
        for (int j = i + 1; j < s; j++)
        {
            if (v[i].idade > v[j].idade) {
                pessoa t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    return True;
}

pessoa maisVelhaArray(pessoa v[], int s) {
    //int max = v[0].idade;     //devolver apenas a idade da pessoa velha!
    pessoa max = v[0];
    for (int i = 1; i < s; i++) {
        if (v[i].idade > max.idade) max = v[i];
    }
    return max;
}

//TPC:
//Inserir Ordenado!!!
//Remover Ordenado!!!


int main() {

	int v[6] = { 2,1,0,17,6 };
    int maior, menor;

	printf("Maximo= %d\n", maiorArray(v, 5));
    maior = maiorMenorArray(v, 5, &menor);

    ordenaArray(v, 5);

#pragma region STRUCTS

    struct pessoa p;
    p.idade = 12;
    strcpy(p.nome, "luis");

    pessoa q;
    q = p;

    pessoa alunos[10] = { {12,"luis"},{13,"Pedro"},{14,"Ana"} };

    alunos[0].idade = 12;
    strcpy(alunos[0].nome,"ola");

    mostraArrayPessoa(alunos, 3);

    boolean aux = lerValoresArrayPessoa(alunos, 3);

    mostraArrayPessoa(alunos, 3);

    ordenaArrayPessoas(alunos, 3);

    mostraArrayPessoa(alunos, 3);

#pragma endregion
}