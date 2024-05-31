//Feito por Lucas Costa Guimarães
//programa que recebe um tamanho de um vetor, recebe os elementos do vetor e imprime a soma dos elementos.
#include<stdio.h>
int main(){

    int tamanho=0,i=0,soma=0;
    int vet[tamanho];

    printf("Informe o tamanho do vetor:");
    scanf("%d",&tamanho);

    for(i=0;i<tamanho;i++){
        printf("Informe o valor na posicao %d:",i);
        scanf("%d",&vet[i]);
        soma+= vet[i];
    }
    
    printf("Soma dos valores inseridos: %d",soma);

return 0;
}