#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    char estado;
    char codigoDaCarta, nomeDaCidade[ 50 ];
    int populacao, numeroDePontosTuristicos;
    float area, pib;

    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf("%s", &nomeDaCidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

     printf("Pib: ");
    scanf("%f", &pib);

     printf("Número de pontos turísticos: ");
    scanf("%f " , &numeroDePontosTuristicos  );
    


     printf("Carta 2\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf("%s", &nomeDaCidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

     printf("Pib: ");
    scanf("%f", &pib);

     printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos);

return 0;
} 
