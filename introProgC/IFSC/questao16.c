/* 16. Faça um algoritmo que leia dois valores para as variáveis A e B 
e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B 
e a variável B passe a possuir o valor da variável A. Apresente os valores trocados. */

#include <stdio.h>

int main()
{
    int a, b, temp;
    
    printf("Digite um numero para A: ");
    scanf("%d", &a);
    printf("Digite um numero para B: ");
    scanf("%d", &b);
    
    printf("Valores antes da troca - A: %d, B: %d\n", a, b);
    
    // Troca usando variável temporária
    temp = a;
    a = b;
    b = temp;
    
    printf("Valores após a troca - A: %d, B: %d\n", a, b);

    return 0;
}