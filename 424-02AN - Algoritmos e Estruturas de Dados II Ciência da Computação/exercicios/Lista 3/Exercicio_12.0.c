// Lucas Costa Guimarães
#include <stdio.h>

int espelhaVetor(int v[], int n);

int main()
{
    int i = 0;
    int v[10];

    for (i = 0; i < 10; i++)
    {
        printf("Informe o %d valor: ", i + 1);
        scanf("%d", &v[i]);
    }
    espelhaVetor(v,10);
    return 0;
}

int espelhaVetor(int v[], int n)
{
    int i = 0;
    for (i = n; i > 0; i--)
    {
        printf("%d ",i);
    }
}