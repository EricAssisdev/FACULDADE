/*53. Faça um algoritmo que calcule os 
20 primeiros números primos, dados os tres primeiros 1,2 e 3.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int primos[20];
    int count = 2;
    primos[0] = 2;
    primos[1] = 3;
    int candidato = 5;

    while (count < 20) {
        bool e_primo = true;
        for (int i = 0; i < count; i++) {
            if (candidato % primos[i] == 0) {
                e_primo = false;
                break;
            }
        }
        if (e_primo) {
            primos[count] = candidato;
            count++;
        }
        candidato += 2;  // Testa apenas números ímpares
    }

    printf("Os 20 primeiros primos sao: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");

    return 0;
}