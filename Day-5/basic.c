#include <stdio.h>

main() {
    int x;
    x = 15;

    printf("%d", x++ + ++x - ++x - x++);
}