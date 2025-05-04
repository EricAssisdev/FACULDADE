/*7. Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula ÁREA = π * RAIO 2 . Utilize as variáveis AREA e RAIO, a constante π (pi =
3,14159) e os operadores aritméticos de multiplicação.*/

#include <stdio.h>
#include <math.h>

int main(){
    int area, raio;
    float pi = 3.14159;
 
    printf("Digite o valor do raio: ");
    scanf("%d", &raio);
    
    area = pi * pow(raio, 2);
    
    printf("A area do circulo e: %d\n", area);
}