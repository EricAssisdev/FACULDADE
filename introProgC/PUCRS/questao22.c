/* 22. Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
a) a média de salário do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa. (Use o comando enquanto-faça e não use vetores ou matrizes) */

#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float salario;
    float soma_salarios = 0.0;
    int contador = 0;
    int quantidade_mulheres_salario_baixo = 0;
    int maior_idade = 0;
    int menor_idade = 0;
    int primeira_idade = 1; // Flag para verificar a primeira idade

    printf("Digite os dados da pesquisa (idade negativa para encerrar):\n");

    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);
        
        if (idade < 0) {
            break; // Encerra a entrada de dados se a idade for negativa
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); // O espaço antes de %c é para ignorar espaços em branco
        printf("Salário: ");
        scanf("%f", &salario);

        // Acumula os dados
        soma_salarios += salario;
        contador++;

        // Verifica a maior e menor idade
        if (primeira_idade) {
            maior_idade = idade;
            menor_idade = idade;
            primeira_idade = 0; // Desativa a flag após a primeira entrada
        } else {
            if (idade > maior_idade) {
                maior_idade = idade;
            }
            if (idade < menor_idade) {
                menor_idade = idade;
            }
        }

        // Conta mulheres com salário até R$100,00
        if (sexo == 'F' || sexo == 'f') {
            if (salario <= 100.0) {
                quantidade_mulheres_salario_baixo++;
            }
        }
    }

    // Exibe os resultados
    if (contador > 0) {
        printf("Média de salário do grupo: R$%.2f\n", soma_salarios / contador);
        printf("Maior idade do grupo: %d\n", maior_idade);
        printf("Menor idade do grupo: %d\n", menor_idade);
        printf("Quantidade de mulheres com salário até R$100,00: %d\n", quantidade_mulheres_salario_baixo);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}