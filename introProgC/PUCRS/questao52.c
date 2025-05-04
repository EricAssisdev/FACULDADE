/*52. Faça um algoritmo que calcule a combinação e arranjo de um conjunto de tamanho*/

#include <stdio.h>

unsigned long long fatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int N, P;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("Digite o valor de P: ");
    scanf("%d", &P);

    if (N < 0 || P < 0 || P > N) {
        printf("Valores invalidos\n");
    } else {
        unsigned long long arranjo = fatorial(N) / fatorial(N - P);
        unsigned long long combinacao = fatorial(N) / (fatorial(P) * fatorial(N - P));
        printf("Arranjo A(%d, %d) = %llu\n", N, P, arranjo);
        printf("Combinacao C(%d, %d) = %llu\n", N, P, combinacao);
    }

    return 0;
}