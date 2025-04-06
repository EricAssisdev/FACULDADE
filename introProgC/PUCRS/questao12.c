/* 12. Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
1 x n = n
2 x n = 2n
3 x n = 3n

formula n x n = n2 */

#include <stdio.h>

int main()
{
    int n[20]; // Vetor pra guardar 20 números
    int i, j;  // 'i' pra controlar os 20 valores, 'j' pra tabuada

    // Laço pra ler os 20 números
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº numero: ", i + 1);
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
