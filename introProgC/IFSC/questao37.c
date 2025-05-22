#include <stdio.h>

int main() {
    int dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual, dias_vividos;
    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);
    printf("Digite a data atual (dd mm aaaa): ");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);
    
    int anos = ano_atual - ano_nasc;
    int meses = mes_atual - mes_nasc;
    int dias = dia_atual - dia_nasc;
    dias_vividos = anos * 360 + meses * 30 + dias; // 360 dias por ano (12*30)
    
    printf("Dias vividos: %d\n", dias_vividos);
    return 0;
}