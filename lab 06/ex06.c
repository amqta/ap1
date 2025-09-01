#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int expoente;
    int repeticoes = 1;
    printf("Insira um número, e, em seguida, o expoente: ");
    scanf("%d%d", &numero, &expoente);
    int resultado = numero;
    while (repeticoes < expoente)
    {
        repeticoes++;
        numero = numero * resultado;
    }
    printf("o resultado é %d", numero);
    return 0;
}