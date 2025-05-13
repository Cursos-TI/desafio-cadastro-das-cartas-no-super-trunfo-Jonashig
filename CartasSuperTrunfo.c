#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char nome1[50], letra1;
    int numero1;
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char nome2[50], letra2;
    int numero2;
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada Carta 1
    printf("Carta 1:\n");
    printf("Digite uma letra de (A a H): ");
    scanf(" %c", &letra1);
    printf("Insira um número de (1 a 4): ");
    scanf("%d", &numero1);

    getchar(); 

    sprintf(codigo1, "%c%d", letra1, numero1); 
    printf("Nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    getchar();

    // Entrada Carta 2
    printf("\nCarta 2:\n");
    printf("Digite uma letra de (A a H): ");
    scanf(" %c", &letra2);
    printf("Insira um número de (1 a 4): ");
    scanf("%d", &numero2);
    getchar();
    sprintf(codigo2, "%c%d", letra2, numero2);
    printf("Nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPercapita1 = (pib1 * 1e9) / populacao1;
    float pibPercapita2 = (pib2 * 1e9) / populacao2;

    float superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibPercapita1 + (1 / densidade1);
    float superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibPercapita2 + (1 / densidade2);

    printf("\nComparação de Cartas:\n\n");

    printf("Código Carta 1: %s | Código Carta 2: %s\n\n", codigo1, codigo2);

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos1 > pontos2 ? 1 : 2, pontos1 > pontos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPercapita1 > pibPercapita2 ? 1 : 2, pibPercapita1 > pibPercapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 2, superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}
