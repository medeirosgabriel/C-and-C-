#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include <iostream>

class Vehicle {

public:
    int speed;
    int blind;
    int wheels;
    void setType(int tp);
    void setMaxSpeed(int ms);
    void setGun(bool gun);
    void show();
private:
    int type;
    int maxSpeed;
    bool gun;
};

void Vehicle::show() {
    std::cout << "Type: " << this -> type << std::endl;
    std::cout << "Max Speed: " << this -> maxSpeed << std::endl;
    std::cout << "Wheels: " << this -> wheels << std::endl;
    std::cout << "Blind: " << this -> blind << std::endl;
    std::cout << "--------------------------------" << std::endl;

}

void Vehicle::setType(int tp){
    this -> type = tp;
}

void Vehicle::setMaxSpeed(int ms) {
    this -> maxSpeed = ms;
}

void Vehicle::setGun(bool gun) {
    this -> gun = gun;
}

class Motorcycle : public Vehicle {
public:
    Motorcycle();

};

Motorcycle::Motorcycle() {
    this -> speed = 0;
    this -> blind = 0;
    this -> wheels = 2;
    this -> setType(1);
    this -> setMaxSpeed(120);
    this -> setGun(false);
}

class Car : public Vehicle {
public:
    Car();
};

Car::Car() {
    this -> speed = 0;
    this -> blind = 0;
    this -> wheels = 4;
    this -> setType(2);
    this -> setMaxSpeed(180);
    this -> setGun(false);
}


class Tank: public Vehicle {
public:
    Tank();
};

Tank::Tank() {
    this -> speed = 0;
    this -> blind = 1;
    this -> wheels = 8;
    this -> setType(4);
    this -> setMaxSpeed(200);
    this -> setGun(true);
}

#endif // VEHICLE_H_INCLUDED