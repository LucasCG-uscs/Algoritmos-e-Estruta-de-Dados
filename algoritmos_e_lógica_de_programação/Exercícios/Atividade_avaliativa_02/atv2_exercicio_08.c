//programa que solicita ao usuario um numero e imprime os numeros de 1 ate a o numero informado pelo usuario
#include<stdio.h>
int main(){

    int n,i=0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    while(i<=n){
        printf("%d\n",i);
        i++;
    }

return 0;
}