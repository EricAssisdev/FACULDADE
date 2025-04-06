/* 19. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a
média geral dos números lidos. O número que encerrará a leitura será zero */

#include <stdio.h>

int main(){
    int numero, contPares = 0, contImpares = 0, somaPares = 0, somaTotal = 0, contTotal = 0;
    float mediaPares, mediaTotal;

    while (1) {
        printf("Digite um numero positivo (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Sai do loop se o número for zero
        }

        if (numero % 2 == 0) { // Se o número for par
            contPares++;
            somaPares += numero; // Soma os números pares
        } else { // Se o número for ímpar
            contImpares++;
        }

        somaTotal += numero; // Soma todos os números
        contTotal++; // Incrementa o contador total de números
    }

    if (contPares > 0) {
        mediaPares = (float)somaPares / contPares; // Calcula a média dos pares
    } else {
        mediaPares = 0; // Se não houver pares, a média é zero
    }

    if (contTotal > 0) {
        mediaTotal = (float)somaTotal / contTotal; // Calcula a média geral
    } else {
        mediaTotal = 0; // Se não houver números, a média é zero
    }

    printf("Quantidade de numeros pares: %d\n", contPares);
    printf("Quantidade de numeros impares: %d\n", contImpares);
    printf("Media dos numeros pares: %.2f\n", mediaPares);
    printf("Media geral dos numeros: %.2f\n", mediaTotal);

    return 0;
}