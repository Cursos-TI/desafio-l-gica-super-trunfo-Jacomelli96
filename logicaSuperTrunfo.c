#include <stdio.h>

int main() {
    char estadoA[20] = "Amazonas";
    char carta[20] = "A01";
    char cidade [20] = "Manaus";
    float populacao = 400000;
    float area = 20000000;
    float pib = 30050; "bilhoes de reais";
    int turismo = 35;
    float densidade = populacao / area;
    float pibpercapita = pib / populacao;

    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB R$: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", turismo);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pibpercapita);

printf("\n");

    char estadoB[20] = "Ceara";
    char cartab[20] = "B01";
    char cidadeb [20] = "Fortaleza";
    float populacaob = 500000;
    float areab = 30000000;
    float pibb = 40080; "bilhoes de reais";
    int turismob = 65;
    float densidadeb = populacaob / areab;
    float pibpercapitab = pibb / populacaob;

    printf("Carta: %s\n", cartab);
    printf("Estado %s\n", estadoB);
    printf("Cidade %s\n", cidadeb);
    printf("População %.2f\n", populacaob);
    printf("Área %.2f\n", areab);
    printf("PIB R$: %.2f\n", pibb);
    printf("Pontos Turisticos %d\n", turismob);
    printf("Desnsidade populacional: %.2f\n", densidadeb);
    printf("PIB per capita: %.2f\n", pibpercapitab);

    printf("\n");

    // Comparação de carta a01 contra carta b01 sendo 0 uma afirmação falsa e 1 uma afirmção verdadeira.
    
    printf("Manaus é maior que Fortaleza: %d\n", populacao > populacaob);
    printf("Área de Manaus é maior que a área de Fortaleza: %d\n", area > areab);
    printf("PIB de Manaus é maior que o PIB de Fortaleza: %d\n", pib > pibb);
    printf("Manaus tem mais pontos turisticos que Fortaleza: %d\n", turismo > turismob);
    printf("Manaus tem uma desnsidade populacional maior que Fortaleza: %d\n", densidade < densidadeb);
    printf("Manaus tem um PIB per capita maior que Fortaleza: %d\n", pibpercapita > pibpercapitab);

    printf("\n");

    printf("Comparação de cartas (atributo População): \n");
    printf("Carta: %s", carta);
    printf("- Manaus(AM): %.2f\n", populacao);

    printf("Carta: %s", cartab); 
    printf("- Fortaleza (CE): %.2f\n", populacaob);
    // Utilização de  estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacao > populacaob){
        //codigo a ser executado se a condição for verdadeira.
        printf("Carta A01 é a vencedora. \n");
    }else{
        //codigo a ser executado se a condição for falsa.
        printf("Carta B01 é a vencedora. \n");
    }
    {
        
    }
    

    return 0;
}