/* 26. Calcular o salário líquido de um funcionário com desconto de 10% para previdência
e 5% de imposto sobre o salário após o desconto da previdência. */

#include <stdio.h>

int main()
{
    float prev = 0.10, imposto = 0.05; 
    float salarioBruto, salarioLiq, descontoPrev, descontoImp, salarioAposPrevidencia;
    
    printf("Digite o salário: ");
    scanf("%f", &salarioBruto);
    
    descontoPrev = salarioBruto * prev;
    salarioAposPrevidencia = salarioBruto - descontoPrev;
    descontoImp = salarioAposPrevidencia * imposto; 
    
    salarioLiq = salarioBruto - (descontoPrev + descontoImp);
    
    printf("Salário líquido: %.2f", salarioLiq);
    
    return 0;
}