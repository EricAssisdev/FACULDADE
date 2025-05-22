/* 22. Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua
média na variável Media e imprima seu valor. */

#include <stdio.h>

float calcMedia(int n1, int n2){
    
    float media = (n1 + n2) / 2.0;
    
    return media;
    
}

int main()
{
    int n1, n2;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    printf("A média dos dois números é: %.1f", calcMedia(n1, n2));

    return 0;
}