/* 47. Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles anunciando um bônus especial.
Escreva um algoritmo que leia o nome do cliente e o valor das suas compras no ano passado e calcule um bônus de 10% se o valor 
das compras for menor que 500.000 e de 15 %, caso contrário. */

#include <stdio.h>

int main()
{
    int i, porcento10 = 10, porcento15 = 15;
    float valorCompra, bonus;
    char cliente[50];
    
    for (i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        scanf(" %s", cliente);
        printf("Informe o valor das suas compras: ");
        scanf("%f", &valorCompra);
        
        if (valorCompra >= 500000) {
            bonus = valorCompra * 0.10;
            printf ("Sua porcentagem foi de %d%\n", porcento10);
            printf("Seu valor eh de %.2f\n", bonus);
            
        }
        if (valorCompra < 500000) {
            bonus = valorCompra * 0.15;
            printf ("Sua porcentagem foi de %d%\n", porcento15);
            printf("Seu valor eh de %.2f\n", bonus);
        }
        
    }
    return 0;
}
