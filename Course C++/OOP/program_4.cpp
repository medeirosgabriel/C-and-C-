#include <iostream>
#include "Vehicle_1.h"

using namespace std;

int main() {

    Motorcycle *m = new Motorcycle();
    Car *c = new Car();
    Tank *t = new Tank();

    m -> show();
    c -> show();
    t -> show();
}