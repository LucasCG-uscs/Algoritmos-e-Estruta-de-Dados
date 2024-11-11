// Lucas Costa Guimarães
#include <stdio.h>

int menorNumero(int num1, int num2, int num3);

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Informe 3 numeros inteiros distintos:");
    scanf("%d%d%d", &a, &b, &c);

    printf("Menor dos 3 numeros: %d", menorNumero(a, b, c));
    return 0;
}

int menorNumero(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
        return num1;
    if (num2 < num1 && num2 < num3)
        return num2;
    if (num3 < num2 && num3 < num1)
        return num3;
}