/* 1. Faça um programa que peça dois números inteiros. Imprima a soma desses dois
números na tela. */

#include <stdio.h>

int main(){
    int n1, n2, somar;
    printf("Declare dois numeros inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    somar = n1 + n2;

    printf("A soma desses dois numeros sera: %d \n", somar);

    getchar();
    return 0;
}

