#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigocidade, pontosturisticos;
    float populacao, area, pib;
    char nome[50];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o código da carta: \n");
    scanf("%d", &codigocidade);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Digite a População: \n");
    scanf("%f", &populacao);
    printf("Digite a Área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("O código da carta é: %d\n", codigocidade);
    printf("O nome da cidade é: %s\n", nome);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos);
    printf("A Área da Cidade é: %f\n", area);
    printf("O PIB da Cidadeé: %f\n", pib);
    printf("A População da Cidade é: %f\n", populacao);


    return 0;
}
