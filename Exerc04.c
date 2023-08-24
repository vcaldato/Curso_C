#include <stdio.h>

int main() {
    int base, altura,perimetro,area;

    printf("Informe a base: ");
    scanf("%d",&base);

    printf("Informe a altura: ");
    scanf("%d",&altura);

    perimetro = base + altura;
    area = base * altura;

    printf("O perimetro é: %d",perimetro);
    printf("A area é: %d",area);
    return 0;

}
