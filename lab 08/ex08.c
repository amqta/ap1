#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Insira o valor de n: ");
    int n;
    int resultado = 0;
    scanf("%d", &n);
    while (n <= 5)
    {
        printf("Insira um valor que seja maior que 5: ");
        scanf("%d", &n);
    }

    for (int i = 5; i <= n; i++)
    {
        resultado += 2 * i * i + 5 * i + 3;
    }
    printf("O resultado é %d", resultado);
}