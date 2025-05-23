#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int opcao;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Escolha o tipo de média:\n");
    printf("1 - Aritmética\n");
    printf("2 - Ponderada (pesos 3, 3, 4)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        media = (n1 + n2 + n3) / 3;
        printf("Média aritmética: %.2f\n", media);
    } else if (opcao == 2) {
        media = (n1 * 3 + n2 * 3 + n3 * 4) / 10;
        printf("Média ponderada: %.2f\n", media);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}