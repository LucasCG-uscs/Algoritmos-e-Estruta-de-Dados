//Feito por Lucas Costa Guimarães
//programa que dentre 15 elementos de um vetor, identifica o maior e o menor elemento.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int vet[15];
    int i=0,maior=0,menor=100;

    srand(time(NULL));

    for(i=0;i<15;i++){

        vet[i]=rand()%16;

        if(maior<vet[i]){
            maior = vet[i];
        }
        if(menor>vet[i]){
            menor = vet[i];
        }
    }

    printf("Vetor criado a partir de numeros aleatorios:\n");

    for(i=0;i<15;i++){
        printf("%d ",vet[i]);
    }
    printf("\nMaior valor inserido: %d\n", maior);
    printf("Menor valor inserido: %d", menor);

return 0;
}