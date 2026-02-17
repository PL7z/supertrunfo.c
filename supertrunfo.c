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
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

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

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = pontos_turs1 > pontos_turs2;
    resultado5 = pib_per_capita1 > pib_per_capita2;
    resultado6 = superpoder1 > superpoder2;
    resultado7 = densidade_populacional1 < densidade_populacional2;

    printf("\n**Comparação de cartas: 1 para verdadeiro, 0 para falso.**\n");

    printf("População: Carta 1 venceu ( %d )\n", resultado1);
    printf("Área: Carta 1 venceu ( %d )\n", resultado2);
    printf("PIB: Carta 1 venceu ( %d )\n", resultado3);
    printf("Pontos Turísticos: Carta 1 venceu ( %d )\n", resultado4);
    printf("Densidade Populacional: Carta 1 vence ( %d )\n", resultado7);
    printf("PIB per Capita: Carta 1 vence ( %d )\n", resultado5);
    printf("Super Poder: Carta 1 vence ( %d )\n", resultado6);

    return 0;




}
