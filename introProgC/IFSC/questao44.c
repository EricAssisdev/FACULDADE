#include <stdio.h>

int main() {
    int qtd1, qtd2, qtd3;
    float total1, total2, total3;
    printf("Quantidade vendida do tipo 1: ");
    scanf("%d", &qtd1);
    printf("Quantidade vendida do tipo 2: ");
    scanf("%d", &qtd2);
    printf("Quantidade vendida do tipo 3: ");
    scanf("%d", &qtd3);

    total1 = qtd1 * 0.50;
    total2 = qtd2 * 0.60;
    total3 = qtd3 * 0.75;

    printf("Tipo 1: %d vendidos, Total arrecadado: R$ %.2f\n", qtd1, total1);
    printf("Tipo 2: %d vendidos, Total arrecadado: R$ %.2f\n", qtd2, total2);
    printf("Tipo 3: %d vendidos, Total arrecadado: R$ %.2f\n", qtd3, total3);
    return 0;
}