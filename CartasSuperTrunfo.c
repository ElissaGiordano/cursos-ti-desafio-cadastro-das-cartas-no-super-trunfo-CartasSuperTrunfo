#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[1], codigo[50], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastrar carta 1: \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

    // Seguir os mesmos passos para a implementação da carta 2

    printf("Cadastrar carta 2: \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição das informações da carta 2

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

    return 0;
}
