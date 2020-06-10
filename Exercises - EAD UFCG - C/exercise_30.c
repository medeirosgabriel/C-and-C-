#include <stdio.h>
#include <string.h>


int main() {
    char text[100];
    char words[100][100], temp[100];

    scanf("%[^\n]", text);

    int iw = 0, iw2 = 0, lt = strlen(text);
    for (int i = 0; i < lt; i++) {
        if (text[i] != ' '){
            words[iw][iw2++] = text[i];
        }else{
            iw++; iw2 = 0;
        }
    }

    for (int i = 0; i <= iw; i++) {
        for (int j = 0; j <= iw - i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j + 1]);
                strcpy(words[j + 1],temp);
            }
        }
    }

    for (int i = 0; i <= iw; i++) {
        printf("%s ", words[i]);
    }

    return 0;
}