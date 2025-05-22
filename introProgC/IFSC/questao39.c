#include <stdio.h>

int main() {
    float valor_compra, valor_pago, troco;
    int notas_100, notas_10, notas_1;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Digite o valor pago: ");
    scanf("%f", &valor_pago);
    
    troco = valor_pago - valor_compra;
    if (troco < 0) {
        printf("Valor pago insuficiente.\n");
    } else {
        notas_100 = (int)(troco / 100);
        troco -= notas_100 * 100;
        notas_10 = (int)(troco / 10);
        troco -= notas_10 * 10;
        notas_1 = (int)troco;
        
        printf("Valor da compra: %.2f\n", valor_compra);
        printf("Valor do troco: %.2f\n", valor_pago - valor_compra);
        printf("Notas de 100: %d\n", notas_100);
        printf("Notas de 10: %d\n", notas_10);
        printf("Notas de 1: %d\n", notas_1);
    }
    return 0;
}