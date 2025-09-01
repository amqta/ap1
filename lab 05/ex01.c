#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Selecione um item da lista de exercícios:\n");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
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
        printf("Opção Inválida\n");
        break;
    }
    return 0;
}