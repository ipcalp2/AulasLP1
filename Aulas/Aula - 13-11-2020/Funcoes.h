/*****************************************************************//**
 * \file   Funcoes.h
 * \brief  Declara��o de assinaturas de fun��es
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
//#pragma once

#ifndef A
#define A

#include "Tipos.h"

extern int contaPares(int lInf, int lSup);

extern void mostraImpares(int i, int f);

extern void mostraTudo(int i, int f);

extern char* diaSemanaExtenso(diaSemana d);

extern void menu();
extern char leOpcao(char inf, char sup);

//Extra
char* lePassword(int maxChars);

#endif