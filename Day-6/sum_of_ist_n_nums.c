#include <stdio.h>
void main()
{
    int x, n, sum;
    x = 1;
    n = 20;
    sum = 0;
    while(x <= n)
    {
        sum = sum + x;
        x = x + 1;
    }
    printf("%d\n", sum);
}