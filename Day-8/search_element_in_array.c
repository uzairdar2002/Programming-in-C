#include <stdio.h>
#define SIZE 5

void main()
{
    int arr[SIZE], i, num, flag = 0;
    printf("Enter Array Elements: \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter Number to search: \n");
    scanf("%d", &num);

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Element Found:\n");
        printf("%d", num);
    }
    else
    {
        printf("Element not found:\n");
    }
}