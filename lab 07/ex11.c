#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    float valorTotal = 0.0;
    setlocale(LC_ALL, "Portuguese");
    printf("Boas vindas ao zoológico!\n");
    printf("Ingressos entre 3 a 12 anos: $14,00\n");
    printf("Ingressos de 65 anos ou mais: $18,00\n");
    printf("Ingressos normais: $23,00\n");
    printf("Crianças de até 2 anos não pagam a entrada.\n\n");
    do
    {
        printf("Insira sua idade (Digite um valor negativo para parar): ");
        scanf("%d", &idade);
        if (idade <= 2)
        {
            continue;
        }
        else if (idade >= 3 && idade <= 12)
        {
            valorTotal += 14;
        }
        else if (idade >= 65)
        {
            valorTotal += 18;
        }
        else
            valorTotal += 23;

    } while (idade > 0);
    printf("O valor total dos ingressos é $%.2f.\n", valorTotal);
}