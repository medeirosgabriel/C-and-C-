#include <iostream>
#include <fstream>

using namespace std;

int main () {

    ofstream file1;

    file1.open("file.txt", ios::app); // ios::app -> Doesn't replace. Just add data;

    file1 << "Hello" << endl;
    file1 << "World" << endl;

    file1.close(); // To save

    ifstream file2;

    string line;

    file2.open("file.txt");
    
    if (file2.is_open()) {
        while (getline(file2, line)) {
            cout << line << endl;
        }
        file2.close();
    }else{
        cout << "It is not possible to open the file" << endl;
    }

    return 0;
}