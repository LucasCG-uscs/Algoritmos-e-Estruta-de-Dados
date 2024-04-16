//programa que recebe o salário-base e calcula e imprime o salário a receber com 5% de gratificação
#include<stdio.h>
int main(){

    float salario_base;

    printf("Informe o salario base:");
    scanf("%f",&salario_base);
    printf("Salario a receber com gratificação de 5%%: %.2fR$",salario_base*1.05);

return 0;
}