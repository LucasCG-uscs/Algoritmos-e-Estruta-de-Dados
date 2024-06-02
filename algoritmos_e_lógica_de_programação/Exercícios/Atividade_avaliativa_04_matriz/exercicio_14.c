//Feito por Lucas Costa Guimarães
//Programa que verifica se duas matrizes são idênticas
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int a[2][2],b[2][2];
    int i=0,j=0,cont=0;

    srand(time(NULL));

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            a[i][j]=rand()%5;
        }
    }
    printf("Matriz A preenchida !\n\nMatriz A:\n");
    
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Informe os valores que deseja inserir na matriz B:");
            scanf("%d",&b[i][j]);
        }
    }

    printf("Matriz B preenchida !\n");
    
    printf("Matriz A:\n");
    
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(a[i][j]!=b[i][j]){
                cont++;
            }

        }
    }
    if(cont!=0){
        printf("As Matrizes inseridas sao diferentes !");
    }
    else{
        printf("As Matrizes inseridas sao iguais !");
    }

return 0;
}