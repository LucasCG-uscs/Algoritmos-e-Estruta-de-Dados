// Lucas Costa Guimar�es
#include <stdio.h>  //inclus�o da biblioteca padr�o de entrada e sa�da
#include <string.h> // inclus�o da biblioteca string para utiliza��o de comandos especificos para string
#include <locale.h> //inclus�o da biblioteca locale.h para utilizar o comando setLocale para corre��o de caracteres especiais da lingua Portuguesa

typedef struct
{ // defini��o da struct do tipo Carro com 3 atributos de variados tipos primitivos
    char modelo[50];
    int ano;
    double preco;
} Carro;

/*Fun��o que a partir do endere�o de um objeto do tipo Carro
acessa diretamente e modifica o atributo de pre�o
para o novo pre�o passado como par�metro*/
void modificarPreco(Carro *c, double novoPreco)
{
    c->preco = novoPreco;
}

/*Fun��o que imprime na tela os atributos de um determinado objeto do tipo carro
passando o endere�o do objeto como par�metro*/
void imprimirCarro(Carro *c)
{
    printf("Modelo: %s\nAno: %d\nPreco: R$%.2lf\n", c->modelo, c->ano, c->preco);
}
/*inicio da fun��o principal*/
int main()
{
    /*Defini��o da configura��o de linguagem para portugues,
     corrigindo erros de acentua��o e caracteres especiais*/
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*declara��o da vari�vel carro1 do tipo Carro*/
    Carro carro1;

    /*defini��o dos atributos de carro1.
    Usando strcpy para passar a string "xyz"
    como valor para o atributo modelo de carro1*/
    strcpy(carro1.modelo, "xyz");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

    /*imprimindo os dados antes da utiliza��o da fun��o modificarPre�o*/
    printf("Dados antes da modificao:\n");
    /*chamada da fun��o imprimirCarro para imprimir os atributos de carro1*/
    imprimirCarro(&carro1);

    /*chamada da fun��o modificarPre�o para alterar o atributo pre�o de carro1 para 115000.00*/
    modificarPreco(&carro1, 115000.00);

    /*Imprimindo na tela os dados ap�s a modifica��o do atributo pre�o de carro1*/
    printf("Dados apos a modificacao do preco:\n");
    imprimirCarro(&carro1);

    return 0;
}