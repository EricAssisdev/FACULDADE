#include <stdio.h>
int main()
{
    int a, b, i, contador = 0;
    
    while (contador < 5) {
        printf("Digite um par de valores a b (a < b), inteiros e positivos: ");
        scanf("%d %d", &a, &b);
        
        if (a > 0 && b > 0 && a < b) {
            printf("Números pares entre %d e %d: ", a, b);
            
            // Loop de a até b
            for (i = a; i <= b; i++) {
                // Verificar se é par (i % 2 == 0)
                if (i % 2 == 0) {
                    printf("%d ", i);
                }
            }
            printf("\n");
            contador++; // Incrementa apenas quando os valores são válidos
        } else {
            printf("Valores inválidos! a e b devem ser positivos e a < b.\n");
        }
    }
    return 0;
}