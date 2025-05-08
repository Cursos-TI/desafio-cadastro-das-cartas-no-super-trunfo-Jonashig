#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para Carta 1
    char estado1;
    int codigoNum1, populacao1, pontos1;
    float area1, pib1;
    char nome1[50];
    char codigo1[5]; // Ex: A01

    // Declaração de variáveis para Carta 2
    char estado2;
    int codigoNum2, populacao2, pontos2;
    float area2, pib2;
    char nome2[50];
    char codigo2[5];

    // Carta 1 
    printf("Carta 1:\n");
    printf("Insira uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Insira um número de 1 a 4: ");
    scanf("%d", &codigoNum1);
    getchar(); 

    printf("Insira o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Insira o número de habitantes (sem usar ponto ou vírgula): ");
    scanf("%d", &populacao1);

    printf("Insira a área (em km²): ");
    scanf("%f", &area1);

    printf("Insira o valor do PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    getchar();

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

  
    sprintf(codigo1, "%c%02d", estado1, codigoNum1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Insira uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Insira um número de 1 a 4: ");
    scanf("%d", &codigoNum2);
    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Insira o número de habitantes (sem usar ponto ou vírgula): ");
    scanf("%d", &populacao2);

    printf("Insira a área (em km²): ");
    scanf("%f", &area2);
    
    getchar();

    printf("Insira o valor do PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

 
    sprintf(codigo2, "%c%02d", estado2, codigoNum2);

   
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
  // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
