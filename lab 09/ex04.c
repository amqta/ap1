#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int A[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %do valor: ", i +
                                           1);
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            contador++;
        }
    }
    printf("Existem %d numeros pares.\n",
           contador);
    printf("Os numeros pares sao: ");
    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}
