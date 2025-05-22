/* 33. Algoritmo que calcule a média ponderada de três notas com pesos 2, 3 e 5 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);
    
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);
    printf("A média final é: %.2f\n", media);
    return 0;
}