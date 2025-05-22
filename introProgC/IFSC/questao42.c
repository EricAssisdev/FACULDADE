#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    float preco, desconto, preco_com_desconto, total_pagar = 0;
    int i;

    printf("Os itens disponíveis são: Livro, Xicara, Cadeira, Panela\n");

    // Loop para processar 4 itens
    for (i = 0; i < 4; i++) {
        printf("\nDigite o nome do item %d: ", i + 1);
        scanf("%s", nome);

        // Comparação de strings com strcmp
        if (strcmp(nome, "livro") == 0 || strcmp(nome, "Livro") == 0) {
            preco = 89.99;
            desconto = preco * 0.10; // 10% de desconto
        } else if (strcmp(nome, "xicara") == 0 || strcmp(nome, "Xicara") == 0) {
            preco = 29.99;
            desconto = preco * 0.03; // 3% de desconto
        } else if (strcmp(nome, "cadeira") == 0 || strcmp(nome, "Cadeira") == 0) {
            preco = 249.99;
            desconto = preco * 0.15; // 15% de desconto
        } else if (strcmp(nome, "panela") == 0 || strcmp(nome, "Panela") == 0) {
            preco = 50.00;
            desconto = preco * 0.05; // 5% de desconto
        } else {
            printf("Item inválido! Tente novamente.\n");
            i--; // Decrementa para repetir a iteração
            continue;
        }

        preco_com_desconto = preco - desconto;
        total_pagar += preco_com_desconto;

        // Exibe informações do item
        printf("Item: %s\n", nome);
        printf("Preço original: %.2f\n", preco);
        printf("Desconto: %.2f\n", desconto);
        printf("Preço com desconto: %.2f\n\n", preco_com_desconto);
    }

    // Exibe o total a pagar
    printf("Total a pagar: %.2f\n", total_pagar);

    return 0;
}