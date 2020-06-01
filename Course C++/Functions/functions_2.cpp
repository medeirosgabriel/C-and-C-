#include <iostream>

using namespace std;

int sum(int n1, int n2);
int sum();

int main() {
    cout << sum() << endl;;
    cout << sum(10, 3) << endl;
    return 0;
}

int sum(int n1, int n2) {
    return n1 + n2;
}

int sum() {
    int n1 = 12, n2 = 3;
    return n1 + n2;
}
