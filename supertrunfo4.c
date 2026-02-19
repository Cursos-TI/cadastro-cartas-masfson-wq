#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {

    // Declaração de duas cartas
    struct Carta carta1, carta2;

    // ============================
    // Cadastro da Carta 1
    // ============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    printf("\n");

    // ============================
    // Cadastro da Carta 2
    // ============================
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("\n");

    // ==========================================
    // COMPARAÇÃO (Escolhida diretamente no código)
    // Neste exemplo: População
    // ==========================================

    printf("=====================================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    // Comparação usando if e if-else
    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    }
    else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    }
    else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
