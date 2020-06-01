#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    float pi = 3.14159265358979323846;
    printf("Pi value: %.2f\n", pi);

    int num = 10;
    printf("Num value: %07d\n", num);

    num = 15;
    cout << "Decimal value: " << num << endl;
    cout << "Hexadecimal value: " << hex << num << endl;
    cout << "Hexadecimal value: " << setbase(16) << num << endl;

    cout.precision(3);
    cout << "Pi value: " << pi << endl;

    cout.precision(-1);
    cout << "Pi value: " << pi << endl;

    cout << "Pi value: " << std::scientific << pi << endl;

    cout << "Num value: " << setw(10) << setbase(10) << num << endl;

    cout << "Num value: " << setw(10) << setfill('x') << num << endl;

    // setfill('x') -> fill the spaces with caracter x

    return 0;

}