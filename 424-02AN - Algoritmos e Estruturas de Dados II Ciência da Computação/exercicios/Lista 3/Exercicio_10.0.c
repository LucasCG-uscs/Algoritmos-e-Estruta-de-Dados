// Lucas Costa Guimarães
#include <stdio.h>

void maiorNumero(int num1, int num2);

int main()
{
    int a = 0, b = 0;

    printf("Informe dois valores: ");
    scanf("%d%d", &a, &b);

    maiorNumero(a, b);
    return 0;
}

void maiorNumero(int num1, int num2)
{

    if (num1 == num2)
    {
        printf("Numeros iguais!");
    }
    else
    {
        if (num1 > num2)
        {
            printf("Maior numero: %d", num1);
        }
        else
        {
            printf("Maior numero: %d", num2);
        }
    }
}