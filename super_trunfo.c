#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para três cartas
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    
    char estado3;
    char codigo3[4];
    char nomeCidade3[50];
    int populacao3;
    float area3;
    float pib3;
    int pontosTuristicos3;
    
    // Entrada de dados para a terceira carta
    printf("\nDigite o estado da terceira carta (A-H): ");
    scanf(" %c", &estado3);
    
    printf("Digite o código da terceira carta (ex: C03): ");
    scanf(" %3s", codigo3);
    
    printf("Digite o nome da cidade da terceira carta: ");
    scanf(" %49s", nomeCidade3);
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao3);
    
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area3);
    
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib3);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos3);
    
    // Exibição das informações
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", nomeCidade3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos3);
    
    return 0;
}
