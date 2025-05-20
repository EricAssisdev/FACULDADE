/*
 * Programa 1: Média Aritmética de Três Notas
 * Exercício: ler três notas de um aluno e calcular a média.
 * Estrutura: sequencial (sem decisões e sem laços).
 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;
    
    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // Processamento (média aritmética)
    media = (nota1 + nota2 + nota3) / 3.0;
    
    // Saída de dados
    printf("\nA média das três notas é: %.2f\n", media);
    
    return 0;
}
