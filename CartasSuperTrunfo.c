#include <stdio.h>

int main(){


    char estado1[20], codigo1[20], nome_do_municipio1[30];
    int populacao1, numero_pontos_turisticos1;
    float area1, PIB1;

    char estado2[20], codigo2[20], nome_do_municipio2[30];
    int populacao2, numero_pontos_turisticos2;
    float area2, PIB2;

    printf("\n--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o nome do Estado: ");
    fgets(estado1,20, stdin);
    printf("Estado cadastrado: %s\n\n", estado1);

    printf("Digite o codigo do Estado: ");
    scanf("%s", codigo1);
    printf("Codigo cadastrado: %s\n\n", codigo1);

    printf("Digite o nome do município: ");
    scanf("%s", nome_do_municipio1);
    printf("Município cadastrado: %s\n\n", nome_do_municipio1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("População cadastrada: %d\n\n", populacao1);

    printf("Digite a area (km²)");
    scanf("%f", &area1);
    printf("Área cadastrada: %.2f\n\n", area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("PIB cadastrado: %.2f\n\n", PIB1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);
    printf("Pontos turísticos cadastrados: %d\n\n", numero_pontos_turisticos1);

    // --- IMPORTANTE: Limpando o "Enter" antes da Carta 2 ---
    getchar();

    
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o nome do Estado: ");
    fgets(estado2,20, stdin);
    printf("Estado cadastrado: %s\n\n", estado2);

    printf("Digite o codigo do Estado: ");
    scanf("%s", codigo2);
    printf("Codigo cadastrado: %s\n\n", codigo2);

    printf("Digite o nome do município: ");
    scanf("%s", nome_do_municipio2);
    printf("Município cadastrado: %s\n\n", nome_do_municipio2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("População cadastrada: %d\n\n", populacao2);

    printf("Digite a area (km²)");
    scanf("%f", &area2);
    printf("Área cadastrada: %.2f\n\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("PIB cadastrado: %.2f\n\n", PIB2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    printf("Pontos turísticos cadastrados cadastrados: %d\n\n", numero_pontos_turisticos2);



    


    return 0;
}