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

    return 0;
]