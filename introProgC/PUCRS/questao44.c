/*44. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
- código da cidade
- estado (RS, SC, PR, SP, RJ, ...)
- número de veículos de passeio (em 1992)
- número de acidentes de trânsito com vítimas (em 1992)
Deseja-se saber:
a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
b) qual a média de veículos nas cidades brasileiras
c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/
#include <stdio.h>

int main() {
    int codigoCidade, numVeiculos, numAcidentes, i;
    char estado[3];
    float maiorIndice = 0, menorIndice = 9999999, mediaVeiculos = 0, mediaAcidentesRS = 0;
    int totalVeiculos = 0, totalAcidentesRS = 0, totalCidadesRS = 0;
    int cidadeMaiorIndice, cidadeMenorIndice;

    for (i = 0; i < 2; i++) {
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigoCidade);
        printf("Digite o estado (ex: RS, SC, PR): ");
        scanf("%s", estado);
        printf("Digite o numero de veiculos de passeio: ");
        scanf("%d", &numVeiculos);
        printf("Digite o numero de acidentes com vitimas: ");
        scanf("%d", &numAcidentes);

        // Cálculo do índice de acidentes
        float indiceAcidentes = (float)numAcidentes / numVeiculos; // índice por mil veículos

        // Atualiza maior e menor índice
        if (indiceAcidentes > maiorIndice) {
            maiorIndice = indiceAcidentes;
            cidadeMaiorIndice = codigoCidade;
        }
        if (indiceAcidentes < menorIndice) {
            menorIndice = indiceAcidentes;
            cidadeMenorIndice = codigoCidade;
        }

        // Acumula dados para médias
        totalVeiculos += numVeiculos;
        if (estado[0] == 'R' && estado[1] == 'S') { // Verifica se é do Rio Grande do Sul
            totalCidadesRS++;
            totalAcidentesRS += numAcidentes;
            mediaAcidentesRS += indiceAcidentes; // Acumula índice para média
        }
    }

    // Cálculo das médias
    if (totalCidadesRS > 0) {
        mediaAcidentesRS /= totalCidadesRS; // Média de acidentes com vítimas no RS
    }
    mediaVeiculos = (float)totalVeiculos / 200; // Média de veículos nas cidades brasileiras

    // Exibe resultados
    printf("\nMaior indice de acidentes: %.2f na cidade %d\n", maiorIndice, cidadeMaiorIndice);
    printf("Menor indice de acidentes: %.2f na cidade %d\n", menorIndice, cidadeMenorIndice);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas no RS: %.2f\n", mediaAcidentesRS);
}