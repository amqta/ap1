#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("Insira um número decimal: ");
    double decimal;
    scanf("%d", &decimal);
    printf("O equivalente em octal é %o\n", decimal);
    return 0;
}