// Lucas Costa Guimarães
#include <stdio.h>
int calcularResultado(int v[], int n);

int main()
{
    int vetor[5], i = 0, resultado = 0;
    for (i = 0; i < 5; i++)
    {
        vetor[i] = i * 2;
    }

    resultado = calcularResultado(vetor, 5);

    printf("O resultado eh = %d\n", resultado);

    return 0;
}

int calcularResultado(int vetor[], int n)
{
    int i = 0, soma = 0;

    for (i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    return soma;
}