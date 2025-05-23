#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota (0 a 100): ");
    scanf("%d", &nota);
    if (nota <= 49) printf("Insuficiente\n");
    else if (nota <= 64) printf("Regular\n");
    else if (nota <= 84) printf("Bom\n");
    else if (nota <= 100) printf("Ótimo\n");
    return 0;
}