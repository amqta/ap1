#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int nota1;
    int nota2;
    int trabalho;
    int faltas;
    int i = 0;

    do
    {
        printf("Nome do aluno: ");
        while (getchar() != '\n')
            ;

        if (i != 0)
            fgets(nome, sizeof(nome), stdin);

        printf("Nota da primeira prova (0 a 100): ");
        scanf("%d", &nota1);

        while (nota1 > 100 || nota1 < 0)
        {
            printf("Insira um valor válido da nota: ");
            scanf("%d", &nota1);
        }

        printf("Nota da segunda prova (0 a 100): ");
        scanf("%d", &nota2);

        while (nota2 > 100 || nota2 < 0)
        {
            printf("Insira um valor válido da nota: ");
            scanf("%d", &nota2);
        }

        printf("Nota do trabalho (0 a 100): ");
        scanf("%d", &trabalho);

        while (trabalho > 100 || trabalho < 0)
        {
            printf("Insira um valor válido da nota: ");
            scanf("%d", &trabalho);
        }

        printf("Total de faltas do aluno (0 a 64): ");
        scanf("%d", &faltas);
        while (faltas > 64 || faltas < 0)
        {
            printf("Insira um valor válido de faltas: ");
            scanf("%d", &faltas);
        }

        float mediaPonderada = (3 * nota1 + 5 * nota2 + 2 * trabalho) /
                               10;

        printf("Aluno(a): %s\n", nome);
        printf("Nota na primeira prova: %d\n", nota1);
        printf("Nota na segunda prova: %d\n", nota2);
        printf("Nota do trabalho: %d\n", trabalho);
        printf("Quantia de faltas: %d\n", faltas);
        printf("Média: %.2f\n", mediaPonderada);
        printf("Situação: ");

        if (mediaPonderada >= 60 && faltas < 16)
        {
            printf("Aprovado\n");
        }
        else if (mediaPonderada >= 30 && faltas < 16)
        {
            printf("Prova final\n");
        }
        else if (mediaPonderada < 30 || faltas < 16)
        {
            printf("Reprovado\n");
        }
        printf("\n\n");
        i++;
    } while (i < 5);
}