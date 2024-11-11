// Lucas Costa Guimarães
#include <stdio.h>

int somaVetor(int v[], int n);

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

    printf("Soma dos valores: %d\nMedia dos valores: %d", somaVetor(v, tamanho), somaVetor(v, tamanho) / tamanho);

    return 0;
}

int somaVetor(int v[], int n)
{
    int soma = 0, i = 0;
    for (i = 0; i < n; i++)
    {
        soma += v[i];
    }
    return soma;
}