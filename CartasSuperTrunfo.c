#include <stdio.h>
#include <string.h> //Tive que incluir pois estava apresentando o resultado de duas variaveis junto
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Variaveis da carta 1
    int pontosturisticos;
    float area, pib, densidade, pibpercapita, superpoder;
    unsigned long int populacao;
    char nome[50], codigocarta[20], estado[2];

    //Variaveis da carta 2
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    unsigned long int populacao2;
    char nome2[50], codigocarta2[20], estado2[2];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("***Primeira Carta***\n");
    printf("Digite o estado: \n");
    fgets(estado, sizeof(estado), stdin); estado[strcspn(estado, "\n")] = '\0';
    while (getchar() != '\n');
    printf("Digite o código da carta: \n"); 
    fgets(codigocarta, sizeof(codigocarta), stdin); codigocarta[strcspn(codigocarta, "\n")] = '\0';
    printf("Digite o nome da cidade: \n");
    fgets(nome, sizeof(nome), stdin); nome[strcspn(nome, "\n")] = '\0';
    printf("Digite a População: \n");
    scanf("%ld", &populacao);
    while (getchar() != '\n');
    printf("Digite a Área: \n");
    scanf("%f", &area);
    while (getchar() != '\n');
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    while (getchar() != '\n');
    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Calcular a Densidade Populacional e Pib per capita:

    densidade = (float)(populacao / area);
    pibpercapita = (float)(pib / populacao);

    printf("O Estado é: %s\n", estado);
    printf("O código da carta é: %s\n", codigocarta);
    printf("O nome da cidade é: %s\n", nome);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos);
    printf("A Área da Cidade é: %f km²\n", area);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib);
    printf("A População da Cidade é: %ld\n", populacao);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade);
    printf("O PIB per Capita é: %f reais\n", pibpercapita);

    printf("***Segunda Carta***\n");
    printf("Digite o estado: \n");
    fgets(estado2, sizeof(estado2), stdin); estado2[strcspn(estado2, "\n")] = '\0';
    while (getchar() != '\n');
    printf("Digite o código da carta: \n"); 
    fgets(codigocarta2, sizeof(codigocarta2), stdin); codigocarta2[strcspn(codigocarta2, "\n")] = '\0';
    printf("Digite o nome da cidade: \n");
    fgets(nome2, sizeof(nome2), stdin); nome2[strcspn(nome2, "\n")] = '\0';
    printf("Digite a População: \n");
    scanf("%ld", &populacao2);
    while (getchar() != '\n');
    printf("Digite a Área: \n");
    scanf("%f", &area2);
    while (getchar() != '\n');
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    while (getchar() != '\n');
    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Calcular a Densidade Populacional e Pib per capita:

    densidade = (float)(populacao2 / area2);
    pibpercapita = (float)(pib2 / populacao2);

    printf("O Estado é: %s\n", estado2);
    printf("O código da carta é: %s\n", codigocarta2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("A Área da Cidade é: %f km²\n", area2);
    printf("O PIB da Cidade é: %f bilhões de reais\n", pib2);
    printf("A População da Cidade é: %ld\n", populacao2);
    printf("A Densidade Populacional é: %f pessoas/km²\n", densidade2);
    printf("O PIB per Capita é: %f reais\n", pibpercapita2);

    return 0;
}
