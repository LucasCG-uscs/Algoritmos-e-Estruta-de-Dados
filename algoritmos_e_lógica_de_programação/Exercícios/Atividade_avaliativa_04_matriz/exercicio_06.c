//Feito por Lucas Costa Guimarães
//Programa que le e imprime uma matriz 3x3 com cada linha e cada coluna separados
#include<stdio.h>
int main (){

    int m[3][3];
    int i=0,j=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Informe os valores que deseja inserir na matriz:");
            scanf("%d",&m[i][j]);
        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

return 0;
}