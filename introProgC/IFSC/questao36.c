/* 36. Algoritmo que calcule a comissão de corretores com base nas vendas */

#include <stdio.h>

int main() {
    char nome[50];
    float vendas, comissao, total_vendas = 0;
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do corretor %d: ", i+1);
        scanf("%s", nome);
        printf("Digite o valor das vendas: ");
        scanf("%f", &vendas);
        
        if (vendas > 50000) {
            comissao = vendas * 0.12;
        } else if (vendas >= 30000 && vendas <= 50000) {
            comissao = vendas * 0.095;
        } else {
            comissao = vendas * 0.07;
        }
        
        printf("Nome: %s\n", nome);
        printf("Valor das vendas: %.2f\n", vendas);
        printf("Comissão: %.2f\n", comissao);
        total_vendas += vendas;
    }
    
    printf("Total de vendas da empresa: %.2f\n", total_vendas);
    return 0;
}