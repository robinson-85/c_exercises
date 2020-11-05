/* 2. Escreva um programa que leia um valor em metros e o exiba convertidos
 em milímetros.*/

#include <stdio.h>
#include<math.h>

int main(){
    float metro;
    printf("Declare um valor em metros\n");
    scanf("%f", &metro);
    
      metro = metro * 1000;
    
    printf("O valor declarado em metros equivale a: %.2f milimetros \n", metro);

    getchar();
    return 0;
    
}