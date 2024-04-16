//programa que calcula e imprime o menor de tres numeros
#include<stdio.h>
int main(){

    int a,b,c,menor;

    printf("Digite tres numeros: ");
    scanf("%d%d%d",&a,&b,&c);
    
    menor=a;

    if(menor>b){
        menor=b;
    }
    if(menor>c){
        menor=c;
    }
    printf("menor numero: %d",menor);

return 0;
}