#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int menor;
    printf("Digite números positivos (digite -1 para encerrar):\n");

    while (1)
    {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero == -1)
        {
            break;
        }
        if (numero < 0)
        {
            printf("O valor não pode ser negativo.\n");
            continue;
        }
        menor = numero;
        if (numero < menor)
        {
            menor = numero;
        }
    }
    if (menor == 0)
    {
        printf("Nenhum valor foi digitado.\n");
    }
    else
    {
        printf("O menor número digitado foi %d\n", menor);
    }
    return 0;
}