#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível Mestre, - O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
// Cada carta terá um "Super Poder", que é a soma de todas as propriedades.

int main() {
  
    char estado;
    char codigoDaCarta [50];
    char nomeDaCidade [50];
    float populacao1;
    float populacao2;
    int numeroDePontosTuristicos1;
    int numeroDePontosTuristicos2;
    float area1, pib1;
    float area2, pib2;
    float densidadePopulacional1;
    float densidadePopulacional2;
    float pibPerCapita1;
    float pibPerCapita2;
    float superPoderCarta1;
    float superPoderCarta2;
 

    printf("Carta 1\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    densidadePopulacional1 = populacao1  /area1;

    printf("Pib: ");
    scanf("%f", &pib1);

    pibPerCapita1 = pib1* 1000000 / populacao1;

    printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos1);

    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    
    printf("PIB per capita: %f\n", pibPerCapita1);

    superPoderCarta1 = area1 + pib1 + pibPerCapita1 + 1/densidadePopulacional1 + numeroDePontosTuristicos1;
    
    double ResultadosuperPoderCarta1 = superPoderCarta1;
    
    long long int valor1 = (long long int) superPoderCarta1;

    printf("Super Poder: %lld.%03lld.%03lld.%03lld\n",
        valor1 / 1000000000,
        (valor1 / 1000000) % 1000,
        (valor1 / 1000) % 1000,
        valor1 % 1000
    );

    printf("\n");

    
    
    printf("Carta 2\n");

    printf("Estado: ");
    scanf("%s", &estado);

    printf("código: ");
    scanf("%s", &codigoDaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    densidadePopulacional2 = populacao2  /area2;

    printf("Pib: ");
    scanf("%f", &pib2);

    pibPerCapita2 = (pib2 * 1000000) / populacao2;

    printf("Número de pontos turísticos: ");
    scanf("%f", &numeroDePontosTuristicos2);

    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    
    printf("PIB per capita: %f\n", pibPerCapita2);

    superPoderCarta2 = area2 + pib2 + pibPerCapita2 + 1/densidadePopulacional2 + numeroDePontosTuristicos2;

    double ResultadosuperPoderCarta2 = superPoderCarta2;
    
    long long int valor2 = (long long int) superPoderCarta2;

    printf("Super Poder: %lld.%03lld.%03lld.%03lld\n",
        valor2 / 1000000000,
        (valor2 / 1000000) % 1000,
        (valor2 / 1000) % 1000,
        valor2 % 1000
    );

    printf("\n");


    printf("Comparação de cartas\n");

    float populacaoCarta1Ecarta2; 
    populacaoCarta1Ecarta2 = populacao1 > populacao2;
    printf("População: carta 1 venceu: %f\n",populacaoCarta1Ecarta2);

    float AreaCarta1Ecarta2; 
    AreaCarta1Ecarta2 = area1 > area2;
    printf("População: area 1 venceu: %f\n",AreaCarta1Ecarta2);

    float pibCarta1Ecarta2; 
    AreaCarta1Ecarta2 = pib1 > pib2;
    printf("Pib: pib 1 venceu: %f\n",AreaCarta1Ecarta2);

    float pontosTuristicosCarta1Ecarta2; 
    pontosTuristicosCarta1Ecarta2 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2;
    printf("Pontos Turísticos: Carta 1 venceu: %f\n",pontosTuristicosCarta1Ecarta2);

    float densidadePopulacionalsCarta1Ecarta2; 
    densidadePopulacionalsCarta1Ecarta2 = densidadePopulacional1 < densidadePopulacional2;
    printf("Densidade Populacional: Carta 2 venceu %f\n",densidadePopulacionalsCarta1Ecarta2);

    float pibPerCapitaCarta1Ecarta2; 
    pibPerCapitaCarta1Ecarta2 = pibPerCapita1 > pibCarta1Ecarta2;
    printf("PIB per Capita: Carta 1 venceu: %f\n",pibPerCapitaCarta1Ecarta2);

    float superPoderCarta1Ecarta2; 
    superPoderCarta1Ecarta2 = superPoderCarta1 > superPoderCarta2;
    printf("Super Poder: Carta 1 venceu: %f\n",pibPerCapitaCarta1Ecarta2);






return 0;
} 