#include <stdio.h>

// Definição da estrutura para armazenar informações sobre a cidade
// Cada cidade terá atributos como população, PIB, área e pontos turísticos
struct Cidade {
    int populacao;              // População total da cidade
    float pib;                  // Produto Interno Bruto da cidade (em milhões)
    float area;                 // Área da cidade em km²
    int pontos_turisticos;      // Número de pontos turísticos na cidade
};

// Função para registrar uma cidade
// Recebe como parâmetro um ponteiro para uma estrutura Cidade
void registrar_cidade(struct Cidade *cidade) {
    // Solicita e armazena as informações da cidade
    printf("\nDigite a população: ");
    scanf("%d", &cidade->populacao);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &cidade->pib);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade->area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

// Função para exibir os dados da cidade
// Recebe uma estrutura Cidade como parâmetro e imprime suas informações
void exibir_cidade(struct Cidade cidade) {
    printf("\n--- Dados da Cidade ---\n");
    printf("População: %d\n", cidade.populacao);
    printf("PIB: %.2f milhões\n", cidade.pib);
    printf("Área: %.2f km²\n", cidade.area);
    printf("Pontos turísticos: %d\n", cidade.pontos_turisticos);
}

// Função principal
int main() {
    struct Cidade cidade1, cidade2; // Declara duas variáveis do tipo Cidade

    // Cadastro da primeira cidade
    printf("\nCadastro da primeira cidade:\n");
    registrar_cidade(&cidade1);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    registrar_cidade(&cidade2);

    // Exibição dos dados da primeira cidade
    printf("\nExibindo dados da primeira cidade:\n");
    exibir_cidade(cidade1);

    // Exibição dos dados da segunda cidade
    printf("\nExibindo dados da segunda cidade:\n");
    exibir_cidade(cidade2);

    return 0; // Finaliza o programa
}
