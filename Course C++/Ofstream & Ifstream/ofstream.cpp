#include <iostream>
#include <fstream>

using namespace std;

int main () {

    ofstream file;

    file.open("file.txt", ios::app); // ios::app -> Doesn't replace. Just add data; app == append

    file << "Hello" << endl;
    file << "World" << endl;

    file.close(); // To save

    return 0;
}