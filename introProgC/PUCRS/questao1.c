/* 1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação. */

#include <stdio.h>

int main() {
       
    int a,  contarNegativos = 0;
    int i;
  
    for (i = 1; i <= 5; i++) {
        printf("Digite o valor %d: \n", i);
        scanf("%d", &a);
        if (a < 0){
            contarNegativos++;
        }
    }
    
    printf("Quantidade de valores negativos: %d\n", contarNegativos);
    
    printf("Pressione Enter para sair...\n");
    getchar(); 
    getchar();
    return 0;
}