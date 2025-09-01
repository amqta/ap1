#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int idade;
    int menor = 0;
    int maior = 0;
    int totalDeGente = 0;
    int somaIdades = 0;

    printf("Insira a sua idade: (digite 0 para encerrar) ");
    scanf("%d", &idade);
    if (idade == 0)
    {
        printf("Nenhuma idade foi inserida.\n");
        return;
    }

    // se for menor ou igual a 0
    while (idade <= 0)
    {
        printf("Insira um valor positivo para a idade: ");
        scanf("%d", &idade);
        if (idade == 0)
        {
            printf("Nenhuma idade foi inserida.\n");
            return;
        }
    }
    menor = idade;
    maior = idade;
    somaIdades += idade;
    totalDeGente++;
    do
    {
        printf("Insira a sua idade: (digite 0 para encerrar) ");
        scanf("%d", &idade);

        // se for menor ou igual a 0
        while (idade <= 0)
        {
            if (idade == 0)
            {
                break;
            }

            printf("Insira um valor positivo para a idade: ");
            scanf("%d", &idade);
        }
        if (idade != 0)
        {
            // maior idade
            if (idade > maior)
            {
                maior = idade;
            }
            // menor idade

            if (idade < menor)
            {
                menor = idade;
            }
            somaIdades += idade;
            totalDeGente++;
        }
    } while (idade > 0);
    printf("O número de pessoas é %d\n", totalDeGente);
    printf("A idade média do grupo é %d\n", somaIdades / totalDeGente);
    printf("A menor idade é %d, e a maior é %d\n", menor, maior);
}