//programa que verifica se um numero é par ou impar
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int a;
    printf("Digite um numero inteiro: \n");
    scanf("%d",&a);

    if(a%2==0)
        printf("O numero digitado é par\n");
    else
        printf("O numero digitado é impar");
return 0;
}