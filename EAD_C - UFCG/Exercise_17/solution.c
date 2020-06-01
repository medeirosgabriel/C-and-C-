#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, number;
    float sum = 0;
    printf("Type n numbers: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }
    float avg = sum/n;
    printf("Average: %.2f", avg);
    return 0;
}

