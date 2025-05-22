/* 24. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e
imprima a velocidade em m/s (metros por segundo). */

#include <stdio.h>

float KmToMs(int km) {
   
   float metros;
   
   metros = km / 3.6;
   
   return metros;
}

int main() {
    int km;

    printf("Digite a velocidade em Km/h: ");
    scanf("%d", &km);

    printf("A velocidade em M/s é: %.2f", KmToMs(km));
    return 0;
}