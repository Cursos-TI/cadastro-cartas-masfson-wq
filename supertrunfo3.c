#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[50], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_poder2;

    // --- CADASTRO CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Nome do Estado: "); 
    scanf(" %[^\n]", estado1); // Lê a linha inteira, incluindo espaços

    printf("Código da Carta: "); 
    scanf("%s", codigo1);

    printf("Nome da Cidade: "); 
    scanf(" %[^\n]", nome1);

    printf("População: "); 
    scanf("%lu", &populacao1);

    printf("Área (km²): "); 
    scanf("%f", &area1);

    printf("PIB: "); 
    scanf("%f", &pib1);

    printf("Pontos Turísticos: "); 
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_per_capita1 + (1.0f / densidade1);

    // --- CADASTRO CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Nome do Estado: "); 
    scanf(" %[^\n]", estado2);

    printf("Código da Carta: "); 
    scanf("%s", codigo2);

    printf("Nome da Cidade: "); 
    scanf(" %[^\n]", nome2);

    printf("População: "); 
    scanf("%lu", &populacao2);

    printf("Área (km²): "); 
    scanf("%f", &area2);

    printf("PIB: "); 
    scanf("%f", &pib2);

    printf("Pontos Turísticos: "); 
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib1 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_per_capita2 + (1.0f / densidade2);

    printf("      COMPARAÇÃO DE CARTAS      \n");
    printf("=================================\n");

    printf("Atributo: [Carta 1] vs [Carta 2] -> Vencedor\n");
    printf("---------------------------------\n");
    printf("População: %lu vs %lu -> Carta %d (%d)\n", populacao1, populacao2, (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Área: %.2f vs %.2f -> Carta %d (%d)\n", area1, area2, (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: %.2f vs %.2f -> Carta %d (%d)\n", pib1, pib2, (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turísticos: %d vs %d -> Carta %d (%d)\n", pontos1, pontos2, (pontos1 > pontos2 ? 1 : 2), (pontos1 > pontos2));
    printf("Densidade: %.2f vs %.2f -> Carta %d (%d)\n", densidade1, densidade2, (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2));
    printf("PIB per Capita: %.2f vs %.2f -> Carta %d (%d)\n", pib_per_capita1, pib_per_capita2, (pib_per_capita1 > pib_per_capita2 ? 1 : 2), (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: %.2f vs %.2f -> Carta %d (%d)\n", super_poder1, super_poder2, (super_poder1 > super_poder2 ? 1 : 2), (super_poder1 > super_poder2));

    return 0;
]