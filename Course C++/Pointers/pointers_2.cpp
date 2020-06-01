#include <iostream>

using namespace std;

int main() {

    int *p; // Size = 4 bytes
    int v[10];

    p = v; // p = first element address

    cout << p << " " << &v[0] << endl;

    for (int i = 0; i < sizeof(v)/sizeof(int); i++) {
        cout << &v[i] << " ";
    }

    cout << endl;

    *(p+=1);
    cout << p << " " << endl;

    p = &v[0];
    *p = 10; // v[0] = 10;
    cout << v[0] << " " << endl;

    p = &v[1];
    *p = 430;
    cout << v[1] << " " << endl;

    p = &v[2];
    *p = 342;
    cout << v[2] << " " << endl;

}