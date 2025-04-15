#include <stdio.h>

int main() {
    int i, j;

    printf("Gerador de numeros mostrando seus divisores por 11\n");
    printf("Aperte enter para gerar.\n");
    getchar();

    for (i = 1000; i < 1999; i++) {
        if (i % 11 == 0) { // Verifica se o número é divisível por 11
            printf("\nDivisores de %d:\n", i);
            for (j = 1; j <= i; j++) {
                if (i % j == 0) { // Verifica se 'j' é um divisor de 'i'
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
