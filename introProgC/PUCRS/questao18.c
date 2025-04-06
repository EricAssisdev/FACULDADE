/* 18. Escrever um algoritmo que lê um número não determinado de valores para m, todos inteiros e positivos, um de cada vez. Se m for par, verificar quantos divisores possui e
escrever esta informação. Se m for ímpar e menor do que 10 calcular e escrever o fatorial de m. Se m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros
de 1 até m. */

#include <stdio.h>

int main(){
    int m, i, divisores = 0; // Declaração das variáveis
    long long fatorial = 1; // Variável para armazenar o fatorial
    int soma = 0; // Variável para armazenar a soma dos inteiros

    // Laço para ler os valores de m
    while (1) {
        printf("Digite um valor inteiro e positivo (0 para sair): ");
        scanf("%d", &m); // Lê o valor de m

        // Verifica se o valor é zero para encerrar o loop
        if (m == 0) {
            break; // Sai do loop
        }

        // Verifica se m é par
        if (m % 2 == 0) {
            // Calcula o número de divisores de m
            for (i = 1; i <= m; i++) {
                if (m % i == 0) {
                    divisores++; // Incrementa o contador de divisores
                }
            }
            printf("O numero %d e par e possui %d divisores.\n", m, divisores);
            divisores = 0; // Reseta o contador de divisores para o próximo número
        } else { // Se m for ímpar
            if (m < 10) { // Se m for menor que 10
                // Calcula o fatorial de m
                for (i = 1; i <= m; i++) {
                    fatorial *= i; // Multiplica para calcular o fatorial
                }
                printf("O numero %d e impar e menor que 10. Seu fatorial e: %lld\n", m, fatorial);
                fatorial = 1; // Reseta o fatorial para o próximo número
            } else { // Se m for maior ou igual a 10
                // Calcula a soma dos inteiros de 1 até m
                for (i = 1; i <= m; i++) {
                    soma += i; // Adiciona à soma
                }
                printf("O numero %d e impar e maior ou igual a 10. A soma dos inteiros de 1 ate %d e: %d\n", m, m, soma);
                soma = 0; // Reseta a soma para o próximo número
            }
        }
    }
}