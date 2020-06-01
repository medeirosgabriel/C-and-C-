#include <iostream>

using namespace std;

struct Car {
    string name;
    string color;
    int power;
    int maxSpeed;
};

void informations(Car c);

int main() {

    Car car_1;
    Car car_2;

    car_1.name = "HB20";
    car_1.color = "Red";
    car_1.power = 450;
    car_1.maxSpeed = 350;

    car_2.name = "IX35";
    car_2.color = "Black";
    car_2.power = 300;
    car_2.maxSpeed = 200;

    informations(car_1);
    cout << endl;
    informations(car_2);

    return 0;
}

void informations(Car c) {
    cout << "Name:......." << c.name << endl;
    cout << "Color:......" << c.color << endl;
    cout << "Power:......" << c.power << endl;
    cout << "Max Speed:.." << c.maxSpeed << endl;
}