#ifndef AIRPLANE_H_INCLUDED
#define AIRPLANE_H_INCLUDED
#include <iostream>

class Airplane {

public:
    int speed = 0;
    int maxSpeed;
    std::string type;
    Airplane(int tp);
    void show();

private:

};

Airplane::Airplane(int tp) {
    if (tp == 1) {
        this -> maxSpeed = 800;
        this -> type = "Jet";
    }else if (tp == 2){
        this -> maxSpeed = 350;
        this -> type = "Single-engine";
    }else if (tp == 3){
        this -> maxSpeed = 180;
        this -> type = "Glider";
    }
}

void Airplane::show() {
    std::cout << "Type: " << this -> type << std::endl;
    std::cout << "Max Speed: " << this -> maxSpeed << std::endl;
    std::cout << "Current Speed: " << this -> speed << std::endl;
    std::cout << "--------------------------------" << std::endl;
}

#endif // AIRPLANE_H_INCLUDE