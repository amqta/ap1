#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma;
    for (int i = 1; i <= 500; i++)
    {
        if (i % 5 == 0 && i % 2 == 0)
        {
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("A soma dos núemros pares múltiplos de 5 entre 1 e 500 é %d\n", soma);
}