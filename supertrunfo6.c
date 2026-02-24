#include <stdio.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h> 

// Estrutura atualizada com nomeMunicipio
struct Carta {
    char estado[50], nomeMunicipio[50]; // Nome alterado aqui
    int populacao, pontosTuristicos;
    double area, pib;
    double densidadePopulacional, pibPercapita;
};

// Função para comparar decimais com precisão
int empateDouble(double a, double b) {
    double epsilon = 0.000001; // margem de erro
    return fabs(a - b) < epsilon;
}

int main() {
    struct Carta carta1, carta2;
    int opcao;

    // ==========================================
    // CADASTRO DA CARTA 1
    // ==========================================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", carta1.estado);

    printf("Nome do Municipio: "); // Texto atualizado
    scanf(" %49[^\n]", carta1.nomeMunicipio); // Variável atualizada

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%lf", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%lf", &carta1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = (carta1.area > 0) ? ((double)carta1.populacao / carta1.area) : 0;
    carta1.pibPercapita = (carta1.populacao > 0) ? ((carta1.pib * 1e9) / (double)carta1.populacao) : 0;

    // ==========================================
    // CADASTRO DA CARTA 2
    // ==========================================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", carta2.estado);

    printf("Nome do Municipio: "); // Texto atualizado
    scanf(" %49[^\n]", carta2.nomeMunicipio); // Variável atualizada

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%lf", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%lf", &carta2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = (carta2.area > 0) ? ((double)carta2.populacao / carta2.area) : 0;
    carta2.pibPercapita = (carta2.populacao > 0) ? ((carta2.pib * 1e9) / (double)carta2.populacao) : 0;


    // ==========================================
    // LOOP DO JOGO
    // ==========================================
    do {
        printf("\n\nPressione ENTER para continuar...");
        getchar(); getchar(); 
        system("cls"); 

        printf("=========================================\n");
        printf("    SUPER TRUNFO: %s VS %s\n", carta1.nomeMunicipio, carta2.nomeMunicipio);
        printf("=========================================\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Demografica\n");
        printf("6. PIB per capita\n");
        printf("0. Sair\n");
        printf("-----------------------------------------\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("\n--- RESULTADO ---\n");

        switch (opcao) {

            case 1: // POPULAÇÃO
                printf("Atributo: Populacao\n");
                printf("%s: %d | %s: %d\n", carta1.nomeMunicipio, carta1.populacao, carta2.nomeMunicipio, carta2.populacao);

                if (carta1.populacao > carta2.populacao) printf("VENCEDOR: %s\n", carta1.nomeMunicipio);
                else if (carta2.populacao > carta1.populacao) printf("VENCEDOR: %s\n", carta2.nomeMunicipio);
                else printf("EMPATE!\n");
                break;

            case 2: // ÁREA
                printf("Atributo: Area\n");
                printf("%s: %.2f | %s: %.2f\n", carta1.nomeMunicipio, carta1.area, carta2.nomeMunicipio, carta2.area);

                if (empateDouble(carta1.area, carta2.area)) printf("EMPATE!\n");
                else if (carta1.area > carta2.area) printf("VENCEDOR: %s\n", carta1.nomeMunicipio);
                else printf("VENCEDOR: %s\n", carta2.nomeMunicipio);
                break;

            case 3: // PIB
                printf("Atributo: PIB\n");
                printf("%s: R$ %.2f bi | %s: R$ %.2f bi\n", carta1.nomeMunicipio, carta1.pib, carta2.nomeMunicipio, carta2.pib);

                if (empateDouble(carta1.pib, carta2.pib)) printf("EMPATE!\n");
                else if (carta1.pib > carta2.pib) printf("VENCEDOR: %s\n", carta1.nomeMunicipio);
                else printf("VENCEDOR: %s\n", carta2.nomeMunicipio);
                break;

            case 4: // PONTOS TURÍSTICOS
                printf("Atributo: Pontos Turisticos\n");
                printf("%s: %d | %s: %d\n", carta1.nomeMunicipio, carta1.pontosTuristicos, carta2.nomeMunicipio, carta2.pontosTuristicos);

                if (carta1.pontosTuristicos > carta2.pontosTuristicos) printf("VENCEDOR: %s\n", carta1.nomeMunicipio);
                else if (carta2.pontosTuristicos > carta1.pontosTuristicos) printf("VENCEDOR: %s\n", carta2.nomeMunicipio);
                else printf("EMPATE!\n");
                break;

            case 5: // DENSIDADE
                printf("Atributo: Densidade Demografica\n");
                printf("%s: %.2f | %s: %.2f\n", carta1.nomeMunicipio, carta1.densidadePopulacional, carta2.nomeMunicipio, carta2.densidadePopulacional);

                if (empateDouble(carta1.densidadePopulacional, carta2.densidadePopulacional)) printf("EMPATE!\n");
                else if (carta1.densidadePopulacional < carta2.densidadePopulacional) printf("VENCEDOR: %s\n", carta1.nomeMunicipio);
                else printf("VENCEDOR: %s\n", carta2.nomeMunicipio);
                break;

            case 6: // PIB PER CAPITA
                printf("Atributo: PIB per capita\n");
                printf("%s: R$ %.2f | %s: R$ %.2f\n", carta1.nomeMunicipio, carta1.pibPercapita, carta2.nomeMunicipio, carta2.pibPercapita);

                if (empateDouble(carta1.pibPercapita, carta2.pibPercapita)) printf("EMPATE!\n");
                else if (carta1.pibPercapita > carta2.pibPercapita) printf("VENCEDOR: %s\n", carta1.nomeMunicipio);
                else printf("VENCEDOR: %s\n", carta2.nomeMunicipio);
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}