#include <stdio.h>
// Upper Diagonal 
void main()
{
    int arr[3][3],r , c, sum;
    printf("ENter 2d array elements: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r <= c)
            {
                printf("%d\t", arr[r][c]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
}