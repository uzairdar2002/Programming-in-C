#include <stdio.h>
#define SIZE 8

void main ()
{
    int arr[SIZE], i, count = 0, num;
    printf("Enter Array Elements: \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to count: \n");
    scanf("%d", &num);

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    printf("The occurance of the number in an array is %d", count);
}