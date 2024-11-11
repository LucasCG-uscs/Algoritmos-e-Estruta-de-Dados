// Lucas Costa Guimarães
#include <stdio.h>

float calcularMedia(int num1, int num2, int num3);

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Informe 3 numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Media dos valores: %.2f", calcularMedia(a, b, c));

    return 0;
}

float calcularMedia(int num1, int num2, int num3)
{
    return (num1+num2+num3)/3;
}
