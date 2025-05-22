/* 35. Algoritmo que verifique se um candidato foi aprovado com base nas notas e média */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3, media;
    printf("Digite o nome do candidato: ");
    scanf("%s", nome);
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    printf("Nome: %s\n", nome);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média: %.2f\n", media);
    
    if (media > 7.0 && nota1 >= 5.0 && nota2 >= 5.0 && nota3 >= 5.0) {
        printf("Aprovado\n");
    } else {
        printf("Não aprovado\n");
    }
    return 0;
}