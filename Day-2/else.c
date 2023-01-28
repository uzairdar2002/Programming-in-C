// Else Statements .

/*
1. Else is a keyword .
2. Else is a control statement .
3. Else by default hold one statement .
4. Else executes only once .


Note: Else is not a decision making statement but we know If is a decision making statement. ***********

->>>>>>>> If and Else are opposite to each other but at the same time.
Example:  if (true)---------> else (false)
          if (false)--------> else (true)


5. The execution of else part depends on If part.
6. Else is a part of If but If is not a part of Else.
7. We can't write Else without If.

Q1: If we have 10 If's ? What is the no of Else?
Ans: 0 - 10.

Q2: If we have 10 Else ? What is the no of If's?
Ans: 10 => 10.

*/

#include <stdio.h>
void main () {
    if (40 > 20) // You can change the condition here to see different output.
       printf("Hello Uzair\n");
    else
       printf("Hello Soleh\n");


    if (20 > 30) {
        printf("Hello Uzair\n");
    } else {
        printf("Hello Soleh\n");
    }


    if (10 > 30)
        printf("Hello Uzair\n");
    else
        printf("Hello Soleh\n");
        printf("Hello Sir\n");

    if (50 < 30)
        printf("A");
    else {
        printf("B");
        printf("C");
    }    
        printf("D");



// ****************************Very Important thing to remember. ************************
// Rule: Whenever If portion ends, Else portion should begin.
                //      or
// We can't write Normal statement in between If and Else.


// Here you can see the example if you uncomment this code written below.



/*
    if (20 < 50)
        printf("Hello Uzair");
        printf("This will Show Misplacement Error");
    else  // <<<<<<<<<----- Here it already showed error even without compiling the code because of the feature of errror detection in VS Code.
        printf("Hello Soleh");
*/

}
