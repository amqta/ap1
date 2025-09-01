#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    numero % 2 == 0 ? printf("O numero e par\n") : printf("O numero e impar\n");
    return 0;
}