//programa que recebe 2 inteiros e informa qual o maior entre eles e a diferença entre eles, além de imprimir uma mensagem de aviso caso os 2 numeros sejam iguais
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    int a,b;

    printf("Digite dois numeros inteiros separados por um espaço: \n");
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("O maior numero é: %d\n",a);
        printf("a diferença entre os dois numeros é: %d\n",a-b);
    }
    else if(b>a){
        printf("O maior numero é: %d\n",b);
        printf("A diferença enrte os numeros é: %d\n",b-a);
    }
    else if(a==b)
    printf("Os dois numeros sao iguais!");
return 0;
}