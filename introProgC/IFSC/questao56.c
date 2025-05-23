#include <stdio.h>

int main() {
    int a, b, c, maior;
    printf("Digite três valores: ");
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("%d %d %d\n", a, b, c);
    printf("%d é o maior\n", maior);
    return 0;
}