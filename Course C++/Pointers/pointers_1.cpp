#include <iostream>

using namespace std;

int main() {

    string vehicle = "Car";
    string *pv;

    pv = &vehicle; // Pointer pv = vehicle address

    cout << pv << " " << &vehicle << endl;

    *pv = "Airplane";

    cout << vehicle << " " << *pv << endl;

    return 0;
}