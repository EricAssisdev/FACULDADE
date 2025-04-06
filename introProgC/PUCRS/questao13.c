/* 13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o
fatorial deste valor. */

#include <stdio.h>

int main()
{
    int numero, i;
    int fact = 1.0;

    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for(i = 0; i < numero; i++){
        fact = fact * (i + 1);
        
        printf("O fatorial de %d é %d\n", i + 1, fact);
    }

    return 0;
}


