//programa que calcula e imprime o maior de tres numeros
#include<stdio.h>
int main(){

    int a,b,c,maior;

    printf("Digite tres numeros: ");
    scanf("%d%d%d",&a,&b,&c);
    
    maior=a;

    if(maior<b){
        maior=b;
    }
    if(maior<c){
        maior=c;
    }
    printf("maior numero: %d",maior);

return 0;
}