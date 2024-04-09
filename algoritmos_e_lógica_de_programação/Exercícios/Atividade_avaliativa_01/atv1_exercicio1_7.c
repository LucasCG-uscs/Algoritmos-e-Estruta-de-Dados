//programa que recebe um numero inteiro e imprime seu antecessor e sucessor
#include<stdio.h>
int main(){

    int a;

    printf("digite um numero inteiro:");
    scanf("%d",&a);

    printf("Antecessor do numero digitado: %d\nSucessor do numero digitado: %d\n",a-1,a+1);

return 0;
}