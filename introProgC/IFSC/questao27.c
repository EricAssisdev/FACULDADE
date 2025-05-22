/* 27. Leia um código de cinco algarismos (variável Codigo) e gere o digito verificador
(DigitoV) módulo 7 para o mesmo.Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular
o dígito desejado, com módulo 7 é: DigitoV = resto da divisão de S por 7, onde S = 6*A + 5*B + 4*C + 3*D + 2*E*/

#include<stdio.h>

int main() {
    
    int A, B, C, D, E, S, DigitoV;

   printf("Digite o valor de A: ");
   scanf("%d",&A);
   printf("Digite o valor de B: ");
   scanf("%d",&B);
   printf("Digite o valor de C: ");
   scanf("%d",&C);
   printf("Digite o valor de D: ");
   scanf("%d",&D);
   printf("Digite o valor de E: ");
   scanf("%d",&E);

   S = 6*A + 5*B + 4*C + 3*D + 2*E;

   DigitoV = S % 7;

   printf("\nO dígito verificador módulo 7 é: %d", DigitoV);

   return 0;
}