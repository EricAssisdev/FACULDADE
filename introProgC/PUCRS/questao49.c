/*49.Faça um algoritmo que lê um valor N 
inteiro e positivo e que calcula e escreve o fatorial de N (N!).*/

#include <stdio.h>

int main() {
    int N, i;
    unsigned long long fatorial = 1;  // Usa unsigned long long para suportar valores grandes

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N deve ser positivo\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e %llu\n", N, fatorial);
    }

    return 0;
}