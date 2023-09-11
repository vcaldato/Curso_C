#include <stdio.h>
#include <stdlib.h>

void main(){
    //Faça um programa em C que possa armazenar
    // as alturas de dez atletas de cinco
    //delegações que participarão dos jogos de verão.
    // Imprimir a maior altura de cada
    //delegação.
     // Declarando uma matriz para armazenar as alturas dos atletas
    float altura[5][10];

    
    for (int i = 0; i < 5; i++) {
        printf("Delegação %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Informe a altura do atleta %d: ", j + 1);
            scanf("%f", &altura[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        float maiorAltura = altura[i][0];

        for (int j = 1; j < 10; j++) {
            if (altura[i][j] > maiorAltura) {
                maiorAltura = altura[i][j];
            }
        }
        printf("Maior altura da delegação %d: %.2f\n", i + 1, maiorAltura);
    }


}