#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("Média: %.2f\n", media);
    if (media >= 7)
        printf("Aprovado\n");
    else if (media >= 4)
        printf("Em prova final\n");
    else
        printf("Reprovado\n");
    return 0;
}