#include <iostream>
using namespace std;

int main () {
    int n;

    cin >> n;
    
    if (n > 4 && n < 7) {
        cout << "The value was accepted!" << endl;
    }else{
        cout << "The value wasn't accepted!" << endl;
    }

    cin >> n;

    if (n < 3 || n > 8) {
        cout << "The value was accepted!" << endl;
    }else{
        cout << "The value wasn't accepted!" << endl;
    }

    cout << "Type 0 or 1: ";
    cin >> n;
    cout << "n negated: " << !n << endl;

}