#include <stdio.h>
void main() {
    int day;

    printf("Enter day number: ");
    scanf("%d", &day);

    // Starting nested if else if.

    if (day == 1)
        printf("Today is Sunday");
    else if (day == 2)
        printf("Today is Monday");
    else if (day ==3)
        printf("Today is Tuesday");
    else if (day == 4)
        printf("Today is Wednesday");
    else if (day ==5)
        printf("Today is Thursday");
    else if (day ==6)
        printf("Today is Friday");
    else if (day == 7)
        printf("Today is Saturday");
    else
        printf("Invalid day number!!!");
}
