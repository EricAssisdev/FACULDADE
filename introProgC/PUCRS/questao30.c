/* 30. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200. */

#include <stdio.h>

int main() {
    int i;
    
    printf("Os numeros impares entre 100 e 200 sao:\n");
    
    for (i = 101; i < 200; i += 2) { // Começa em 101 e incrementa de 2 em 2
        printf("%d ", i); // Imprime o número ímpar
    }
    
    printf("\n"); // Nova linha após a lista de números
    
    return 0;
}