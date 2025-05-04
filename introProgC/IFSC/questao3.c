/*3. Considerando as variáveis declaradas na tabela abaixo e mais a variável
booleana TESTE, com valor FALSO, avalie as expressões a seguir, para cada
uma das três combinações de valores apresentadas:*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    float A, B;
    char NOME[20], PROFISSAO[20];
    int TESTE;
    int combinacao;

    // Loop para processar as três combinações
    for (combinacao = 1; combinacao <= 3; combinacao++) {
        // Atribuir valores conforme a combinação
        if (combinacao == 1) {
            A = 3.0;
            B = 16.0;
            strcpy(NOME, "MIRIAM");
            strcpy(PROFISSAO, "ADVOGADO");
            TESTE = 0; // FALSO
        } else if (combinacao == 2) {
            A = 5.0;
            B = 64.0;
            strcpy(NOME, "PEDRO");
            strcpy(PROFISSAO, "MEDICO");
            TESTE = 0; // FALSO
        } else {
            A = 2.5;
            B = 9.0;
            strcpy(NOME, "ANA");
            strcpy(PROFISSAO, "PROFESSOR");
            TESTE = 0; // FALSO
        }

        // Avaliar expressões
        int resultado_a = (A + 1 >= sqrt(B)) || (strcmp(NOME, "ANA") != 0);
        int resultado_b = (A + 1 >= sqrt(B)) && (strcmp(PROFISSAO, "MEDICO") == 0);
        int resultado_c = (strcmp(NOME, "ANA") != 0) || ((strcmp(PROFISSAO, "MEDICO") == 0) && (A + 1 >= sqrt(B)));
        int resultado_d = !TESTE && ((A + 1 >= sqrt(B)) || !(strcmp(PROFISSAO, "MEDICO") == 0));
        int resultado_e = !((A + 1 >= sqrt(B)) && TESTE);

        // Exibir resultados
        printf("Combinacao %d:\n", combinacao);
        printf("a: %s\n", resultado_a ? "VERDADEIRO" : "FALSO");
        printf("b: %s\n", resultado_b ? "VERDADEIRO" : "FALSO");
        printf("c: %s\n", resultado_c ? "VERDADEIRO" : "FALSO");
        printf("d: %s\n", resultado_d ? "VERDADEIRO" : "FALSO");
        printf("e: %s\n", resultado_e ? "VERDADEIRO" : "FALSO");
        printf("\n");
    }

    return 0;
}