/* 7. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O algoritmo deverá ler, além das notas, o código do aluno e deverá ser
encerrado quando o código for igual a zero. */

#include <stdio.h>
 
int main() {
    int codigoAluno;
    float n1, n2, n3;    
    float media;
    
    do {
      
        printf("Digite seu codigo de aluno (0 para sair): ");
        scanf("%d", &codigoAluno);
        
        
        if (codigoAluno != 0) {
            printf("Digite nota 1: ");
            scanf("%f", &n1);
            printf("Digite nota 2: ");
            scanf("%f", &n2);
            printf("Digite nota 3: ");
            scanf("%f", &n3);
            
            media = (n1 + n2 + n3) / 3.0;
            printf("Codigo do aluno: %d - Media: %.2f\n", codigoAluno, media);
        }
        
    } while (codigoAluno != 0);
    
    printf("O programa foi encerrado!\n");
    
    return 0;
}
