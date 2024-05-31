//Feito por Lucas Costa Guimarães
//programa que identifica e imprime o valor que mais se repete em um vetor de 30 elementos. Programa com erro =(
#include<stdio.h>
int main(){

    int vet[30];
    int i=0,j=0,contador=0,maior=0,mais_repetido=0;

    printf("Informe o primeiro valor de uma lista de 30 valores:");
    scanf("%d",&vet[0]);

    for(i=1;i<30;i++){
        printf("Informe o proximo valor:");
        scanf("%d",&vet[i]);
    }
    for(j=0;j<30;j++){
        for(i=0;i<30;i++){
            if(vet[j]==vet[i+1]){
                contador++;
            }
        }
        if(contador>maior){
            maior=contador;
            mais_repetido=vet[j];
        }
    }
    
    if(contador == 0){
        printf("Nenhum elemento do vetor se repete !");
    }
    else{
        printf("Valor mais repetido no vetor: %d\nNumero de vezes repetido:%d",mais_repetido,contador);
    }

return 0;
}