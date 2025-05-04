/* 45. Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Faça um algoritmo que leia
as informações coletadas e mostre as seguintes informações: (use o comando repita-até)
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;
d) percentual de pessoas com idade entre 18 e 35 anos (inclusive). */

#include <stdio.h>

int main()
{
    int sexo, idade;
    int totalMulheres = 0, totalEntre18e35 = 0, totalHomens = 0, idadeTotal = 0, totalIdadeHomens = 0, i = 0;
    float altura, mediaIdadeGrupo = 0, mediaAlturaMulheres = 0, mediaidadeHomens = 0, porcentoIdade = 0;
    float totalAlturaMulheres = 0;

    // Loop para coletar dados de 5 pessoas
    do {
        printf("Digite seu sexo (0 - feminino | 1 - masculino): ");
        scanf("%d", &sexo);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);

        // Acumuladores
        idadeTotal += idade;

        if (sexo == 0) {
            totalMulheres++;
            totalAlturaMulheres += altura;
        }
        if (sexo == 1) {
            totalHomens++;
            totalIdadeHomens += idade;
        }

        if (idade >= 18 && idade <= 35) {
            totalEntre18e35++;
        }
        i++;
    } while (i < 5);

    // Cálculos finais após coletar todos os dados
    if (i > 0) {
        mediaIdadeGrupo = (float)idadeTotal / i; // Média do grupo
    }
    if (totalMulheres > 0) {
        mediaAlturaMulheres = totalAlturaMulheres / totalMulheres; // Média da altura das mulheres
    }
    if (totalHomens > 0) {
        mediaidadeHomens = (float)totalIdadeHomens / totalHomens; // Média da idade dos homens
    }
    if (i > 0) {
        porcentoIdade = (float)totalEntre18e35 / i * 100; // Percentual entre 18 e 35 anos
    }

    // Exibir resultados
    printf("\nMédia da idade do grupo: %.2f\n", mediaIdadeGrupo);
    printf("Média da altura das mulheres: %.2f\n", mediaAlturaMulheres);
    printf("Média da idade dos homens: %.2f\n", mediaidadeHomens);
    printf("Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", porcentoIdade);

    return 0;
}