/* 3.12. Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a 
distância a percorrer e a velocidade média esperada para a viagem. */

#include <stdio.h>
int main(){
    float preco_mercadoria, percentual_desconto, valor_desconto, preco_final;
    printf("Declare o preco da mercadoria: \n");
    scanf("%f", &preco_mercadoria);
    printf("Declare o percentual de desconto: \n");
    scanf("%f", &percentual_desconto);

    valor_desconto = preco_mercadoria * percentual_desconto / 100;
    preco_final = preco_mercadoria - valor_desconto;

    printf("O valor do desconto da mercadoria sera: %.f \n", valor_desconto);
    printf("O preco final a pagar pela mercadoria sera: %.2f \n", preco_final);

    getchar();
    return 0;
}