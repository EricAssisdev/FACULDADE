/* 21. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado
da soma do quadrado de cada valor lido */

#include <stdio.h>

int somaQuad(int a, int b){
    
    int quadA, quadB, soma;
    
    
    quadA = a*a;
    quadB = b*b;
    
    soma = quadA + quadB;
    
    return soma;
}


int main()
{
    int a, b;
    printf ("Digite o valor de A: ");
    scanf("%d", &a);
    printf ("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("A soma dos quadrados dos números é: %d", somaQuad(a, b));
    return 0;
}