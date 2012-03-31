#include <stdio.h>

int my_array[50]; 

void fillArray(int *array, int len)
{
    int i;
    for (i = len-1; i >= 0; i--)
        array[i] = i;
}

void squareArray(int *array, int len)
{
    int i;
    for (i = len; i > 0; i--)
        array[i] = array[1]*array[i];
}

void printArray(int *array, int len)
{
    int i;

    printf ("Array is: ");

    for (i = 0; i < len; i++)
        printf("%d ", array[i]);

    printf("\n");
}

int main()
{
    int *array = NULL;

    fillArray(array, 50);
    squareArray(array, 50);
    printArray(array, 50);

    return 0;
}
