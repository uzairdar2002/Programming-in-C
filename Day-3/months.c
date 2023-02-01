#include <stdio.h>

void main() {
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    if (month == 1)
        printf("It's January.\n\n");
    else if (month == 2)    
        printf("It's Febaruary.\n\n");
    else if (month == 3)
        printf("It's March.\n\n");
    else if (month == 4)
        printf("It's April.\n\n");
    else if (month == 5)
        printf("It's May.\n\n");
    else if (month == 6)
        printf("It's June.\n\n");
    else if (month == 7)
        printf("It's July.\n\n");
    else if (month == 8)
        printf("It's August.\n\n");
    else if (month == 9)
        printf("It's September.\n\n");
    else if (month == 10)
        printf("It's October.\n\n");
    else if (month == 11)
        printf("It's November.\n\n");
    else if (month == 12)
        printf("It's December.\n\n");
    else
        printf("Invalid Month Number!!!!\n");

}