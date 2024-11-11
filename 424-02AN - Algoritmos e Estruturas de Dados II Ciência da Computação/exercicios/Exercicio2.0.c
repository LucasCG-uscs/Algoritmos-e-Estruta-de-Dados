/*programa que cria uma matriz quadrada com o tamanho fornecido pelo usuário e a matriz segue o seguinte padrão:
Os elementos abaixo da diagonal principal são preenchidos com números crescentes de 1 até a linha correspondente.
Os elementos da diagonal principal são próprio indice da linha mais um.
Os elementos acima da diagonal principal são zeros.*/

#include<stdio.h>
int main (){
    int i=0,j=0,n=0;
    
    printf("Informe o tamanho da matriz quadrada: \n");
    scanf("%d",&n);

    int m[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i){
                m[i][j]=i+1;
            }
            else if(j>i){
                m[i][j]=0;
            }
            else if(j<i){
                m[i][j]=j+1;
            }
        }
    }
    printf("Matriz criada: \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ",m[i][j]);
        }
    }
    return 0;
}