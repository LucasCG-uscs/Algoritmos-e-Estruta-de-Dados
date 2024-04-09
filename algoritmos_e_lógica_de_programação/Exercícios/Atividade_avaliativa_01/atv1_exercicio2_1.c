//programa que recebe dois numeros e mostra qual o maior deles
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    int a,b;

    printf("Digite dois numeros inteiros separados por um espaco: \n");
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("O maior é: %d\n",a);
    else if(b>a)
        printf("O maior é: %d\n",b);
    else if(a==b)
        printf("os dois numeros sao iguais !");

return 0;
}