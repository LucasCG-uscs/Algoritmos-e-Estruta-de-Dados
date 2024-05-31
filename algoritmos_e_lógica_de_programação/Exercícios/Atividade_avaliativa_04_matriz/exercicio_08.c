//Feito por Lucas Costa Guimarães
//Programa que lê e armazena valores em uma matriz 4x4 e mostra a soma dos elementos de uma linha a escolha.
#include<stdio.h>
int main (){

    int m[4][4];
    int i=0,j=0,linha=0,soma=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Informe os valores que deseja inserir na matriz:");
            scanf("%d",&m[i][j]);
        }
    }

    printf("Informe a linha da matriz que deseja somar os valores:");
    scanf("%d",&linha);

   for(j=0;j<4;j++){
    soma+=m[linha][j];
   }

   for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

   printf("Soma dos elementos da linha escolhida: %d",soma);

return 0;
}