/* 34. Escrever um algoritmo que leia 5 conjuntos de 2 valores, o primeiro 
representando o número de um aluno, e o segundo representando a sua altura
em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do 
aluno mais alto e do mais baixo, junto com suas alturas */

#include <stdio.h>

int main() {
    int i;
    int numeroAluno, numeroMaisAlto, numeroMaisBaixo;
    int altura, alturaMaisAlta, alturaMaisBaixa;
    
    // Inicializa as variáveis com os valores do primeiro aluno
    printf("Digite o número do aluno 1: ");
    scanf("%d", &numeroAluno);
    printf("Digite a altura do aluno 1 (em cm): ");
    scanf("%d", &altura);
    
    // O primeiro aluno é tanto o mais alto quanto o mais baixo inicialmente
    numeroMaisAlto = numeroAluno;
    numeroMaisBaixo = numeroAluno;
    alturaMaisAlta = altura;
    alturaMaisBaixa = altura;
    
    // Lê os dados dos outros 4 alunos
    for(i = 2; i <= 5; i++) {
        printf("Digite o número do aluno %d: ", i);
        scanf("%d", &numeroAluno);
        printf("Digite a altura do aluno %d (em cm): ", i);
        scanf("%d", &altura);
        
        // Verifica se este aluno é mais alto que o atual mais alto
        if(altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            numeroMaisAlto = numeroAluno;
        }
        
        // Verifica se este aluno é mais baixo que o atual mais baixo
        if(altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            numeroMaisBaixo = numeroAluno;
        }
    }
    
    // Mostra os resultados
    printf("\nAluno mais alto:\n");
    printf("Número: %d\n", numeroMaisAlto);
    printf("Altura: %d cm\n", alturaMaisAlta);
    
    printf("\nAluno mais baixo:\n");
    printf("Número: %d\n", numeroMaisBaixo);
    printf("Altura: %d cm\n", alturaMaisBaixa);
    
    return 0;
}