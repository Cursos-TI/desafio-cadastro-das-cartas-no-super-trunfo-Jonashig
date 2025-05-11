#include <stdio.h>
#include <string.h>

// Função de comparação com if-else aninhado
void comparar(float valor1, float valor2, int menorVence, const char* nomeAtributo) {
    printf("\nComparando %s:\n", nomeAtributo);
    printf("Carta 1: %.2f\n", valor1);
    printf("Carta 2: %.2f\n", valor2);

    if (valor1 == valor2) {
        printf("Empate!\n");
    } else {
        if (menorVence) {
            if (valor1 < valor2) {
                printf("Carta 1 venceu (menor %s).\n", nomeAtributo);
            } else {
                printf("Carta 2 venceu (menor %s).\n", nomeAtributo);
            }
        } else {
            if (valor1 > valor2) {
                printf("Carta 1 venceu (maior %s).\n", nomeAtributo);
            } else {
                printf("Carta 2 venceu (maior %s).\n", nomeAtributo);
            }
        }
    }
}

int main() {
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    // Entrada de dados
    printf("Carta 1:\n");
    printf("Nome do país: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    getchar(); // Limpa buffer

    printf("\nCarta 2:\n");
    printf("Nome do país: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo de densidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Exibição dos dados
    printf("\n--- Dados das Cartas ---\n");
    printf("\nCarta 1:\nNome: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\n", 
        nome1, populacao1, area1, pib1, pontos1, densidade1);
    printf("\nCarta 2:\nNome: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\n", 
        nome2, populacao2, area2, pib2, pontos2, densidade2);

    // Menu interativo
    int escolha;
    printf("\n--- Menu de Comparação ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção (1-5): ");
    scanf("%d", &escolha);

    // Switch com lógica if-else aninhada
    switch (escolha) {
        case 1:
            comparar((float)populacao1, (float)populacao2, 0, "população");
            break;
        case 2:
            comparar(area1, area2, 0, "área");
            break;
        case 3:
            comparar(pib1, pib2, 0, "PIB");
            break;
        case 4:
            comparar((float)pontos1, (float)pontos2, 0, "pontos turísticos");
            break;
        case 5:
            comparar(densidade1, densidade2, 1, "densidade demográfica");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}