#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int k = 1;
    int n = 1;
    int denominador = 1;
    float termo = 0;
    int sinal = 1;

    printf("Qual será o valor de n? ");
    scanf("%d", &n);

    do
    {
        termo += sinal * (1.0 / denominador);
        sinal *= -1;
        denominador += 2;
        k++;
    } while (k <= n);
    printf("O valor, com %d termos, é %.2f\n", n, termo);
}