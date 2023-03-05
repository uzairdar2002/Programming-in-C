#include <stdio.h>
#define SIZE 5
void main ()
{
    int arr[SIZE], i;
    printf("Enter Any Array Elements: \n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d\n\n\n\n\n\n", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i]%2 == 0)
        {
            printf("%d\n", arr[i]);
        }
    } 
}