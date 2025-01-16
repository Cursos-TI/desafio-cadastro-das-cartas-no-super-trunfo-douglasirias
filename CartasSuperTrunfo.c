#include <stdio.h>
#include <string.h> //Tive que incluir pois estava apresentando o resultado de duas variaveis junto
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int pontosturisticos;
    float populacao, area, pib;
    char nome[50], codigocidade[20];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o código da carta: \n"); 
    fgets(codigocidade, sizeof(codigocidade), stdin); codigocidade[strcspn(codigocidade, "\n")] = '\0';
    printf("Digite o nome da cidade: \n");
    fgets(nome, sizeof(nome), stdin); nome[strcspn(nome, "\n")] = '\0';
    printf("Digite a População: \n");
    scanf("%f", &populacao);
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

    printf("O código da carta é: %s\n", codigocidade);
    printf("O nome da cidade é: %s\n", nome);
    printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos);
    printf("A Área da Cidade é: %f\n", area);
    printf("O PIB da Cidadeé: %f\n", pib);
    printf("A População da Cidade é: %f\n", populacao);


    return 0;
}
