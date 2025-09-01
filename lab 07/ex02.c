#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Escolha um número inteiro e positivo, e será contado de 1 até ele: ");
    int op;
    scanf("%d", &op);

    // checar se op é menor que 1
    while (op <= 1)
    {
        printf("Escolha um número maior que 1: ");
        scanf("%d", &op);
    }

    // contagem
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= op);
}