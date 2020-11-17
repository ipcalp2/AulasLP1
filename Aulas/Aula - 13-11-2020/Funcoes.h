/*****************************************************************//**
 * \file   Funcoes.h
 * \brief  Declaara��o de assinaturas de fun��es
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#pragma once

#include "Tipos.h"

extern int contaPares(int lInf, int lSup);

extern void mostraImpares(int i, int f);

extern void mostraTudo(int i, int f);

extern char* diaSemanaExtenso(diaSemana d);

//Extra
char* lePassword(int maxChars);
