#include <stdio.h>

int main() {
    float salario_minimo = 1320.00; // Exemplo de valor
    int carros_vendidos;
    float valor_vendas, comissao_fixa, comissao_percentual, salario_total;
    
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valor_vendas);
    
    comissao_fixa = carros_vendidos * 50.00;
    comissao_percentual = valor_vendas * 0.05;
    salario_total = 2 * salario_minimo + comissao_fixa + comissao_percentual;
    
    printf("Salário total: %.2f\n", salario_total);
    return 0;
}