#include <stdio.h>

int main() {
    int x, y, z;
    printf("Digite os três lados: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z)
            printf("Triângulo equilátero\n");
        else if (x == y || x == z || y == z)
            printf("Triângulo isósceles\n");
        else
            printf("Triângulo escaleno\n");
    } else {
        printf("Não formam um triângulo\n");
    }
    return 0;
}