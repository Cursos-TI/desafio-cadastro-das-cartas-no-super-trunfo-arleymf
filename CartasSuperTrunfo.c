#include <stdio.h>
int main() {

    //Declaração das variáveis da primeira carta

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Declaração das variáveis da segunda carta

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Dados da primeira carta

    printf("Digite o estado da primeira carta (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da primeira carta (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &pontosTuristicos1);

    //Dados da segunda carta

    printf("Digite o estado da segunda carta (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da segunda carta (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &pontosTuristicos2);

    //Demonstração dos dados da primeira carta

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Demonstração dos dados da segunda carta
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    
    return 0;
}
