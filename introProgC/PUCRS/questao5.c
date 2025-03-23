#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    int soma = 0;
    int quantidade = 0;

    printf("Digite valores inteiros positivos (um valor negativo para encerrar):\n");

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

    system("pause");
    return 0;
}