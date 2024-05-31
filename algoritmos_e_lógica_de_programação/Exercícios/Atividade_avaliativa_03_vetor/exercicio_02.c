//Feito por Lucas Costa Guimarães
//programa que dentre 15 elementos de um vetor, identifica o maior e o menor elemento.
#include<stdio.h>
int main(){

    int vet[15];
    int i=0,maior=0,menor=0;

    printf("Informe o primeiro valor de uma lista de 15 valores:");
    scanf("%d",&vet[0]);

    maior = vet[0];
    menor = vet[0];

    for(i=1;i<15;i++){

        printf("Informe o proximo valor:");
        scanf("%d",&vet[i]);

        if(maior<vet[i]){
            maior = vet[i];
        }
        if(menor>vet[i]){
            menor = vet[i];
        }
    }

    for(i=0;i<15;i++){
        printf("%d\n",vet[i]);
    }
    printf("Maior valor inserido: %d\n", maior);
    printf("Menor valor inserido: %d", menor);

return 0;
}