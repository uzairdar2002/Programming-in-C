/*
Scanf() is a library function defined in stdio.h.
It is used to take values(Input) from user at run time.
It interacts with user.
It takes different format value (Char, Float, Int).

Scanf deals with input device(keyboard) where as printf deals with output device(monitor).



Note: We usually write printf before scanf for readibility or understandibility.

*/

// Example why should we write printf before scanf.

// Scanf before printf.
#include <stdio.h>

void main() {
    int x;

    scanf("%d", & x);  // Here "&" is the address of operator.

    printf("Your selected number is: %d\n\n\n\n", x);


// printf before scanf



    int y;
    printf("Choose any number:  \n");
    scanf("%d", & y);
    printf("Your selected number is: %d\n", y);
}