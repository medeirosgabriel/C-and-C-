#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Select a color(1 = Green/2 = Blue/3 = Red): ";
    cin >> n;

    switch(n){
        case 1:
            cout << "Color = Green" << endl;
            break;
        case 2:
            cout << "Color = Blue" << endl;
            break;
        case 3:
            cout << "Color = Red" << endl;
            break;
        default:
            cout << "Invalid Color" << endl;
    }

    cout << "Select a color(1,2,3 = Green 4,5,6 = Red): ";
    cin >> n;
    switch(n){
        case 1:
        case 2:
        case 3:
            cout << "Color = Green" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "Color = Red" << endl;
            break;
        default:
            cout << "Invalid Color" << endl;
    }

    cout << "Select a transport(1 = Car/2 = Bike/3 = Airplane/4 = Helicopter): ";
    cin >> n;
    switch(n){
        case 1:
        case 2:
            cout << "Terrestrial transport" << endl;
            switch(n) {
                case 1:
                    cout << "It's a car" << endl;
                    break;
                case 2:
                    cout << "It's a bike" << endl;
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Air transport" << endl;
            switch(n) {
                case 3:
                    cout << "It's an airplane" << endl;
                    break;
                case 4:
                    cout << "It's a helicopter" << endl;
                    break;
            }
            break;
        default:
            cout << "Invalid Transport" << endl;
    }
}