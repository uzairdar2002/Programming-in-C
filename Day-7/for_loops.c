// For loop:
/*
It is an example of entry loop.

For loop by default hold one statement like if , else , while.

General Syntax of for loop :

for (initilization; condition; incre/decre)

*/

#include <stdio.h>

void main() 
{
    int x, n;
    printf("Enter any nth number: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        printf("%d\n", x);
    }
}