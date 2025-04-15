/* 29. Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73. */
#include <stdio.h>

int main() {
    
    float media = 0.0;
    int soma = 0, quantidadeLoop = 0, i;
    
    for(i = 13; i <= 73; i++){
        soma += i;
        quantidadeLoop++;
    }

    media = soma / quantidadeLoop;
    printf("%.2f", media);
    return 0;
}

