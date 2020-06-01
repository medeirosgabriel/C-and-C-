#include <iostream>
using namespace std;

int main() {

    int cont = 0;
    cont = 20;

    do { // Execute at least once
        cout << "Hello... " << cont << endl;
        cont ++;
    }while (cont < 20);

    cout << "End..." << endl;
}