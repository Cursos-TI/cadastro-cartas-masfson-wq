#include <stdio.h>
#include <string.h>
#include <math.h>

struct Carta {
    char estado[50], codigo[10], nomeCidade[50];
    int populacao, pontosTuristicos;
    double area, pib;
    double densidadePopulacional, pibPercapita;
};

int empateDouble(double a, double b) {
    return fabs(a - b) < 0.0001;
}

int main() {
    struct Carta carta1, carta2;
    int opcao;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", carta1.estado);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%lf", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%lf", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = (carta1.area > 0) ? ((double)carta1.populacao / carta1.area) : 0;
    carta1.pibPercapita = (carta1.populacao > 0) ? ((carta1.pib * 1e9) / (double)carta1.populacao) : 0;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", carta2.estado);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%lf", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%lf", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = (carta2.area > 0) ? ((double)carta2.populacao / carta2.area) : 0;
    carta2.pibPercapita = (carta2.populacao > 0) ? ((carta2.pib * 1e9) / (double)carta2.populacao) : 0;

    printf("\nESCOLHA O ATRIBUTO:\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade\n6. PIB per capita\nOpcao: ");
    
    if (scanf("%d", &opcao) != 1) return 1;

    switch (opcao) {
        case 1:
            if (carta1.populacao > carta2.populacao) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;
        case 2:
            if (empateDouble(carta1.area, carta2.area)) printf("Empate!\n");
            else if (carta1.area > carta2.area) printf("Vencedor: %s\n", carta1.nomeCidade);
            else printf("Vencedor: %s\n", carta2.nomeCidade);
            break;
        case 3:
            if (empateDouble(carta1.pib, carta2.pib)) printf("Empate!\n");
            else if (carta1.pib > carta2.pib) printf("Vencedor: %s\n", carta1.nomeCidade);
            else printf("Vencedor: %s\n", carta2.nomeCidade);
            break;
        case 4:
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;
        case 5:
            if (empateDouble(carta1.densidadePopulacional, carta2.densidadePopulacional)) printf("Empate!\n");
            else if (carta1.densidadePopulacional < carta2.densidadePopulacional) printf("Vencedor: %s\n", carta1.nomeCidade);
            else printf("Vencedor: %s\n", carta2.nomeCidade);
            break;
        case 6:
            if (empateDouble(carta1.pibPercapita, carta2.pibPercapita)) printf("Empate!\n");
            else if (carta1.pibPercapita > carta2.pibPercapita) printf("Vencedor: %s\n", carta1.nomeCidade);
            else printf("Vencedor: %s\n", carta2.nomeCidade);
            break;
        default: printf("Opcao invalida!\n");
    }
    return 0;
}