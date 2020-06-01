#include <iostream>

using namespace std;

void write(string s = "Without Arguments");

int main() {
    write();
    write("Hello");
    return 0;
}

void write(string str) {
    cout << str << endl;
}