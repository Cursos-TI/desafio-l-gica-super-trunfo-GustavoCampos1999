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
    float poder1 = populacao1 + area1 + pib1 + pontost1 + perCapita1 + densidade_inversa1;

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
    float poder2 = populacao2 + area2 + pib2 + pontost2 + perCapita2 + densidade_inversa2;
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
    printf("Super Poder: %.2f pontos\n", poder1);

    printf("==========================\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", perCapita2);
    printf("Super Poder: %.2f pontos\n", poder2);
    
    printf("==========================\n");

    int opcao;
    printf("Qual atributo quer comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao);
    switch (opcao) {
            case 1:
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado a população\n");
        printf("%s: %lu habitantes\n", estado1, populacao1);
        printf("%s: %lu habitantes\n", estado2, populacao2);
        printf("Resultado: ");
        if (populacao1 > populacao2) {printf ("%s venceu!\n", estado1);}
        else if (populacao2 > populacao1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;

            case 2:
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado a área\n");
        printf("%s: %.2f km²\n", estado1, area1);
        printf("%s: %.2f km²\n", estado2, area2);
        printf("Resultado: ");
        if (area1 > area2) {printf ("%s venceu!\n", estado1);}
        else if (area2 > area1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;

            case 3:
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado o PIB\n");
        printf("%s: %.2f bilhões de reais\n", estado1, pib1);
        printf("%s: %.2f bilhões de reais\n", estado2, pib2);
        printf("Resultado: ");
        if (pib1 > pib2) {printf ("%s venceu!\n", estado1);}
        else if (pib2 > pib1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;

            case 4:
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado os pontos turísticos\n");
        printf("%s: %d Pontos Turísticos\n", estado1, pontost1);
        printf("%s: %d Pontos Turísticos\n", estado2, pontost2);
        printf("Resultado: ");
        if (pontost1 > pontost2) {printf ("%s venceu!\n", estado1);}
        else if (pontost2 > pontost1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;

            case 5:
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado a densidade populacional\n");
        printf("%s: %.2f hab/km²\n", estado1, densidade1);
        printf("%s: %.2f hab/km²\n", estado2, densidade2);
        printf("Resultado: ");
        if (densidade_inversa1 > densidade_inversa2) {printf ("%s venceu!\n", estado1);}
        else if (densidade_inversa2 > densidade_inversa1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;

            case 6:
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado o PIB per capita\n");
        printf("%s: %.2f reais\n", estado1, perCapita1);
        printf("%s: %.2f reais\n", estado2, perCapita2);
        printf("Resultado: ");
        if (perCapita1 > perCapita2) {printf ("%s venceu!\n", estado1);}
        else if (perCapita2 > perCapita1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;

            case 7  :
        printf("==========================\n");
        printf("%s vs %s\n", estado1, estado2);
        printf("Será comparado o super poder\n");
        printf("%s: %.2f pontos de poder\n", estado1, poder1);
        printf("%s: %.2f pontos de poder\n", estado2, poder2);
        printf("Resultado: ");
        if (poder1 > poder2) {printf ("%s venceu!\n", estado1);}
        else if (poder2 > poder1) {printf ("%s venceu!\n", estado2);}
        else {printf ("Empatou!\n");}
        break;
        default:
      printf("Opção inválida. Tente novamente.\n");
    }
    return 0;
}
