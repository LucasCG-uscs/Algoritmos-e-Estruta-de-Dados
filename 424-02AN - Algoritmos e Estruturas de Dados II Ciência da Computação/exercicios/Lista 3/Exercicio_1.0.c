// Lucas Costa Guimarães
/*#include <stdio.h> //inclusão da biblioteca pardrão de entrada e saída.

 typedef struct {  //definição de uma struct do tipo pessoa com atributos de diferentos tipos primitivos.
    double peso;
    int idade;
    double altura;
 } pessoa;

 void imprimePessoa(pessoa p){ //função que imprime os dados de um objeto pessoa que for passado como parâmetro.
    printf("Peso: %.3lf. Idade: %d. Altura: %.3lf.\n\n ",p.peso,p.idade,p.altura);
 }

 int main(){ //início da função principal
    pessoa pessoas[5],p1; //declaração de um array de 5 posições do tipo pessoa e declaração de uma variável do tipo pessoa (pessoa p1).

    pessoas[0].peso = 80.6; // inicialização dos atributos de pessoas[0].
    pessoas[0].idade = 40; // inicialização dos atributos de pessoas[0].
    pessoas[0].altura = 1.70; // inicialização dos atributos de pessoas[0].

    p1 = pessoas[0]; // Inicialização de pessoa p1 com os mesmos atributos de pessoas[0].

    if(p1.idade>20) //teste para o atributo idade de pessoa p1.Caso o atributo seja maior que 20 a idade é incrementada em 1(no caso, está ocorrendo a incrementação)
        p1.idade++;

    pessoas[1]=pessoas[0]; // inicialização de pessoas[1] com os mesmos atributos de pessoas[0]
    imprimePessoa(p1); //chamada da função imprimePessoa para pessoa p1
    imprimePessoa(pessoas[0]); //chamada da função imprimePessoa para pessoas[0]
    imprimePessoa(pessoas[1]); //chamada da função imprimePessoa para pessoas[1]
    imprimePessoa(pessoas[2]); //chamada da função imprimePessoa para pessoas[2]. Nestes casos o retorno dos valores dos atributos será um lixo da memória
    imprimePessoa(pessoas[3]); //chamada da função imprimePessoa para pessoas[3]  pois os atributos desses objetos não forma inicializados.
    imprimePessoa(pessoas[4]); //chamada da função imprimePessoa para pessoas[4]  Ocorrendo isso em pessoas [2] [3] [4].

    return 0;
 }*/

// Programa refeito segundo as orientações
#include <stdio.h>

typedef struct
{
    double peso;
    int idade;
    double altura;
} pessoa;

void imprimePessoa(pessoa p)
{
    printf("Peso: %.3lf. Idade: %d. Altura: %.3lf \n\n", p.peso, p.idade, p.altura);
}

int main()
{

    pessoa pessoas[5], p1;

    printf("Informe peso, idade e altura para pessoa 0: ");
    scanf("%lf %d %lf", &pessoas[0].peso, &pessoas[0].idade, &pessoas[0].altura);

    p1 = pessoas[0];

    if (p1.idade > 20)
        p1.idade++;

    pessoas[1] = pessoas[0];
    imprimePessoa(p1);
    imprimePessoa(pessoas[0]);
    imprimePessoa(pessoas[1]);
    imprimePessoa(pessoas[2]);
    imprimePessoa(pessoas[3]);
    imprimePessoa(pessoas[4]);

    return 0;
}