#include <stdio.h>
void main()
{
    int x, y, n, count;
    x = 0;
    y = 1;
    count = 1;
    printf("\n%d\n%d\n",x, y);

    while(count <= 7)
    { 
        n = x + y;
        printf("%d\n",n);
        x = y;
        y = n;
        count++;
    }

}