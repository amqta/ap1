#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Qual a sua idade?\n");
    int idade;
    scanf("%d", &idade);
    printf("Você tem %d anos\n", idade);
    return 0;
}