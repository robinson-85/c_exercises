/* 5. Faça um programa que solicite o preço de uma mercadoria e o percentual de 
desconto. Exiba o valor do desconto e o preço a pagar. */

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

}