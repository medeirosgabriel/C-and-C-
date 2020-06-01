#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    char word[30], letter[1], secret[30];
    int size = 0, i = 0, chances = 6, hits = 0;
    bool hit = false;

    cout << "Secret word: ";
    cin >> word;
    system("cls");

    // \0 == enter. Enter == end of word;
    while (word[i] != '\0') { 
        size ++;
        i++;
    }

    for (i = 0; i < size; i++){
        secret[i] = '-';
    }

    while ((chances > 0) && (hits < size)) {

        cout << "Restant chances: " << chances << endl;

        cout << "Secret word: ";
        for (i = 0; i < size; i++) {
            cout << secret[i];
        }
        cout << endl;

        cout << "Type a letter: ";
        cin >> letter[0];

        for (i = 0; i < size; i++) {
            if (word[i] == letter[0]) {
                hit=true;
                secret[i] = word[i];
                hits ++;
            }
        }

        if (!hit) {
            chances --;
        }

        hit = false;

        system("cls");

        if (hits == size) {
            cout << "You won!";
        }else{
            cout << "You lost!";
        }

        cout << endl;

    }
}