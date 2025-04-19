#include <stdio.h>
#include <math.h> 

int main()
{
    double x;
    int i = 1;
    double resultado;
    
    printf("Digite um numero inteiro e positivo: ");
    scanf("%lf", &x);
    
    if (x > 0)
    {
        while (i <= 20) 
        {
            resultado = 1.0 / pow(x, i);
            printf("Termo %d: 1/%.0f^%d = %.10f\n", i, x, i, resultado);
            i++;
        }
    } 
    else 
    {
        printf("Não é permitido divisao por 0 ou números negativos");
    }
    
    return 0;
}