#include <stdio.h>

int main() {
    int codigo;
    float preco_custo, preco_novo;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite o preco de custo: ");
    scanf("%f", &preco_custo);

    preco_novo = preco_custo * 1.20; // Aumento de 20%

    printf("Codigo: %d - Novo preco: %.2f\n", codigo, preco_novo);

    return 0;
}