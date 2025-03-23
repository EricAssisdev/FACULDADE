#include <stdio.h>
#include <stdlib.h>

int main() {

    double somaSalarios = 0.0;
    int somaFilhos = 0;
    int totalPessoas = 0;
    int contSalarioAteCem = 0;
    double maiorSalario = 0.0; // Começa com 0, será atualizado
    double salario;
    int filhos;

    printf("Digite o salario (negativo para encerrar): ");
    scanf("%lf", &salario);

    while (salario >= 0)
    {
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        somaSalarios = somaSalarios + salario;
        somaFilhos = somaFilhos + filhos;
        totalPessoas = totalPessoas + 1;

        if (salario <= 100.0)
        {
            contSalarioAteCem = contSalarioAteCem + 1;
        }

        if (totalPessoas == 1 || salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        printf("Digite o salario (negativo para encerrar): ");
        scanf("%lf", &salario);
    }

    if (totalPessoas > 0)
    {
        double mediaSalarios = somaSalarios / totalPessoas;
        double mediaFilhos = (double)somaFilhos / totalPessoas;
        double percentual = (double)contSalarioAteCem / totalPessoas;

        printf("Media do salario: %.2f\n", mediaSalarios);
        printf("Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual de salarios ate R$100: %.2f%%\n", percentual);
    }
    else
    {
        printf("Nenhum dado foi inserido.\n");
    }

    system ("pause");
    return 0;

}
