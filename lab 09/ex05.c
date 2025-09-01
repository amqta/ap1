#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior = 0;
    int menor = 0;
    int A[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %d valor: ", i + 1);
        scanf("%d", &A[i]);
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
    }
    printf("Maior numero do vetor: %d\n", maior);
    printf("Menor numero do vetor: %d\n", menor);
    return 0;
}