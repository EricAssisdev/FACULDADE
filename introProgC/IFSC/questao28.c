/* 28. Dado um número de três algarismos N = CDU (onde C é o algarismo das
centenas, D é o algarismo das dezenas e U o algarismo das unidades),
considere o número M constituído pelos algarismos de N em ordem inversa, isto
é, M = UDC. Gerar M a partir de N (p.ex.: N = 123 -> M = 321).*/

#include <stdio.h>

int main() {
    int numero, invertido = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int original = numero;
    
    while (numero > 0) {
        int digito = numero % 10;      // Obtém o último dígito
        invertido = invertido * 10 + digito;  // Adiciona o dígito ao número invertido
        numero = numero / 10;          // Remove o último dígito do número original
    }
    
    printf("Número original: %d\n", original);
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}