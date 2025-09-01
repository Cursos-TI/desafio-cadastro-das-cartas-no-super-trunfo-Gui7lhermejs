#include <stdio.h>

int main() {
    //Informações da Carta 1

    //Variaveis

    char estado, codigo[4], cidade[30];

    int turistico;

    unsigned long int população;
    
    float area, pib;

    //Informação da Carta 2

    //Variaveis

    char estado2, codigo2[4], cidade2[30];

    int turistico2;

    unsigned long int população2;
    
    float area2, pib2;
    
    //Perguntas da Carta 1

    printf("\nDigite as informações da carta 1\n");

    //Estado
    
    printf("Qual codigo do estado?: ");
        scanf(" %c", &estado);  //Pergunta

    //Codigo

    printf("Qual o codigo?: ");
        scanf("%3s", codigo); //pergunta

    //Cidade

    printf("Qual o nome da Cidade?: ");
        scanf(" %[^\n]", cidade);  //Pergunta

    //População

    printf("Qual é a quantidade de população?: ");
        scanf("%lu", &população);  //Pergunta

    //Area

    printf("Qual a área em km?: ");
        scanf("%f", &area);  //Pergunta

    //PIB

    printf("Qual o PIB?: ");
        scanf("%f", &pib);  //Pergunta

    //Turisticos

    printf("Quantos pontos turisticos?: ");
        scanf("%d", &turistico);  //Pergunta


    //Pergunta da Carta 2

    printf("\nDigite as informações da carta 2\n");

    //Estado
    
    printf("Qual codigo do estado?: ");
        scanf(" %c", &estado2);  //Pergunta

    //Codigo

    printf("Qual o codigo?: ");
        scanf("%3s", codigo2); //pergunta

    //Cidade

    printf("Qual o nome da Cidade?: ");
        scanf(" %[^\n]", cidade2);  //Pergunta

    //População

    printf("Qual é a quantidade de população?: ");
        scanf("%lu", &população2);  //Pergunta

    //Area

    printf("Qual a área em km?: ");
        scanf("%f", &area2);  //Pergunta

    //PIB

    printf("Qual o PIB?: ");
        scanf("%f", &pib2);  //Pergunta

    //Turisticos

    printf("Quantos pontos turisticos?: ");
        scanf(" %d", &turistico2);  //Pergunta
  
    //Calcular Densidade Populacional e PIB per Capital

    float Densidade, Densidade2;

    float Capital, Capital2, CapitalMenor, CapitalMenor2;

    //Calculo Carta 1
        
        Densidade = (float) população / area;

        Capital = (pib * 1000000000.0) / (float) população;
        CapitalMenor = Capital / 1000000.0;

    //Calculo Carta 2

        Densidade2 = (float) população2 / area2;

        Capital2 = (pib2 * 1000000000.0) / (float) população2;
        CapitalMenor2 = Capital / 1000000.0;
 
    //Calculo SuperPoder

        float superpoder, superpoder2;

        superpoder = (float) população + area + pib + (float) turistico + (float) CapitalMenor;

        superpoder2 = (float) população2 + area2 + pib2 + (float) turistico2 + (float) CapitalMenor2;

    //Descrição da Carta 1

    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado);

    printf("Codigo: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %lu\n", população);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", turistico);

    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);

    printf("PIB per Capita: %.2f reais\n", Capital);

    //Descrição da Carta 2

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %lu\n", população2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", turistico2);

    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);

    printf("PIB per Capita: %.2f reais\n", Capital2);


//Comparação das Cartas

    printf("\nComparação das Cartas\n");

    printf("\nPopulação: Carta %d venceu (%d) / %lu x %lu\n", (população > população2) ? 1 : 2, (população > população2) ? 1 : 0, população, população2);

    printf("Área: Carta %d venceu (%d) / %.2f x %.2f\n", (area > area2) ? 1 : 2, (area > area2) ? 1 : 0, area, area2);

    printf("PIB: Carta %d venceu (%d) / %.2f x %.2f\n", (pib > pib2) ? 1 : 2, (pib > pib2) ? 1 : 0, pib, pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d) / %d x %d\n", (turistico > turistico2) ? 1 : 2, (turistico > turistico2) ? 1 : 0, turistico, turistico2);

    printf("Densidade Populacional: Carta %d venceu (%d) / %.2f x %.2f\n", (Densidade < Densidade2) ? 1 : 2, (Densidade < Densidade2) ? 1 : 0, Densidade, Densidade2);

    printf("PIB per Capita: Carta %d venceu (%d) / %.2f x %.2f\n", (Capital > Capital2) ? 1 : 2, (Capital > Capital2) ? 1 : 0, CapitalMenor, CapitalMenor2);

    printf("Super Poder: Carta %d venceu (%d) / %.2f x %.2f\n", (superpoder > superpoder2) ? 1 : 2, (superpoder > superpoder2) ? 1 : 0, superpoder, superpoder2);

    return 0;
}
