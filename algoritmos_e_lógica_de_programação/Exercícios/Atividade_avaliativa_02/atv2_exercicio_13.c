//programa que calcula a soma dos digitos de um numero inteiro fornecido pelo usuario usando while
#include<stdio.h>
int main(){

    int i=0,soma=0,a;

    printf("Digite o primeiro algarismo do numero\nInsira zero quando finalizar o numero: ");
    scanf("%d",&a);

    soma+= a;
    while(i!=a){
        printf("Digite o proximo algarismo: ");
        scanf("%d",&a);

        soma+=a;
    }
    printf("Soma dos algarismos do numero digitado: %d",soma);

return 0;
}