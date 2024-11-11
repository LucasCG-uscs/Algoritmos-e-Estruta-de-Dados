//Lucas Costa Guimarães
//a dificuldade nesse programa foi organizar as saídas dos dados para imprimi-los na tela
#include<stdio.h>

float mediaTurma(int num_alunos){
    int i=0;
    float media_aluno=0.0,soma_media_aluno=0.0;

    for(i=0;i<num_alunos;i++){
            printf("Informe a media do aluno %d : ",i+1);
            scanf("%f",&media_aluno);
            soma_media_aluno += media_aluno;
        }

    return soma_media_aluno/num_alunos;
}

float mediaEscola(int num_turmas){
    int i=0,num_alunos=0;
    float mediaTurmas[num_turmas],soma_media_turma=0.0;
    for(i=0;i<num_turmas;i++){
        printf("Informe o numero de alunos da turma %d: ",i+1);
        scanf("%d",&num_alunos);

        mediaTurmas[i]= mediaTurma(num_alunos);
        soma_media_turma += mediaTurmas[i];
    }
    for(i=0;i<num_turmas;i++){
    printf("Media da turma %d: %.2f\n",i+1,mediaTurmas[i]);
    }

    return soma_media_turma/num_turmas;
}

int main(){
    int num_turmas=0;

    printf("Para calcular a media da escola comece informando o numero de turmas: ");
    scanf("%d",&num_turmas);

    printf("Media da escola: %.2f",mediaEscola(num_turmas));
return 0;
}