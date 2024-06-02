//Feito por Lucas Costa Guimarães
//Programa que troca os valores da linha 1 com a linha 2 de uma matriz 3x3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[3][3];
    int i=0,j=0,aux=0;
    
    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m[i][j]=rand()%10;
        }
    }

    printf("Matriz criada:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(j=0;j<3;j++){
        aux = m[1][j];
        m[1][j]=m[2][j];
        m[2][j]=aux;
            
    }

    printf("Matriz com as linhas 1 e 2 trocadas:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

return 0;
}