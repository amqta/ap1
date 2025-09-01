#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int B[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do valor: ", i +
                                           1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        B[i] = A[9 - i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%do valor do vetor A: %d\n", i + 1, A[i]);
        printf("%do valor do vetor B: %d\n", i + 1, B[i]);
    }

    return 0;
}
