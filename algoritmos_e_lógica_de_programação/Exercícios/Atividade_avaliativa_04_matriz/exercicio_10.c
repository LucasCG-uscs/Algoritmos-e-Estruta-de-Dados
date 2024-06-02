//Feito por Lucas Costa Guimarães
//Programa que preenche valores em uma matriz 2x2 e em seguida verifica se um determinado elemento está presente na matriz
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int m[2][2];
    int i=0,j=0,teste=0, contador=0;

    srand(time(NULL));

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            m[i][j]=rand()%5;
        }
    }

    printf("Matriz criada com elementos de 0 a 4:\n");

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    printf("Informe o elemento que deseja verificar a presenca na matriz:");
    scanf("%d",&teste);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(teste == m[i][j]){
                contador++;        
        }
        }
    }
    if(contador>0){
        printf("O elemento esta na matriz e aparece %d vezes",contador);
    }
    else{
        printf("O elemento nao esta na matriz !");
    }

return 0;
}