#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month = 0;
    printf("Type a month: ");
    scanf("%d", &month);
    if (month == 2) {
        printf("29 days\n");
    }else {
        if (month <= 7) {
            if (month % 2 == 0) {
                printf("30 days\n");
            }else{
                printf("31 days\n");
            }
        }else{
            if (month % 2 == 0) {
                printf("31 days\n");
            }else{
                 printf("30 days\n");
            }
        }
    }
}
