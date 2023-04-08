#include <stdio.h>
#define SIZE 3
void main()
{
    int arr[SIZE][SIZE], brr[SIZE][SIZE];
    int crr[SIZE][SIZE], r, c;

    printf("Enter Ist Array Elements: ");
    for (r = 0; r < SIZE; r++){
        for (c = 0; c < SIZE; c++){
            scanf("%d", &arr[r][c]);
        }
    }

    printf("Enter 2nd Array Elements: ");
    for (r = 0; r < SIZE; r++){
        for (c = 0; c < SIZE; c++){
            scanf("%d", &brr[r][c]);
        }
    }

    for (r = 0; r < SIZE; r++){
        for (c = 0; c < SIZE; c++){
            crr[r][c] = arr[r][c] + brr[r][c];
        }
    }

    for (r = 0; r < SIZE; r++){
        for (c = 0; c < SIZE; c++){
            printf("%d\t", crr[r][c]);
        }
        printf("\n");
    }
}