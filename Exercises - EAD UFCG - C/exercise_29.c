#include <stdio.h>
#include <string.h> 

int main() {
    char text[100];
    char word[20];
    scanf("%[^\n]", text);
    scanf("%s", word);

    int cont = 0, lt = strlen(text), lw = strlen(word);
    for (int i = 0; i < lt; i++) {
        cont = (text[i] == word[cont]) ? cont + 1 : 0;
        if (cont == lw) {
            int index = i - cont + 1;
            for (int j = index; j <= index + lw; j++) {
                text[j] = '\0';
            }
        }
    }

    for (int i = 0; i < lt; i++) {
        if (text[i] != '\0') printf("%c", text[i]);
    }

    return 0;
}
