//Feito por Lucas Costa Guimarães
//programa que recebe 20 valores, armazena-os em um vetor, calcula e exibe a media dos valores inseridos.
#include<stdio.h>
int main(){

    float vet[20],soma=0;;
    int i=0;
    printf("Informe o primeiro valor de uma lista de 20 valores:");
    scanf("%f",&vet[0]);

    soma+=vet[0];

    for(i=1;i<20;i++){

        printf("Informe o proximo valor:");
        scanf("%f",&vet[i]);

        soma+=vet[i];
    }

    printf("Media dos 20 valores: %.2f",soma/20);
}