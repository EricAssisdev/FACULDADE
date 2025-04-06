/* 17. Escrever um algoritmo que lê um número não determinado de pares de valores m,n, todos inteiros e positivos, um par de cada vez, e calcula e escreve a soma dos n
inteiros consecutivos a partir de m inclusive. */

#include <stdio.h>

int main(){
    int m, n, i, soma; // Declaração das variáveis

    // Laço para ler os pares de valores m e n
    while (1) {
        printf("Digite os valores de m e n (0 0 para sair): ");
        scanf("%d %d", &m, &n); // Lê os valores de m e n

        // Verifica se ambos os valores são zero para encerrar o loop
        if (m == 0 && n == 0) {
            break; // Sai do loop
        }

        soma = 0; // Inicializa a soma

        // Laço para calcular a soma dos n inteiros consecutivos a partir de m
        for (i = m; i < m + n; i++) {
            soma += i; // Adiciona o valor atual à soma
        }

        // Exibe o resultado da soma
        printf("A soma dos %d inteiros consecutivos a partir de %d e: %d\n", n, m, soma);
    }

    return 0;
}