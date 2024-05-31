//Feito por Lucas Costa Guimarães
//programa que recebe um tamanho de um vetor, recebe os elementos do vetor e imprime o maior e o menor valor inserido.
#include<stdio.h>
int main(){

    int tamanho=0,i=0,maior=0,menor=0;
    int vet[tamanho];

    printf("Informe o tamanho do vetor:");
    scanf("%d",&tamanho);

    printf("Informe o primeiro valor: ");
    scanf("%d",&vet[0]);

    maior=vet[0];
    menor=vet[0];
    
    for(i=1;i<tamanho;i++){
        printf("Informe o valor na posicao %d:",i);
        scanf("%d",&vet[i]);
    }
    
    for(i=0;i<tamanho;i++){
        if(vet[i]>maior){
            maior = vet[i];
        }
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
    printf("Maior valor inserido: %d\n Menor valor inserido: %d",maior,menor);

return 0;
}