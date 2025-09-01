#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um número de 3 digitos: ");
    int valor;
    scanf("%d", &valor);
    if (valor > 999 || valor < 100)
    {
        printf("O valor inserido não possui 3 dígitos.\n");
        while (valor > 999 || valor < 100)
        {
            scanf("%d", &valor);
        }
    }

    // decomposição do valor
    int primeiroDigito = valor / 100;
    int segundoDigito = (valor / 10) - (primeiroDigito * 10);
    int terceiroDigito = valor - (segundoDigito * 10) - (primeiroDigito * 100);

    // formula do quarto digito
    int quartoAlgarismo = (primeiroDigito + segundoDigito * 3 + terceiroDigito * 5) % 7;
    int numeroFinal = (primeiroDigito * 1000) + (segundoDigito * 100) + (terceiroDigito * 10) + quartoAlgarismo;

    printf("O número construido é %d\n", numeroFinal);

    return 0;
}