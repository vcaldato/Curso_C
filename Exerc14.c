#include <stdio.h>
#include <stdlib.h>

void main(){
    //Crie um programa que leia e armazene os elementos
    // de uma matriz inteira com tamanho 5 X 5 e
//imprimi-la. Troque, a seguir:
//• a segunda linha pela quinta;
//• a terceira coluna pela quinta;
//• a diagonal principal pela diagonal secundária.

int matriz[5][5];

printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
}
    }
    printf("Matriz Original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int j = 0; j < 5; j++) {
        int temp = matriz[1][j];
        matriz[1][j] = matriz[4][j];
        matriz[4][j] = temp;
    }
    for (int i = 0; i < 5; i++) {
        int temp = matriz[i][2];
        matriz[i][2] = matriz[i][4];
        matriz[i][4] = temp;
    }
    for (int i = 0; i < 5; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = temp;
    }

    printf("\nMatriz Após as Trocas:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}