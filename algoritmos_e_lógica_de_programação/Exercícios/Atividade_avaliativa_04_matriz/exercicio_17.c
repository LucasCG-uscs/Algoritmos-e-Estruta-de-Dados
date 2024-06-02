//Feito por Lucas Costa Guimarães
//Programa que gera a matriz transposta de uma matriz 3x2 fornecida e imprime o resultado
#include<stdio.h>

int main (){

    int m[3][2],t[2][3];
    int i=0,j=0;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Informe os valores que deseja inserir na matriz:");
            scanf("%d",&m[i][j]);
        }

    }
     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            t[j][i]=m[i][j];
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }



return 0;
}