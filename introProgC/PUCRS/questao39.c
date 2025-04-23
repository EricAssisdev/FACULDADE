/* 39. Escrever um algoritmo que gera e escreve os 5 primeiros nC:meros perfeitos. Um nC:mero perfeito C) aquele que C) igual a soma dos seus divisores.
(Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).*/

#include <stdio.h>

int main()
{
	int numero = 1, contadorPerfeitos = 0;

	while (contadorPerfeitos < 5) {
		int soma = 0;

		for (int i = 1; i < numero; i++) {
			if (numero % i == 0) {
				soma += i;
			}
		}

		if (soma == numero) {
			printf("%d eh um numero perfeito\n", numero);
			contadorPerfeitos++;
		}

		numero++;
	}

	return 0;
}