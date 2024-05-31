//Feito por Lucas Costa Guimarães
//Programa que lê e armazena valores em uma matriz 3x3 e em seguida verifica se um determinado elemento está presente na matriz
#include<stdio.h>
int main (){

    int m[2][2];
    int i=0,j=0,teste=0, contador=0;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Informe os valores que deseja inserir na matriz:");
            scanf("%d",&m[i][j]);
        }
    }

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",m[i][j]);
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

return 0;
}