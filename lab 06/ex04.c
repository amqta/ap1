#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 30;
    int soma = 0;
    while (numero <= 50)
    {
        printf("%d\n", numero);
        soma = soma + numero;
        numero++;
    }
    printf("A soma total é %d\n", soma);
    return 0;
}