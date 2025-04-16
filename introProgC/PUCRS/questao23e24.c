#include <stdio.h>
#include <string.h>
int main()
{
	char sexo, olhos, cabelos;
	int idade = 0, totFem = 0;

	printf("Digite os dados conforme solicitado (idade -1 para encerrar)\n");
	printf("Para sexo: 'm' (masculino) ou 'f' (feminino)\n");
	printf("Para olhos: 'v' (verdes), 'p' (preto), 'c' (castanhos), etc.\n");
	printf("Para cabelos: 'l' (louros), 'c' (castanhos), 'p' (pretos), etc.\n\n");

	while(idade != -1) {
		printf("Informe a idade (-1 para encerrar): ");
		scanf("%d", &idade);

		if(idade == -1) break;  // Sai do loop se a idade for -1

		getchar();  // Limpa o buffer de entrada

		printf("Informe o sexo (m/f): ");
		scanf("%c", &sexo);
		getchar();

		printf("Informe a cor dos olhos: ");
		scanf("%c", &olhos);
		getchar();

		printf("Informe a cor do cabelo: ");
		scanf("%c", &cabelos);
		getchar();

		if((sexo == 'f') && (idade >= 18) && (idade <= 35) && (olhos == 'v') && (cabelos == 'l')) {
			totFem++;
		}
	}

	printf("\nTotal de pessoas do sexo feminino, entre 18 e 35 anos, com olhos verdes e cabelos louros: %d\n", totFem);

	return 0;
}