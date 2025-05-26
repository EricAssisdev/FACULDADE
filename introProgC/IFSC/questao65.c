#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite as duas notas bimestrais: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if(media > 5.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    return 0;
}