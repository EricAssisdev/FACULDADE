/* 46. Foi realizada uma pesquisa de algumas características físicas da população de um certa região.
Foram entrevistadas 500 pessoas e coletados os seguintes dados:
a- sexo: M (masculino) e F (feminino)
b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
d- idade
Deseja-se saber:
a maior idade do grupo
a quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos 
e que tenham olhos verdes e cabelos louros. */

#include <stdio.h>

int main()
{
    int idade, i, maiorIdadeGrupo = 0, quantFeminino = 0;
    char sexo, corOlhos, corCabelo;
    
    for (i = 1; i <= 5; i++) {
        printf("Qual seu sexo? (M - masculino | F - feminino): ");
        scanf(" %c", &sexo);
        printf("Qual a cor dos seus olhos? A - azuis, V - verdes e C - castanhos: ");
        scanf(" %c", &corOlhos);        
        printf("Qual a cor do seu cabelo? L - louros, C - castanhos e P - pretos: ");
        scanf(" %c", &corCabelo);     
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        
        if (idade > 0) {
            if (idade > maiorIdadeGrupo){
                maiorIdadeGrupo = idade;
            }
        }
        
        if (sexo == 'f' || sexo == 'F' && idade >= 18 && idade <= 35 && corOlhos == 'v'|| corOlhos == 'V' && corCabelo == 'l' || corCabelo == 'L') {
            quantFeminino++;
        }
        
        i++;
    }
        printf("A quantidade de mulheres cuja idade está entre 18 e 35 anos e que tenham olhos verdes e cabelos louros: %d\n", quantFeminino);
        printf("A maior idade do grupo: %d\n", maiorIdadeGrupo);
    
    printf("%c", sexo);

    return 0;
}