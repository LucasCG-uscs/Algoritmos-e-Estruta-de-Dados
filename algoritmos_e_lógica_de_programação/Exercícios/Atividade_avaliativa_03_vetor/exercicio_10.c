//Feito por Lucas Costa Guimarães
//programa que recebe um tamanho de um vetor, recebe os elementos do vetor e os imprime.
#include<stdio.h>
int main(){

    int tamanho=0,i=0;
    int vet[tamanho];

    printf("Informe o tamanho do vetor:");
    scanf("%d",&tamanho);

    for(i=0;i<tamanho;i++){
        printf("Informe o valor na posicao %d:",i);
        scanf("%d",&vet[i]);
    }

    for(i=0;i<tamanho;i++){
        printf("Valor na posicao %d: %d\n",i,vet[i]);
    }

return 0;
}