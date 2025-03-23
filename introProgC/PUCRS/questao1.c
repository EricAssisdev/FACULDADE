#include <stdio.h>
#include <stdlib.h>

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
    
    system ("pause");
    return 0;
}