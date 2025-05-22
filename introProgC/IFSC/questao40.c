#include <stdio.h>

int main() {
    char nome[50];
    int qtd_parafusos, qtd_porcas, qtd_refuelas;
    float preco_parafuso, preco_porca, preco_refuela, total, desconto, total_pagar;
    
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);
    printf("Digite a quantidade de parafusos: ");
    scanf("%d", &qtd_parafusos);
    printf("Digite o preço unitário do parafuso: ");
    scanf("%f", &preco_parafuso);
    printf("Digite a quantidade de porcas: ");
    scanf("%d", &qtd_porcas);
    printf("Digite o preço unitário da porca: ");
    scanf("%f", &preco_porca);
    printf("Digite a quantidade de refuelas: ");
    scanf("%d", &qtd_refuelas);
    printf("Digite o preço unitário da refuela: ");
    scanf("%f", &preco_refuela);
    
    float total_parafusos = qtd_parafusos * preco_parafuso * 0.8; // 20% desconto
    float total_porcas = qtd_porcas * preco_porca * 0.9; // 10% desconto
    float total_refuelas = qtd_refuelas * preco_refuela * 0.7; // 30% desconto
    total = total_parafusos + total_porcas + total_refuelas;
    desconto = (qtd_parafusos * preco_parafuso * 0.2) + (qtd_porcas * preco_porca * 0.1) + (qtd_refuelas * preco_refuela * 0.3);
    total_pagar = total;
    
    printf("Nome: %s\n", nome);
    printf("Quantidade de parafusos: %d\n", qtd_parafusos);
    printf("Quantidade de porcas: %d\n", qtd_porcas);
    printf("Quantidade de refuelas: %d\n", qtd_refuelas);
    printf("Total de desconto: %.2f\n", desconto);
    printf("Total a pagar: %.2f\n", total_pagar);
    return 0;
}