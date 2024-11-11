// Lucas Costa Guimarães
#include <stdio.h>

int calcularResultado(int soma, int a, int b);

int main()
{
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0, soma = 0, a = v[0], b = v[9];
    for (i = 0; i < 10; i++)
    {
        soma += i;
    }

    printf("Resultado da expressao: %d", calcularResultado(soma, a, b));
    return 0;
}

int calcularResultado(int soma, int a, int b)
{
    return soma + (a * 5) + (b * 2);
}

