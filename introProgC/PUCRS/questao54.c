/*54. Faça uma algoritmo que receba 2 numeros e divida o intervalo entre eles em 3 partes iguais. 
Obs. Faça a consistência para que os extremos não sejam iguais.*/

#include <stdio.h>

int main() {
    float A, B, tamanho_intervalo, tamanho_parte, ponto1, ponto2;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);

    if (A == B) {
        printf("Os extremos devem ser diferentes\n");
    } else {
        if (A > B) {
            float temp = A;
            A = B;
            B = temp;
        }
        tamanho_intervalo = B - A;
        tamanho_parte = tamanho_intervalo / 3;
        ponto1 = A + tamanho_parte;
        ponto2 = A + 2 * tamanho_parte;
        printf("Os pontos que dividem o intervalo sao: %.2f e %.2f\n", ponto1, ponto2);
    }

    return 0;
}