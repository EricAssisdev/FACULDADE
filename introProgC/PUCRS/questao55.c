/*55. Faça uma algoritmo que receba duas datas 
e retorne a diferença entre elas em dias.*/

#include <stdio.h>
#include <stdlib.h>  // Para a função abs

int dias_desde_referencia(int dia, int mes, int ano) {
    return ano * 365 + mes * 30 + dia;  // Aproximação: 365 dias/ano, 30 dias/mês
}

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);
    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    int dias1 = dias_desde_referencia(dia1, mes1, ano1);
    int dias2 = dias_desde_referencia(dia2, mes2, ano2);
    int diferenca = abs(dias2 - dias1);

    printf("A diferenca em dias e: %d\n", diferenca);

    return 0;
}