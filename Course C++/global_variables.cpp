#include <iostream>
using namespace std;

int n1, n2; // Global Variables

int main() {

    int n3, n4;
    int result;

    n1= 11; n2 = 3; n3 = 5; n4 = 2;

    result = n1 + n2 + n3 + n4;

    cout << "Sum: " << result << endl;

    result = ((n1 + n2 + n3 + n4) * n2 - n1) % 2;

    cout << "Result: " << result << endl;
    return 0;
}