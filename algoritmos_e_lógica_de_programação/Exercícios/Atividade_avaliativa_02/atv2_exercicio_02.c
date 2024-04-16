//programa que calcula e imprime a soma dos n primeiros numeros primos, sendo n definido pelo usuário
#include<stdio.h>
int main(){
    
    int n,i,j,soma=0;

    printf("digite um valor: ");
    scanf("%d",&n);

    for(i=2 ;i<=n; i++){
        for(j=2;j<i;j++){
            if(i%j == 0){
                break;
            }
        }
        if(i ==j){
            soma+=i;
            printf("%d",i);
        }
    }    
    printf("\nsoma dos n primos de 2 até %d = %d",n,soma);

return 0;
}