#include <stdio.h>

int main() {
    //Informações da Carta 1

    //Variaveis

    char estado, codigo[4], cidade[30];

    int turistico;

    unsigned long int populacao;
    
    float area, pib;

    //Informação da Carta 2

    //Variaveis

    char estado2, codigo2[4], cidade2[30];

    int turistico2;

    unsigned long int populacao2;
    
    float area2, pib2;
    
    //Perguntas da Carta 1

    printf("\n=====Digite as informações da carta 1=====\n");

    //Estado
    
    printf("Qual codigo do estado?: ");
        scanf(" %c", &estado);  //Pergunta

    //Codigo

    printf("Qual o codigo?: ");
        scanf("%3s", codigo); //pergunta

    //Cidade

    printf("Qual o nome da Cidade?: ");
        scanf(" %29[^\n]", cidade);  //Pergunta

    //População

    printf("Qual é a quantidade de população?: ");
        scanf("%lu", &populacao);  //Pergunta

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

    printf("\n=====Digite as informações da carta 2=====\n");

    //Estado
    
    printf("Qual codigo do estado?: ");
        scanf(" %c", &estado2);  //Pergunta

    //Codigo

    printf("Qual o codigo?: ");
        scanf("%3s", codigo2); //pergunta

    //Cidade

    printf("Qual o nome da Cidade?: ");
        scanf(" %29[^\n]", cidade2);  //Pergunta

    //População

    printf("Qual é a quantidade de população?: ");
        scanf("%lu", &populacao2);  //Pergunta

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
        
        Densidade = (float) populacao / area;

        Capital = (pib * 1000000000.0) / (float) populacao;
        CapitalMenor = Capital / 1000000.0;

    //Calculo Carta 2

        Densidade2 = (float) populacao2 / area2;

        Capital2 = (pib2 * 1000000000.0) / (float) populacao2;
        CapitalMenor2 = Capital2 / 1000000.0;
 
    //Calculo SuperPoder

        float superpoder, superpoder2;

        superpoder = (float) populacao + area + pib + (float) turistico + (float) CapitalMenor;

        superpoder2 = (float) populacao2 + area2 + pib2 + (float) turistico2 + (float) CapitalMenor2;

    //Descrição da Carta 1

    printf("\n====Carta 1====\n");

    printf("Estado: %c\n", estado);

    printf("Codigo: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %lu\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", turistico);

    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);

    printf("PIB per Capita: %.2f Reais\n", CapitalMenor);

    //Descrição da Carta 2

    printf("\n====Carta 2====\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", turistico2);

    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);

    printf("PIB per Capita: %.2f Reais\n", CapitalMenor2);

//Comparação das Cartas (Versão Nova)

    //Menu
    
    int opção; //Variavel opção

    printf("\n=====Comparação de Cartas=====\n");
    printf("1. Atributo: População\n");
    printf("2. Atributo: Área\n");
    printf("3. Atributo: PIB\n");
    printf("4. Atributo: Pontos Turísticos\n");
    printf("5. Atributo: Densidade Populacional\n");
    printf("6. Atributo: SuperPoder\n");
    printf("Qual opção você deseja?: \n");
        scanf("%d", &opção);

    //Uso de Switch

    switch (opção) {

        case 1:
        printf("====População====\n");
        
        if (populacao > populacao2) {
        printf("Carta 1 - %s: %lu\n", cidade, populacao);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        printf("Resultado - Carta 1 (%s) venceu!\n", cidade);
        } 

        else if (populacao < populacao2) {
        printf("Carta 1 - %s: %lu\n", cidade, populacao);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        printf("Resultado - Carta 2 (%s) venceu!\n", cidade2);
        }

        else {
        printf("Carta 1 - %s: %lu\n", cidade, populacao);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        printf("Resultado - Empate!!\n");
        }
        break;

        case 2:
        printf("====Área====\n");
        
        if (area > area2) {
        printf("Carta 1 - %s: %.2f\n", cidade, area);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);
        printf("Resultado - Carta 1 (%s) venceu!\n", cidade);
        } 

        else if (area < area2) {
        printf("Carta 1 - %s: %.2f\n", cidade, area);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);
        printf("Resultado - Carta 2 (%s) venceu!\n", cidade2);
        }

        else {
        printf("Carta 1 - %s: %.2f\n", cidade, area);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);
        printf("Resultado - Empate!!\n");
        }
        break;

        case 3:
        printf("====PIB====\n");

        if (pib > pib2) {
        printf("Carta 1 - %s: %.2f\n", cidade, pib);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        printf("Resultado - Carta 1 (%s) venceu!\n", cidade);
        } 

        else if (pib < pib2) {
        printf("Carta 1 - %s: %.2f\n", cidade, pib);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        printf("Resultado - Carta 2 (%s) venceu!\n", cidade2);
        }

        else {
        printf("Carta 1 - %s: %.2f\n", cidade, pib);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        printf("Resultado - Empate!!\n");
        }
        break;

        case 4:
        printf("====Turistico====\n");

        if (turistico > turistico2) {
        printf("Carta 1 - %s: %d\n", cidade, turistico);
        printf("Carta 2 - %s: %d\n", cidade2, turistico2);
        printf("Resultado - Carta 1 (%s) venceu!\n", cidade);
        } 

        else if (turistico < turistico2) {
        printf("Carta 1 - %s: %d\n", cidade, turistico);
        printf("Carta 2 - %s: %d\n", cidade2, turistico2);
        printf("Resultado - Carta 2 (%s) venceu!\n", cidade2);
        }

        else {
        printf("Carta 1 - %s: %d\n", cidade, turistico);
        printf("Carta 2 - %s: %d\n", cidade2, turistico2);
        printf("Resultado - Empate!!\n");
        }
        break;

        case 5:
        printf("====Densidade====\n");

        if (Densidade < Densidade2) {
        printf("Carta 1 - %s: %.2f\n", cidade, Densidade);
        printf("Carta 2 - %s: %.2f\n", cidade2, Densidade2);
        printf("Resultado - Carta 1 (%s) venceu!\n", cidade);
        } 

        else if (Densidade > Densidade2) {
        printf("Carta 1 - %s: %.2f\n", cidade, Densidade);
        printf("Carta 2 - %s: %.2f\n", cidade2, Densidade2);
        printf("Resultado - Carta 2 (%s) venceu!\n", cidade2);
        }

        else {
        printf("Carta 1 - %s: %.2f\n", cidade, Densidade);
        printf("Carta 2 - %s: %.2f\n", cidade2, Densidade2);
        printf("Resultado - Empate!!\n");
        }
        break;

        case 6:
        printf("====SuperPoder====\n");

        if (superpoder > superpoder2) {
        printf("Carta 1 - %s: %.2f\n", cidade, superpoder);
        printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        printf("Resultado - Carta 1 (%s) venceu!\n", cidade);
        } 

        else if (superpoder < superpoder2) {
        printf("Carta 1 - %s: %.2f\n", cidade, superpoder);
        printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        printf("Resultado - Carta 2 (%s) venceu!\n", cidade2);
        }

        else {
        printf("Carta 1 - %s: %.2f\n", cidade, superpoder);
        printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        printf("Resultado - Empate!!\n");
        }
        break;

        default:
        printf("Opção Invalida!");

    }

    return 0;
}
