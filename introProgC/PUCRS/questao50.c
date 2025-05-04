/*50. Faça um algoritmo que leia 2 valores inteiros e positivos: X e Y. 
O algoritmo deve calcular e escrever a função potência X Y*/

#include <stdio.h>

int main() {
    int X, Y, i;
    unsigned long long resultado = 1;  // Usa unsigned long long para suportar valores grandes

    printf("Digite o valor de X (inteiro e positivo): ");
    scanf("%d", &X);
    printf("Digite o valor de Y (inteiro e positivo): ");
    scanf("%d", &Y);

    if (X < 0 || Y < 0) {
        printf("X e Y devem ser positivos\n");
    } else {
        for (i = 1; i <= Y; i++) {
            resultado *= X;
        }
        printf("%d elevado a %d e %llu\n", X, Y, resultado);
    }

    return 0;
}