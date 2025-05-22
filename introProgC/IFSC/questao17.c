/* 17. Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação dos valores 
entre si, baseando-se na utilização da propriedade distributiva, ou seja, se forem lidas as variáveis A, B, C e D, 
devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com D. */

#include <stdio.h>

int main() {
    float numeros[4];
    float soma, multiplicacao;

    // Lendo os quatro números
    printf("Digite quatro números:\n");
    for (int i = 0; i < 4; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // Calculando e apresentando os resultados
    printf("\nResultados:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            soma = numeros[i] + numeros[j];
            multiplicacao = numeros[i] * numeros[j];
            printf("Soma de %.2f e %.2f: %.2f\n", numeros[i], numeros[j], soma);
            printf("Multiplicação de %.2f e %.2f: %.2f\n", numeros[i], numeros[j], multiplicacao);
        }
    }

    return 0;
}