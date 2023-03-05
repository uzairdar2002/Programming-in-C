#include <stdio.h>
#define SIZE 5

void main()
{
    int arr[SIZE], i, sum;
    float avg;
    printf("Enter Array Elements: \n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d\n", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        sum = sum + arr[i];
    }
    avg = (float)sum / SIZE;
    printf("%f", avg);
}