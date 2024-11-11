// Lucas Costa Guimarães
#include <stdio.h>

void exibirPares(int numero);

int main()
{
    int n = 0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    exibirPares(n);

    return 0;
}

void exibirPares(int numero)
{
    int i = 0;
    for (i = 1; i <= numero; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}