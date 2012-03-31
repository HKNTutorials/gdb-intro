#include <stdio.h>

int main(int argv, char** argc)
{
    int i = 0;

    printf("Hello World!\n");

    for (i = 0; i < argv; i++)
        printf("Argument %d is %s\n", i, argc[i]);

    return 0;
}
