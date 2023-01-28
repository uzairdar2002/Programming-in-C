// If Statements
// It is a keyword. If is a control statement. If is a decision making statement.
// If by default hold/control one statement.
// If executes only once.
// If works on boolean values (0's, 1's).
//


#include <stdio.h>

void main() {
     printf("A\n");
     printf("B\n");

// True Condition.
     int x;
     x = 5;
// In this situation Both "A" and "B" will be printed.
     if (x < 10)
         printf("A");    // -> Immediate Instructions.
         printf("B\n");    // -> Normal Instructions.
// False Condition.         
     x = 500;

     if (x < 10)
         printf("A\n");   // -> Here "A" will not be printed because contition is false.
         printf("B");

}


// Note: Important ****
//
// 1: Immediate Instructions ->
//
// I.I are followed by its condition.
// I.I will be executed if condition is true.
// I.I  // not be    //  ///    //   /// // //  false.
// I.I are dependent on If condition.
//
//
// 2: Normal Instructions ->
//
// Normal Instructions will be executed any how irrespective of If's Condition.
// Normal Instructions are not dependent on If Condition.
