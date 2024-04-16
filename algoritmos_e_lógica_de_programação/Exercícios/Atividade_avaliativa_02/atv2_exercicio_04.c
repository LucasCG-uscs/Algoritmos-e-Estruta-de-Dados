//programa que retorna o valor de um somatario(definido no enunciado do exercicio)
#include<stdio.h>
#include<math.h>
int main(){

    int n,i, soma=0;

    printf("informe o numero que indica ate onde vai o somatorio: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        soma+= (5*pow(i,2))+2*i+8;
    }
    printf("\nvalor do somatorio ate %d = %d",n,soma);

return 0;
}