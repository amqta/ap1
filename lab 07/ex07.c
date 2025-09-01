#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um número positivo e inteiro: ");
    int op;
    int i = 2;
    scanf("%d", &op);
    // checagem >1
    while (op < 1)
    {
        printf("Insira um número positivo e inteiro: ");
        scanf("%d", &op);
    }

    do
    {
        if (op % i == 0 && op != 2 || op == 1)
        {
            printf("%d não é primo.\n", op);
            break;
        }
        else
        {
            printf("%d é primo.\n", op);
            break;
        }

        i++;
    } while (i < op);
}