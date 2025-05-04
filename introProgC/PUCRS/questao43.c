/* 43. Fazer um algoritmo que leia 5 grupos de 4 valores (A,B,C,D) e mostre-os na ordem lida. Em seguida, ordene-os em ordem decrescente e mostre-os novamente, já
ordenados. */

#include <stdio.h>

int main(){

    int i, j, A[5], B[5], C[5], D[5], temp;
    
    // Leitura dos valores
    for(i = 0; i < 5; i++){
        printf("Digite os valores do grupo %d (A, B, C, D): ", i + 1);
        scanf("%d %d %d %d", &A[i], &B[i], &C[i], &D[i]);
    }
    
    // Exibição dos valores na ordem lida
    printf("\nValores lidos:\n");
    for(i = 0; i < 5; i++){
        printf("Grupo %d: A=%d, B=%d, C=%d, D=%d\n", i + 1, A[i], B[i], C[i], D[i]);
    }
    
    // Ordenação em ordem decrescente
    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 5; j++){
            if(A[i] < A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            if(B[i] < B[j]){
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
            if(C[i] < C[j]){
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
            if(D[i] < D[j]){
                temp = D[i];
                D[i] = D[j];
                D[j] = temp;
            }
        }
    }
    
    // Exibição dos valores ordenados
    printf("\nValores ordenados em ordem decrescente:\n");
    for(i = 0; i < 5; i++){
        printf("Grupo %d: A=%d, B=%d, C=%d, D=%d\n", i + 1, A[i], B[i], C[i], D[i]);
    }
    
    return 0;
}