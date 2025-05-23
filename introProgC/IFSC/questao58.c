#include <stdio.h>

int main() {
    int codigo, n1, n2, n3, maior;
    float media;
    printf("Digite o código do aluno: ");
    scanf("%d", &codigo);
    printf("Digite as três notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;

    if (maior == n1)
        media = (n1 * 4 + n2 * 3 + n3 * 3) / 10.0;
    else if (maior == n2)
        media = (n2 * 4 + n1 * 3 + n3 * 3) / 10.0;
    else
        media = (n3 * 4 + n1 * 3 + n2 * 3) / 10.0;

    printf("Código: %d\nNotas: %d %d %d\nMédia: %.2f\n", codigo, n1, n2, n3, media);
    if (media >= 5)
        printf("APROVADO\n");
    else
        printf("REPROVADO\n");
    return 0;
}