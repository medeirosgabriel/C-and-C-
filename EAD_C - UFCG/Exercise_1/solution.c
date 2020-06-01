#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Type 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int m = n1 * n2 * n3;
    printf("Multiplication: %d", m);

    return 0;
}
