#include <stdio.h> //Biblioteca padrão

int main(){ //Função principal
    //Declaração das Variáveis
    char estado1, estado2; 
    int codigo1, codigo2;
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turs1, pontos_turs2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float superpoder1, superpoder2;
    int opcao;


    printf("*** Super Trunfo ***\n");
    printf("Menu: \n");
    printf("\n1. Iniciar jogo\n");
    printf("2. Regras ( A partida será iniciada com as Regras)\n");
    printf("\nEscolha sua opção: \n");
    scanf("%d", &opcao);



    switch (opcao){
        case 1:
        printf("\nIniciando...\n");
        break;
        case 2:
        printf("\n*** Regras ***\n");
        printf("\n- Versão Beta, para começar faça duas Cartas seguindo as instruções.\n");
        printf("\n- A Carta com os maiores atributos vence, exceto, a Densidade Populacional que quanto menor melhor\n");
        printf("\n- Na modalidade escolha de atributo o jogador escolhe um único atributo, quem tiver o melhor vence a rodada\n");
        printf("\nIniciando...\n");
        break;
    }

    printf("\nFaça duas cartas\n");

    printf("\nEstado (Escolha uma letra de 'A' a 'H'): \n"); //Solicita ao usuário a escolha de uma letra
    scanf(" %c", &estado1); //Lê um caractere e guarda em 'estado1'

    printf("Código da carta (Escolha um número de 01 a 04): \n"); //Solicita ao usuário a escolha de um número 
    scanf("%d", &codigo1); //Lê um número inteiro

    printf("Escolha uma cidade (Não utilize espaços): \n"); //Solicita ao usuário a escolha de uma cidade
    scanf("%s", cidade1); //Lê um conjunto de caracteres

    printf("Digite a população aproximada desta cidade: \n"); //Solicita ao usuário a população aproximada de sua cidade escolhida
    scanf("%d", &populacao1); //Lê um número inteiro

    printf("Digite a área de sua Cidade (Em km²): \n"); //Solcita ao usuário a área de sua cidade escolhida
    scanf("%f", &area1); //Lê um número decimal

    printf("Qual o PIB de sua cidade: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos possuí sua cidade: \n"); //Solicita ao usuário a quantidade de pontos turísticos de sua cidade
    scanf("%d", &pontos_turs1); //Lê um número inteiro


    printf("\n Parabéns, você criou sua primeira carta. Agora faremos uma segunda, não repita o que foi utlizado na primeira. \n");


    printf("\nEstado (Escolha uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2); 

    printf("Código da carta (Escolha um número de 01 a 04): \n"); 
    scanf("%d", &codigo2);

    printf("Escolha uma cidade (Não utilize espaços): \n");
    scanf("%s", cidade2);

    printf("Digite a população aproximada desta cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área de sua Cidade (Em km²): \n");
    scanf("%f", &area2);

    printf("Qual o PIB de sua cidade: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos possuí sua cidade: \n");
    scanf("%d", &pontos_turs2);

    densidade_populacional1 = (float)(populacao1 / area1);

    pib_per_capita1 = (float)((pib1 * 1000000000) / populacao1);

    densidade_populacional2 = (float)(populacao2 / area2);

    pib_per_capita2 = (float)((pib2 * 1000000000) / populacao2);

    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turs1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turs2 + pib_per_capita2 + (1.0 / densidade_populacional2);


    //Exibe os dados cadastrados pelo usuário
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, codigo1); //%02 coloca zero à esquerda
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %.2f km²\n", area1); //%.2 limita as casas decimais a duas
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turs1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", superpoder1);

    //Exibe os dados cadastrados pelo usuário
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, codigo2); //%02 coloca zero à esquerda
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f km²\n", area2); //%.2 limita as casas decimais a duas
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turs2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n***Comparação de Status***\n");

    printf("\n* Cidades *\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nPopulação: \n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (populacao1 < populacao2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("\nÁrea: \n");
    if (area1 > area2) {
        printf("Carta 1 venceu!\n");
    } else if (area1 < area2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("\nPIB: \n");
    if (pib1 > pib2) {
        printf("Carta 1 venceu!\n");
    } else if (pib1 < pib2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("\nPontos Turísticos: \n");
    if (pontos_turs1 > pontos_turs2) {
        printf("Carta 1 venceu!\n");
    } else if (pontos_turs1 < pontos_turs2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("\nPIB per Capita: \n");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu!\n");
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("\nSuper Poder: \n");
    if (superpoder1 > superpoder2) {
        printf("Carta 1 venceu!\n");
    } else if (superpoder1 < superpoder2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("\nDensidade Populacional: \n");
    if (densidade_populacional1 > densidade_populacional2) {
        printf("Carta 1 venceu!\n");
    } else if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    
    return 0;




}
