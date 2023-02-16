#include <stdio.h>
void main()
{
    int x, f;
    x = 5;
    f = 1;

    while(x > 0)
    {
        f = f * x;
        x = x - 1;
    }
    printf("%d\n", f);
}