/* 8. Escreva um programa que pergunte a quantidade de km percorridos por um carro 
alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado.
Calcule o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km
rodado. */

#include <stdio.h>

int main(){
    float quantidade_km, quantidade_dias, preco_pagar;
    printf("Qual e a quantidade de km que você percorreu? \n");
    scanf("%f", &quantidade_km);
    printf("Qual a quantidade de dias que você alugou o carro? \n");
    scanf("%f", &quantidade_dias);

    preco_pagar = (quantidade_km * 0.15) + (quantidade_dias * 60);

    printf("O preço a pagar e:R$ %.2f \n", preco_pagar);
    
    getchar();
    return 0;
} 
