#include <iostream>
#include <stdio.h> // For gets()
#include <stdlib.h>

using namespace std;

int main() {

    char name_1[50];

    // cin >> name; Stop read at space

    gets(name_1); // Read all making dinamic alocation;

    cout << name_1 << endl;

    char *name_2 = (char *) malloc(sizeof(char)+1); // + 1 -> Reserve space

    gets(name_2);

    cout << name_2 << endl;

    return  0;
}