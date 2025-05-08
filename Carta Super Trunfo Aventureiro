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

// Recolhimento de dados Carta 1

printf("Ola, antes de começar o jogo vamos precisar de alguns dados. Vamos la!\n");
printf("Digite os dados da Carta 1\n");

printf("Digite uma letra de 'A' a 'H': \n");
scanf("%s", estado1);
printf("Digite o codigo da carta por exemplo 'A01': \n");
scanf("%s", codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("Digite o numero de habitantes: \n");
scanf("%d", &populacao1);

printf("Digite a area dessa cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos da cidade: \n");
scanf("%d", &pontos1);

// Recolhimento de dados Carta 2

printf("Digite os dados da Carta 2\n");

printf("Digite uma letra de 'A' a 'H': \n");
scanf("%s", estado2);
printf("Digite o codigo da carta por exemplo 'B01': \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade2);

printf("Digite o numero de habitantes: \n");
scanf("%d", &populacao2);

printf("Digite a area dessa cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos da cidade: \n");
scanf("%d", &pontos2);

printf("\n");

//Cauculo de dados

int densidade1 = populacao1 / area1;
int capita1 = pib1 / populacao1;

int densidade2 = populacao2 / area2;
int capita2 = pib2 / populacao2;

//Exibição de dados

printf("Carta 1\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", capita1);

printf("\n");

printf("Carta 2\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", capita2);


}
