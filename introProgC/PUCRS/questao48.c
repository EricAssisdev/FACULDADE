/*48. Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando (use o comando CASO):
a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário
b) a tabela de conceitos segue abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A*/

#include <stdio.h>

int main() {
    int matricula, categoria;
    float nota;
    char conceito;

    for (int i = 1; i <= 75; i++) {
        printf("Digite o numero de matricula do aluno %d: ", i);
        scanf("%d", &matricula);
        printf("Digite a nota final do aluno %d: ", i);
        scanf("%f", &nota);

        // Categorizar a nota em um valor inteiro
        if (nota >= 0.0 && nota <= 4.9) {
            categoria = 1;
        } else if (nota >= 5.0 && nota <= 6.9) {
            categoria = 2;
        } else if (nota >= 7.0 && nota <= 8.9) {
            categoria = 3;
        } else if (nota >= 9.0 && nota <= 10.0) {
            categoria = 4;
        } else {
            categoria = 0;
        }

        // Usar switch (equivalente ao CASO)
        switch (categoria) {
            case 1:
                conceito = 'D';
                printf("Aluno %d - Conceito: %c\n", matricula, conceito);
                break;
            case 2:
                conceito = 'C';
                printf("Aluno %d - Conceito: %c\n", matricula, conceito);
                break;
            case 3:
                conceito = 'B';
                printf("Aluno %d - Conceito: %c\n", matricula, conceito);
                break;
            case 4:
                conceito = 'A';
                printf("Aluno %d - Conceito: %c\n", matricula, conceito);
                break;
            default:
                printf("Nota inválida para o aluno %d\n", matricula);
                break;
        }
    }

    return 0;
}
