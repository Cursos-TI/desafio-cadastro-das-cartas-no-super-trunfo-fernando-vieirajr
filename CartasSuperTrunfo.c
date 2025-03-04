// 04/03/2025

#include <stdio.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "");

    int populacao1, numero1, pontosTuristicos1, populacao2, numero2, pontosTuristicos2;
    double area1, pib1, area2, pib2;
    char codigo1[5], nome1[50], estado1[30], codigo2[5], nome2[50], estado2[30];

    // Cadastro da Primeira Cidade
    printf("\nPor favor, preencha os campos para cadastrar a Primeira Cidade:\n\n");

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite um número entre 01 e 04 para completar o código: ");
    scanf("%d", &numero1);

    sprintf(codigo1, "%c%02d", estado1[0], numero1);

    printf("Digite o Nome da Cidade (evite acentos e caracteres especiais): ");
    scanf(" %[^\n]", nome1); 

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB da Cidade (Apenas números): ");
    scanf("%lf", &pib1);

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cadastro da Segunda Cidade
    printf("\nPor favor, preencha os campos para cadastrar a Segunda Cidade:\n\n");

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite um número entre 01 e 04 para completar o código: ");
    scanf("%d", &numero2);

    sprintf(codigo2, "%c%02d", estado2[0], numero2);

    printf("Digite o Nome da Cidade (evite acentos e caracteres especiais): ");
    scanf(" %[^\n]", nome2); 

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB da Cidade (Apenas números): ");
    scanf("%lf", &pib2);

    printf("Digite o Número de Pontos Turísticos da Cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos dados cadastrados
    printf("\nDados Inseridos da Primeira Cidade:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nDados Inseridos da Segunda Cidade:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: R$ %.2lf\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
