/* 23. Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa
ordem, e imprima em ordem inversa, isto é, se os dados lidos forem 5 e 9, por
exemplo, devem ser impressos na ordem 9 e 5. */

#include <stdio.h>

void invert(int *n1, int *n2) {
    int temp = *n1; // Armazena temporariamente o valor de n1
    *n1 = *n2; // Atribui o valor de n2 a n1
    *n2 = temp; // Atribui o valor armazenado em temp a n2
}

int main() {
    int n1, n2;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("Antes da inversão: n1 = %d, n2 = %d\n", n1, n2);

    invert(&n1, &n2);

    printf("Depois da inversão: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}