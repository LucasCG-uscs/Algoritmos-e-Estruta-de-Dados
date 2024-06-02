//Feito por Lucas Costa Guimarães
//Programa que soma duas matrizes 2x2 e imprime o resultado
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    //introduzindo variáveis e matrizes
    int a[3][3],b[3][3],c[3][3];
    int i=0,j=0;

    srand(time(NULL));
    //criando a Matriz A com valores aleatórios
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=rand()%5;
        }
    }
    //mostrando a matriz A na tela
    printf("Matriz A:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //criando a Matriz B com valores aleatórios
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=rand()%5;
        }
    }

    //mostrando a matriz B na tela
    printf("Matriz B:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //Somando a matriz A com a matriz B para obter C

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Matriz C obtida pela soma da matriz A com a matriz B:\n");

    //mostrando C na tela

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

return 0;
}