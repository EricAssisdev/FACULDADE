/*8. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
area = base * altura / 2 . Utilize as variáveis AREA, BASE e ALTURA e os
operadores aritméticos de multiplicação e divisão.*/

#include <stdio.h>

int main(){
    int area, base, altura;

    printf("Digite a base do tringulo: ");
    scanf("%d", &base);
    printf("Digite a altura do tringulo: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A area do tringulo eh: %d", area);
}