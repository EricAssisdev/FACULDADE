/* 14. Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de
valores negativos e o percentual de valores negativos e positivos. Mostre os resultados. */

#include <stdio.h>

int main() {
    int n, negativos = 0, positivos = 0, totalNumeros = 0;
    float soma = 0.0, media = 0.0; 
    int porcentoPositivoNegativo = 0; 

    while (1) { // Loop até o usuário digitar 0
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &n); // Lê o número digitado pelo usuário

        if (n == 0) { // Se o número for 0, sai do loop
            break;
        }

        if (n < 0) { // Se o número for negativo
            negativos++; // Incrementa o contador de negativos
        } else if (n > 0) { // Se o número for positivo
            positivos++; // Incrementa o contador de positivos
        }

        soma += n; // Adiciona o número à soma
        totalNumeros++; // Incrementa o contador de números
    }

    // Verifica se houve entradas válidas antes de calcular e imprimir resultados
    if (totalNumeros > 0) {
        media = soma / totalNumeros; // Calcula a média aritmética
        porcentoPositivoNegativo = (negativos * 100) / (negativos + positivos); // Calcula o percentual de negativos

        printf("Media: %.2f\n", media);
        printf("Porcentagem de negativos: %d%%\n", porcentoPositivoNegativo); // Mostra a porcentagem de negativos
        printf("Quantidade de positivos: %d\n", positivos); // Mostra a quantidade de positivos
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}