#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, mm, rest;
    printf("Type 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    int a = n1, b = n2;
    while (rest != 0) {
        rest = a % b;
        a = b;
        b = rest;
    }

    mm = (n1 * n2) / a;

    printf("The Minimum Multiple is %d\n", mm);
}