#include <stdio.h>
#include <string.h>

int main(){
    char estado1[20], codigo1[20], nome_do_municipio1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_Per_Capita1;

    char estado2[20], codigo2[20], nome_do_municipio2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_Per_Capita2;

    //--- CADASTRO E EXIBIÇÃO DA CARTA---1
    printf("---Cadastro da carta1---\n");

    printf("Digite o nome do Estado: ");
    fgets(estado1, 20 , stdin);
    estado1[strcspn(estado1, "\n")] = 0;
    printf("O estado cadastrado: %s\n\n", estado1);

    printf("O codigo da carta: ");
    scanf("%s", codigo1);
    printf("Codigo: %s\n\n", codigo1);

    printf("Digite o nome do município: ");
    scanf(" %[^\n]", nome_do_municipio1);
    printf("Município: %s\n\n", nome_do_municipio1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1); 
    printf("População: %lu\n\n", populacao1);

    printf("Digite a area");
    scanf("%f", &area1);
    printf("Área: %.2f km²\n\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("PIB: %.2f bilhões de reais\n\n", pib1);

    printf("Digite os pontos turisticos");
    scanf("%d", &pontos_turisticos1);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos1);
    
    densidade1= (float)populacao1 / area1;
    pib_Per_Capita1 = (pib1 * 1000000000.0) / (float)populacao1;

    printf("Densidade populacional: %.2f hab/km²\n\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pib_Per_Capita1);

    //CADASTRO E EXIBIÇÃO DA CARTA 2    
    printf("---Cadastro da carta 2---\n");

    getchar();

    printf("Digite o nome do Estado: ");
    fgets(estado2, 20 , stdin);
    estado2[strcspn(estado2, "\n")] = 0;
    printf("O estado cadastrado: %s\n\n", estado2);
 
    printf("O codigo da carta: ");
    scanf("%s", codigo2);
    printf("Codigo: %s\n\n", codigo2);

    printf("Digite o nome do município: ");
    scanf(" %[^\n]", nome_do_municipio2);
    printf("Município: %s\n\n", nome_do_municipio2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2); 
    printf("População: %lu\n\n", populacao2);
    
    printf("Digite a area");
    scanf("%f", &area2);
    printf("Área: %.2f km²\n\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("PIB: %.2f bilhões de reais\n\n", pib2);

    printf("Digite os pontos turísticos");
    scanf("%d", &pontos_turisticos2);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos2);

    densidade2= (float)populacao2 / area2;
    pib_Per_Capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    printf("Densidade populacional: %.2f hab/km²", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", pib_Per_Capita2);   



return 0;

}