//Feito por Lucas Costa Guimarães
//Programa que preenche uma matriz 2x2 com o numero 1 em todos os seus elementos de indice par e 0 nos de indice impar.
#include<stdio.h>
int main (){

    int m[2][2];
    int i=0,j=0;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i%2 == 0 && j%2 == 0){
                m[i][j]=1;
            }
            else{
                m[i][j]=0;
            }
        }
    }

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

return 0;
}