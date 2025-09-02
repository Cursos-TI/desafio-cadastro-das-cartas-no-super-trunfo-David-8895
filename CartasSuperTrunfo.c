#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char Estado1;
    char Codigo1[4];
    char Nome_Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;

    // Variáveis para a Carta 2
    char Estado2;
    char Codigo2[4];
    char Nome_Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

    // Cadastro das Cartas1:
    printf("Carta 1\n");
    printf("Digite o Estado (Ex: A): ");
    scanf(" %c", &Estado1);
    printf("Digite o Codigo (Ex: A01): ");
    scanf("%s", Codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", Nome_Cidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao1);
    printf("Digite a Area em km²: ");
    scanf("%f", &Area1);
    printf("Digite o PIB em bilões de reais: ");
    scanf("%f", &PIB1);
    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &Pontos_Turisticos1);

    // Cadastro das Cartas2:
    printf("Carta 2\n");
    printf("Digite o Estado (Ex: B): ");
    scanf(" %c", &Estado2);
    printf("Digite o Codigo (Ex: B02): ");
    scanf("%s", Codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", Nome_Cidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao2);
    printf("Digite a Area em km²: ");
    scanf("%f", &Area2);
    printf("Digite o PIB em bilões de reais: ");
    scanf("%f", &PIB2);
    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &Pontos_Turisticos2);

    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);

    return 0;
}
