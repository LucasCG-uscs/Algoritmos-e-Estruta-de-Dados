//Lucas Costa Guimarães
#include<stdio.h>
int soma(int a,int b);

int main(){
    int a=0,b=0;

    printf("Insira 2 numeros para serem somados:");
    scanf("%d %d",&a,&b);

    printf("Resultado da soma: %d",soma(a,b));
    return 0;
}

int soma(int a,int b){
    return a+b;
}