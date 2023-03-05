// Printing and Scaning an array:


#include <stdio.h>

void main ()
{
    int x[5], i;
    printf("Enter any array elements: \n");
    for (i = 0; i< 5; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i< 5; i++)
    {
        printf("\n%d\t", x[i]);
    }
}