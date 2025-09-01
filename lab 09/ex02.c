#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("Insira o %do valor: ", i +
                                           1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("\n\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}