//Lucas Costa Guimarães
/*Achei muito simples a ideia de somar valores em um vetor fixo,
então procurei uma solução para vetores com alocação dinâmica,
para que o usuário possa inserir quantos valores precisar.
Tive um pouco de dificuldade em entender de que forma o vetor estava sendo declarado,
mas consegui entender as funções envolvidas na alocação dinamica para fazer o preenchimento do vetor
 */
#include<stdio.h>
#include<stdlib.h>

int somaVetor(int v[],int tamanho);
int main(){
    int tamanho=0,valor;
    int *vetor=NULL;

    printf("Insira os numeros que deseja somar:\nInsira 0 apos inserir todos os numeros.\n");

    while(1){
        printf("Informe o numero: ");
        scanf("%d",&valor);

        if (valor == 0) {
            break; 
        }

        int *temp = realloc(vetor, (tamanho+1) *sizeof(int));

        if (temp == NULL) {
            free(vetor);
            printf("Erro ao alocar memória.\n");
            return 1;
        }
        vetor = temp;
        vetor[tamanho]=valor;
        tamanho++;
    }
   

    printf("Soma dos valores inseridos: %d",somaVetor(vetor,tamanho));

    free(vetor); // Libera a memória alocada dinamicamente

    return 0;
}

int somaVetor(int v[],int tamanho){
    int i=0,soma=0;

    for(i=0;i<tamanho;i++){
        soma+=v[i];
    }
    return soma;
}