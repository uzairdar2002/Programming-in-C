// Scaning and Printing a 2d Array:

#include <stdio.h>

void main()
{
    int arr[3][3],r , c;
    printf("ENter 2d array elements: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    printf("You Entered : \n");

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d\t", arr[r][c]);
        }
        printf("\n");
    }
}