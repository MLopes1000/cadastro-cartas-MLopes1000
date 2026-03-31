#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.
int main() {
  
    char estado;
    char codigoDaCarta [50];
    char nomeDaCidade [50];
    float populacao;
    int numeroDePontosTuristicos;
    float area, pib;
    float densidadePopulacional;
    float pibPerCapita;

    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    densidadePopulacional = populacao  /area;

     printf("Pib: ");
    scanf("%f", &pib);

    pibPerCapita = (pib * 1000000) / populacao;

     printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos);

    printf("Densidade populacional: %.2f\n", densidadePopulacional);
    
    printf("PIB per capita: %f\n", pibPerCapita);

    printf("\n");
    
     printf("Carta 2\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    densidadePopulacional = populacao  /area;

     printf("Pib: ");
    scanf("%f", &pib);

    pibPerCapita = (pib * 1000000) / populacao;

     printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos);

    printf("Densidade populacional: %.2f\n", densidadePopulacional);
    
    printf("PIB per capita: %f\n", pibPerCapita);

    printf("\n");

return 0;
} 
