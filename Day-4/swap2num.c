#include <stdio.h>

void main() {
    int a, b, exchange;

    printf("Enter num a: ");
    scanf("%d", &a);
    printf("Enter num b: ");
    scanf("%d", &b);

    exchange = a;  // Give a's value into exchange.
    a = b;         // Then b's value into a.
    b = exchange;  // And exchange's value into b.

    printf("a: %d b: %d", a, b);
}