#include <stdio.h>
#include <string.h>

/*--------DESAFIO 2 - CARTAS SUPER TRUNFO----------------
calcular a densidade populacional de cada cidade
- densidade populacional = populacao / area
calcular o pib per capita de cada cidade
- pib per capita = pib / populacao
exibir os resultados    

/* --------desafio 3--------------------------------------------
mudar população para unsigned long int para acomodar numeros maiores
além disso vamos:
1. continuar calculando densidade populacional e pib per capita
2. super poder: soma dos atributos numericos (pop, area, pib, pontos turisticos, pib p c, e o inverso da densidade populacional, quanto menor a densidade, maior o poder), armazenar em float
3. comparar as cartas, quem tiver os maiores atributos vencem, menos a densidade populacional, que quanto menor, melhor
4. printar o resultado, quem venceu e os atributos de cada carta usando 1 para o vencedor e 0 para o perdedor
*/


int main() {
    char estado1[50], estado2[50],nome_cidade1[50], nome_cidade2[50], codigo1[50], codigo2[50];
   
    unsigned long int pop1, pop2;
    int pontos_tur1, pontos_tur2;
    float area_km1, area_km2, pib1, pib2;

    // ---------------dados da primeira carta---------------------
    printf("hora de escrever os dados da primeira carta\n");
    printf("Digite o nome do estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Digite a populacao da primeira carta: ");
    scanf("%u", &pop1);
    printf("Digite a area da primeira carta: ");
    scanf("%f", &area_km1);
    printf("Digite o pib da primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_tur1);
    
    float densidade_pop1 = pop1 / area_km1;
    float pib_per_capita1 = (pib1 * 1e9f) / pop1;
    float inverso_densidade1 = 1.0f / densidade_pop1;
    float super_poder1 = pop1 + area_km1 + pib1 + pontos_tur1 + pib_per_capita1 + inverso_densidade1;

    //--------------------dados da segunda carta----------------------
    printf("---------------------------------------------------------\n");
    printf("hora de escrever os dados da segunda carta\n");
    printf("Digite o nome do estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a populacao da segunda carta: ");
    scanf("%u", &pop2);
    printf("Digite a area da segunda carta: ");
    scanf("%f", &area_km2);
    printf("Digite o pib da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_tur2);

    float densidade_pop2 = pop2 / area_km2;
    float pib_per_capita2 = (pib2 * 1e9f) / pop2;
    float inverso_densidade2 = 1.0f / densidade_pop2;
    float super_poder2 = pop2 + area_km2 + pib2 + pontos_tur2 + pib_per_capita2 + inverso_densidade2;
    
    //------------------PRINTANDO AS CARTAS----------------------
    //CARTA 1
    printf("---------------------------CARTAS------------------------\n");
    printf("Carta 1:");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %u\n", pop1);
    printf("Area: %.2f km\n", area_km1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_tur1);
    printf("Densidade populacional: %.2f hab/km\n", densidade_pop1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    //CARTA 2
    printf("---------------------------------------------------------\n");
    printf("Carta 2:");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %u\n", pop2);
    printf("Area: %.2f km\n", area_km2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_tur2);
    printf("Densidade populacional: %.2f hab/km\n", densidade_pop2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    //------------------COMPARANDO AS CARTAS----------------------
    printf("---------------------------RESULTADO------------------------\n");
    //pop
    int popRes = (pop1 > pop2);
    int popVenc = popRes * 1 + (1 - popRes) * 2;
    printf("Populacao: Carta %d venceu (%d)\n", popVenc, popRes);

    //area
    int areaRes = (area_km1 > area_km2);
    int areaVenc = areaRes * 1 + (1 - areaRes) * 2;
    printf("Area: Carta %d venceu (%d)\n", areaVenc, areaRes);

    //pib
    int pibRes = (pib1 > pib2);
    int pibVenc = pibRes * 1 + (1 - pibRes) * 2;
    printf("PIB: Carta %d venceu (%d)\n", pibVenc, pibRes);

    //pontos turisticos
    int pontos_turRes = (pontos_tur1 > pontos_tur2);
    int pontos_turVenc = pontos_turRes * 1 + (1 - pontos_turRes) * 2;
    printf("Pontos turisticos: Carta %d venceu (%d)\n", pontos_turVenc, pontos_turRes);

    //pib per capita
    int pib_per_capitaRes = (pib_per_capita1 > pib_per_capita2);
    int pib_per_capitaVenc = pib_per_capitaRes * 1 + (1 - pib_per_capitaRes) * 2;
    printf("PIB per capita: Carta %d venceu (%d)\n", pib_per_capitaVenc, pib_per_capitaRes);

    //inverso densidade
    int inverso_densidadeRes = (inverso_densidade1 > inverso_densidade2);
    int inverso_densidadeVenc = inverso_densidadeRes * 1 + (1 - inverso_densidadeRes) * 2;
    printf("Inverso da densidade populacional: Carta %d venceu (%d)\n", inverso_densidadeVenc, inverso_densidadeRes);

    //super poder
    int super_poderRes = (super_poder1 > super_poder2);
    int super_poderVenc = super_poderRes * 1 + (1 - super_poderRes) * 2;
    printf("Super poder: Carta %d venceu (%d)\n", super_poderVenc, super_poderRes);

    return 0;
}
