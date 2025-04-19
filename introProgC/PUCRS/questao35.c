/* 35. Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a altura e o sexo de uma pessoa (código=1, masculino código=2, feminino),
calcule e mostre o seguinte:
a) a maior e a menor altura da turma
b) a média da altura das mulheres
c) a média da altura da turma. */
#include <stdio.h>
int main() {
    float altura, alturaMaisAlta, alturaMaisBaixa;
    int sexo, i = 0;
    int quantidadeMulheres = 0;  
    float alturaMulheres = 0.0;  
    float mediaMulheres, mediaTurma;
    float somaAltura = 0;
    
    alturaMaisAlta = 0.0;
    alturaMaisBaixa = 1000.0;
    
    
    while (i < 50) {  
        printf("Informe a altura da pessoa %d: ", i+1);
        scanf("%f", &altura);
        printf("Informe o sexo da pessoa %d (1 = masculino ou 2 = feminino): ", i+1);
        scanf("%d", &sexo);
        
        // Verifica maior e menor altura
        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
        }
        if(altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
        }
        
        // Acumula dados para cálculo das médias
        if (sexo == 2){
            alturaMulheres += altura;
            quantidadeMulheres++;
        }
        
        somaAltura += altura;
        i++;
    }
    
    // Cálculo das médias
    if (quantidadeMulheres > 0) {
        mediaMulheres = alturaMulheres / quantidadeMulheres;
    } else {
        mediaMulheres = 0.0;  // Caso não tenha mulheres
    }
    
    mediaTurma = somaAltura / 50;  
    
    // Exibição dos resultados
    printf("A maior e a menor altura da turma eh: maior: %.2f e menor: %.2f\n", alturaMaisAlta, alturaMaisBaixa);
    printf("A media da altura entre as mulheres eh: %.2f\n", mediaMulheres);
    printf("A media da altura da turma eh: %.2f", mediaTurma);
    
    return 0;
}