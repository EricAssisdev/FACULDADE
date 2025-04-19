/* 33. Escrever um algoritmo que leia 20 valores para uma variável N e, para cada um deles, calcule a tabuada de 1 atC) N. Mostre a tabuada na forma: 1 x N = N 2 x N = 2N 3 x
N = 3N ...... N x N = N2 */

#include <stdio.h>

int main() {
    int n[20]; // Vetor pra guardar 20 números
    int i, j;  // 'i' pra controlar os 20 valores, 'j' pra tabuada

    // Laço pra ler os 20 números
    for (i = 0; i < 20; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &n[i]); // Guarda cada número no vetor
    }

    // Laço pra calcular e mostrar a tabuada de cada número
    for (i = 0; i < 20; i++) {
        printf("\nTabuada do %d:\n", n[i]); // Mostra qual número tá sendo usado
        for (j = 1; j <= n[i]; j++) {       // De 1 até o valor de n[i]
            printf("%d x %d = %d\n", j, n[i], j * n[i]); // Mostra a tabuada
        }
    }

    return 0;
}