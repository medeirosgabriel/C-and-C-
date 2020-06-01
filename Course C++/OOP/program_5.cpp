#include <iostream>
#include "Bases.h"

using namespace std;

int main() {

    Base1 *b1 = new Base1();
    Base2 *b2 = new Base2();
    CFB *c = new CFB();

    b1 -> showBase1();
    b2 -> showBase2();
    c -> showBase1();
    c -> showBase2();

    return 0;
}