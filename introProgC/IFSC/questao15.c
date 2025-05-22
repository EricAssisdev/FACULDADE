/* 15. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em
uma viagem, utilizando um automóvel que faz 12Km por litro. Para obter o
cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média
durante ela. Desta forma, será possível obter a distância percorrida com a
fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância,
basta calcular a quantidade de litros de combustível utilizada na viagem com a
fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os
valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem */

#include <stdio.h>

int main()
{
    int autonomia = 12;  // km por litro
    float velocidadeMedia, litrosUsados, tempoGasto, distancia;
    
    printf("Informe o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempoGasto);
    
    printf("Informe a velocidade media durante a viagem (em km/h): ");
    scanf("%f", &velocidadeMedia);
    
    distancia = tempoGasto * velocidadeMedia;
    litrosUsados = distancia / autonomia;
    
    printf("\nResultados da viagem:\n");
    printf("Velocidade media: %.2f km/h\n", velocidadeMedia);
    printf("Tempo gasto na viagem: %.2f horas\n", tempoGasto);
    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Litros de combustivel usados: %.2f L\n", litrosUsados);
    
    return 0;
}