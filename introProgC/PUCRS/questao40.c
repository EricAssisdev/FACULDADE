/* 40. Escrever um algoritmo que lê um valor n que indica quantos valores devem ser lidos para m, 
valores inteiros e positivos, com leitura de um valor de cada vez. Escreva
uma tabela contendo o valor lido, o somatório dos inteiros de 1 até m e o fatorial de m. */

#include <stdio.h>
int main() {
    int n, m, i = 0;
    
    printf("Digite um numero inteiro e positivo para N: ");
    scanf("%d", &n);
    
    printf("\nValor | Somatorio | Fatorial\n");
    printf("---------------------------\n");
    
    while (i < n) {
        int soma = 0;    // Reinicia para cada valor de m
        int fatorial = 1; // Reinicia para cada valor de m
        int j = 1;        // Reinicia para cada valor de m
        
        printf("Informe um valor para M: ");
        scanf("%d", &m);
        
        // Calcula o somatório e o fatorial
        while(j <= m) {
            soma += j;      // Soma j ao somatório
            fatorial *= j;  // Multiplica j ao fatorial
            j++;
        }
        
        // Imprime os resultados em formato de tabela
        printf("%-5d | %-9d | %-9d\n", m, soma, fatorial);
        
        i++;
    }
    
    return 0;
}