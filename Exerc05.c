#include <stdio.h>

int main(){
    double C,F;

    printf("Informe o grau Celsius: ");
    scanf("%lf",&C);

    F = (9*C +160) / 5; 
    printf("A conversão de %lf Celsius para Fahrenheit é: %lf\n",C,F);
    return 0;
}
