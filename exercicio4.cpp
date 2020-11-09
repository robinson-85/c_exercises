/* 3.10. Faça um programa que calcule o aumento de um salário. Ele deve solicitar o 
valor do salário e a porcentagem do aumento. Exiba o valor do aumento e do 
novo salário. */

#include <stdio.h>

int main(){
    float salario, porcentagem_aumento, valor_aumento, novo_salario;
    printf("Declare o seu salario: \n");
    scanf("%f", &salario);
    printf("Declare a porcentagem de aumento do salario: \n");
    scanf("%f", &porcentagem_aumento);

    valor_aumento = salario * porcentagem_aumento / 100;
    novo_salario = salario + valor_aumento;

    printf("O valor do aumento do seu salario sera: %.2f \n", valor_aumento);
    printf("O seu novo salario sera: %.2f \n", novo_salario);

    

    getchar();
    return 0;
}
