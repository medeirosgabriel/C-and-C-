#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char numbers[6];

    for (int i = 0; i < 6; i++) {
        scanf("%s", &numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += (numbers[i] - '0');
    }

    printf("%.2f\n", sum/6.0);

    return 0;
}