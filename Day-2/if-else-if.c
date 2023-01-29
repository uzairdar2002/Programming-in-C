#include <stdio.h>


int main() {
    int age;
    printf("What is your age: \n");

    scanf("%d", &age);

    printf("You have entered %d as your age\n", age);

    if (age <= 60 && age > 17) {
        printf("You can apply for the driving licence.\n");
    } else if (age < 15) {
        printf("Do you even know how to drive?\n");
    } else if (age > 60) {
        printf("According to me you should not drive at this age because you are too old.\n");
    } else {
        printf("You are too young to apply for a driving licence.\n");
    }
}