#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;
    while (1)
    {
        printf("Escolha um dos exercícios da lista:\n");
        printf("Insira um valor negativo para encerrar o programa. \n");
        scanf("%d", &op);

        if (op < 0)
        {
            break;
        }

        switch (op)
        {
        case 1:
            printf("Exercício 1\n");
            break;
        case 2:
            printf("Exercício 2\n");
            break;
        case 3:
            printf("Exercício 3\n");
            break;
        case 4:
            printf("Exercício 4\n");
            break;
        case 5:
            printf("Exercício 5\n");
            break;
        case 6:
            printf("Exercício 6\n");
            break;
        case 7:
            printf("Exercício 7\n");
            break;
        case 8:
            printf("Exercício 8\n");
            break;
        case 9:
            printf("Exercício 9\n");
            break;
        case 10:
            printf("Exercício 10\n");
            break;
        default:
            printf("Escolha um exercício válido.\n");
            break;
        }
    }
}