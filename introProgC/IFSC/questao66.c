#include <stdio.h>

int main() {
    int a, b, maior, menor;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}