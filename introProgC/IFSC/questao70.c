#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("Verdadeiro (é par)\n");
    } else {
        printf("Falso (não é par)\n");
    }

    return 0;
}