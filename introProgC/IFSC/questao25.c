/*25. Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o
quociente e o resto da divisão inteira de Int1 por Int2.*/

#include <stdio.h>

int main()
{
	int n1, n2, resto;
	float quociente;
	
	printf("Digite o número 1: ");
	scanf("%d", &n1);
	printf("Digite o número 2: ");
	scanf("%d", &n2);
	
	quociente = (float)n1 / n2;
	resto = n1 % n2;
	
	printf("O resultado da divisão é: %.2f\n", quociente);
	printf("O resto é: %d", resto);
	
	return 0;
}