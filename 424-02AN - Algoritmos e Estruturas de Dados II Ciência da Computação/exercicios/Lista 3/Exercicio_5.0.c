// Lucas Costa Guimarães
#include <stdio.h>
void exibeNumeros(int n);

int main()
{
    int n = 0;
    printf("Informe um numero: ");
    scanf("%d", &n);

    exibeNumeros(n);

    return 0;
}

void exibeNumeros(int n)
{
    int i = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 7 != 0)
        {
            printf("%d ", i);
        }
    }
}