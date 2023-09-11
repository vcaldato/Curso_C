#include <stdio.h>
#include <stdlib.h>

void main(){
   //Crie um programa que leia valores inteiros em
   // uma matriz A[2][2] e em uma matriz B[2][2]. Gerar e imprimir a matriz
   //SOMA[2][2].

   int matrizA[2][2];
   int matrizB[2][2];
   int matrizSoma[2][2];

   printf("Informe os valores da matriz A: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Informe os valores da matriz B: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("Soma das matrizes: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
          printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }




}