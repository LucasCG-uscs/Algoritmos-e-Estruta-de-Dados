//Programa que recebe um valor em real e a cotação do dólar e imprime o valor correspondente em dolar
#include<stdio.h>
int main(){

    float valor_real,cota_dolar;

    printf("Informe o valor em reais: \n");
    scanf("%f",&valor_real);

    printf("Informe a cotação do dolar: \n");
    scanf("%f",&cota_dolar);

    printf("Valor correspondente em dolar: %.2f$",valor_real/cota_dolar);

return 0;
}