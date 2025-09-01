#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Quantos termos haverão na sequência? ");
    int n;
    int atual = 1;
    int proximo = 2;
    int antecessor;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", atual);
        antecessor = atual;
        atual = proximo;
        proximo += antecessor;
    }
}