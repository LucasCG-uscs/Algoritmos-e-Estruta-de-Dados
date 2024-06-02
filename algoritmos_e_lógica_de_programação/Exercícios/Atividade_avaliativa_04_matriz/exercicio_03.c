//Feito por Lucas Costa Guimarães
//Programa que preenche uma matriz 3x2 com o numero 0 e a imprime na tela.
#include<stdio.h>
int main (){

    int m[3][2];
    int i=0,j=0;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            m[i][j]=0;
        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

return 0;
}