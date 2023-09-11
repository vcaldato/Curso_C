#include <stdio.h>
#include <stdlib.h>

void main(){
     //Faça um programa que leia uma matriz 4 X 5 de inteiros, 
     //calcule e imprima a soma de todos os seus elementos

     int matriz[4][5];
     int soma = 0;

     printf("Informe os valores da matriz : \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
}
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            soma += matriz[i][j];
}
    }
    printf("A soma dos elementos da matriz é: %d\n",soma);
}