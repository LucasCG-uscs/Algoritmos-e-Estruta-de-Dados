// Lucas Costa Guimarães
#include <stdio.h>

void maiorValor(int v[], int n);

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

    maiorValor(v, tamanho);

    return 0;
}

void maiorValor(int v[], int n)
{
    int i = 0, maior = -1, posicao = 0;

    for (i = 0; i < n; i++)
    {
        if (maior < v[i])
        {
            maior = v[i];
            posicao = i;
        }
    }
    printf("Maior valor: %d\nSua posicao: %d", maior, posicao);
}