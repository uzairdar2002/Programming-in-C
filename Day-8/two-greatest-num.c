#include <stdio.h>
#define SIZE 5

void main()
{
    int arr[SIZE], i, gt1, gt2;
    printf("Enter Array Elements: \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    gt1 = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > gt1)
        {
            gt1 = arr[i];
        }
    }
    if (arr[0] == gt1)
    {
        gt2 = arr[1];
    }
    else
    {
        gt2 = arr[0];
    }

    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > gt2 && arr[i] != gt1)
        {
            gt2 = arr[i];
        }
    }
    printf("%d %d", gt1, gt2);
}