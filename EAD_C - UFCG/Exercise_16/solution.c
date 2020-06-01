#include <stdio.h>
#include <stdlib.h>


int main()
{
    for (int i = 100; i >= 2; i--) {
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d\n", i);
        }
    }
}
