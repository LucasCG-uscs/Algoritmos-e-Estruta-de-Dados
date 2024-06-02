//Feito por Lucas Costa Guimarães
//Programa que lê e armazena valores em uma matriz 3x3 e em seguida os imprime na tela.
#include<stdio.h>
int main (){

    int m[3][3];
    int i=0,j=0,cont=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Informe os valores que deseja inserir na matriz:");
            scanf("%d",&m[i][j]);
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
            if(i==j){
                if(m[i][j]!=1){
                    cont++;
                }
            }
            else{
                if(m[i][j]!=0){
                    cont++;
                }
            }
        }
    }

    if(cont>0){
        printf("Essa Matriz nao eh uma matriz identidade!\n");
    }
    else{
        printf("Essa Matriz eh uma matriz identidade!\n");
    }

return 0;
}