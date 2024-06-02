//Feito por Lucas Costa Guimarães
//Programa que multiplica duas matrizes 2x2 e imprime o resultado
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    //introduzindo variáveis e matrizes
    int a[2][2],b[2][2],c[2][2];
    int i=0,j=0,k=0;

    srand(time(NULL));
    //criando a Matriz A com valores aleatórios
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            a[i][j]=rand()%5;
        }
    }
    //mostrando a matriz A na tela
    printf("Matriz A:\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //criando a Matriz B com valores aleatórios
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            b[i][j]=rand()%5;
        }
    }

    //mostrando a matriz B na tela
    printf("Matriz B:\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //preenchendo a matriz C com zeros
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=0;
        }
    }

    //multiplicando A x B para obter C

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Matriz C obtida pela multiplicacao da matriz A pela matriz B:\n");

    //mostrando C na tela

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

return 0;
}