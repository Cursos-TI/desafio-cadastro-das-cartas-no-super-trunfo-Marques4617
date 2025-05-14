#include <stdio.h>

int main(){

//Criação de dados

char estado1[100];
char codigo1[100];
char cidade1[100];
int populacao1 = 0;
float area1 = 0;
float pib1 = 0;
int pontos1 = 0;

char estado2[100];
char codigo2[100];
char cidade2[100];
int populacao2 = 0;
float area2 = 0;
float pib2 = 0;
int pontos2 = 0;

// Variável de menu
    int menu;

    // Menu principal
    printf("MENU PRINCIPAL\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    scanf("%d", &menu);

    switch (menu) {
    case 1:
        // Entrada de dados carta 1
        printf("Digite os dados da Carta 1\n");
        printf("Estado (A-H): "); scanf("%s", estado1);
        printf("Codigo (ex: A01): "); scanf("%s", codigo1);
        printf("Cidade: "); scanf("%s", cidade1);
        printf("Populacao: "); scanf("%d", &populacao1);
        printf("Area: "); scanf("%f", &area1);
        printf("PIB: "); scanf("%f", &pib1);
        printf("Pontos turisticos: "); scanf("%d", &pontos1);

        // Entrada de dados carta 2
        printf("\nDigite os dados da Carta 2\n");
        printf("Estado (A-H): "); scanf("%s", estado2);
        printf("Codigo (ex: B01): "); scanf("%s", codigo2);
        printf("Cidade: "); scanf("%s", cidade2);
        printf("Populacao: "); scanf("%d", &populacao2);
        printf("Area: "); scanf("%f", &area2);
        printf("PIB: "); scanf("%f", &pib2);
        printf("Pontos turisticos: "); scanf("%d", &pontos2);

        // Cálculos derivados
        float densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
        float densidade2 = (area2 != 0) ? populacao2 / area2 : 0;

        // Menu para escolha dos dois atributos
        int atributo1, atributo2;
        printf("\nEscolha dois atributos diferentes para comparar:\n");
        printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");

        do {
            printf("Primeiro atributo: ");
            scanf("%d", &atributo1);
            printf("Segundo atributo: ");
            scanf("%d", &atributo2);

            if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
                printf("Atributos invalidos ou iguais! Escolha novamente.\n");
            }
        } while (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5);

        // Função para obter valor do atributo
        float valor_carta1_attr1 = 0, valor_carta2_attr1 = 0;
        float valor_carta1_attr2 = 0, valor_carta2_attr2 = 0;

        // Atributo 1
        switch (atributo1) {
            case 1: valor_carta1_attr1 = populacao1; valor_carta2_attr1 = populacao2; break;
            case 2: valor_carta1_attr1 = area1; valor_carta2_attr1 = area2; break;
            case 3: valor_carta1_attr1 = pib1; valor_carta2_attr1 = pib2; break;
            case 4: valor_carta1_attr1 = pontos1; valor_carta2_attr1 = pontos2; break;
            case 5: valor_carta1_attr1 = densidade1; valor_carta2_attr1 = densidade2; break;
        }

        // Atributo 2
        switch (atributo2) {
            case 1: valor_carta1_attr2 = populacao1; valor_carta2_attr2 = populacao2; break;
            case 2: valor_carta1_attr2 = area1; valor_carta2_attr2 = area2; break;
            case 3: valor_carta1_attr2 = pib1; valor_carta2_attr2 = pib2; break;
            case 4: valor_carta1_attr2 = pontos1; valor_carta2_attr2 = pontos2; break;
            case 5: valor_carta1_attr2 = densidade1; valor_carta2_attr2 = densidade2; break;
        }

        // Comparação individual dos dois atributos
        printf("\nComparando atributos...\n");

        // Função auxiliar para comparação
        int pontos_carta1 = 0, pontos_carta2 = 0;

        // Atributo 1
        if (atributo1 == 5) { // densidade (menor é melhor)
            if (valor_carta1_attr1 < valor_carta2_attr1) pontos_carta1++;
            else if (valor_carta1_attr1 > valor_carta2_attr1) pontos_carta2++;
        } else {
            if (valor_carta1_attr1 > valor_carta2_attr1) pontos_carta1++;
            else if (valor_carta1_attr1 < valor_carta2_attr1) pontos_carta2++;
        }

        // Atributo 2
        if (atributo2 == 5) {
            if (valor_carta1_attr2 < valor_carta2_attr2) pontos_carta1++;
            else if (valor_carta1_attr2 > valor_carta2_attr2) pontos_carta2++;
        } else {
            if (valor_carta1_attr2 > valor_carta2_attr2) pontos_carta1++;
            else if (valor_carta1_attr2 < valor_carta2_attr2) pontos_carta2++;
        }

        // Soma total dos valores comparados
        float soma1 = valor_carta1_attr1 + valor_carta1_attr2;
        float soma2 = valor_carta2_attr1 + valor_carta2_attr2;

        printf("Soma dos atributos - Carta 1: %.2f | Carta 2: %.2f\n", soma1, soma2);

        if (soma1 > soma2) {
            printf("Resultado final: Carta 1 venceu a rodada!\n");
        } else if (soma1 < soma2) {
            printf("Resultado final: Carta 2 venceu a rodada!\n");
        } else {
            printf("Resultado final: Empate na rodada!\n");
        }
        break;

    case 2:
        printf("Saindo...\n");
        break;

    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}
