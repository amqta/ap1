#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, q;
    int n;

    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de q: ");
    scanf("%f", &q);
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", a * pow(q, i));
    }
}