/*51. Faça um algoritmo que calcule o fatorial de um número.*/

#include <stdio.h>

unsigned long long fatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O numero deve ser positivo\n");
    } else {
        printf("O fatorial de %d e %llu\n", numero, fatorial(numero));
    }

    return 0;
}