#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Insira 2 números inteiros: \n");
    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);

    if (valor1 > valor2 && valor1 % 2 == 0 && valor1 % valor2 == 0)
    {
        printf("A subtração do maior pelo menor é %d\n", valor1 - valor2);
    }
    else
    {
        printf("A soma dos 2 valores é %d\n", valor1 + valor2);
    }

    return 0;
}