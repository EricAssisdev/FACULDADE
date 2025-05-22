/* 31. Faça um algoritmo que leia dois números A e B e imprima o maior deles. */

#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("O maior número é: %d\n", a);
    } else {
        printf("O maior número é: %d\n", b);
    }
    return 0;
}