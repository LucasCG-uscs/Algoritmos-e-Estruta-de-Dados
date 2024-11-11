//Lucas Costa Guimarães
#include<stdio.h>
#include<Math.h>
int somatorio(int n){
    int i=0,soma = 0;
    
    for(i=0;i<=n;i++){
        soma+= 5*pow(i,2) + 2*i + 8;
    }
    return soma;
}


int main(){

    int n=0;

    printf("Insira o parametro n para determinar o limite do somatorio: ");
    scanf("%d",&n);

    printf("O valor do somatorio para o parametro informado eh: %d",somatorio(n));

    return 0;
}