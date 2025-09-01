#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[7];
    float soma = 0.0;
    int contador = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %do valor: ", i +
                                           1);
        scanf("%f", &A[i]);
        if (A[i] > 0)
        {
            soma += A[i];
        }
        if (A[i] < 0)
        {
            contador++;
        }
    }
    printf("Soma dos positivos: %.2f\n",
           soma);
    printf("Quantidade de negativos: %d\n", contador);
    return 0;
}