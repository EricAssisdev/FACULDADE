/* 42. Faça um algoritmo que calcule a seguinte soma: H = 10 + 10 + 10 + ... + 10
O algoritmo deve ler um número n (inteiro e positivo) e mostrar o resultado final de H. A soma deve ser calculada apenas uma vez. */
#include <stdio.h>
int main() {
    int somaH = 0, n, i;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        somaH += 10;
        
    }
    printf("%d", somaH);
    return 0;
}

