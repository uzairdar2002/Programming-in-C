#include <stdio.h>

void main ()
{
    int x, y;

    for (x = 0, y = 1; y < 40; x = x + y, y = x + y)
    {
        printf("%d\n%d\n", x , y);
    }
}