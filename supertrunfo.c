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

    printf("Faça duas cartas\n");

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

    printf("Quantos pontos turísticos possuí sua cidade: \n");
    scanf("%d", &pontos_turs2);


    //Exibe os dados cadastrados pelo usuário
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, codigo1); //%02 coloca zero à esquerda
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %.2f\n", area1); //%.2 limita as casas decimais a duas
    printf("Número de Pontos Turísticos: %d\n", pontos_turs1);

    //Exibe os dados cadastrados pelo usuário
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, codigo2); //%02 coloca zero à esquerda
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f\n", area2); //%.2 limita as casas decimais a duas
    printf("Número de Pontos Turísticos: %d\n", pontos_turs2);


    return 0;




}
