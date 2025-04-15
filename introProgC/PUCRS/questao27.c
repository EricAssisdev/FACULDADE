/*  Escreva um algoritmo que leia 500 valores inteiros e positivos e:
a) encontre o maior valor;
b) encontre o menor valor;
c) calcule a média dos números lidos. */

#include <stdio.h>

int main()
{
    int valor = 1, i, j, maior = -9999999, menor = 9999999;
    float soma = 0.0, media = 0.0;
    
    for (i = 1; i <= 5; i++){
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &valor);
        
            if(valor > maior ){
                maior = valor;
            }
            if (valor < menor ){
                menor = valor;
            }
        
        soma += valor;
        media = soma / i;
    };
    
    printf("A maior valor eh: %d\n", maior);
    printf("A menor valor eh: %d\n", menor);
    printf("A media dos valores eh: %.2f\n", media);
    return 0;
}