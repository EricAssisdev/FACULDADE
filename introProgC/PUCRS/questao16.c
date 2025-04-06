/* 16. Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez, e escreve uma tabela com cabeçalho, que deve ser repetido a cada 20 linhas. A
tabela conterá o valor lido, seu quadrado, seu cubo e sua raiz quadrada. */

#include <stdio.h>
#include <math.h> // Para usar a função sqrt (raiz quadrada)

int main(){
    int i = 0; // Contador de linhas
    double valor; // Variável para armazenar o valor lido
    double quadrado, cubo, raizQuadrada; // Variáveis para armazenar os resultados

    printf("Digite um valor (negativo para sair): ");
    scanf("%lf", &valor); // Lê o primeiro valor

    while (valor >= 0) { // Enquanto o valor for não negativo
        i++; // Incrementa o contador de linhas

        // Calcula os resultados
        quadrado = valor * valor;
        cubo = valor * valor * valor;
        raizQuadrada = sqrt(valor);

        // Exibe os resultados
        printf("Valor: %.2f | Quadrado: %.2f | Cubo: %.2f | Raiz Quadrada: %.2f\n", valor, quadrado, cubo, raizQuadrada);

        // Verifica se é necessário imprimir o cabeçalho novamente
        if (i % 20 == 0) {
            printf("\nCabeçalho da tabela:\n");
            printf("Valor | Quadrado | Cubo | Raiz Quadrada\n");
            printf("-----------------------------------------\n");
        }

        // Lê o próximo valor
        printf("Digite um valor (negativo para sair): ");
        scanf("%lf", &valor);
    }

    return 0;
}