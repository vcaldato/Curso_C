#include <stdio.h>
#include<stdlib.h>

void main() {
    //Faça um programa que leia os elementos de uma matriz
    // do tipo inteiro com tamanho 3 X 3 e imprima os elementos
    //  multiplicando por 2

    int matriz[3][3];
   

    printf("Digite elementos para a matriz: \n");
    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }

    }
    printf("**Elementos da matriz 3x3 multiplicados por 2** \n");
    for(int i =0; i < 3; i++){
        for(int j = 0; j <3; j++){
           printf("%d ", matriz[i][j] * 2);
        }
    }

}