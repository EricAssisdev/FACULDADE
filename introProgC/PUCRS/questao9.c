/* 9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado. */

#include <stdio.h>

int main() {
   
    int valores,  maior = -9999999, menor = 9999999;
    int i;
    
    printf("Voce vai precisar digitar 50 valores\n");
    
    for (i = 0; i < 50; i++) {
        
        printf("Digite um valor: ");
        scanf("%d", &valores);

        if (valores > maior ){
            maior = valores;
        } 
        
        if (valores < menor){
            menor = valores;
        }
    }
    printf("O maior valor é: %d\nE o menor valor é: %d", maior, menor);
    
    return 0;
}
