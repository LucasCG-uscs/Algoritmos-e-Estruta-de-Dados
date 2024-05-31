//Feito por Lucas Costa Guimarães
//programa que recebe um tamanho de um vetor, recebe os elementos do vetor e os imprime. programa com erro =(
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

    printf("Ordem inversa do vetor:\n");

    for(i=tamanho;i>=0;i--){
        printf("%d\n",vet[i]);
    }

return 0;
}