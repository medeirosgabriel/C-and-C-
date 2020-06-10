#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char text[100];
    int count[26] = {0};
    scanf("%[^\n]", text);

    for (int  i = 0; i < strlen(text); i++) {
        char letter = tolower(text[i]);
        if (letter >= 97 && letter <= 122) {
            count[letter - 97]++;
        }
    }

    for (int  i = 0; i < 26; i++) {
       printf("%c = %d | ", i + 97, count[i]);
    }

    return 0;
}