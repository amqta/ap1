#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float saldo = 1000;
    float dinheiro;

    while (1)
    {
        // menu
        printf("MENU DE OPERACOES: \n");
        printf("-------------------\n");
        printf("1: Consultar saldo\n");
        printf("2: Realizar saque\n");
        printf("3: Realizar depósito\n");
        printf("4: Sair\n");

        // opções
        int op;
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Seu saldo é %.2f reais.\n", saldo);
            break;
        // saque
        case 2:
            printf("Quanto deseja sacar? ");
            scanf("%f", &dinheiro);
            if (dinheiro < saldo)
            {
                saldo = saldo - dinheiro;
                printf("Você sacou %f reais, e ficou com %.2f reais.\n", dinheiro, saldo);
            }
            else
                printf("Você não tem dinheiro suficiente para sacar essa quantia.\n");
            break;
        // deposito
        case 3:
            printf("Quanto deseja depositar? ");
            scanf("%f", &dinheiro);
            saldo = saldo + dinheiro;
            printf("Você depositou %.2f reais e agora seu saldo é %.2f reais.\n", dinheiro, saldo);
            break;

        // sair
        case 4:
            return 0;
            break;

        // valor inválido
        default:
            printf("Escolha uma opção válida. \n");
            break;
        }
    }
}