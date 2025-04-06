/* 2. Escrever um algoritmo que lê um valor N inteiro e positivo 
e que calcula e escreve o valor de E 
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! */

#include <stdio.h>

int main() {
    int n = 0, k;
    double soma = 0.0;
    double fatorial = 1.0;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    // Verifica se o valor de n é positivo
    if (n < 0) {
        printf("Por favor, insira um valor positivo para N.\n");
        return 1; // Encerra o programa com código de erro
    }

    for (k = 0; k <= n; k++) {
        soma = soma + 1.0 / fatorial;
        fatorial = fatorial * (k + 1);
    }

    printf("O valor de E é: %.15lf\n", soma); // Usando %.15lf para maior precisão
    

    return 0;
}