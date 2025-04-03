#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], estado2[50],nome_cidade1[50], nome_cidade2[50], codigo1[50], codigo2[50];
    int pop1, pop2, area1, area2, pontos_tur1, pontos_tur2;
    float area_km1, area_km2, pib1, pib2;

    // ---------------dados da primeira carta---------------------
    printf("hora de escrever os dados da primeira carta\n");
    //estado
    printf("Digite o nome do estado da primeira carta: ");
    scanf("%s", estado1);
    //cod carta
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo1);
    //nome
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nome_cidade1);
    //pop
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &pop1);
    //area
    printf("Digite a area da primeira carta: ");
    scanf("%f", &area_km1);
    //pib
    printf("Digite o pib da primeira carta: ");
    scanf("%f", &pib1);
    //num pontos tur
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_tur1);


    //--------------------dados da segunda carta----------------------
    printf("---------------------------------------------------------\n");
    printf("hora de escrever os dados da segunda carta\n");
    //estado
    printf("Digite o nome do estado da segunda carta: ");
    scanf("%s", estado2);
    //cod carta
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigo2);
    //nome
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nome_cidade2);
    //pop
    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &pop2);
    //area
    printf("Digite a area da segunda carta: ");
    scanf("%f", &area_km2);
    //pib
    printf("Digite o pib da segunda carta: ");
    scanf("%f", &pib2);
    //num pontos tur
    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_tur2);

    //------------------PRINTANDO AS CARTAS----------------------
    printf("---------------------------CARTAS------------------------\n");
    printf("Carta 1:");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f km\n", area_km1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_tur1);
    printf("---------------------------------------------------------\n");
    printf("Carta 2:");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km\n", area_km2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_tur2);
    return 0;
}