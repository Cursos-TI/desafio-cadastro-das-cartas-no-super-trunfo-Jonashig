#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para Carta 1
    char estado1;
    int codigoNum1, pontos1;
    unsigned long int populacao1;  
    float area1, pib1, densidade1, pibpercapita1, superPoder1;
    char nome1[50];
    char codigo1[5]; // Ex: A01

    // Declaração de variáveis para Carta 2
    char estado2;
    int codigoNum2, pontos2;
    unsigned long int populacao2;  
    float area2, pib2, densidade2, pibpercapita2, superPoder2;
    char nome2[50];
    char codigo2[5];

    // Carta 1
    printf("Carta 1:\n");
    printf("Insira uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Insira um número de 1 a 4: ");
    scanf("%d", &codigoNum1);
    getchar();  // Limpa o buffer

    printf("Insira o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Insira o número de habitantes (sem usar ponto ou vírgula): ");
    scanf("%lu", &populacao1);  

    printf("Insira a área (em km²): ");
    scanf("%f", &area1);

    printf("Insira o valor do PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    getchar();  // Limpa o buffer

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    sprintf(codigo1, "%c%02d", estado1, codigoNum1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Insira uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Insira um número de 1 a 4: ");
    scanf("%d", &codigoNum2);
    getchar();  // Limpa o buffer

    printf("Insira o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Insira o número de habitantes (sem usar ponto ou vírgula): ");
    scanf("%lu", &populacao2); 

    printf("Insira a área (em km²): ");
    scanf("%f", &area2);

    getchar();  // Limpa o buffer

    printf("Insira o valor do PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    sprintf(codigo2, "%c%02d", estado2, codigoNum2);

    // Cálculos para a densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;  // Convertendo PIB para reais
    pibpercapita2 = (pib2 * 1000000000) / populacao2;  // Convertendo PIB para reais

    // Cálculo do Super Poder 
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidade2);

    // Dados das cartas
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf("PIB per capita: %.2f Reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.2f Reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações entre as Cartas
    printf("\n--- Comparação entre as Cartas ---\n");

    // População: Carta com maior população vence
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    
    // Área: Carta com maior área vence
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // PIB: Carta com maior PIB vence
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Pontos turísticos: Carta com mais pontos turísticos vence
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Densidade populacional: Carta com menor densidade vence
    printf("Densidade populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    // PIB per capita: Carta com maior PIB per capita vence
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

    // Super Poder: Carta com maior super poder vence
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}