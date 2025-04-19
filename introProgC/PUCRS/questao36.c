/* 36. Escrever um algoritmo que leia um número N que indica quantos valores devem 
ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor. */
#include <stdio.h>
int main() {
    int n, i, valor;
    
    // Pede quantos valores serão processados
    printf("Digite quantos valores serão processados: ");
    scanf("%d", &n);
    
    // Processa cada um dos n valores
    for (i = 1; i <= n; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &valor);
        
        // Cálculo do fatorial para este valor
        double fatorial = 1.0;
        for (int j = 1; j <= valor; j++) {
            fatorial *= j;
        }
        
        // Exibe o resultado em uma tabela simples
        printf("| Valor: %d | Fatorial: %.0f |\n", valor, fatorial);
    }
   
    return 0;
}