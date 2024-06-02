//Feito por Lucas Costa Guimarães
//Programa que preenche valores em uma matriz 2x2 e em seguida multiplica a matriz por um numero escalar escolhido pelo usuario.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int a[2][2], b[2][2];
    int i=0,j=0,k=0;

    srand(time(NULL));

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            a[i][j]=rand()%5;
        }
    }

    printf("Matriz criada com valores aleatorios:\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Insira o numero pelo qual deseja multiplicar a matriz:");
    scanf("%d",&k);

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            b[i][j]= k*a[i][j];
        }
    }

    printf("Nova matriz formada pela multiplicacao da matriz criada por %d\n",k);
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

return 0;
}