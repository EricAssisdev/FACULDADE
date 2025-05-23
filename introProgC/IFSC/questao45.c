#include <stdio.h>

int main() {
    int numero;
    float saldo, valor;
    char tipo;
    printf("Número da conta: ");
    scanf("%d", &numero);
    printf("Saldo: ");
    scanf("%f", &saldo);
    printf("Operação (d=depósito, r=retirada): ");
    scanf(" %c", &tipo);
    printf("Valor da operação: ");
    scanf("%f", &valor);

    if (tipo == 'd') saldo += valor;
    else if (tipo == 'r') saldo -= valor;

    printf("Novo saldo: R$ %.2f\n", saldo);
    if (saldo < 0) printf("conta estourada\n");
    return 0;
}