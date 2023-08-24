#include <stdio.h>

int main(){
    double num1, num2;
    double adicao, subtracao, divisao, multiplicacao;

    printf("Digite um numero real: ");
    scanf("%lf",&num1);
    printf("Digite o segundo numero real: ");
    scanf("%lf",&num2);

     adicao = num1 + num2;
     subtracao = num1 - num2;
     multiplicacao = num1 * num2;
     divisao = num1 / num2;



     printf("Adição: %lf\n",adicao );
    printf("Subtração: %lf\n",subtracao);
    printf("Multiplicação: %lf\n",multiplicacao );
    printf("Divisão: %lf\n", divisao);

    return 0;


}
