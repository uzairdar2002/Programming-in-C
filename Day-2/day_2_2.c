// If by Default hold/control one statement but we can change its default behaviour using curly braces {}.



#include <stdio.h>

void main() {
    int x;
    x = 3;
// True Condition.
    if (x < 100){
        printf("A");  // Immediate Instruction.
        printf("B\n"); // Immediate Instruction.
    }
    printf("C\n"); // Normal Instruction.

// False condition.

    x = 700;

    if (x < 100){
        printf("A");
        printf("B"); // These 2 will not be printed ... and these are Immediate Instructions.
    }
    printf("C"); // This will be printed because condition is false.
}


// Note : Here we know If only executes once means programm control goes downwards irrespective of If's condition.
