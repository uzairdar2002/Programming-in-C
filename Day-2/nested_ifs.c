// Nested If's 



#include <stdio.h>
void main() {
    int x, y, z, a, b, c;
    x = 10;
    y = 20;
    z = 30;
    a = 40;
    b = 50;
    c = 60;


    if (x < 20) // True
    if (y > 15) // True
    if (z < 50) // True
    if (a > 30) // True
    if (b > 30) // True
    if (c < 70) // True
        printf("A"); // Immediate
        printf("B"); // Normal
        printf("C"); // Normal
        printf("D"); // Normal
}