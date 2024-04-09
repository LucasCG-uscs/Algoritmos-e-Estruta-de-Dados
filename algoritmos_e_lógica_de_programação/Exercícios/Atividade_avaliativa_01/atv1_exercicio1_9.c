/*Programa que a partir de um valor total lido retorna:
o total a pagar com 10% de desconto
o valor de cada parcela num parcelamento de 3x sem juros
a comissão do vendedor:(no caso de ser a vista: 5% do valor total com desconto) e (no caso de venda parcelada: 5% sobre o valor total)*/
#include<stdio.h>
int main(){

    float valor_total,valor_desconto;

    printf("Informe o valor total: \n");
    scanf("%f",&valor_total);
    //1.9.1
    valor_desconto=valor_total-(valor_total*0.1);
    printf("O valor a pagar com 10 por cento de desconto: %.2f\n",valor_desconto);
    //1.9.2
    printf("o valor de cada parcela: %.2f\n",valor_total/3);
    //1.9.3
    printf("Comissao do vendedor para a venda a vista:%.2f\n",valor_desconto*0.05);
    //1.9.4
    printf("Comissao do vendedor para vena parcelada:%.2f\n",valor_total*0.05);

return 0;
}