#include <stdio.h>
#include <stdlib.h>

void main(){
   // Construa um programa que carregue uma matriz 12 X 4
   // com os valores das vendas de uma loja, em cada
//linha represente um mês do ano, e cada coluna, uma semana do mês. Calcule e imprima:
//• total vendido em cada mês do ano;
//• total vendido em cada semana durante todo o ano;
//• total vendido no ano.

    int vendas[12][4];
    int totalMes[12];
    int totalSemana[4];
    int totalAno = 0;

    for (int i = 0; i < 12; i++) {
        totalMes[i] = 0;
    }

    for (int j = 0; j < 4; j++) {
        totalSemana[j] = 0;
    }
printf("Digite os valores das vendas (meses de 1 a 12, semanas de 1 a 4):\n");
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Vendas para o mes %d, semana %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
            totalMes[i] += vendas[i][j]; 
            totalSemana[j] += vendas[i][j]; 
            totalAno += vendas[i][j]; 
        }
    }

    printf("Total vendido em cada mes do ano:\n");
    for (int i = 0; i < 12; i++) {
        printf("Mes %d: R$ %d\n", i + 1, totalMes[i]);
    }

    
    printf("Total vendido em cada semana durante o ano:\n");
    for (int j = 0; j < 4; j++) {
        printf("Semana %d: R$ %d\n", j + 1, totalSemana[j]);
    }

    
    printf("Total vendido no ano: R$ %d\n", totalAno);

}