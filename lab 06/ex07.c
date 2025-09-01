#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int fat = 1;
    printf("Insira um número: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Entrada inválida\n");
    }
    else if (n == 1)
    {
        printf("Fat de 1 = 1\n");
    }
    else
    {
        while (n > 1)
        {
            fat *= n;
            n--;
        }
        printf("%d", fat);
    }
    return 0;
}