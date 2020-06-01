#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float a, b, c;
    printf("Type the size of the sides: ");
    scanf("%f %f %f", &a, &b, &c);
    bool isTri = ((a + b > c) && (a + c > b) && (b + c > a));
    if (isTri) {
        if (a == b && b == c) {
            printf("It is a equilateral triangle\n");
        }else if (a == b || a == c || b == c) {
            printf("It is a isosceles triangle\n");
        }else {
            printf("It is a scalene triangle\n");
        }
    }else {
        printf("It is not a triangle\n");
    }
    return 0;
}
