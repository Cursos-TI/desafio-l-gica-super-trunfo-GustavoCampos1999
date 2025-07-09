#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main() {
    //Carta 1
    char estado1[50];
    printf("Digite o Estado da carta 1\n");
    scanf("%s", estado1);

    char codigo1[4];
    printf("Digite o Código da carta 1\n");
    scanf("%s", codigo1);

    unsigned long int populacao1;
    printf("Digite a população da carta 1\n");
    scanf("%lu", &populacao1);

    float area1;
    printf("Digite a área da carta 1\n");
    scanf("%f", &area1);

    float pib1;
    printf("Digite o PIB da carta 1\n");
    scanf("%f", &pib1);

    int pontost1;
    printf("Digite o número de pontos turísticos da carta 1\n");
    scanf("%d", &pontost1);

    float densidade1 = populacao1/area1;
    float perCapita1 = pib1/populacao1;
    float densidade_inversa1 = area1/populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pontost1 + perCapita1 + densidade_inversa1;

    //Carta 2
    char estado2[50];
    printf("Digite o Estado da carta 2\n");
    scanf("%s", estado2);

    char codigo2[4];
    printf("Digite o Código da carta 2\n");
    scanf("%s", codigo2);

    unsigned long int populacao2;
    printf("Digite a população da carta 2\n");
    scanf("%lu", &populacao2);

    float area2;
    printf("Digite a área da carta 2\n");
    scanf("%f", &area2);

    float pib2;
    printf("Digite o PIB da carta 2\n");
    scanf("%f", &pib2);

    int pontost2;
    printf("Digite o número de pontos turísticos da carta 2\n");
    scanf("%d", &pontost2);

    float densidade2 = populacao2/area2;
    float perCapita2 = pib2/populacao2;
    float densidade_inversa2 = area2/populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pontost2 + perCapita2 + densidade_inversa2;
    printf("==========================\n");

    //Resultado
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", perCapita1);
    printf("Super Poder: %.2f pontos\n", superpoder1);

    printf("==========================\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", perCapita2);
    printf("Super Poder: %.2f pontos\n", superpoder2);
    
    printf("==========================\n");

    int opcao1, opcao2;
    printf("Qual o PRIMEIRO atributo quer comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao1);
    printf("Qual o SEGUNDO atributo quer comparar?\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {printf ("Escolha atributos diferentes");
    return 1;
    }
    else if (opcao1 < 1 || opcao1 > 7 || opcao2 < 1 || opcao2 > 7){printf("Escolha uma opção válida");
    return 1;
    }
        
    float poder1_op1, poder2_op1;
    float poder1_op2, poder2_op2;

    switch (opcao1)
    {
    case 1: poder1_op1 = populacao1; poder2_op1 = populacao2;
        break;
    case 2: poder1_op1 = area1; poder2_op1 = area2;
        break;
    case 3: poder1_op1 = pib1; poder2_op1 = pib2;
        break;
    case 4: poder1_op1 = pontost1; poder2_op1 = pontost2;
        break;
    case 5: poder1_op1 = densidade_inversa1; poder2_op1 = densidade_inversa2;
        break;
    case 6: poder1_op1 = perCapita1; poder2_op1 = perCapita2;
        break;
    case 7: poder1_op1 = superpoder1; poder2_op1 = superpoder2;
        break;
    }

    switch (opcao2)
    {
    case 1: poder1_op2 = populacao1; poder2_op2 = populacao2;
        break;
    case 2: poder1_op2 = area1; poder2_op2 = area2;
        break;
    case 3: poder1_op2 = pib1; poder2_op2 = pib2;
        break;
    case 4: poder1_op2 = pontost1; poder2_op2 = pontost2;
        break;
    case 5: poder1_op2 = densidade_inversa1; poder2_op2 = densidade_inversa2;
        break;
    case 6: poder1_op2 = perCapita1; poder2_op2 = perCapita2;
        break;
    case 7: poder1_op2 = superpoder1; poder2_op2 = superpoder2;
        break;
    }

    printf("==========================\n");
    printf("%s vs %s\n", estado1, estado2);
    printf("Comparação:\n" );
    
    switch (opcao1) {
        case 1:
        printf("%s: %lu habitantes\n", estado1, populacao1);
        printf("%s: %lu habitantes\n", estado2, populacao2);
        break;
        case 2:
        printf("%s: %.2f km²\n", estado1, area1);
        printf("%s: %.2f km²\n", estado2, area2);
        break;
        case 3:
        printf("%s: %.2f bilhões de reais\n", estado1, pib1);
        printf("%s: %.2f bilhões de reais\n", estado2, pib2);
        break;
        case 4:
        printf("%s: %d Pontos Turísticos\n", estado1, pontost1);
        printf("%s: %d Pontos Turísticos\n", estado2, pontost2);
        break;
        case 5:
        printf("%s: %.2f hab/km²\n", estado1, densidade1);
        printf("%s: %.2f hab/km²\n", estado2, densidade2);
        break;
        case 6:
        printf("%s: %.2f reais\n", estado1, perCapita1);
        printf("%s: %.2f reais\n", estado2, perCapita2);
        break;
        case 7:
        printf("%s: %.2f pontos de poder\n", estado1, superpoder1);
        printf("%s: %.2f pontos de poder\n", estado2, superpoder2);
        break;
    }

        switch (opcao2) {
        case 1:
        printf("%s: %lu habitantes\n", estado1, populacao1);
        printf("%s: %lu habitantes\n", estado2, populacao2);
        break;
        case 2:
        printf("%s: %.2f km²\n", estado1, area1);
        printf("%s: %.2f km²\n", estado2, area2);
        break;
        case 3:
        printf("%s: %.2f bilhões de reais\n", estado1, pib1);
        printf("%s: %.2f bilhões de reais\n", estado2, pib2);
        break;
        case 4:
        printf("%s: %d Pontos Turísticos\n", estado1, pontost1);
        printf("%s: %d Pontos Turísticos\n", estado2, pontost2);
        break;
        case 5:
        printf("%s: %.2f hab/km²\n", estado1, densidade1);
        printf("%s: %.2f hab/km²\n", estado2, densidade2);
        break;
        case 6:
        printf("%s: %.2f reais\n", estado1, perCapita1);
        printf("%s: %.2f reais\n", estado2, perCapita2);
        break;
        case 7:
        printf("%s: %.2f pontos de poder\n", estado1, superpoder1);
        printf("%s: %.2f pontos de poder\n", estado2, superpoder2);
        break;
    }

    float poder_total1 = poder1_op1 + poder1_op2;
    float poder_total2 = poder2_op1 + poder2_op2;
    printf("==========================\n");
    printf("Poder somado dos atributos escolhidos\n");
    printf("%s: %.2f pontos\n", estado1, poder_total1);
    printf("%s: %.2f pontos\n", estado2, poder_total2);

    if (poder_total1 == poder_total2)
        { printf("Empatou!\n"); }
         else 
        { char* vencedor = (poder_total1 > poder_total2) ? estado1 : estado2;
    printf("%s venceu!\n", vencedor); }

    return 0;
}
