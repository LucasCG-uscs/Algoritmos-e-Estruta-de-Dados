//Feito por Lucas Costa Guimarães
//Programa que conta e exibe a quantidade de numeros negativos em uma matriz 6x6
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[6][6];
    int i=0,j=0,cont=0;

    srand(time(NULL));

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            m[i][j]=(rand()%72)-36;
        }
    }

    printf("Matriz gerada com numeros aleatorios:\n");

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d ",m[i][j]);
        } 
        printf("\n");
    }

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(m[i][j]<0){
                cont++;
            }
        }
    }

    if(cont>0){
        printf("Quantidade de numeros negativos na matriz: %d",cont);
    }
    else{
        printf("Nao existem numeros negativos na matriz !");
    }


return 0;
}