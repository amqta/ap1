#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Escolha um dos exercicios: \n\n");
    printf("1 a 11 - Exercicio\n");
    printf("0 - Encerrar\n");

    int op;
    scanf("%d", &op);

    while (op != 0)
    {
        switch (op)
        {
        case 0:
            break;
        case 1:
            printf("Exercicio 1\n");
            break;
        case 2:
            printf("Exercicio 2\n");
            break;
        case 3:
            printf("Exercicio 3\n");
            break;
        case 4:
            printf("Exercicio 4\n");
            break;
        case 5:
            printf("Exercicio 5\n");
            break;
        case 6:
            printf("Exercicio 6\n");
            break;
        case 7:
            printf("Exercicio 7\n");
            break;
        case 8:
            printf("Exercicio 8\n");
            break;
        case 9:
            printf("Exercicio 9\n");
            break;
        case 10:
            printf("Exercicio 10\n");
            break;
        case 11:
            printf("Exercicio 11\n");
            break;
        default:
            printf("Escolha uma opção válida.\n");
            break;
        }
        scanf("%d", &op);
    }
    return 0;
}