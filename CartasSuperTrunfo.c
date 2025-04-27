#include <stdio.h>
int main() {
    float populacao1, populacao2;
    float area1, area2, densidade1, densidade2;
    float pib1, pib2;
    float pibpercapita1, pibpercapita2;
    char codigo1[10], codigo2[10], estado1[10], estado2[10], nomeCidade1[20], nomeCidade2[20]; 
    int pontosturisticos1, pontosturisticos2;


    // Entrada de dados para a primeira carta

    printf("Digite o estado da primeira carta (A-H): \n" ); 
    scanf("%s", estado1);
    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", nomeCidade1);
    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%f", &populacao1);
    printf("Digite a área da cidade da primeira carta (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontosturisticos1);

    // Cálculos para a primeira carta

    densidade1 = populacao1 / area1; // Densidade populacional
    pibpercapita1 = pib1 / populacao1; // PIB per capita

    // Entrada de dados para a segunda carta

    printf("Digite o estado da segunda carta (A-H): \n" ); 
    scanf("%s", estado2);
    printf("Digite o código da segunda carta (ex A01): \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%f", &populacao2);
    printf("Digite a área da cidade da segunda carta (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &pontosturisticos2);

    // Cálculos para a segunda carta

    densidade2 = populacao2 / area2; // Densidade populacional
    pibpercapita2 = pib2 / populacao2; // PIB per capita

    // Impressaão dos dados da primeira carta

    printf("*** Carta 01 ***\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.3f milhões\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f milhões de reais\n", pib1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade1);
    printf("PIB per Capita: %.3f reais\n", pibpercapita1);

    // Impressão dos dados da segunda carta

    printf("*** Carta 02 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.3f \n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f \n", pib2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per Capita: %.3f reais\n", pibpercapita2);

    return 0;
}
   

