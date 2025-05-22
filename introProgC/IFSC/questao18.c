/* 18. Faça um algoritmo que leia os valores de 
COMPRIMENTO, LARGURA e ALTURA e apresente o 
valor do volume de uma caixa retangular. Utilize para o cálculo 
a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */

#include <stdio.h>

int main() {
    int c, l, a, volume;
    
    printf("Digite o comprimento: ");
    scanf("%d", &c);
    printf("Digite a largura: ");
    scanf("%d", &l);
    printf("Digite a altura: ");
    scanf("%d", &a);
    
    volume = c * l * a;
    
    printf("O valor do volume de uma caixa retangular: %d", volume);
    
    return 0;
}