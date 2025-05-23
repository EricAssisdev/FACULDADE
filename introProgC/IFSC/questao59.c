#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("O número é par");
    else
        printf("O número é ímpar");

    if (n >= 0)
        printf(" e positivo\n");
    else
        printf(" e negativo\n");
    return 0;
}