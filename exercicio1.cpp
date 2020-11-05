/* 1. Faça um programa que peça dois números inteiros. Imprima a soma desses dois
números na tela. */

#include <stdio.h>

int main(){
    int n1, n2, soma;
    printf("Declare dois numeros inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma desses dois numeros sera: %d \n", soma);

    getchar();
    return 0;
}

