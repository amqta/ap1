#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;
    printf("Escolha um dos exercícios de 1 a 11; insira um valor negativo para sair.\n");
    do
    {
        scanf("%d", &op);
        if (op <= 11 && op > 0)
        {
            printf("Você escolheu o exercício %d\n", op);
        }
        else if (op > 11)
        {
            printf("Escolha um exercício válido.\n");
        }
    } while (op > 0);
}