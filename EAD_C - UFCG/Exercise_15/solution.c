#include <stdio.h>
#include <stdlib.h>

float celToFah(int);

int main()
{
   for (int i = 30; i <= 50; i++) {
        printf("Celsius: %d   Fahrenheit: %.2f\n", i, celToFah(i));
   }
}

float celToFah(int n) {
    return 1.8 * n + 32;
}

