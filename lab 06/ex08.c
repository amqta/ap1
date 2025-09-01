#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i = 1;
    int termo;
    int resultado = 0;
    printf("Até que valor o somatório irá? ");
    scanf("%d", &n);

    // n não pode ser negativo
    if (n < 0)
    {
        printf("O valor não pode ser negativo.\n");
        while (n < 0)
        {
            scanf("%d", &n);
        }
    }

    while (n >= i)
    {
        termo = (2 * pow(i, 2) + 5 * i + 1);
        resultado += termo;
        i++;
    }
    printf("O resultado do somatório é %d\n", resultado);
    return 0;
}