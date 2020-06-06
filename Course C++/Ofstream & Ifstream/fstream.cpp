#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

    fstream file;
    char opt = 'y';
    string name, line;

    file.open("file.txt", ios::out|ios::app);

    while (opt == 'y' || opt == 'Y') {
        cout << "Type a name: ";
        cin >> name;
        file << name << endl;
        cout << "Type a new name? (y/n)";
        cin >> opt;
        system("cls");
    }

    file.close();

    file.open("file.txt", ios::in);

    cout << "Typed names:" << endl;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
    }else{
        cout << "It is not possible to open the file" << endl;
    }

    return 0;
}