#include <iostream>
#include "Airplane.h"

using namespace std;

int main() {

    Airplane *a1 = new Airplane(3);
    Airplane *a2 = new Airplane(1);
    Airplane *a3 = new Airplane(2);

    a1 -> show();
    a2 -> show();
    a3 -> show();

    return 0;
}