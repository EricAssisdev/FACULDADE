/* 19. Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor lido. */

#include <stdio.h>

int main() {
    int n, quadrado, cubo;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    quadrado = n*n;
    cubo = n*n*n;
    
    printf("O quadrado do valor é: %d\n", quadrado);
    printf("O cubo do valor é: %d", cubo);

    return 0;
}