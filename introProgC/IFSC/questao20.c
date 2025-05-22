/* 20. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado do quadrado da soma dos valores lidos. */

#include <stdio.h>

int main() {
    int a, b, quadrado, soma;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    soma = a + b;
    quadrado = soma * soma;
    
    printf("O quadrado da soma dos valores é: %d", quadrado);

    return 0;
}