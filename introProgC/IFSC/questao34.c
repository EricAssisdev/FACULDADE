/* 34. Algoritmo que ordene três valores em ordem crescente */

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);
    
    if (a <= b && a <= c) {
        printf("%.2f ", a);
        if (b <= c) {
            printf("%.2f %.2f\n", b, c);
        } else {
            printf("%.2f %.2f\n", c, b);
        }
    } else if (b <= a && b <= c) {
        printf("%.2f ", b);
        if (a <= c) {
            printf("%.2f %.2f\n", a, c);
        } else {
            printf("%.2f %.2f\n", c, a);
        }
    } else {
        printf("%.2f ", c);
        if (a <= b) {
            printf("%.2f %.2f\n", a, b);
        } else {
            printf("%.2f %.2f\n", b, a);
        }
    }
    return 0;
}