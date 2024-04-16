// programa que pede ao usuário para adivinhar um número (por exemplo, 42) e continue até o usuario acertar o numero usando for
#include<stdio.h>
int main(){

    int i,a;

    printf("Advinhe em qual numero estou pensando: ");
    scanf("%d",&a);

    for(i=75;i!=a;){
        printf("Errrrrou, tenta de novo ai: ");
        scanf("%d",&a);
    }
    printf("Belo chute, acertou em cheio !!\nO numero era %d",i);

return 0;
}