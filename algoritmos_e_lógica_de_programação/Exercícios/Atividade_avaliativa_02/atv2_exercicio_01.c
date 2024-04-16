//programa que recebe os lados de um triangulo, verifica se os lados informados realmente formam um triangulo e informa qual o tipo do triangulo
#include<stdio.h>
int main(){
    
    int a,b,c;

    printf("Informe os lados do triangulo:");
    scanf("%d%d%d",&a,&b,&c);
    //validando o triangulo

    if(a + b <= c){
        printf("\nos lados informados nao formam um triangulo !!!");
    }
    else if(a + c <= b){
        printf("\nos lados informados nao formam um triangulo !!!");
    }
    else if(b + c <= a){
        printf("\nos lados informados nao formam um triangulo !!!");
    }
    //qualificando o triangulo
    if(a==b && b==c){
        printf("\nTriangulo equilatero !");
    }
    else if((a==b && b!=c ) || (a==c && a!=b) || (b==c && b!=a)){
        printf("\nTriangulo isosceles");
    }
    else if(a!=b && b!=c){
        printf("\nTriangulo escaleno!");
    }

return 0;
}