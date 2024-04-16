//programa que calcula a media de 5 valores informados pelo usuario usando um loop
#include<stdio.h>
int main(){

    int i=1,a,soma;

    printf("digite um numero: ");
    scanf("%d",&soma);

    while(i<=4){
        printf("digite mais um numero: ");
        scanf("%d",&a);

        soma+= a;
        i++;
    }

    printf("media aritmetica dos valores inseridos: %d",soma/5);

return 0;
}