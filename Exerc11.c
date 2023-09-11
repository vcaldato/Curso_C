#include <stdio.h>
#include <stdlib.h>

void main(){
    //Entrar com valores para uma matriz C 2 x 3. 
    //Gerar e imprimir a C t. A matriz transposta é gerada trocando linha por
    //coluna. Veja o exemplo a seguir:
     int matrizC[2][3];
    int matrizTransposta[3][2];

    
    printf("Digite os valores da matriz C:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrizC[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matrizTransposta[i][j] = matrizC[j][i];
        }
    }

    
    printf("Matriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

}