/*11. Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
Liquido.*/

#include <stdio.h>

int main() {
    int ht;  // horas trabalhadas
    float vh, pd;  // valor hora e percentual de desconto
    float sb, td, sl;  // salário bruto, total de desconto e salário líquido
    
    printf("Digite suas horas trabalhadas no mes: ");
    scanf("%d", &ht);
    
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &vh);
    
    printf("Digite percentual de desconto: ");
    scanf("%f", &pd);
    
    sb = ht * vh;
    td = (pd/100) * sb;
    sl = sb - td;
   
    printf("---------------------------\n");
    printf("Horas trabalhadas: %d\n", ht);
    printf("Salario bruto: R$ %.2f\n", sb);
    printf("Desconto: R$ %.2f\n", td);
    printf("Salario liquido: R$ %.2f\n", sl);
    
    return 0;
}