#include <stdio.h>

int main() {
    int opcao, num1, num2, num3;
    printf("Digite Opção (2, 3 ou 4): ");
    scanf("%d", &opcao);
    printf("Digite Num1: ");
    scanf("%d", &num1);
    printf("Digite Num2: ");
    scanf("%d", &num2);
    printf("Digite Num3: ");
    scanf("%d", &num3);

    if (opcao == 2) printf("%d\n", num1);
    else if (opcao == 3) printf("%d\n", num2);
    else if (opcao == 4) printf("%d\n", num3);
    return 0;
}