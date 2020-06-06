#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> prod = {"ball", "mouse", "car", "airplane"};
    vector<string>::iterator it;

    it = prod.begin();

    advance(it, 2); // Doesn't return;

    cout << *it << endl;

    cout << *next(it, 1) << endl; // next() -> Returns the position;

    cout << *prev(it, 1) << endl;

    for (it = prod.begin(); it != prod.end(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}