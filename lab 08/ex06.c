#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura;
    float menor = 0;
    float maior = 0;
    float media = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Insira, em metros, a altura da %da pessoa: ", i);
        scanf("%f", &altura);

        if (altura > maior)
        {
            maior = altura;
        }

        if (i == 1)
        {
            menor = altura;
        }

        if (altura < menor)
        {
            menor = altura;
        }
        media += altura;
    }
    printf("A menor altura do grupo é %.2fm\n", menor);
    printf("A maior altura do grupo é %.2fm\n", maior);
    printf("A altura média do grupo é %.2fm\n", media / 5);
}