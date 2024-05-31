//Feito por Lucas Costa Guimarães
//programa que lê 10 numeros inteiros, os armazena em um vetor e imprime-os na tela
#include<stdio.h>
int main (){

    int vet[10];
    int i=0;

    printf("Informe o primeiro de uma lista de 10 numeros:");
    scanf("%d",&vet[0]);

    for(i=1;i<10;i++){
        printf("Informe o proximo numero:");
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++){
        printf("%d\n",vet[i]);
    }
return 0;
}