#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 0;
    printf("Type a number: ");
    scanf("%f", &n);
    if (fmod(n, 1) != 0) {
        if (fmod(n, 1) <= 0.5) {
            n = n - fmod(n, 1);
        }else {
            n = n - fmod(n, 1) + 1;
        }
    }
    printf("New number: %.2f\n", n);
}
