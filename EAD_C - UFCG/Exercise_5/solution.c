#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a = 0, b = 0, c = 0;
    printf("Value of a: ");
    scanf("%f", &a);
    printf("Value of b: ");
    scanf("%f", &b);
    printf("Value of c: ");
    scanf("%f", &c);
    float  delta = (pow(b, 2) - 4*a*c);
    if (delta < 0) {
        printf("The solution is not a real number\n");
    }else {
        float  solution1 = (-b + sqrt(delta))/(2*a);
        float  solution2 = (-b - sqrt(delta))/(2*a);
        if (solution1 == solution2) {
            printf("The equation has one solution: %.2f\n", solution1);
        }else{
            printf("The equation has two solutions: %.2f %.2f\n", solution1, solution2);
        }
    }
}
