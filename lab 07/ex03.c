#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    printf("d     o     x     c\n");
    int i = 0;
    do
    {
        printf("%d     %o     %x    %c\n", i, i, i, i);
        i++;
    } while (i <= 127);
}