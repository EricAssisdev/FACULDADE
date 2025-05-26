#include <stdio.h>

int main() {
    float salarioAtual, novoSalario, aumento;
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);

    if(salarioAtual >= 1500 && salarioAtual < 1750) {
        aumento = salarioAtual * 0.12;
    } else if(salarioAtual >= 1750 && salarioAtual < 2000) {
        aumento = salarioAtual * 0.10;
    } else if(salarioAtual >= 2000 && salarioAtual < 3000) {
        aumento = salarioAtual * 0.07;
    } else if(salarioAtual >= 3000) {
        aumento = salarioAtual * 0.05;
    } else {
        aumento = salarioAtual * 0.15;
    }

    novoSalario = salarioAtual + aumento;
    printf("Novo salário: R$ %.2f\n", novoSalario);
    printf("Aumento: R$ %.2f\n", aumento);

    return 0;
}