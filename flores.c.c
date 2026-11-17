#include "flores.h"

// Definição real das variáveis globais
char nomes[6][40] = {
    "Corredor da igreja", 
    "Altar da igreja", 
    "Buque da noiva",
    "Mesas - arranjos altos", 
    "Mesas - arranjos baixos",
    "Mesa de doces"
};

int quantidades[6] = {0};
float precos[6] = {0.0};
float custos[6] = {0.0};

char contrato[100];
float valorContrato = 0.0;
float percentualFlores = 0.0;
float orcamentoFlores = 0.0;
float custoTotal = 0.0;

// Função para cadastrar quantidades e preços
void cadastrarFlores(void) {
    int i;
    printf("\n--- CADASTRO DOS 6 GRUPOS DE FLORES ---\n");
    custoTotal = 0.0;
    
    for (i = 0; i < 6; i++) {
        printf("\nGrupo: %s\n", nomes[i]);
        
        printf("  Quantidade de arranjos: ");
        scanf("%d", &quantidades[i]);

        if (quantidades[i] > 0) {
            printf("  Preco unitario de cada arranjo (R$): ");
            scanf("%f", &precos[i]);
        } else {
            precos[i] = 0.0;
        }

        custos[i] = quantidades[i] * precos[i];
        custoTotal += custos[i];
    }
    printf("\nCadastro realizado com sucesso!\n");
}

// Função para exibir o relatório completo
void exibirRelatorio(void) {
    int i;
    printf("\n============================================================\n");
    printf("                RELATORIO DE ORCAMENTO - LOTUS              \n");
    printf("============================================================\n");
    printf("Contrato: %s\n", contrato);
    printf("Valor Total do Contrato: R$ %.2f\n", valorContrato);
    printf("Orcamento Permitido para Flores (%.1f%%): R$ %.2f\n", percentualFlores, orcamentoFlores);
    
    printf("\n--- DETALHES POR GRUPO ---\n");
    for (i = 0; i < 6; i++) {
        printf("-> %s\n", nomes[i]);
        printf("   Qtd: %d | Preco Unitario: R$ %.2f | Subtotal: R$ %.2f\n", 
            quantidades[i], precos[i], custos[i]);
    }

    printf("\n------------------------------------------------------------\n");
    printf("Custo Total Real das Flores: R$ %.2f\n", custoTotal);

    if (custoTotal <= orcamentoFlores) {
        float sobra = orcamentoFlores - custoTotal;
        printf("STATUS: DENTRO DO ORCAMENTO! (Sobra de R$ %.2f)\n", sobra);
    } else {
        float excesso = custoTotal - orcamentoFlores;
        printf("STATUS: ESTOUROU O ORCAMENTO! (Excesso de R$ %.2f)\n", excesso);
    }
    printf("============================================================\n");
}