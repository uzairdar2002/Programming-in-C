#include <stdio.h>
void main()
{
    int x, y, n;
    x = 5;
    n = 1;
    while(n <= 10)
    {
        y = x*n;
        printf("%d\n", y);
        n = n + 1;
    }
}