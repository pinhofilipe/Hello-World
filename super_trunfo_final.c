#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[15];
    char cidade[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

} Carta;

int main(){
    Carta carta1, carta2; 

    printf("-- Cadastro da Carta 1 --\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);

    printf("Código: ");
    scanf(" %[^\n]", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf(" %ld", &carta1.populacao);

    printf("Área (km²): ");
    scanf(" %f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf(" %lf", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta1.pontos_turisticos);



    printf("-- Cadastro da Carta 2 --\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);

    printf("Código: ");
    scanf(" %[^\n]", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf(" %ld", &carta2.populacao);

    printf("Área (km²): ");
    scanf(" %f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf(" %lf", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta2.pontos_turisticos);

    // Cálculos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta2.densidade_populacional = carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Super Poder 
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pib_per_capita + (1/carta1.densidade_populacional);
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pib_per_capita + (1/carta1.densidade_populacional);

    // Comparações 

    printf("\n --- Comparação de Cartas ---\n");

    printf("População: Carta %d venceu !\n", carta1.populacao > carta2.populacao ? 1 : 2);
    printf("Área: Carta %d venceu !\n", carta1.area > carta2.area ? 1 : 2);
    printf("PIB: Carta %d venceu !\n", carta1.pib > carta2.pib ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu !\n", carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu !\n", carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu !\n", carta1.densidade_populacional < carta2.densidade_populacional ? 1 : 2);
    printf("Super Poder: Carta %d venceu !\n", carta1.super_poder > carta2.super_poder ? 1 : 2);

    return 0;
}