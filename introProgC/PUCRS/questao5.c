/* 5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor
negativo */

#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    int quantidade = 0;

    printf("Digite valores inteiros positivos (um valor negativo para encerrar e saber a media):\n");

    while (1) { // Loop infinito
        printf("Digite um valor: ");
        scanf("%d", &valor);

        // Verifica se o valor é negativo
        if (valor < 0) {
            break; // Sai do loop
        }

        // Soma o valor e incrementa a quantidade
        soma += valor;
        quantidade++;
    }

    // Verifica se pelo menos um valor foi inserido
    if (quantidade > 0) {
        double media = (double)soma / quantidade; // Calcula a média
        printf("A media dos valores inseridos e: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }
    

    printf("Programa encerrado.\n");

    return 0;
}