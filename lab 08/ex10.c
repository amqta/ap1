#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Insira o valor de n: ");
    int n;
    scanf("%d", &n);
    while (n <= 5 || n >= 2000)
    {
        printf("Insira um valor maior que 5 e menor que 2000: ");
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^%d = %d\n", i, 2, i * i);
        }
    }
}