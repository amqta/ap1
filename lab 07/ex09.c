#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    float valor;
    float TotalAVista = 0;
    float TotalAPrazo = 0; // dividir por 3 no final
    int i = 0;

    do
    {
        printf("Que forma de pagamento foi utilizada?\n");
        printf("1 - Transação à vista\n");
        printf("2 - Transação à prazo\n");
        scanf("%d", &codigo);

        while (codigo != 1 && codigo != 2)
        {
            printf("Insira um código válido: ");
            scanf("%d", &codigo);
        }
        printf("Qual o valor da transação? ");
        scanf("%f", &valor);

        if (codigo == 1)
        {
            TotalAVista += valor;
        }
        if (codigo == 2)
        {
            TotalAPrazo += valor;
        }
        i++;
    } while (i < 5);
    printf("Valor total de compra à vista: R$%.2f\n", TotalAVista);
    printf("Valor da primeira parcela das compras à prazo: R$%.2f\n",
           TotalAPrazo / 3);
}