#include <stdio.h>

// Estrutura para armazenar os dados da carta
struct Carta {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    getchar(); // limpa buffer
    fgets(carta1.nome, sizeof(carta1.nome), stdin);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    getchar(); // limpa buffer
    fgets(carta2.nome, sizeof(carta2.nome), stdin);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo os dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
