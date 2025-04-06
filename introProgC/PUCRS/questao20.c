/* 20. Faça um algoritmo que leia vários números inteiros e calcule o somatório dos números negativos. O fim da leitura será indicado pelo número 0. */

#include <stdio.h>

int main(){
    int numero, somaNegativos = 0; // Variáveis para armazenar o número lido e a soma dos negativos

    // Laço para ler os números até que o usuário digite 0
    while (1) {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero); // Lê o número digitado pelo usuário

        if (numero == 0) { // Se o número for 0, sai do loop
            break;
        }

        if (numero < 0) { // Se o número for negativo
            somaNegativos += numero; // Adiciona à soma dos negativos
        }
    }

    // Exibe a soma dos números negativos
    printf("A soma dos numeros negativos e: %d\n", somaNegativos);

    return 0;
}