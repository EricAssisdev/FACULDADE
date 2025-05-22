/* 32. Algoritmo que leia um valor N e imprima F1 se N <= 10, F2 se 10 < N <= 100, F3 caso contrário */

#include <stdio.h>

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    if (N <= 10) {
        printf("F1\n");
    } else if (N > 10 && N <= 100) {
        printf("F2\n");
    } else {
        printf("F3\n");
    }
    return 0;
}