#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[15];
    char cidade[50];
    long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
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

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %ld\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2lf bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %ld\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2lf bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);


    return 0;
}