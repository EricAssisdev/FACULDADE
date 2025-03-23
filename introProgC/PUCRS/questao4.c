#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alturas iniciais em centímetros
    int alturaChico = 150; // 1,50 metros
    int alturaZe = 110;    // 1,10 metros

    // Taxas de crescimento em centímetros por ano
    int crescimentoChico = 2;
    int crescimentoZe = 3;

    int anos = 0; // Contador de anos

    // Loop até Zé ultrapassar Chico
    while (alturaZe <= alturaChico) {
        alturaChico += crescimentoChico; // Chico cresce
        alturaZe += crescimentoZe;       // Zé cresce
        anos++;                          // Incrementa o contador de anos
    }

    // Exibe o resultado
    printf("Serao necessarios %d anos para Ze ser maior que Chico.\n", anos);

    system("pause");
    return 0;
}