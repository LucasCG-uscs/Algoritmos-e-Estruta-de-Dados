//Feito por Lucas Costa Guimarães
//programa que conta quantos pares existem em um vetor de 10 elementos
#include<stdio.h>
int main(){

    int vet[10];
    int i=0,contador=0;

    printf("Informe o primeiro de uma lista de 10 numeros:");
    scanf("%d",&vet[0]);

    for(i=1;i<10;i++){
        printf("Informe o proximo numero:");
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i]%2 == 0){
            contador++;
        }
    }

    printf("Numero de pares no vetor: %d",contador);

return 0;
}