#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Type a number: ");
    scanf("%d", &n);
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (1.0 + i*2)/(2.0 + i*3);
    }
    printf("The result is %.2f\n", sum);
    return 0;
}