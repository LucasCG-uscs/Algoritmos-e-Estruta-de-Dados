//usando for, programa que imprime os numeros pares de 2 até um valor digitado pelo usuario
#include<stdio.h>
int main(){
    
    int i,a;

    printf("Informe ate onde mostrar os pares: ");
    scanf("%d",&a);

    for(i=0;i<=a;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }

return 0;
}