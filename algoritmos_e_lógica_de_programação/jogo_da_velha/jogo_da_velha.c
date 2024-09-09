// Feito por Eduardo de Souza e Lucas Guimarães
#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
    int jogo[3][3]={1,2,3,4,5,6,7,8,9};
    char tabuleiro[3][3];
    int i=0,j=0,posicao=0,rodada=0,controle=0;

    printf("Bem vindo ao jogo da velha !!!\n\nO primeiro jogador começa escolhendo a posição onde quer marcar um X.\nApós a primeira marcação, o segundo jogador escolhe onde quer marcar um O.\nO jogo segue até um dos jogadores marcar 3 sinais em sequência em qualquer direção.\nBom jogo!\n\n");
    for(rodada=1;rodada<=4;rodada++){
        printf("Jogador 1, escolha onde quer marcar:\n");
        
        for(i=0;i<3;i++){
			if(i == 1){
			printf("---+---+---\n");
		}
			if(i == 2){
			printf("---+---+---\n");
		}
            for(j=0;j<3;j++){
				if (j == 1){
				printf("|");
			}
				if (j == 2){
				printf("|");
			}
                printf(" %d ",jogo[i][j]);
            }
            printf("\n");
        }
        printf("\n\nposição escolhida:");
        scanf("%d",&posicao);
        switch (posicao){
        case 1:
            jogo[0][0]=10;
            tabuleiro[0][0]='X';
            break;
        case 2:
            jogo[0][1]=10;
            tabuleiro[0][1]='X';
            break;
        case 3:
            jogo[0][2]=10;
            tabuleiro[0][2]='X';
            break;
        case 4:
            jogo[1][0]=10;
            tabuleiro[1][0]='X';
            break;
        case 5:
            jogo[1][1]=10;
            tabuleiro[1][1]='X';
            break;
        case 6:
            jogo[1][2]=10;
            tabuleiro[1][2]='X';
            break;
        case 7:
            jogo[2][0]=10;
            tabuleiro[2][0]='X';
            break;
        case 8:
            jogo[2][1]=10;
            tabuleiro[2][1]='X';
            break;
        case 9:
            jogo[2][2]=10;
            tabuleiro[2][2]='X';
            break;
        
        
        default:
            printf("Posição inválida !\n por favor, insira um número entre 1 e 9\n");
            break;
        }
        printf("\n\nO jogo segue assim:\n");
        for(i=0;i<3;i++){
				if(i == 1){
			printf("---+---+---\n");
		}
			if(i == 2){
			printf("---+---+---\n");
		}
            for(j=0;j<3;j++){
                printf(" %c ",tabuleiro[i][j]);
                	if (j == 0){
				printf("|");
			}
				if (j == 1){
				printf("|");
			}
            }
            printf("\n");
        }
        if(jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }
        else if(jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }
        else if(jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
            break;
        }
        printf("Jogador 2, escolha onde quer marcar:\n");
        for(i=0;i<3;i++){
				if(i == 1){
			printf("---+---+---\n");
		}
			if(i == 2){
			printf("---+---+---\n");
		}
            for(j=0;j<3;j++){
                printf(" %d ",jogo[i][j]);
                if (j == 0){
				printf("|");
			}
				if (j == 1){
				printf("|");
			}
            }
            printf("\n");
        }
        printf("posição escolhida: ");
        scanf("%d",&posicao);
        switch (posicao){
        case 1:
            jogo[0][0]=0;
            tabuleiro[0][0]='O';
            break;
        case 2:
            jogo[0][1]=0;
            tabuleiro[0][1]='O';
            break;
        case 3:
            jogo[0][2]=0;
            tabuleiro[0][2]='O';
            break;
        case 4:
            jogo[1][0]=0;
            tabuleiro[1][0]='O';
            break;
        case 5:
            jogo[1][1]=0;
            tabuleiro[1][1]='O';
            break;
        case 6:
            jogo[1][2]=0;
            tabuleiro[1][2]='O';
            break;
        case 7:
            jogo[2][0]=0;
            tabuleiro[2][0]='O';
            break;
        case 8:
            jogo[2][1]=0;
            tabuleiro[2][1]='O';
            break;
        case 9:
            jogo[2][2]=0;
            tabuleiro[2][2]='O';
            break;
        
        
        default:
            printf("Posição inválida !\n por favor, insira um número entre 1 e 9\n");
            break;
        }

        printf("O jogo segue assim:\n");
        for(i=0;i<3;i++){
				if(i == 1){
			printf("---+---+---\n");
		}
			if(i == 2){
			printf("---+---+---\n");
		}
            for(j=0;j<3;j++){
                printf(" %c ",tabuleiro[i][j]);
                	if (j == 0){
				printf("|");
			}
				if (j == 1){
				printf("|");
			}
            }
            printf("\n");
        }
        if(jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }
        else if(jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }
        else if(jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }else if(jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0]){
            printf(" Temos um vencedor !\n Parabéns jogador 2, você ganhou !!!");
            controle++;
            break;
        }
    }
    if(controle==0){
        printf("Jogador 1, escolha onde quer marcar:\n");
        for(i=0;i<3;i++){
					if(i == 1){
			printf("---+---+---\n");
		}
			if(i == 2){
			printf("---+---+---\n");
		}
            for(j=0;j<3;j++){
				   	if (j == 0){
				printf("|");
			}
				if (j == 1){
				printf("|");
			}
                printf(" %d ",jogo[i][j]);
            }
            printf("\n");
        }
        printf("posição escolhida: ");
        scanf("%d",&posicao);
        switch (posicao){
        case 1:
            jogo[0][0]=00;
            tabuleiro[0][0]='X';
            break;
        case 2:
            jogo[0][1]=00;
            tabuleiro[0][1]='X';
            break;
        case 3:
            jogo[0][2]=00;
            tabuleiro[0][2]='X';
            break;
        case 4:
            jogo[1][0]=00;
            tabuleiro[1][0]='X';
            break;
        case 5:
            jogo[1][1]=00;
            tabuleiro[1][1]='X';
            break;
        case 6:
            jogo[1][2]=00;
            tabuleiro[1][2]='X';
            break;
        case 7:
            jogo[2][0]=00;
            tabuleiro[2][0]='X';
            break;
        case 8:
            jogo[2][1]=00;
            tabuleiro[2][1]='X';
            break;
        case 9:
            jogo[2][2]=00;
            tabuleiro[2][2]='X';
            break;
        
        
        default:
            printf("Posição inválida !\n por favor, insira um némero entre 1 e 9\n");
            break;
        }
        printf("O jogo segue assim:\n");
        for(i=0;i<3;i++){
					if(i == 1){
			printf("---+---+---\n");
		}
			if(i == 2){
			printf("---+---+---\n");
		}
            for(j=0;j<3;j++){
				   	if (j == 0){
				printf("|");
			}
				if (j == 1){
				printf("|");
			}
                printf(" %c ",tabuleiro[i][j]);
            }
            printf("\n");
        }
        if(jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }
        else if(jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }
        else if(jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }else if(jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }else if(jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }else if(jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }else if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }else if(jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0]){
            printf(" Temos um vencedor !\n Parabéns jogador 1, você ganhou !!!");
            controle++;
        }
    }
    if(controle==0){
        printf("Deu velha !!!\nO jogo acabou.");
    }

return 0;
}