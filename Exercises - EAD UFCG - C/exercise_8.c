#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char str[5];
    printf("Type a 5-digit number: ");
    scanf("%d", &n);
    sprintf(str, "%d", n);
    for (int i = 0; i < 5; i++) {
        printf("%c", str[i]);
    }
}
