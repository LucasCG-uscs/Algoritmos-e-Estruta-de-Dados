//Feito por Lucas Costa Guimarães
//programa que recebe 8 valores, os inseri em um vetor e os imprime na ordem inversa. programa com erro =(
#include<stdio.h>
int main(){

    int vet[8];
    int i=0;

    printf("Informe o primeiro valor de uma lista de 8 valores:");
    scanf("%d",&vet[0]);

    for(i=1;i<8;i++){
        printf("Informe o proximo valor:");
        scanf("%d",&vet[1]);
    }

    printf("Ordem inversa do vetor:\n");

    for(i=7;i>=0;i--){
        printf("%d\n",vet[i]);
    }
return 0;
}