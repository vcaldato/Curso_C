#include <stdio.h>
#include <stdlib.h>

void main(){
    //Construa um programa que armazene dados em uma matriz de ordem 4 e imprima:
//Todos os elementos com números ímpares.

int matriz[4][4];

printf("Digite os elementos da matriz de ordem 4:\n");
for(int i = 0; i < 4;i++){
    for(int j = 0; j < 4;j++){
        scanf("%d", &matriz[i][j]);

         }
}

printf("Valores impares da matriz: \n");
 for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 != 0) {
                printf("%d ", matriz[i][j]);
}
}
}
}