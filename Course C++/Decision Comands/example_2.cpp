#include <iostream>
#include <cstdlib> // Tu use the system("cls")
using namespace std;

int main() {

    int n1, n2, res;
    char opt;

    start:

    cout << "Type the grade 1: ";
    cin >> n1;

    cout << "Type the grade 2: ";
    cin >> n2;

    float avg = (n1 + n2)/2;

    if (avg >= 7) {
        cout << "Passed" << endl;
    }else if (avg >= 4) {
        cout << "Final" << endl;
    }else{
        cout << "Failed" << endl;
    }

    cout << "Type others grades?(s/n): ";
    cin >> opt;

    if (opt == 's' || opt == 'S') {
        system("cls"); // Clear the terminal
        goto start;
    }

    return 0;
}