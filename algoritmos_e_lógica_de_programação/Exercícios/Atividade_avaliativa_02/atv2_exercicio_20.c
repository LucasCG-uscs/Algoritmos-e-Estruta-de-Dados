//programa que calcula a soma de uma sequencia de inteiros
#include<stdio.h>
int main(){
    
    int i,a,b,soma=0;

    printf("Informe o limite da soma: ");
    scanf("%d",&a);

    printf("digite o primeiro valor da serie: ");
    scanf("%d",&b);

    soma+=b;
    for(i=1;i<=a-1;i++){
        printf("Digite o proximo valor: ");
        scanf("%d",&b);

        soma+=b;
    }
    printf("Soma dos %d primeiros termos da sequencia: %d",a,soma);

return 0;
}