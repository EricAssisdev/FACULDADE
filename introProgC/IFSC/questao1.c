/*1. Calcule o valor de cada expressão abaixo e indique o tipo do resultado (inteiro ou
real):
a) (20 - 15)/2 b) 20 - 15/2 c) 2*5/20 + 30/15*2
d) 2*(5/20) + 30/(15*2) e) 23 div 4 f) 23 mod 4
g) 35 div 6 + 2 h) 35 div 6 - 2 i) 35 div 6 * 2
j) sqrt(625) k) sqr(20) l) 2 + sqrt(21 div 5)*/

#include <stdio.h>
#include <math.h>

int main() {
    int a = (20 - 15) / 2;
    int b = 20 - 15 / 2;
    int c = 2 * 5 / 20 + 30 / 15 * 2;
    int d = 2 * (5 / 20) + 30 / (15 * 2);
    int e = 23 / 4;
    int f = 23 % 4;
    int g = 35 / 6 + 2;
    int h = 35 / 6 - 2;
    int i = 35 / 6 * 2;
    int j = sqrt(625);
    int k = pow(20, 2);     
    double l = 2 + sqrt(21.0 / 5.0);

    printf("a) Resultado: %d, tipo: inteiro\n", a);
    printf("b) Resultado: %d, tipo: inteiro\n", b);
    printf("c) Resultado: %d, tipo: inteiro\n", c);
    printf("d) Resultado: %d, tipo: inteiro\n", d);
    printf("e) Resultado: %d, tipo: inteiro\n", e);
    printf("f) Resultado: %d, tipo: inteiro\n", f);
    printf("g) Resultado: %d, tipo: inteiro\n", g);
    printf("h) Resultado: %d, tipo: inteiro\n", h);
    printf("i) Resultado: %d, tipo: inteiro\n", i);
    printf("j) Resultado: %d, tipo: inteiro\n", j);   // Ajustado para double
    printf("k) Resultado: %d, tipo: inteiro\n", k);   // Ajustado para double
    printf("l) Resultado: %.10f, tipo: real\n", l);  // Agora consistente

    return 0;
}