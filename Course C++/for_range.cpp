#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int x[10]{10,20,30,40,50,60,70,80,90,100};
    vector<int> n {100,200,300,400,500,600,700,800,900,1000};
    const char* name = "Gabriel"; // The same thing: string name = "Gabriel"

    for (int i = 0; i < sizeof(x)/sizeof(4); i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    for (int i:x) {
        cout << i << " ";
    }
    cout << endl;

    for (int i:n) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i <= strlen(name); i++) {
        cout << name[i];
    }
    cout << endl;
}