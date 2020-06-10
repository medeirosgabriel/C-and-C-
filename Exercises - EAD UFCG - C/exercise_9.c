#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value = 0, total = 0;
    printf("Enter the amount of sales for the week: ");
    scanf("%f", &value);
    total = 200 + (value*0.09);
    printf("The salary of the week is: %.2f", total);
    return 0;
}
