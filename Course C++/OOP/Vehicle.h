#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include <iostream>

class Vehicle {

public:
    int speed;
    int type;
    Vehicle(int tp);
    int getMaxSpeed();
    void setMaxSpeed(int speed);
    bool getOn();
    void setOn(int o);
private:
    std::string name;
    int maxSpeed;
    bool on;
};

void Vehicle::setOn(int o) {
    this -> on = !!o;
}

bool Vehicle::getOn() {
    return this -> on;
}

int Vehicle::getMaxSpeed() {
    return maxSpeed;
}

void Vehicle::setMaxSpeed(int speed) {
    this -> maxSpeed = speed;
}

Vehicle::Vehicle(int tp) {
    type = tp;
    if (type == 1) {
        name = "Car";
        setMaxSpeed(200);
    }else if (type == 2) {
        name = "Airplane";
        setMaxSpeed(800);
    }else if (type == 3){
        name = "Ship";
        setMaxSpeed(120);
    }
    this -> setOn(0);
}

#endif // VEHICLE_H_INCLUDED