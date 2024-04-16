//programa que calcula a soma dos numeros pares de 1 a 100 com um loop
#include<stdio.h>
int main(){
    int i=0,soma=0;

    while(i<=100){
        if(i%2==0){
            soma+=i;
        }
    i++;    
    }
    printf("Soma dos pares de 1 a 100 = %d",soma);

return 0;
}