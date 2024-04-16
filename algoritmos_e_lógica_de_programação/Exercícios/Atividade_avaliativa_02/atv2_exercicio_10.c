// programa que pede ao usuário para adivinhar um número (por exemplo, 42) e continue até o usuario acertar o numero usando while
#include<stdio.h>
int main(){

    int i=75,n;

    printf("advinhe em qual numero estou pensando: ");
    scanf("%d",&n);
    while(n!=i){
        printf("hmm, numero errado, tenta de novo:");
        scanf("%d",&n);
    }
    printf("UAU, vc leu a minha mente! o numero era %d ",i);

return 0;
}