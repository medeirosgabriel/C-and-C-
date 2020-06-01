#include <iostream>
using namespace std;

int main() {

    int n = 0;

    while (n < 10) {
        cout << n++ << endl;
    }

    n = 0;

    while (n < 10) {
        cin >> n;
    }

    n = 0;

    while (n++ < 10) {
        cout << n << endl;
    }

    n = 0;

    while (true) {
       cout << n << endl;
       n++;
       if (n == 10) {
           break;
       }
    }

    return 0;
}