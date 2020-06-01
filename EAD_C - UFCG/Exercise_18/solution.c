#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, md = 1;
    printf("Type 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    int min = (n1 < n2) ? n1 : n2;
    for (int i = 1; i <= min; i++) {
        if (n1%i == 0 && n2%i == 0) {
            md = i;
        }
    }

    printf("The Max Divisor is %d\n", md);
}
