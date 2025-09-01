#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 1;
    while (numero <= 20)
    {
        if (numero % 2 == 0)
        {
            printf("o número par é %d\n", numero);
        }
        numero++;
    }
    return 0;
}