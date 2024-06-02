//Feito por Lucas Costa Guimarães
//Programa que preenche valores em uma matriz 3x3 e em seguida imprime os elementos de sua diagonal princial
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[3][3];
    int i=0,j=0;

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
    
    printf("Elementos da diagonal principal da Matriz:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
            printf("%d ",m[i][j]);
        }
        }
        printf("\n");
    }

return 0;
}