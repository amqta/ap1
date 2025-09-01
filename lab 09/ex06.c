#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[5];
    float media = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("Insira a %da nota: ");
        scanf("%f", &A[i]);
        media += A[i];
    }
    printf("Media dos alunos: %.1f\n",
           media / 5);
    return 0;
}