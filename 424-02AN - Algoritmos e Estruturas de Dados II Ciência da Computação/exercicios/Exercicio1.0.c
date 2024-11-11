//Matriz para armazenar a pontuação de 3 jogadores em 5 jogos.
#include<stdio.h>
int main(){
    int i=0,j=0,p[3][5];
    int j1=0,j2=0,j3=0;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(i==0){
                printf("Informe a pontuacao na rodada %d do jogador %d: ",j+1,i+1);
                scanf("%d",&p[i][j]);
            }
            else if(i==1){
                printf("Informe a pontuacao na rodada %d do jogador %d: ",j+1,i+1);
                scanf("%d",&p[i][j]);
            }
            else if(i==2){
                printf("Informe a pontuacao na rodada %d do jogador %d: ",j+1,i+1);
                scanf("%d",&p[i][j]);
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(i==0){
                j1+=p[i][j];
            }
            else if(i==1){
                j2+=p[i][j];
            }
            else if(i==2){
                j3+=p[i][j];
            }
        }
    }
    printf("Pontuacao dos jogadores:\n");
    printf("Jogador1:%d pontos\n",j1);
    printf("Jogador2:%d pontos\n",j2);
    printf("Jogador3:%d pontos\n",j3);

    if(j1>j2 && j1>j3){
        printf("Vencedor: jogador1");
    }
    else if(j2>j1 && j2>j3){
        printf("Vencedor: jogador2");
    }
    else if(j3>j1 && j3>j2){
        printf("Vencedor: jogador3");
    }
    else if(j1==j2 && j2==j3){
        printf("Empate !!");
    }
    return 0;
}