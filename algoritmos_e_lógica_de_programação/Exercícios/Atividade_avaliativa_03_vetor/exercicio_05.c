//Feito por Lucas Costa Guimarães
//programa que conta quantos pares existem em um vetor de 10 elementos
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int vet[10];
    int i=0,contador=0;

    srand(time(NULL));

    
    for(i=0;i<10;i++){
        vet[i]=rand()%11;
    }

    for(i=0;i<10;i++){
        if(vet[i]%2 == 0){
            contador++;
        }
    }

    printf("Vetor criado a partir de numeros aleatorios:\n");

    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }

    printf("\nNumero de pares no vetor: %d\n",contador);
    printf("Numero de impares no vetor: %d",10-contador);
return 0;
}