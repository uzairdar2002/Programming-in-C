#include <stdio.h>

void main() {
    int a, b;

    printf("Enter num a: ");
    scanf("%d", &a);
    printf("Enter num b: ");
    scanf("%d", &b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("a: %d b: %d", a, b);

}    