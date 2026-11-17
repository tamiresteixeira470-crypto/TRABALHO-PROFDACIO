#ifndef FLORES_H
#define FLORES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variáveis globais compartilhadas
extern char nomes[6][40];
extern int quantidades[6];
extern float precos[6];
extern float custos[6];
extern char contrato[100];
extern float valorContrato;
extern float percentualFlores;
extern float orcamentoFlores;
extern float custoTotal;

// Declaração das funções
void cadastrarFlores(void);
void exibirRelatorio(void);

#endif