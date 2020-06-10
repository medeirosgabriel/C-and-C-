#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, unity = 0;
    printf("Type one number: ");
    scanf("%d", &n);
    unity = n % 10;
    printf("Unity: %d\n", unity);
    return 0;
}
