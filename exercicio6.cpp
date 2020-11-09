/* 3.12. Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a 
distância a percorrer e a velocidade média esperada para a viagem. */

#include <stdio.h>

int main(){
    float tempo_viagem, distancia, velocidade_media;
    printf("Qual a distancia a percorrer em km? \n");
    scanf("%f", &distancia);
    printf("Qual sera a velocidade media para a viagem em km/hr? \n");
    scanf("%f", &velocidade_media);

    tempo_viagem = distancia / velocidade_media;
    
    printf("O seu tempo de viagem em horas serao: %.f \n", tempo_viagem);

    getchar();
    return 0;
}