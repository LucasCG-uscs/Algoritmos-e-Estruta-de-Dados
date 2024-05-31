//Feito por Lucas Costa Guimarães
//programa que ordena um vetor de 15 elemntos em ordem crescente
#include<stdio.h>
int main (){
    int vet[15];
    int i=0,j=0, aux=0;

    for(i=0;i<15;i++){
        printf("Informe o valor da posicao %d",i);
        scanf("%d",&vet[i]);
    }
    
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
    printf("%d\n",vet[i]);
    }
return 0;
}