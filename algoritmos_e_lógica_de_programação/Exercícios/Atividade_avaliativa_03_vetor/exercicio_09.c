//Feito por Lucas Costa Guimarães
//programa que substitui todos os valores negativos em um vetor por zero
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

     int vet[12];
     int i=0;

    srand(time(NULL));

    for(i=0;i<12;i++){
        vet[i]=(rand()%24)-12;
    }

    printf("Vetor criado a partir de valores aleatorios:\n");

    for(i=0;i<12;i++){
        printf("%d ",vet[i]);
    }

    for(i=0;i<12;i++){
        if(vet[i]<0){
            vet[i]=0;
        }
    }

    printf("Vetor com zeros no lugar dos numeros negativos:\n");

    for(i=0;i<12;i++){
        printf("Valor na posicao %d: %d\n",i,vet[i]);
    }

return 0;
}