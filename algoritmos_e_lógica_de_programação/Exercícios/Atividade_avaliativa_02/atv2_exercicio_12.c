//programa que iprime o maior dos valores de uma lista de valores informada pelo usuario usando while
#include<stdio.h>
int main(){

    int i=0,maior,a;

    printf("Insira o primeiro numero da lista\nInsira zero para finalizar a lista: ");
    scanf("%d",&a);

    maior=a;

    while(i!=a){
        printf("Digite o proximo valor da lista: ");
        scanf("%d",&a);

      if(maior<a){
        maior=a;
        i+=0;
      }
    }
    printf("maior numero da lista: %d",maior);

return 0;
}