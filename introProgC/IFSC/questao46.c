#include <stdio.h>

int main() {
    char nome[100];
    int diarias;
    float taxa, total;
    printf("Nome do cliente: ");
    scanf("%s", nome);
    printf("Número de diárias: ");
    scanf("%d", &diarias);

    if (diarias > 15) taxa = 5.50;
    else if (diarias == 15) taxa = 6.00;
    else taxa = 8.00;

    total = diarias * (60.00 + taxa);
    printf("Nome: %s\nTotal da conta: R$ %.2f\n", nome, total);
    return 0;
}