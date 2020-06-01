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

    Car *cars = new Car[5];
    Car car_1, car_2, car_3, car_4, car_5;

    cars[0] = car_1; cars[1] = car_2; cars[2] = car_3; cars[3] = car_4; cars[4] = car_5;

    cars[0].insertFeatures("Lamborghini", "Red", 450, 400);
    cars[1].insertFeatures("Ferrari", "Red", 500, 420);
    cars[2].insertFeatures("Urus", "Black", 300, 370);
    cars[3].insertFeatures("Jetta", "Yellow", 120, 125);
    cars[4].insertFeatures("Golf", "Red", 250, 290);
    
    for (int i = 0; i < 5; i++) {
        cars[i].showInformations();
        cout << endl;
    }

    return 0;
}