#include <stdio.h>

int main() {
    //Informações da Carta 1

    //Variaveis

    char estado, codigo[4], cidade[30];

    int população, turistico;
    
    float area, pib;

    //Informação da Carta 2

    //Variaveis

    char estado2, codigo2[4], cidade2[30];

    int população2, turistico2;
    
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
        scanf("%d", &população);  //Pergunta

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
        scanf("%d", &população2);  //Pergunta

    //Area

    printf("Qual a área em km?: ");
        scanf("%f", &area2);  //Pergunta

    //PIB

    printf("Qual o PIB?: ");
        scanf("%f", &pib2);  //Pergunta

    //Turisticos

    printf("Quantos pontos turisticos?: ");
        scanf(" %d", &turistico2);  //Pergunta
  
    //Descrição da Carta 1

    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado);

    printf("Codigo: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d\n", população);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", turistico);

    //Descrição da Carta 2

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d\n", população2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", turistico2);

    return 0;
}
