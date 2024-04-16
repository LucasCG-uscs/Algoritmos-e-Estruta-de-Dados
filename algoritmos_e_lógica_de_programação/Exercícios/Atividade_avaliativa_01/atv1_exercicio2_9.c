/*programa que recebe o valor do salario de um trabalhador e o valor da prestação de um emprestimo
caso o valor da prestação for maior que 20% do salario imprime "emprestimo não concedido"
caso o contrario imprime "emprestimo concedido"*/
#include<stdio.h> 
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    float salario,prestacao;

    printf("Informe o salario: \n");
    scanf("%f",&salario);

    printf("Informe o valor da prestacao: \n");
    scanf("%f",&prestacao);

    if(prestacao>(salario*0.2)){

        printf("Emprestimo nao concedido!\n");

    }
    else{

        printf("Emprestimo concedido!\n");

    }
    
return 0;
}
