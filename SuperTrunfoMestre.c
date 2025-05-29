#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada de dados para Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código: ");
    scanf("%3s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados para Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código: ");
    scanf("%3s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    float super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibição
    printf("\n--- Carta 1 - %s ---\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f\n", pib_per_capita1);
    printf("Super Poder: %.6f\n", super_poder1);

    printf("\n--- Carta 2 - %s ---\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f\n", pib_per_capita2);
    printf("Super Poder: %.6f\n", super_poder2);

    // Comparações
    printf("\n--- Comparação ---\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos turísticos: %d\n", (pontos1 > pontos2));
    printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));
    printf("PIB per Capita: %d\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: %d\n", (super_poder1 > super_poder2));

    return 0;
}