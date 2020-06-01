#include <iostream>
using namespace std;

int main() {

    int n1, n2, sum;

    string res;

    cout << "Type the n1 value:"; cin >> n1;
    cout << "Type the n2 value:"; cin >> n2;
    sum = n1 + n2;

    // (sum >= 14) ? res="Passed!" : res="Failed!";
    res = (sum >= 14) ? "Passed!" : "Failed!";

    cout << "Student Situation: " << res << endl;

    return 0;
}