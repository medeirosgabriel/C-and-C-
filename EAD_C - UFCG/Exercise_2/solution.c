#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    printf("Type 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int sum = n1 + n2 + n3;
    float avg = sum/3;
    int max = 0, min = 0;

    // Max
    if (n1 >= n2 && n1 >= n3) {
        max = n1;
    }else if (n2 >= n1 && n2 >= n3) {
        max = n2;
    }else {
        max = n3;
    }

    // Min
    if (n1 <= n2 && n1 <= n3) {
        min = n1;
    }else if (n2 <= n1 && n2 <= n3) {
        min = n2;
    }else {
        min = n3;
    }

    printf("Sum: %d\nAverage: %.2f\nMax: %d\nMin: %d\n", sum, avg, max, min);

    return 0;
}
