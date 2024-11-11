//Lucas Costa Guimarães
#include<stdio.h>
int maior(int a,int b);
int main(){
    int a=0,b=0;

    printf("Insira dois valores para saber qual o maior deles: ");
    scanf("%d %d",&a,&b);

    printf("Maior valor: %d",maior(a,b));
    return 0;
}

int maior(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}