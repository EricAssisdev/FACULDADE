#include <stdio.h>

int main() {
    int a, b, c, menor;
    printf("Digite três números distintos: ");
    scanf("%d %d %d", &a, &b, &c);
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    printf("O menor é: %d\n", menor);
    return 0;
}