#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], i, j, k;
    int existe;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nElementos do vetor sem repetições:\n");

    for (i = 0; i < 5; i++)
    {
        existe = 0;

        for (j = 0; j < i; j++)
        {
            if (A[i] == A[j])
            {
                existe = 1;
                break;
            }
        }
        if (existe == 0)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}