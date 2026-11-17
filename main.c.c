#include "flores.h"

int main() {
    int opcao;

    printf("=== GRUPO LOTUS DECORACOES - ORCAMENTO DE FLORES ===\n\n");
    
    printf("Digite o nome do contrato: ");
    scanf(" %99[^\n]", contrato);

    printf("Digite o valor total do contrato (R$): ");
    scanf("%f", &valorContrato);

    printf("Digite o percentual destinado as flores (ex: 15 para 15%%): ");
    scanf("%f", &percentualFlores);

    orcamentoFlores = valorContrato * (percentualFlores / 100.0);

    do {
        printf("\n========================================\n");
        printf("          MENU PRINCIPAL - LOTUS        \n");
        printf("========================================\n");
        printf("1 - Cadastrar quantidades e precos das flores\n");
        printf("2 - Exibir relatorio completo de orcamento\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite apenas numeros.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (opcao) {
            case 1:
                cadastrarFlores();
                break;

            case 2:
                exibirRelatorio();
                break;

            case 0:
                printf("\nEncerrando o programa. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}