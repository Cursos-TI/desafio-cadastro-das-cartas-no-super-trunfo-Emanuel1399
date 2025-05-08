#include <stdio.h>

int main() {
    int codigo, populacao, pontosTuristicos;
    float area, pib;
    char nome[100];

    // Cadastro das Cartas:
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome); // Lê string com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("\n--- Carta da Cidade Cadastrada ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
