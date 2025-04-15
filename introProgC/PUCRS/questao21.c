/* 21. Faça um algoritmo que leia vários números inteiros e positivos e calcule o 
proditório dos números pares. O fim da leitura será indicado pelo número 0. */

#include <stdio.h>

int main(){
    int numero, prodPares = 1; // Variáveis para armazenar o número lido e o produto dos pares

    // Laço para ler os números até que o usuário digite 0
    while (1) {
        printf("Digite um numero inteiro positivo (0 para sair): ");
        scanf("%d", &numero); // Lê o número digitado pelo usuário

        if (numero == 0) { // Se o número for 0, sai do loop
            break;
        }

        if (numero % 2 == 0) { // Se o número for par
            prodPares *= numero; // Multiplica ao produto dos pares
        }
    }

    // Exibe o produto dos números pares
    printf("O produto dos numeros pares e: %d\n", prodPares);

    return 0;
}