// Lucas Costa Guimarães
#include <stdio.h>

int multiplicaVetor(int v[], int n);

int main()
{
    int i = 0, tamanho = 0;
    int v[tamanho];

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for (i = 0; i < tamanho; i++)
    {
        printf("Informe o %d valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("multiplicacao dos valores do vetor: %d\n",multiplicaVetor(v,tamanho));

    return 0;
}

int multiplicaVetor(int v[], int n)
{
    int resultado = 1, i = 0;
    for (i = 0; i < n; i++)
    {
        resultado *= v[i];
    }
    return resultado;
}