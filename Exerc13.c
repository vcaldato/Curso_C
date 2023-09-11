#include <stdio.h>
#include <stdlib.h>

void main(){
    //A gerente do cabeleireiro Sempre Bela tem uma 
    //tabela em que registra as quantidades de serviços
//executados nos "pes", nas "mãos"e o serviço de podologia 
//das cinco manicures. Sabendo-se que cada uma
//ganha 50% do que faturou ao mês, criar um programa 
//que possa calcular e imprimir quanto cada uma vai
//receber, uma vez que não têm carteiras assinadas, 
//os valores, respectivamente, são: R$10,00, R$15,00 e
//R$30,00.
    int quantidades[5][3];
    double servicoPes = 10.00;
    double servicoMaos = 15.00;
    double servicoPodologia = 30.00;
    double ganhos[5];

    
    printf("Digite a quantidade de serviços executados por cada manicure:\n");
    for (int i = 0; i < 5; i++) {
        printf("Manicure %d:\n", i + 1);

        printf("Serviços nos pés: ");
        scanf("%d", &quantidades[i][0]);

        printf("Serviços nas mãos: ");
        scanf("%d", &quantidades[i][1]);

        printf("Serviços de podologia: ");
    
        scanf("%d", &quantidades[i][2]);
    }

    for (int i = 0; i < 5; i++) {
        ganhos[i] = (quantidades[i][0] * servicoPes + quantidades[i][1] * servicoMaos +
         quantidades[i][2] * servicoPodologia) * 0.5;
    }

    
    printf("Ganhos de cada manicure:\n");
    for (int i = 0; i < 5; i++) {
        printf("Manicure %d: R$%.2lf\n", i + 1, ganhos[i]);
    }

}