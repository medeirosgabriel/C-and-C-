#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char text[100];

    scanf("%[^\n]", &text); // Read till a new line not a space(" ");

    int i = 0;
    while (text[i] != '\0') {
        if (i % 2 == 0) {
            printf("%c", tolower(text[i]));
        }else{
            printf("%c", toupper(text[i]));
        }
        i++;
    }

    return 0;
}