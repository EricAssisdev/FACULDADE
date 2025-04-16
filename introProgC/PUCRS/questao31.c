#include <stdio.h>
int main()
{

    int valores, quantosDentro = 0, quantosFora = 0;
    int i = 1;
    
    while (i <= 10) {
        
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &valores);
        i++;
        
        if(valores >= 10 && valores <= 20) {
            quantosDentro++;
        }else {
            quantosFora++;
        }
    }
    printf("A quantidade de numeros dentro do intervalo entre 10 e 20 eh: %d\n", quantosDentro);
    printf("A quantidade fora do intervalo eh:%d", quantosFora);

	return 0;
}