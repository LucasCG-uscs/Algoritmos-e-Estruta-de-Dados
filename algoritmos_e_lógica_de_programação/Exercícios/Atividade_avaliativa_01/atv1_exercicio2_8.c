//programa que recebe 2 notas de um aluno, verifica se elas são validas(valor entre 0 a 10) e calcula a media das notas
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");

    float n1,n2;

    printf("digite as notas separadas por um espaço: \n");
    scanf("%f %f",&n1,&n2);

    if(n1<=10 && n1>=0){
        if(n2<=10 && n2>=0){
            
            printf("A media das notas é:%.1f\n",(n1+n2)/2);
        }
        
        else {
            printf("Nota inválida!\n"); 
        }
    }    
    else {
        printf("Nota inválida!\n");
    }
    
return 0;
}