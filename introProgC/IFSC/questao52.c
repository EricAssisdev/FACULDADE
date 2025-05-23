#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    if (a == b) printf("Iguais\n");
    else {
        printf("Diferentes\n");
        if (a > b) printf("Maior: %d\nMenor: %d\n", a, b);
        else printf("Maior: %d\nMenor: %d\n", b, a);
    }
    return 0;
}