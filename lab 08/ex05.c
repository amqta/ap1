#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o tamanho do triângulo: ");
    int op;
    scanf("%d", &op);
    for (int i = 0; i < op; i++)
    {
        int ciclo = 0;
        while (ciclo <= i)
        {
            printf("*");
            ciclo++;
        }
        printf("\n");
    }
}