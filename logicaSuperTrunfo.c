#include <stdio.h>

int main(){

    // Declaração de variáveis
    
    char estado1, estado2;

    char codigo1[4], codigo2[4];

    char nome_cidade1[50], nome_cidade2[50];

    int populacao1, populacao2;

    float area1, area2;

    float pib1, pib2, pibpc1, pibpc2, densidade1, densidade2;

    int pontos1, pontos2;

    float super_poder1, super_poder2;

    printf("Cadastro de cartas - Super Trunfo\n");

    // Entrada de dados - Cidade 1

    printf("Informe os dados da primeira cidade: \n");
    
    printf("Estado [A-H]: ");
    scanf(" %c", &estado1);
    
    printf("Código: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);
         //Nome da cidade com apenas uma palavra

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cálculo - Densidade Populacional
    densidade1 = (float) populacao1 / area1;

    // Cálculo - Pib per Capita
    pibpc1 = (float) pib1 / populacao1;

    // Saída de Dados - Cidade 1

    printf("\nCarta 1");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", nome_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.3f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos1);
    printf("\nDensidade Populacional: %.2f hab/km2", densidade1);
    printf("\nPIB per Capita: %.2f reais\n", pibpc1);
    
    // Entrada de dados - Cidade 2

    printf("Informe os dados da segunda cidade: \n");

    printf("Estado [A-H]: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);
        // Nome da cidade com apenas uma palavra

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo - Densidade Populacional
    densidade2 = (float) populacao2 / area2;

    // Cálculo - Pib per Capita
    pibpc2 = (float) pib2 / populacao2;

    // Saída de dados - Cidade 2
    
    printf("\nCarta 2");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.3f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos2);
    printf("\nDensidade Populacional: %.2f hab/km2", densidade2);
    printf("\nPIB per Capita: %.2f reais", pibpc2);

    // Cálculo do Super Poder
    super_poder1 = (float)(populacao1 + area1 + pib1 + pibpc1 +(1/densidade1) + pontos1);
    super_poder2 = (float)(populacao2 + area2 + pib2 + pibpc2 +(1/densidade2) + pontos2);

    // Comparação das cartas
    printf(" \nComparação das Cartas - População");
    printf("\nCarta 1 - %s: %d", nome_cidade1, populacao1);
    printf("Carta 2 - %s: %d", nome_cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!", nome_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", nome_cidade2);
    }


    return 0;
}
