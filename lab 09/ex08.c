#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[5];
    float maior = 0.0;
    float menor = 0.0;
    float media = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %do valor: ", i + 1);
        scanf("%f", &A[i]);
        if (i == 0)
        {
            menor = A[i];
        }
        if (A[i] > maior)
        {
            maior = A[i];
        }
        if (A[i] < menor)
        {
            menor = A[i];
        }
        media += A[i];
    }
    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.0f ", A[i]);
    }
    printf("\nMenor valor: %.2f\n", menor);
    printf("Maior valor: %.2f\n", maior);
    printf("Media dos valores: %.2f\n", media / 5);

    return 0;
}