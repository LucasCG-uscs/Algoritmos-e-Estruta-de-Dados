//programa que calcula a soma dos numeros pares de 1 a 100 usando o comando for
#include<stdio.h>
int main(){

    int i=0,soma=0;

    for(i=0;i<=100;i++){
        if(i%2==0){
            soma+= i;
        }
    }
    printf("Soma dos pares de 1 a 100: %d",soma);
    
return 0;
}