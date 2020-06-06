#include <stdio.h>
#include <stdlib.h>

int main() {

    // 1.a

    int numImpar[10], i = 0;

    for (int e = 1; e <= 19; e++) {
        if (e % 2 != 0) {
            numImpar[i++] = e;
        }
    }

    // 1.b

    int n = 10;
    int *iPtr = &n;

    // 1.c

    for (int i = 0; i < 10; i++) {
        printf("%d ", numImpar[i]);
    }

    printf("\n");

    // 1.d

    iPtr = numImpar;

    // 1.e

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(iPtr + i));
    }

    printf("\n");

    // 1.f

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(numImpar + i));
    }

    printf("\n");

    // 1.i

    printf("%d\n", *(iPtr + 5));

    // 1.j

    iPtr = &numImpar[4];
    printf("%d\n", *(iPtr - 3));

    return 0;
}