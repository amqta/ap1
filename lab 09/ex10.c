#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int i, j;
    int repetido;

    printf("Digite 10 valores para o vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite %do valor: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Valores repetidos no vetor:\n");
    for (i = 0; i < 10; i++)
    {
        repetido = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (A[i] == A[j])
            {
                repetido = 1;
                break;
            }
        }
        if (repetido && i < j)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}