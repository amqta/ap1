#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    for (int i = 100; i > 0; i--)
    {
        printf("%d\n", i);
    }
}