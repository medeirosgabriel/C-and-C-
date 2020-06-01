#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Type a number: ");
    scanf("%d", &n);
    int d = 2;
    while (n % d != 0) {
        d ++;
    }
    printf("The smallest divisor is %d", d);
}
