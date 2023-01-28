/*

Hello Friends,

In this Tutorial of C Programming we are going to see some examples on If Statements.

*/

// >>>>>>>>>>>>>>Here we will also talk about ";" (Null Statement). ***********************


/*
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>So starting with first example<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
*/

#include <stdio.h>

void main() {
// Null Statement.
    if (1) 
        ;
        printf("A"); // Normal Instruction
        printf("B\n"); // Normal Instruction  

    if (0)  
        ;
        printf("A");
        printf("B");
    
}


