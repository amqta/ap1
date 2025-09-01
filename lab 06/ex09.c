#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;
    int soma = 0;
    int menor;
    int maior;

    printf("Insira valores positivos aleatórios, quando terminar, digite -1.\n");
    scanf("%d", &valor);
    menor = maior = valor;

    // checar se é positivo
    if (valor < -1)
    {
        printf("Insira somente valores positivos.\n");
        while (valor < -1)
        {
            scanf("%d", &valor);
        }
    }

    while (valor >= 0)
    {
        if (valor == -1)
        {
            break;
        }
        // soma
        soma += valor;
        scanf("%d", &valor);

        // maior
        if (valor > maior)
        {
            maior = valor;
        }

        // menor
        if (valor < menor && valor >= 0)
        {
            menor = valor;
        }
    }
    printf("A soma dos valores declarados é %d\n", soma);
    printf("O maior valor digitado é %d\n", maior);
    printf("O menor valor digitado é %d\n", menor);

    return 0;
}