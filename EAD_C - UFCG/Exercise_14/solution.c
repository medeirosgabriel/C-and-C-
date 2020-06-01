#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, r;
    printf("Type 2 numbers: ");
    scanf("%d %d", &a, &b);
    int q = 0;
    while (b * (q + 1) <= a){
        q ++;
    }
    r = abs((b * q) - a);
    printf("Quocient: %d   Rest: %d", q, r);
}
