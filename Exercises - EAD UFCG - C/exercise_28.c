#include <stdio.h>
#include <string.h> 

int main() {
    char text[100];
    char word[20];
    scanf("%[^\n]", text);
    scanf("%s", word);
    
    int cont = 0;
    for (int i = 0; i < strlen(text); i++) {
        cont = (text[i] == word[cont]) ? cont + 1 : 0;
        if (cont == strlen(word)) {
            printf("Word found at position %d", i - cont + 1);
            break;
        }
    }
    if (cont != strlen(word)) {
        printf("Word not found");
    }
    return 0;
}