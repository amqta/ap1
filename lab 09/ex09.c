#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6];
    int B[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Insira um valor positivo: ");
        scanf("%d", &A[i]);
        if (A[i] < 0)
        {
            do
            {
                printf("O valor precisa ser positivo: ");
                scanf("%d", &A[i]);
            } while (A[i] < 0);
        }
        if (A[i] % 2 == 0)
        {
            B[i] = A[i] / 2;
        }
        else
            B[i] = A[i] * 3;
    }
    printf("Primeiro vetor: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nSegundo vetor: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}