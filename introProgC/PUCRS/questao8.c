/* 8. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0). */

#include <stdio.h>

int main() {
    
    int numero;
    int somaPares = 0;
    int quantidadePares = 0;
    
    do {
        printf("Digite um numero (digite 0 para finalizar): ");
        scanf("%d", &numero);
        
        if (numero % 2 == 0 && numero != 0){
            somaPares += numero;
            quantidadePares++;
        }
        
    } while (numero != 0);
    
    if(quantidadePares > 0){
        float media = (float)somaPares / quantidadePares;
        printf("A media dos numeros e: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }
    
    return 0;
}
