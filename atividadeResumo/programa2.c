/*
 * Programa 2: Conversão de Temperaturas
 * Exercício: ler uma temperatura em graus Celsius e converter para Fahrenheit.
 * Fórmula: F = (C * 9/5) + 32
 * Estrutura: sequencial (sem decisões e sem laços).
 */

#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;
    
    // Entrada de dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    // Processamento (conversão)
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    // Saída de dados
    printf("\n%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
    
    return 0;
}
