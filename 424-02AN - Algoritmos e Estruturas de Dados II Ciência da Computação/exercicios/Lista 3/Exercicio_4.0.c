// Lucas Costa Guimarães
#include <stdio.h>

void calculaMedia(float notas[], int n);

int main()
{
    int i = 0;
    float notas[4];

    for (i = 0; i < 4; i++)
    {
        printf("Informe a nota %d nota do aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    calculaMedia(notas, 4);

    return 0;
}

void calculaMedia(float notas[], int n)
{
    float soma = 0, media = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        soma += notas[i];
    }
    media = soma / n;

    if (media >= 7)
    {
        printf("Aluno aprovado!\nMedia do aluno: %.2f", media);
    }
    else
        printf("Aluno reprovado!\nMedia do aluno: %.2f", media);
}