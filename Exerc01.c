#include <stdio.h>

int main(){

    char nome [100];
    char endereco[100];
    char telefone[100];

    printf("Digite seu nome: ");
    scanf("%[^\n]%*c",nome);

    printf("Digite seu endereço: ");
    scanf("%[^\n]%*c", endereco);

    printf("Digite seu telefone: ");
    scanf("%[^\n]%*c", telefone);

    printf("Dados do Cliente:\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);
}
