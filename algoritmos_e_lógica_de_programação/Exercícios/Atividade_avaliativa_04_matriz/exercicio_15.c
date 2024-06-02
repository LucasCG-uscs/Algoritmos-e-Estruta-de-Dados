//Feito por Lucas Costa Guimarães
//Programa que preenche valores em uma matriz 4x4 e em seguida exibe a soma de todos os elementos da matriz
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[4][4];
    int i=0,j=0,soma=0;

    srand(time(NULL));

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            m[i][j]=rand()%17;
        }
    }

    printf("Matriz criada com valores aleatorios:\n");

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            soma+=m[i][j];
        }
    }

    printf("Soma dos elementos da matriz: %d",soma);

    

return 0;
}