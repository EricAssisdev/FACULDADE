#include <stdio.h>

int main() {
    char continuar;
    
    do {
        char nome[50]; // Aumentado para suportar nomes mais longos
        char categoria;
        float salarioBase;
        
        printf("Digite o nome do empregado: ");
        scanf("%49s", nome); // Limita a entrada a 49 caracteres
        printf("Digite a categoria (A-Z): ");
        scanf(" %c", &categoria); // Lê um único caractere
        printf("Digite o salario base: ");
        scanf("%f", &salarioBase);
        
        float salarioReajustado;
        if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
            salarioReajustado = salarioBase * 1.10; // Aumento de 10%
        }
        else if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
            salarioReajustado = salarioBase * 1.15; // Aumento de 15%
        }
        else if (categoria == 'K' || categoria == 'R') {
            salarioReajustado = salarioBase * 1.25; // Aumento de 25%
        }
        else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S') {
            salarioReajustado = salarioBase * 1.35; // Aumento de 35%
        }
        else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z') {
            salarioReajustado = salarioBase * 1.50; // Aumento de 50%
        }
        else {
            salarioReajustado = salarioBase; // Sem aumento para categorias inválidas
            printf("Categoria '%c' inválida. Sem aumento.\n", categoria);
        }
        
        // Exibição dos resultados
        if (salarioReajustado != salarioBase) { // Exibe apenas se houve aumento
            printf("Nome: %s, Categoria: %c, Salário Reajustado: %.2f\n", nome, categoria, salarioReajustado);
        }
        
        // Pergunta se deseja continuar
        printf("Deseja calcular para outro empregado? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}