#include <iostream>

using namespace std;

int main() {

    enum weapons_1{fuzil_1, revolver_1, rifle_1, shotgun_1};
    enum weapons_2{fuzil_2=100, revolver_2=15, rifle_2=200, shotgun_2=30};

    weapons_1 w1;
    weapons_2 w2;

    w1 = fuzil_1;
    w2 = fuzil_2;

    cout << w1 << endl;
    cout << w2 << endl;
}