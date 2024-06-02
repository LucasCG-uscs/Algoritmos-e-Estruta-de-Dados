//Feito por Lucas Costa Guimarães.
//programa que calcula e imprime a soma de cada coluna em uma matriz 3x3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int m[3][3];
    int i=0,j=0,soma0=0,soma1=0,soma2=0;

    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m[i][j]=rand()%10;
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==0){
                soma0+=m[i][j];
            }

            if(j==1){
                soma1+=m[i][j];
            }

            if(j==2){
                soma2+=m[i][j];
            }
        }
    }
    printf("Soma dos elementos das colunas:\nColuna 0: %d\nColuna 1:%d\nColuna 2:%d",soma0,soma1,soma2);
return 0;
}