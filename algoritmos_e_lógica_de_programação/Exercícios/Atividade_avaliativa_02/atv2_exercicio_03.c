//programa que calculo o n-ésimo termo da serie de fibonacci
#include<stdio.h>
#include<math.h>
int main(){

    int n=0,Fn=0;

    printf("Digite o numero do termo da serie que deseja saber: ");
    scanf("%d",&n);

    Fn=(1/sqrt(5))*(pow((1+sqrt(5))/2,n) - pow((1-sqrt(5))/2,n)); 

    printf("valor correspondente ao termo informado: %d",Fn);

return 0;
}