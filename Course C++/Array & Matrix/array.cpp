#include <iostream>

using namespace std;

int main() {

    int array[5] = {10,20,30,40,50};

    /*vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;
    vector[3] = 40;
    vector[4] = 50;*/

    for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
        cout << array[i] << endl;
    }

    return 0;
}