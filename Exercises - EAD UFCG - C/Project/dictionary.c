#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    int corr;
    char word[50];
    int cont;
} Word;

float correlation(char wanted[50], char comp[50]);

int main() {

    char text[280];
    char words[280][50];

    scanf("%[^\n]", text);

    int i = 0, j = 0;

    for (int k = 0; k < strlen(text); k++) {
        if (text[k] != ' ') {
            words[i][j] = text[k];
            j++;
        }else{
            i++;
            j = 0;
        }
    }

    for (int k = 0; k <= i; k++) {
        FILE* filePointer = fopen("words.txt", "r");
        Word suggestions[3];
        char word[50];
        int index = 0, cont = 0, flag = 1, auxIndex, auxMin, lw = strlen(words[k]);
        while (fgets(word, 50, filePointer) != NULL && flag) {
            if (lw - 2 <= strlen(word) && strlen(word) <= lw + 2) {
                float corr = correlation(words[k], word);
                if (corr < strlen(words[k])) {
                    if (index == 3) {
                        auxMin = suggestions[0].corr;
                        auxIndex = 0;
                        for (int l = 1; l < 3; l++) {
                            if (suggestions[l].corr < auxMin) {
                                auxIndex = l; auxMin = suggestions[l].corr;
                            }
                        }
                        if (corr > auxMin) { 
                            suggestions[auxIndex].corr = corr;
                            strcpy(suggestions[auxIndex].word, word);
                            suggestions[auxIndex].cont = cont;
                        }
                    } else {
                        suggestions[index].corr = corr;
                        strcpy(suggestions[index].word, word);
                        suggestions[index].cont = cont;
                        index++;
                    }
                } else {
                    flag = 0;
                }
            }

            cont++;
        }

        fclose(filePointer);

        if (flag) {
            printf("Do you wanna change the word %s?\n", words[k]);
            printf("0) No;\n");
            int decision = 0;
            for (int l = 0; l < 3; l++) {
                printf("%d) %s", l + 1, suggestions[l].word);
            }
            scanf("%d", &decision);

            char choice[50];
            strcpy(choice, suggestions[decision - 1].word);
            int len = strlen(choice);
            
            switch (decision) {
                case 0:
                    break;
                default:
                    choice[len - 1] = '\0';
                    strcpy(words[k], choice);
                    break;
            }
        }
    }

    for (int l = 0; l <= i; l++) {
        printf("%s ", words[l]);
    }

    return 0;
}

float correlation(char wanted[50], char comp[50]) {

    int counter = 0, i = 0, lw = strlen(wanted) - 1, lc = strlen(comp) - 1;
    int stop = (lw < lc) ? lw : lc;

    for (int i = 0; i <= stop; i++) {
        counter += (wanted[i] == comp[i]) ? 1 : 0;
    }

    for (int i = 0; i <= stop; i++) {
        counter += (wanted[lw - i] == comp[lc - i - 1]) ? 1 : 0;
    }
    return counter/2.0;
}
