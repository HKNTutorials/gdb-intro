#include <stdio.h>

int main()
{
    float f, sum = 0.0f;

    for(f = 0.0f; f != 1.0f; f += .1f)
    {
        sum += f;
    }

    printf("0+.1+...+.9 = %f\n", sum);

    return 0;
}

