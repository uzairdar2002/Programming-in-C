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
    printf("Only Odd Array\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (arr[r][c]%2 != 0)
            {
                printf("%d\t", arr[r][c]);
            }
        }
        printf("\n");
    }
}    