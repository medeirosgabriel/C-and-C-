#include <iostream>

using namespace std;

struct Car {

    string name;
    string color;
    int power;
    int maxSpeed;
    int cSpeed;

    void insertFeatures(string strname, string strcolor, int ipower, int iMaxSpeed) {
        name = strname;
        color = strcolor;
        power = ipower;
        maxSpeed = iMaxSpeed;
        cSpeed = 0;
    }

    void showInformations(){
        cout << "Name:.........." << name << endl;
        cout << "Color:........." << color << endl;
        cout << "Power:........." << power << endl;
        cout << "Max Speed:....." << maxSpeed << endl;
        cout << "Current Speed: " << cSpeed << endl;
    }

    void changeVelocity(int nv) {
        if (nv > maxSpeed) {
            cSpeed = maxSpeed;
        }else{
            cSpeed = nv;
        }
    }
};

int main() {

    Car car_1;
    Car car_2;

    car_1.insertFeatures("HB20", "Red", 450, 350);
    car_2.insertFeatures("IX35", "Black", 300, 200);

    car_1.showInformations();
    cout << endl;
    car_2.showInformations();

    car_1.changeVelocity(320);
    car_2.changeVelocity(500);

    cout << "-----------------------" << endl;

    car_1.showInformations();
    cout << endl;
    car_2.showInformations();

    return 0;
}