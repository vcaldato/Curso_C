#include <stdio.h>
#include <stdlib.h>

int main() {
    //Faça um programa que permita entrar com valores 
    //em uma matriz A de tamanho 3 X 4. Gerar e imprimir uma matriz
   //B que é o triplo da matriz A
    int matrizA[3][4]; 
    int matrizB[3][4];
    
    printf("Informe os valores da matriz A: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    printf("Matriz B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrizB[i][j] = 3 * matrizA[i][j]; 
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}