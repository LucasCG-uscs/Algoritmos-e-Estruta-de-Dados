//Feito por Lucas Costa Guimarães
//programa que lê 10 numeros inteiros os armazena em um vetor os copia para outro vetor e imprime o vetor cópia na tela
#include<stdio.h>
int main (){

    int vetA[10],vetB[10];
    int i=0;

    printf("Informe o primeiro de uma lista de 10 numeros:");
    scanf("%d",&vetA[0]);

    for(i=1;i<10;i++){
        printf("Informe o proximo numero:");
        scanf("%d",&vetA[i]);
    }
    
    for(i=0;i<10;i++){
        vetB[i]=vetA[i];
    }

    printf("Conteudo do vetor B:\n");
    for(i=0;i<10;i++){
        printf("%d\n",vetB[i]);
    }
return 0;
}
