//Feito por Lucas Costa Guimarães.
//programa que conta o numero de zeros em uma matriz 3x3.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int m[3][3];
    int i=0,j=0,cont=0;

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
            if(m[i][i]==0){
                cont++;
            }
        }
    }

    printf("Numero de zeros presente na matriz: %d",cont);

return 0;
}