#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    int contador21 = 0;
    int contador50 = 0;
    printf("Insira a sua idade: (Digite -99 para encerrar) ");
    scanf("%d", &idade);
    do
    {
        // checagem de >0
        while (idade < 0 && idade != -99)
        {
            printf("Insira uma idade de valor positivo.\n");
            scanf("%d", &idade);
        }

        while (idade > 0)
        {
            printf("Insira a sua idade: (Digite -99 para encerrar) ");
            scanf("%d", &idade);
            if (idade < 21)
            {
                contador21++;
            }
            if (idade > 50)
            {
                contador50++;
            }
        }
    } while (idade != -99);
    printf("Total de pessoas com menos de 21 anos: %d\n", contador21);
    printf("Total de pessoas com mais de 50 de anos: %d\n", contador50);
}