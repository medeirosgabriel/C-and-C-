#include <iostream>
#include "Vehicle.h"

using namespace std;

int main() {

    Vehicle *v1 = new Vehicle(1);
    cout << v1 -> getMaxSpeed() << endl;
    v1 -> setMaxSpeed(100);
    cout << v1 -> getMaxSpeed() << endl;
    cout << v1 -> getOn() << endl;
    v1 -> setOn(1);
    cout << v1 -> getOn() << endl;
}