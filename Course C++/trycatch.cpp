#include <iostream>
#include <vector>
#include <stdexcept>

double division(double n1, double n2);

using namespace std;

int main() {

    vector<int> num(5);

    double n1, n2;

    cin >> n1 >> n2;

    try {
        num.at(6) = 10;
        cout << num[0] << endl;
    }catch(exception& e) {
        cout << "ERROR: " << e.what() << endl;
    }

    try{
        cout << division(n1, n2) << endl;
    }catch(const char* msg) {
        cout << "ERROR: " << msg << endl;
    }

    return 0;
}

double division(double n1, double n2){
    if (n2 == 0) {
        throw "Division for 0";
    }
    return n1/n2;
}