// programa que recebe um valor n e imprime a soma das potencias de 0 até n
#include<stdio.h>
#include<math.h>
int main(){

    int i,a,soma=0;

    printf("digite um numero: ");
    scanf("%d",&a);

    for(i=0;i<=a;i++){
        soma+= pow(a,i);
    }
    printf("Soma das potencias de %d elevado a zero ate %d elevado a %d: %d",a,a,a,soma);
    
return 0;
}