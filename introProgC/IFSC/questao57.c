#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);
    if (a % b == 0 || b % a == 0)
        printf("São múltiplos\n");
    else
        printf("Não são múltiplos\n");
    return 0;
}