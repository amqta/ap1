#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    for (int i = 101; i <= 201; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}