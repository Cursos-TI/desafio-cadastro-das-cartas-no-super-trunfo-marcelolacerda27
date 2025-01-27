#include <stdio.h>
#include <string.h>

// Definindo constantes
#define ESTADOS 8
#define CIDADES 4

// Estrutura para armazenar os atributos de uma cidade
typedef struct {
    char codigo[4];
    char nome[20];
    double populacao;
    double area;
    double PIB;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[ESTADOS * CIDADES]; // Array para armazenar todas as cidades
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int total_cidades = 0;

    printf("Bem-vindo ao sistema Super Trunfo - Cadastro de Cidades\n");

    // Cadastro das cartas
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES; j++) {
            // Gerar código da cidade
            snprintf(cidades[total_cidades].codigo, sizeof(cidades[total_cidades].codigo), "%c%02d", estados[i], j + 1);

            printf("\nCadastrando a cidade de código %s:\n", cidades[total_cidades].codigo);

            // Obter nome da cidade
            printf("Nome da cidade: ");
            scanf(" %[^\n]", cidades[total_cidades].nome);

            // Obter população
            printf("População (em milhares): ");
            scanf("%lf", &cidades[total_cidades].populacao);

            // Obter área
            printf("Área (em km²): ");
            scanf("%lf", &cidades[total_cidades].area);

            // Obter PIB
            printf("PIB (em bilhões de reais): ");
            scanf("%lf", &cidades[total_cidades].PIB);

            // Obter número de pontos turísticos
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[total_cidades].pontos_turisticos);

            total_cidades++;
        }
    }

    // Exibir as cartas cadastradas
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < total_cidades; i++) {
        printf("\n--- Carta %s ---\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %.2f mil habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões de reais\n", cidades[i].PIB);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    printf("\nCadastro finalizado. Obrigado por usar o sistema!\n");
    return 0;
}
