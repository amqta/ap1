#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int computacao = 0;
    int matematica = 0;
    int opiniao, excelenteC = 0, regularM = 0, pessimaTodos = 0;

    while (1)
    {
        printf("Bem vindo(a) ao questionário direcionado à sua opinião do RU da UFG\n");
        printf("Primeiramente, insira seu curso:\n");
        printf("1 - Ciência da Computação\n");
        printf("2 - Matematica\n");
        printf("0 - Sair\n");
        int curso;
        scanf("%d", &curso);

        if (curso != 1 && curso != 2 && curso != 0)
        {
            printf("Insira um comando válido.\n");
            return 0;
        }
        if (curso == 0)
        {
            break;
        }

        while (curso == 1)
        { // questionario de computacao
            printf("O que achou da sua refeição?\n");
            printf("1 - Pessimo\n");
            printf("5 - Regular\n");
            printf("10 - Excelente\n");
            scanf("%d", &opiniao);
            if (opiniao == 1)
            {
                pessimaTodos++;
            }
            if (opiniao == 10)
            {
                excelenteC++;
            }
            computacao++;
            // fim do questionario computacao
            printf("Bem vindo(a) ao questionário direcionado à sua opinião do RU da UFG\n");
            printf("Primeiramente, insira seu curso:\n");
            printf("1 - Ciência da Computação\n");
            printf("2 - Matemática\n");
            printf("0 - Sair\n");
            scanf("%d", &curso);
            if (curso != 1)
            {
                continue;
            }
        }

        while (curso == 2)
        { // questionario matematica
            printf("O que achou da sua refeição?\n");
            printf("1 - Pessimo\n");
            printf("5 - Regular\n");
            printf("10 - Excelente\n");
            scanf("%d", &opiniao);
            if (opiniao == 5)
            {
                regularM++;
            }
            matematica++;
            // fim do questionario matematica
            printf("Bem vindo(a) ao questionário direcionado à sua opinião do RU da UFG\n");
            printf("Primeiramente, insira seu curso:\n");
            printf("1 - Ciência da Computação\n");
            printf("2 - Matematica\n");
            printf("0 - Sair\n");
            scanf("%d", &curso);
            if (curso == 0)
            {
                break;
            }
            else if (curso != 1 && curso != 2)
            {
                printf("Insira um valor valido.\n");
                return 0;
            }
        }
    }

    int total = computacao + matematica;
    // percentual computacao excelente
    int percentualComputacaoExcelente = 0;
    if (computacao > 0)
    {
        percentualComputacaoExcelente = (excelenteC * 100) / computacao;
    }
    // percentual matematica
    int percentualMatematicaRegular = 0;
    if (matematica > 0)
    {
        percentualMatematicaRegular = (regularM * 100) / matematica;
    }
    // percentual todos
    int todosPessimaPercentual = 0;
    if (total > 0)
    {
        todosPessimaPercentual = (pessimaTodos * 100) / total;
    }

    // resultado
    printf("O percentual das pessoas da computação que acharam a refeição excelente é %d%%\n", percentualComputacaoExcelente);
    printf("O percentual das pessoas da matemática que acharam a refeição regular é %d%%\n", percentualMatematicaRegular);
    printf("O percentual de todos os alunos que acharam a comida pessima é %d%%\n", todosPessimaPercentual);
    return 0;
}