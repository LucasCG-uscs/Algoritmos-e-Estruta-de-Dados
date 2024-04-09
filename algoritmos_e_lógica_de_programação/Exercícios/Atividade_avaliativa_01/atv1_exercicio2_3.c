//programa que recebe um numero real e caso o numero for positivo, imprime a raiz quadrada do numero, caso o contrario, imprime o numero ao quadrado
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    int a,raiz_quadrada,potencia;

    printf("Digite um numero: \n");
    scanf("%d",&a);

    if(a>0){
    raiz_quadrada=sqrt(a);
    printf("A raiz quadrada do numero é: %d\n",raiz_quadrada);
    }
    else if(a<0){
        potencia=pow(a,2);
        printf("O quadrado do numero: %d\n",potencia);
    }
return 0;
}