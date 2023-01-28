// Rule 1: If (1) is always true.

// Example

#include <stdio.h>

void main() {

// Here A, B, C will be printed.     
    if (1) {
        printf("A"); // Immediate 
        printf("B"); // Instructions
    }
    printf("C\n"); // Normal Instruction


// Rule 2: If (0) is always flase.

// Here only C will be printed.
    if (0) {
        printf("A");
        printf("B");
    }
    printf("C"); // Normal Instruction only gets printed.
}


// Rule 3: If (Non-Zero(-5, -3, -6, 1, 2, 6, 7, 8 etc)) is always true.

// Example

// #include <stdio.h>

// void main() {
//     if (-20) {
//         printf("A");
//         printf("B");
//     }


//     if (20) {
//         printf("A");
//         printf("B");
//     }
//     printf("C");

// }







