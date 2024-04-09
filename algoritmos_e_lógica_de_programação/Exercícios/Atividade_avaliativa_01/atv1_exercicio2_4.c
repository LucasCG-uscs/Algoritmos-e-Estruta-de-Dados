//programa que recebe um numero e caso ele seja positivo imprime o numero digitado ao quadrado e sua raiz quadrada
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    int a,raiz_quadrada,potencia;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&a);

    if(a>0){
        raiz_quadrada=sqrt(a);
        potencia=pow(a,2);
        printf("raiz quadrada do numero digitado: %d\n",raiz_quadrada);
        printf("quadrado do numero digitado: %d\n",potencia);
    }
return 0;
}