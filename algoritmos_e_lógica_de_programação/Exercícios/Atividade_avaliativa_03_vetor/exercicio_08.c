//Feito por Lucas Costa Guimarães
//programa que ordena um vetor de 15 elementos em ordem crescente
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int vet[15];
    int i=0,j=0, aux=0;

    srand(time(NULL));

    for(i=0;i<15;i++){
        vet[i]=rand()%16;
    }

    printf("Vetor gerado com valores aleatorios:\n");

     for(i=0;i<15;i++){
        printf("%d ",vet[i]);
    }
    printf("\nVetor ordenado em ordem crescente:\n");
    for(i=0;i<15;i++){
        for(j=i+1;j<15;j++){
        if(vet[i]>vet[j]){
            
            aux=vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
        }
        }
    }

    for(i=0;i<15;i++){
    printf("%d ",vet[i]);
    }
return 0;
}