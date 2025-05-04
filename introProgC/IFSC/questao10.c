/*10. Faça um algoritmo que:
a) Leia um número inteiro;
b) Leia um segundo número inteiro;
c) Efetue a adição dos dois valores;
d) Apresente o valor calculado*/

#include <stdio.h>

int main (){
    int n1, n2, soma;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma dos 2 numeros eh %d", soma);
}