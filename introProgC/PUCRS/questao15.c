 /* 15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A
entrada de dados deve terminar quando for lido um número negativo. */

#include <stdio.h>

int main() {
    int numero, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0; // Contadores para cada intervalo

    while (1) { // Loop até o usuário digitar um número negativo
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &numero); // Lê o número digitado pelo usuário

        if (numero < 0) { // Se o número for negativo, sai do loop
            break;
        }

        // Verifica em qual intervalo o número se encontra e incrementa o contador correspondente
        if (numero >= 0 && numero <= 25) {
            intervalo1++;
        } else if (numero >= 26 && numero <= 50) {
            intervalo2++;
        } else if (numero >= 51 && numero <= 75) {
            intervalo3++;
        } else if (numero >= 76 && numero <= 100) {
            intervalo4++;
        }
    }

    // Exibe os resultados
    printf("Quantidade de numeros no intervalo [0,25]: %d\n", intervalo1);
    printf("Quantidade de numeros no intervalo [26,50]: %d\n", intervalo2);
    printf("Quantidade de numeros no intervalo [51,75]: %d\n", intervalo3);
    printf("Quantidade de numeros no intervalo [76,100]: %d\n", intervalo4);

    return 0;
}