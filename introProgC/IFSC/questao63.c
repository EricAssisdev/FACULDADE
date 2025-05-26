#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if(codigo == 1001) {
        preco = 5.32;
    } else if(codigo == 1324) {
        preco = 6.45;
    } else if(codigo == 6548) {
        preco = 2.37;
    } else if(codigo == 987) {
        preco = 5.32;
    } else if(codigo == 7623) {
        preco = 6.45;
    } else {
        printf("Código de produto inválido!\n");
        return 1;
    }

    total = preco * quantidade;
    printf("Preço total a pagar: R$ %.2f\n", total);

    return 0;
}