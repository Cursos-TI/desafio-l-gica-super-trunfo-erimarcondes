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

    int comparacao1, comparacao2, escolha_comparacao1, escolha_comparacao2, resultado;

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

    printf("PIB: ");;
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

    // Comparação das cartas (1)
    printf(" \nComparação das Cartas");
    printf("\nEscolha o primeiro atributo a ser comparado: ");
    printf("\n1. População"
        "\n2. Área"
        "\n3. PIB"
        "\n4. Número de Pontos Turísticos"
        "\n5. Densidade Populacional"
        "\n6. PIB per Capita");
    scanf("%d", &escolha_comparacao1);
        
        switch (escolha_comparacao1) {
            case 1: // População
    printf("\nAtributo Comparado: População");
    printf("\nCarta 1 - %s: %d", nome_cidade1, populacao1);
    printf("\nCarta 2 - %s: %d", nome_cidade2, populacao2);
    if (populacao1 == populacao2) {
        comparacao1 = 0;
    } else {
    if (populacao1 > populacao2) {
        comparacao1 = 1;
    } else {
        comparacao1 = 2;
    }}
            break;
        
            case 2: // Área
    printf("\nAtributo Comparado: Área");
    printf("\nCarta 1 - %s: %2.f", nome_cidade1, area1);
    printf("\nCarta 2 - %s: %2.f", nome_cidade2, area2);
    if (area1 == area2) {
        comparacao1 = 0;
    } else {
    if (area1 > area2) {
        comparacao1 = 1;
    }   else {
        comparacao1 = 2;
    }}
            break;

            case 3: // PIB
    printf("\nAtributo Comparado: PIB");
    printf("\nCarta 1 - %s: %.2f", nome_cidade1, pib1);
    printf("\nCarta 2 - %s: %.2f", nome_cidade2, pib2);
    if (pib1 == pib2) {
        comparacao1 = 0;
    } else {
    if (pib1 > pib2) {
        comparacao1 = 1;
    }   else {
        comparacao1 = 2;
    }}
            break;

            case 4: // Número de Pontos Turísticos
    printf("\nAtributo Comparado: Número de Pontos Turísticos");
    printf("\nCarta 1 - %s: %d", nome_cidade1, pontos1);
    printf("\nCarta 2 - %s: %d", nome_cidade2, pontos2);
    if (pontos1 == pontos2) {
        comparacao1 = 0;
    } else {
    if (pontos1 > pontos2) {
        comparacao1 = 1;
    }   else {
        comparacao1 = 2;
    }}
            break;

            case 5: // Densidade Populacional
    printf("\nAtributo Comparado: Densidade Populacional");
    printf("\nCarta 1 - %s: %.2f", nome_cidade1, densidade1);
    printf("\nCarta 2 - %s: %.2f", nome_cidade2, densidade2);
    if (densidade1 == densidade2) {
        comparacao1 = 0;
    } else {
    if (densidade1 < densidade2) {
        comparacao1 = 1;
    }   else {
        comparacao1 = 2;
    }}
            break;

            case 6: // PIB per Capita
    printf("\nAtributo Comparado: PIB per Capita");
    printf("\nCarta 1 - %s: %.2f", nome_cidade1, pibpc1);
    printf("\nCarta 2 - %s: %.2f", nome_cidade2, pibpc2);
    if (pibpc1 == pibpc2) {
        comparacao1 = 0;
    } else {
    if (pibpc1 > pibpc2) {
        comparacao1 = 1;
    }   else {
        comparacao1 = 2;
    }}
            break;

            default:
            printf("Escolha uma opção válida");
        }

    // Comparação das cartas (2)
    printf(" \nComparação das Cartas");
    printf("\nEscolha o primeiro atributo a ser comparado: ");
    printf("\n1. População"
        "\n2. Área"
        "\n3. PIB"
        "\n4. Número de Pontos Turísticos"
        "\n5. Densidade Populacional"
        "\n6. PIB per Capita");
    scanf("%d", &escolha_comparacao2);
        
    if (escolha_comparacao1 == escolha_comparacao2) {
    printf("Escolha um atributo diferente para comparação!");
    return 0;
    }

        switch (escolha_comparacao2) {
            case 1: // População
    printf("\nAtributo Comparado: População");
    printf("\nCarta 1 - %s: %d", nome_cidade1, populacao1);
    printf("\nCarta 2 - %s: %d", nome_cidade2, populacao2);
    if (populacao1 == populacao2) {
        comparacao2 = 0;
    } else {
    if (populacao1 > populacao2) {
        comparacao2 = 1;
    } else {
        comparacao2 = 2;
    }}
            break;
        
            case 2: // Área
    printf("\nAtributo Comparado: Área");
    printf("\nCarta 1 - %s: %2.f", nome_cidade1, area1);
    printf("\nCarta 2 - %s: %2.f", nome_cidade2, area2);
    if (area1 == area2) {
        comparacao2 = 0;
    } else {
    if (area1 > area2) {
        comparacao2 = 1;
    }   else {
        comparacao2 = 2;
    }}
            break;

            case 3: // PIB
    printf("\nAtributo Comparado: PIB");
    printf("\nCarta 1 - %s: %.2f", nome_cidade1, pib1);
    printf("\nCarta 2 - %s: %.2f", nome_cidade2, pib2);
    if (pib1 == pib2) {
        comparacao2 = 0;
    } else {
    if (pib1 > pib2) {
        comparacao2 = 1;
    }   else {
        comparacao2 = 2;
    }}
            break;

            case 4: // Número de Pontos Turísticos
    printf("\nAtributo Comparado: Número de Pontos Turísticos");
    printf("\nCarta 1 - %s: %d", nome_cidade1, pontos1);
    printf("\nCarta 2 - %s: %d", nome_cidade2, pontos2);
    if (pontos1 == pontos2) {
        comparacao2 = 0;
    } else {
    if (pontos1 > pontos2) {
        comparacao2 = 1;
    }   else {
        comparacao2 = 2;
    }}
            break;

            case 5: // Densidade Populacional
    printf("\nAtributo Comparado: Densidade Populacional");
    printf("\nCarta 1 - %s: %.2f", nome_cidade1, densidade1);
    printf("\nCarta 2 - %s: %.2f", nome_cidade2, densidade2);
    if (densidade1 == densidade2) {
        comparacao2 = 0;
    } else {
    if (densidade1 < densidade2) {
        comparacao2 = 1;
    }   else {
        comparacao2 = 2;
    }}
            break;

            case 6: // PIB per Capita
    printf("\nAtributo Comparado: PIB per Capita");
    printf("\nCarta 1 - %s: %.2f", nome_cidade1, pibpc1);
    printf("\nCarta 2 - %s: %.2f", nome_cidade2, pibpc2);
    if (pibpc1 == pibpc2) {
        comparacao2 = 0;
    } else {
    if (pibpc1 > pibpc2) {
        comparacao2 = 1;
    }   else {
        comparacao2 = 2;
    }}
            break;
            default:
            printf("Escolha uma opção válida\n");
        }


// Resultado das comparações
    resultado = comparacao1 + comparacao2;

    switch (resultado) {
    case 0:
    printf("As cartas empataram!\n");
    break;
    case 1:
    printf("A Carta 1 venceu!\n");
    break;
    case 2:
        if (comparacao1 == comparacao2) {
            printf("A Carta 1 venceu!\n");
        } else {
        printf("A Carta 2 venceu!\n");
        }
    break;
    case 3:
    printf("As cartas empataram!\n");
    break;
    case 4:
    printf("A Carta 2 venceu!\n");
    break;
    }

    return 0;
}
