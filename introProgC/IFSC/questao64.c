#include <stdio.h>
#include <string.h>

int main() {
    char codigo[10];
    int quantidade;
    float preco, total;

    printf("Digite o código do produto: ");
    scanf("%s", codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if(strcmp(codigo, "ABCD") == 0) {
        preco = 5.30;
    } else if(strcmp(codigo, "XYPK") == 0) {
        preco = 6.00;
    } else if(strcmp(codigo, "KLMP") == 0) {
        preco = 3.20;
    } else if(strcmp(codigo, "QRST") == 0) {
        preco = 2.50;
    } else {
        printf("Código inválido!\n");
        return 1;
    }

    total = preco * quantidade;
    printf("Preço total: R$ %.2f\n", total);

    return 0;
}