#include <stdio.h>
#define SIZE 5
void main()
{
    int arr[SIZE], sum, i;
    printf("Enter Array Elements: \n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);
}