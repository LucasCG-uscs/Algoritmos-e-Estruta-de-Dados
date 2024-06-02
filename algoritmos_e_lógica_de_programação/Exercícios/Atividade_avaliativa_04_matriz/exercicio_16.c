//Feito por Lucas Costa Guimarães
//Programa que encontra o maior elemento e sua posição em uma matriz 5x5
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[5][5];
    int i=0,j=0,maior=0;

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            m[i][j]=rand()%26;
        }
    }

    printf("Matriz criada aleatoriamente:\n");

     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(m[i][j]>maior){
                maior=m[i][j];
            }
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(maior==m[i][j]){
                printf("Maior elemento da matriz: %d\nSua posicao:\nLinha:%d\nColuna:%d",maior,i,j);
            }
        }
    }
    

return 0;
}