/* 41. Faça um algoritmo que leia as três notas de 50 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10
Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem
"Reprovado", caso contrário. Ao final, mostre a média geral. */
#include <stdio.h>
int main() {
    
    float n1[50], n2[50], n3[50], media[50];
    float mediaGeral = 0.0;
    int i = 0, codAluno = 1, qtdAlunos = 5;
    
    while (i < 5) {
        printf("Digite n1 para o aluno %d: ", codAluno);
        scanf("%f", &n1[i]);
        printf("Digite n2 para o aluno %d: ", codAluno);
        scanf("%f", &n2[i]);
        printf("Digite n3 para o aluno %d: ", codAluno);
        scanf("%f", &n3[i]);
        
        // Calculando a média
        media[i] = (n1[i] + n2[i] + n3[i]) / 3;
        mediaGeral += media[i] / qtdAlunos;
        
        printf("Média do aluno %d: %.2f\n", codAluno, media[i]);
        
        if (media[i] >= 7){
            printf("Aprovado\n");

        } else {
            printf("Reprovado\n");
        }
        
        
        i++;
        codAluno++;

    }
    printf("Media geral da turma: %.2f\n", mediaGeral);
    return 0;
}