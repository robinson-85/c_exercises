/* 3. Escreva um programa que leia a quantidade de dias, horas, minutos e segundos 
do usuário. Calcule o total em segundos. */

#include <stdio.h>

int main(){
    float dias, horas, minutos, segundos, totalSegundos;
    printf("Digite uma quantidade de dias: \n");
    scanf("%f", &dias);
    printf("Digite uma quantidade de horas: \n");
    scanf("%f", &horas);
    printf("Digite uma quantidade de minutos: \n");
    scanf("%f", &minutos);
    printf("Digite uma quantidade de segundos: \n");
    scanf("%f", &segundos);

    // 1 minuto == 60 segundos; 1 horas == 3600 segundos; 24 horas == 86400. 

    totalSegundos = (minutos*60)+(horas*3600)+(dias*86400);

    printf("O total de segundos e %.2f. \n", totalSegundos);

    getchar();
    return 0;

}