#include <stdio.h>
#include <string.h>
#include <math.h> // para fabs()

// Estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado[50], codigo[10], nomeCidade[50];
    int populacao, pontosTuristicos;
    double area, pib;
    double densidadePopulacional, pibPercapita;
};

// Função para verificar empate em valores double
int empateDouble(double a, double b) {
    return fabs(a - b) < 0.0001;
}

int main() {
    struct Carta carta1, carta2;
    int opcao;

    // ============================
    // Cadastro da Carta 1
    // ============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %49[^\n]", carta1.estado);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta1.nomeCidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%lf", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%lf", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos automáticos Carta 1
    carta1.densidadePopulacional = (double)carta1.populacao / carta1.area;
    carta1.pibPercapita = (carta1.pib * 1e9) / (double)carta1.populacao;

    // ============================
    // Cadastro da Carta 2
    // ============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %49[^\n]", carta2.estado);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta2.nomeCidade);

    printf("Populacao: ");

    
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%lf", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%lf", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos automáticos Carta 2
    carta2.densidadePopulacional = (double)carta2.populacao / carta2.area;
    carta2.pibPercapita = (carta2.pib * 1e9) / (double)carta2.populacao;

    // ============================
    // MENU INTERATIVO
    // ============================
    printf("\n-----------------------------------------\n");
    printf("ESCOLHA O ATRIBUTO PARA COMPARACAO:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per capita\n");
    printf("Opcao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida! Digite um numero.\n");
        return 1;
    }

    printf("-----------------------------------------\n");

    // O Switch decide qual bloco de código executar baseado na 'opcao'
    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d | %s: %d\n", carta1.nomeCidade, carta1.populacao, carta2.nomeCidade, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", carta1.nomeCidade, carta1.area, carta2.nomeCidade, carta2.area);

            if (empateDouble(carta1.area, carta2.area)) {
                printf("Empate!\n");
            } else if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bi | %s: R$ %.2f bi\n", carta1.nomeCidade, carta1.pib, carta2.nomeCidade, carta2.pib);

            if (empateDouble(carta1.pib, carta2.pib)) {
                printf("Empate!\n");
            } else if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d | %s: %d\n", carta1.nomeCidade, carta1.pontosTuristicos, carta2.nomeCidade, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade (MENOR VENCE)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional, carta2.nomeCidade, carta2.densidadePopulacional);

            if (empateDouble(carta1.densidadePopulacional, carta2.densidadePopulacional)) {
                printf("Empate!\n");
            } else if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Vencedor: %s (Menor Densidade)\n", carta1.nomeCidade);
            } else {
                printf("Vencedor: %s (Menor Densidade)\n", carta2.nomeCidade);
            }
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("%s: R$ %.2f | %s: R$ %.2f\n", carta1.nomeCidade, carta1.pibPercapita, carta2.nomeCidade, carta2.pibPercapita);

            if (empateDouble(carta1.pibPercapita, carta2.pibPercapita)) {
                printf("Empate!\n");
            } else if (carta1.pibPercapita > carta2.pibPercapita) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 6.\n");
            break;
    }

    printf("-----------------------------------------\n");

    return 0;
}