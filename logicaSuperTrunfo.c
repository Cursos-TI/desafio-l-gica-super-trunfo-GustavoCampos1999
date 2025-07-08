#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main() {
    //Carta 1
    char estado1[4];
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
    char estado2[4];
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

    //Comparação das cartas
    printf("Comparação de Cartas:\n");

    printf("População:\n");
    printf("Carta 1: %lu\n", populacao1);
    printf("Carta 2: %lu\n", populacao2);
    printf("Resultado: ");
    if (populacao1 > populacao2) {printf ("Carta 1 venceu!\n");}
    else if (populacao2 > populacao1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    printf("Área:\n");
    printf("Carta 1: %.2f\n", area1);
    printf("Carta 2: %.2f\n", area2);
    printf("Resultado: ");
    if (area1 > area2) {printf ("Carta 1 venceu!\n");}
    else if (area2 > area1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    printf("PIB:\n");
    printf("Carta 1: %.2f\n", pib1);
    printf("Carta 2: %.2f\n", pib2);
    printf("Resultado: ");
    if (pib1 > pib2) {printf ("Carta 1 venceu!\n");}
    else if (pib2 > pib1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    printf("Pontos Turísticos:\n");
    printf("Carta 1: %d\n", pontost1);
    printf("Carta 2: %d\n", pontost2);
    printf("Resultado: ");
    if (pontost1 > pontost2) {printf ("Carta 1 venceu!\n");}
    else if (pontost2 > pontost1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    printf("Densidade Populacional:\n");
    printf("Carta 1: %.2f\n", densidade1);
    printf("Carta 2: %.2f\n", densidade2);
    printf("Resultado: ");
    if (densidade_inversa1 > densidade_inversa2) {printf ("Carta 1 venceu!\n");}
    else if (densidade_inversa2 > densidade_inversa1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    printf("PIB per Capita:\n");
    printf("Carta 1: %.2f\n", perCapita1);
    printf("Carta 2: %.2f\n", perCapita2);
    printf("Resultado: ");
    if (perCapita1 > perCapita2) {printf ("Carta 1 venceu!\n");}
    else if (perCapita2 > perCapita1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    printf("Super Poder:\n");
    printf("Carta 1: %.2f\n", poder1);
    printf("Carta 2: %.2f\n", poder2);
    printf("Resultado: ");
    if (poder1 > poder2) {printf ("Carta 1 venceu!\n");}
    else if (poder2 > poder1) {printf ("Carta 2 venceu!\n");}
    else {printf ("Empatou!\n");}

    return 0;
}
