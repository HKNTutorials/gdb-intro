#include <stdio.h>

int main(void)
{
    char a[] = "hello";
    a[0] = 'X';
    printf("%s\n", a);

    char *p = "world";
    p[0] = 'Y';
    printf("%s\n", p);
    
    return 0;
}
