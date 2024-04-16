//programa que calcula a media de 10 numeros fornecidos pelo usuario usando for
#include<stdio.h>
int main(){

    int i,a,soma=0;

    printf("Insira o primeiro numero: ");
    scanf("%d",&a);

    soma+= a;

    for(i=1;i<=9;i++){
        printf("Insira o proximo numero: ");
        scanf("%d",&a);

        soma+= a;
    }
    printf("Media dos valores inseridos: %d",soma/10);

return 0;
}