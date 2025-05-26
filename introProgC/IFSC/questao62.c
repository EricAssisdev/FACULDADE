#include <stdio.h>

int main() {
    float saldoMedio, credito;

    printf("Digite o saldo médio do cliente: ");
    scanf("%f", &saldoMedio);

    if(saldoMedio <= 200) {
        credito = 0;
    } else if(saldoMedio <= 400) {
        credito = saldoMedio * 0.20;
    } else if(saldoMedio <= 600) {
        credito = saldoMedio * 0.30;
    } else {
        credito = saldoMedio * 0.40;
    }

    printf("Saldo médio: R$ %.2f\n", saldoMedio);
    printf("Crédito especial: R$ %.2f\n", credito);

    return 0;
}