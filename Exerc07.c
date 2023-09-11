#include <stdio.h>
#include <stdlib.h>

void main(){
    // Construa um programa para ler valores para duas 
    //matrizes do tipo inteiro de ordem 3. Gerar e imprimir a matriz
    //diferença.

     int matrizA[3][3];
     int matrizB[3][3];
     int matrizDiferenca[3][3];

     printf("Informe os valores da matriz A: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Informe os valores da matriz B: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("Matriz Diferença:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizDiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
            printf("%d ", matrizDiferenca[i][j]);
}
printf("\n");
    }
}