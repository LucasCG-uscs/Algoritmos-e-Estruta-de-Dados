//Feito por Lucas Costa Guimarães
//Programa que preenche uma matriz 4x3 com 1-i quando o indice for par e 1+1 quando o indice for impar
#include<stdio.h>
int main (){

    int m[4][3];
    int i=0,j=0;

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            if(i%2 == 0 && j%2 == 0){
                m[i][j]=1-i;
            }
            else{
                m[i][j]=1+i;
            }
        }
    }

     for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

return 0;
}