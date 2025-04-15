/* 28. Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n */ 

#include <stdio.h>

int main()
{
    int valor, i;
    float soma = 0.0;

    // Lê o valor de n
    printf("Digite um valor positivo e inteiro: ");
    scanf("%d", &valor);

    // Calcula a soma dos termos 1/1 + 1/2 + ... + 1/n
    for (i = 1; i <= valor; i++) {
        soma += 1.0 / i; // Adiciona 1/i à soma
        printf("calculo em sequencia %.2f\n", soma);
    }

    // Imprime o resultado com 2 casas decimais
    printf("A soma eh: %.2f\n", soma);

    return 0;
}