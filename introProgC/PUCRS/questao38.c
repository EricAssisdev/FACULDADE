#include <stdio.h>

int main() {
    long long int produto = 1; // Começa com 1 para multiplicação
    int i = 92;                // Começa em 92
    int j, eh_primo;

    printf("Programa para calcular o produto dos números primos entre 92 e 1478\n");

    // Loop while para verificar cada número de 92 a 1478
    while (i <= 1478) {
        eh_primo = 1; // Começa assumindo que o número é primo
        j = 2;        // Começa testando divisores a partir de 2

        // Loop while para testar divisores de 2 até i/2
        while (j <= i / 2) {
            if (i % j == 0) {
                eh_primo = 0; // Não é primo
                break;        // Sai do loop, não precisa testar mais
            }
            j++; // Incrementa o divisor
        }

        // Se for primo, multiplica no produto
        if (eh_primo == 1 && i > 1) {
            produto *= i;
        }

        i++; // Incrementa i para o próximo número
    }

    printf("O produto dos números primos é: %lld\n", produto);

    return 0;
}