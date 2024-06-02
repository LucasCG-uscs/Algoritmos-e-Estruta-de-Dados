//Feito por Lucas Costa Guimarães
//Programa que preenche e armazena valores em uma matriz 4x4 e mostra a soma dos elementos de uma linha a escolha.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[4][4];
    int i=0,j=0,linha=0,soma=0;

    srand(time(NULL));

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            m[i][j]=rand()%17;
        }
    }

    printf("Matriz gerada aleatoriamente:\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("Informe a linha da matriz que deseja somar os valores:");
    scanf("%d",&linha);

   for(j=0;j<4;j++){
    soma+=m[linha][j];
   }

   printf("Soma dos elementos da linha %d: %d",linha,soma);

return 0;
}