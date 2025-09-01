#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        A[i] = rand() % 10;
    }
    printf("Vamos jogar um jogo! A sequencia de numeros vai aparecer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    sleep(2);
    system("cls");

    printf("Qual foi a sequencia de numeros que apareceu?\n");
    int resposta;
    for (int i = 0; i < 5; i++)
    {
        printf("%do numero: ", i + 1);
        scanf("%d", &resposta);
        if (resposta != A[i])
        {
            printf("Voce errou!\n");
            return 0;
        }
    }
    printf("Voce acertou!\n");
    return 0;
}