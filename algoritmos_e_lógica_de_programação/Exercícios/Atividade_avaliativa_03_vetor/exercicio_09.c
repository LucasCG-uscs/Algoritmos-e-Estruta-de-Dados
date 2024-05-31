//Feito por Lucas Costa Guimarães
//programa que substitui todos os valores negativos em um vetor por zero
#include<stdio.h>
int main(){

     int vet[12];
     int i=0;

    for(i=0;i<12;i++){
        printf("Informe o valor da posicao %d de 11:",i);
        scanf("%d",&vet[i]);
    }

    for(i=0;i<12;i++){
        if(vet[i]<0){
            vet[i]=0;
        }
    }

    for(i=0;i<12;i++){
        printf("Valor na posicao %d: %d\n",i,vet[i]);
    }

return 0;
}