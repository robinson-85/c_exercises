/* 3.15. Escreva um programa para calcular a redução do tempo de vida de um fumante.
 Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou. 
 Considere que um fumante perde 10 minutos de vida a cada cigarro e calcule quantos 
 dias de vida um fumante perderá. Exiba o total em dias. */

 #include <stdio.h>

 int main(){
    int reducao_tempo, quantidade_diaria, quantos_anos, dias_perdidos, total_cigarros;
    printf("Quantos cigarros você fuma por dia? \n");
    scanf("%d", &quantidade_diaria);
    printf("Quantos anos voce fumou? \n");
    scanf("%d", &quantos_anos);

    total_cigarros = (quantos_anos * 365)* quantidade_diaria;
    dias_perdidos = (total_cigarros * 10)/24;

    printf("Os seus dias perdidos por conta do cigarro serao: %d\n", dias_perdidos);

    getchar();
    return 0;
 }