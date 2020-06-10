#include <stdio.h>
#include <stdlib.h>

int main (){
    int s = 0;
    printf("Type a diamond odd size: ");
    scanf("%d", &s);
    int middle = s/2;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            int step = (i <= middle) ? i : (s - 1)%i;
            if (j >= middle - step && j <= middle + step) {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}