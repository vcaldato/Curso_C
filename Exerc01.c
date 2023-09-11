#include <stdio.h>
#include <stdlib.h>

void main(){
    //Faça um programa em C que leia os elementos de uma 
    //matriz do tipo inteiro com tamanho 10 X 10. Ao final, imprima
//todos os elementos.

int matriz[10][10];

printf("Digite os elementos da matriz: \n");
for(int i = 0; i < 10; i++){
    for(int j = 0; j <10; j++){
        scanf("%d", &matriz[i][j]);   
    }
}
printf("Elementos da matriz: \n");
for(int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        printf("%d ", matriz[i][j]);
    }
}


}