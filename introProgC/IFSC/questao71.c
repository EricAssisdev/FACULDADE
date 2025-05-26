#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50], nome_mais_pesado[50], nome_mais_alto[50];
    float altura1, altura2, peso1, peso2;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &altura1);
    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a altura da segunda pessoa: ");
    scanf("%f", &altura2);
    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);

    if(peso1 > peso2) {
        strcpy(nome_mais_pesado, nome1);
    } else {
        strcpy(nome_mais_pesado, nome2);
    }

    if(altura1 > altura2) {
        strcpy(nome_mais_alto, nome1);
    } else {
        strcpy(nome_mais_alto, nome2);
    }

    printf("Mais pesado: %s\n", nome_mais_pesado);
    printf("Mais alto: %s\n", nome_mais_alto);

    return 0;
}