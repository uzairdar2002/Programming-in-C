#include <stdio.h>
#define SIZE 5

void main ()
{
    int arr[SIZE], i, greatest_num;
    printf("Enter Array Elements: \n\n\n\n\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d\n\n\n", &arr[i]);
    }
    greatest_num = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > greatest_num)
        {
            greatest_num = arr[i];
        }
    }
    printf("%d\n\n\n\t\t\t", greatest_num);
}    