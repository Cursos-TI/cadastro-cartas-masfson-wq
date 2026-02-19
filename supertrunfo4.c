#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado[50], codigo[10], nomeCidade[50];
    int populacao, pontosTuristicos;
    double area, pib, densidadePulacional, pibPercapita;

};

int main() {

    // Declaração de duas cartas
    struct Carta carta1, carta2;

    // ============================
    // Cadastro da Carta 1
    // ============================
    printf("=== Cadastro da Carta 1 ===\n\n");

    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%lf", &carta1.area);  //1f para double

    printf("PIB (em bilhoes): ");
    scanf("%1f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculo automático
    carta1.densidadePulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPercapita = (carta1.pib * 1000000000) / carta1.populacao; // Convertendo bilhões para valor real

    // Exibição dos Dados (A elegância visual)
    printf("\n--- Dados da Carta: %s ---\n", carta1.nomeCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPercapita);

    printf("\n\n");

    

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
