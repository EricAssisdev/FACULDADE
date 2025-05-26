#include <stdio.h>

int main() {
    int dia, mes, signo = 0;
    char *nomeSigno;

    printf("Digite o dia do seu aniversário: ");
    scanf("%d", &dia);
    printf("Digite o mês do seu aniversário (número): ");
    scanf("%d", &mes);

    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
        signo = 1; nomeSigno = "Aquário";
    } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        signo = 2; nomeSigno = "Peixes";
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        signo = 3; nomeSigno = "Áries";
    } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        signo = 4; nomeSigno = "Touro";
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        signo = 5; nomeSigno = "Gêmeos";
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
        signo = 6; nomeSigno = "Câncer";
    } else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
        signo = 7; nomeSigno = "Leão";
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        signo = 8; nomeSigno = "Virgem";
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        signo = 9; nomeSigno = "Libra";
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        signo = 10; nomeSigno = "Escorpião";
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        signo = 11; nomeSigno = "Sagitário";
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
        signo = 12; nomeSigno = "Capricórnio";
    } else {
        printf("Data inválida!\n");
        return 1;
    }

    printf("Você é do seguinte signo do zodíaco: %s\n", nomeSigno);

    return 0;
}