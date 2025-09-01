#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // A utilização do ++ para incrementar +1 na variável, normalmente declarada i. (Ou seja, i = i + 1)
    // Se o ++ vem antes, é incrementado antes de ser utilizado
    // Se o ++ vem depois, é incrementado depois de ser utilizado

    int i = 5;
    printf("Valor de i: %d\n", i);

    int antes = ++i;
    printf("Acréscimo antes de i: %d\n", antes);

    i = 5; // Resetando o valor de i de volta para 5

    int depois = i++;
    printf("Acréscimo depois de i: %d\n", depois);

    return 0;
}