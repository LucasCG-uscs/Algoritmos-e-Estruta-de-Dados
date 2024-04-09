//programa que recebe quatro notas e imprime a media aritmetica das notas
#include<stdio.h>
int main(){

    float n1,n2,n3,n4;

    printf("Digite as 4 notas separadas por espaço: ");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    printf("Media aritmetica das notas: %f",(n1+n2+n3+n4)/4);

return 0;
}