//programa que imprime todos os valores de 1 a 100 excluindo valores divisiveis por 6
#include<stdio.h>
int main(){

    int i;

    for(i=1;i<=100;i++){
        if(i%6!=0){
            printf("%d\n",i);
        }
    }

return 0;
}