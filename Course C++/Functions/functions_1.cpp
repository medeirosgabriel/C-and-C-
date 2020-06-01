#include <iostream>

using namespace std;

void text();
int sum(int n1, int n2);
void write(string v[4]);

int main() {
    text();
    string a[4] = {"Hello", "Car", "Top"};
    write(a);
    return 0;
}

void text() {
    cout << "Hello World!" << endl;
    cout << sum(4, 6) << endl;
}

int sum(int n1, int n2) {
    return n1 + n2;
}

void write(string v[4]) {
    for (int i = 0; i < 4; i++) {
        cout << v[i] << endl;
    }
}