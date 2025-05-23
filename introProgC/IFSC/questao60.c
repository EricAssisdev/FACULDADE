#include <stdio.h>
#include <string.h>

int main()
{
    int codigoProduto, quantProduto;
    float precoUni, totalPagar;
    char nomeProduto[25];
    
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigoProduto);
    printf("Qual a quantidade desse produto?: ");
    scanf("%d", &quantProduto);
    
    if (codigoProduto == 100) {
        strcpy(nomeProduto, "Cachorro quente");
        precoUni = 1.10;
    }
    else if (codigoProduto == 101) {
        strcpy(nomeProduto, "Bauru simples");
        precoUni = 1.30;
    }
    else if (codigoProduto == 102) {
        strcpy(nomeProduto, "Bauru c/ovo");
        precoUni = 1.50;
    }
    else if (codigoProduto == 103) {
        strcpy(nomeProduto, "Hamburger");
        precoUni = 1.10;
    }
    else if (codigoProduto == 104) {
        strcpy(nomeProduto, "Cheeseburger");
        precoUni = 1.30;
    }
    else if (codigoProduto == 105) {
        strcpy(nomeProduto, "Refrigerante");
        precoUni = 1.00;
    }
    else {
        printf("Codigo invalido!\n");
        return 1;
    }
    
    totalPagar = precoUni * quantProduto;
    
    printf("Voce acabou de comprar %d %s\n", quantProduto, nomeProduto);
    printf("Preco unitario: R$ %.2f\n", precoUni);
    printf("Total a pagar: R$ %.2f\n", totalPagar);
    
    return 0;
}