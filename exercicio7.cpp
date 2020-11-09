/*  3.13. Escreva um programa que converta uma temperatura digitada em °C em °F. 
A fórmula para essa conversão é: F = 9 * 5 + 32 / 5. */

#include <stdio.h>

int main(){
    float graus_celsius, graus_fahrenheit;
    printf("_______Transformando temperatura de °C em °F_________ \n");
    printf("Digite uma temperatura em graus Celsius: \n");
    scanf("%f", &graus_celsius);

    graus_fahrenheit = graus_celsius * (9/5) + 32;

    printf("A temperatura digitada em °C será em °F: %.2f \n", graus_fahrenheit);

    getchar();
    return 0;  

}