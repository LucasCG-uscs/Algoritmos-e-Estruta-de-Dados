//Lucas Costa Guimarães
//O programa está adaptado para realizar 10 vezes a soma por motivos de teste.
#include<stdio.h>
int primo(int a){
    int count = 0,i=0;
    for(i=1;i<=a;i++){
        if(a%i == 0){
            count++;
        }
    }
    if(count != 2){
        return 0;
    }
    else return 1;
}

int somaPrimos(int n){
    int soma=0, i=0;

    for(i=0;i<=n;i++){
        if(primo(i)){
            soma+= i;
        }
    }
    return soma;
}

int main(){
    int n=0,i=0;
    
    for(i=0;i<10;i++){
    printf("Informe o valor ate onde deseja somar os primos: ");
    scanf("%d",&n);

    printf("Soma dos numeros primos ate o numero inserido: %d\n",somaPrimos(n));
    }
    
    return 0;
}