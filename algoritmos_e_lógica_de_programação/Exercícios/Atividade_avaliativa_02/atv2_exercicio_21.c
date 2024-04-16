//programa que recebe um valor n e imprime o fatorial de n usando for
#include<stdio.h>
int main(){

    int a,i,fat=1;

    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d",&a);

    for(i=a;i>=1;i--){
        fat*=i;
    }
    printf("Fatorial de %d: %d",a,fat);

return 0;
}