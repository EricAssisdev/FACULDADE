/*9. Faça um algoritmo que:
a) Leia o nome;
b) Leia o sobrenome;
c) Concatene o nome com o sobrenome;
d) Apresente o nome completo.*/

#include <stdio.h>
#include <string.h>

int main (){
    char nome[50], sobrenome[50], nomeCompleto[100];

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    // Concatena o nome e o sobrenome
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}