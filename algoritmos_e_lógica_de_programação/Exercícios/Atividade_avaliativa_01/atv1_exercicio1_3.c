//programa que solicita o usuário digitar três valores e imprime a soma deles
#include<stdio.h>
int main(){

    int a,b,c;

    printf("Digite 3 numeros inteiros separados por espaço:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Soma dos valores digitados: %d", a+b+c);

return 0;
}