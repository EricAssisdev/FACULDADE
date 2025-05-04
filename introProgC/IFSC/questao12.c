/*12. Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;*/

#include <stdio.h>

int main (){
    int c, f;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%d", &c);

    f = (9 * c + 160) / 5;

    printf("A temperatura em Fahrenheit eh: %d", f);
}