#include <iostream>
#include "auxiliar.h"

using namespace std;

void showNum();
int num = 10;
extern int value;

int main() {
    showNum();
    cout << value << endl;
    return 0;
}