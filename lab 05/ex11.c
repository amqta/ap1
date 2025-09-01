#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // passo 1
    printf("Insira 3 valores: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    // passo 2
    if (a == 0)
    {
        printf("O valor é inválido, pois não forma uma equação de segundo grau.\n");
        printf("O algoritmo será encerrado.\n");
        return 0;
    }

    // passo 3
    float delta = pow(b, 2) - 4 * a * c;
    float raiz1 = (-b - sqrt(delta)) / (2 * a);
    float raiz2 = (-b + sqrt(delta)) / (2 * a);

    // passo 4
    if (delta > 0)
    {
        printf("Existem duas raízes distintas, que são %.2f e %.2f.\n", raiz1, raiz2);
    }
    else
        // passo 5
        if (delta == 0)
        {
            printf("Existe uma raíz, que é %.2f.\n", raiz1);
        }
        else
            // passo 6
            if (delta < 0)
            {
                printf("Não há raízes reais.\n");
            }

    // passo 7
    printf("O algoritmo será encerrado.\n");
    return 0;
}