/*
 * Programa 3: Área e Perímetro de um Retângulo
 * Exercício: ler a largura e a altura de um retângulo e calcular:
 * - Área = largura * altura
 * - Perímetro = 2 * (largura + altura)
 * Estrutura: sequencial (sem decisões e sem laços).
 */

#include <stdio.h>

int main() {
    float largura, altura;
    float area, perimetro;
    
    // Entrada de dados
    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);
    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    
    // Processamento
    area = largura * altura;
    perimetro = 2.0 * (largura + altura);
    
    // Saída de dados
    printf("\nÁrea do retângulo: %.2f\n", area);
    printf("Perímetro do retângulo: %.2f\n", perimetro);
    
    return 0;
}
