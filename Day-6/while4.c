#include <stdio.h>

void main()
{
    int x, n;
    x = 0;
    n = 9;
    printf("%d\n", x);
    x = x + 1;
    printf("%d\n", x);

    while(x <= n)
    {
        x = x + 2;
        printf("%d\n", x);
    }
}