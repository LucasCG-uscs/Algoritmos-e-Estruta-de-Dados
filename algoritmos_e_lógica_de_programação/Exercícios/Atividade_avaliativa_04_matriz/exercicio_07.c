//Feito por Lucas Costa Guimarães
//Programa que troca os valores da linha 1 com a linha 2 de uma matriz 3x3
#include<stdio.h>
int main (){

    int m[3][3];
    int i=0,j=0,aux=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Informe os valores que deseja inserir na matriz:");
            scanf("%d",&m[i][j]);
        }
    }

        for(j=0;j<3;j++){
            aux = m[1][j];
            m[1][j]=m[2][j];
            m[2][j]=aux;
            
        }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

return 0;
}