#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tamanho dos tipos de dados em C:\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu bytes\n", sizeof(char));
    printf("float: %zu bytes\n", sizeof(float));
    printf("short: %zu bytes\n", sizeof(short));
    printf("long: %zu bytes\n", sizeof(long));

    return 0;
}