//programa que recebe um numero e caso o numero seja positivo imprime sua raiz quadrada, caso o contrário imprime uma mensagem informando que o numero é inválido
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    int a, raiz_quadrada;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&a);

    if(a>0){
        raiz_quadrada=sqrt(a);
        printf("raiz quadrada do numero digitado: %d\n",raiz_quadrada);
    }
    else if(a<0)
        printf("Numero invalido!");
  
return 0;
}