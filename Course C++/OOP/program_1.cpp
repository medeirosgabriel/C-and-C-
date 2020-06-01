#include <iostream>

using namespace std;

class Airplane {

public:
    int speed = 0;
    int maxSpeed;
    string type;
    void ini(int tp);

private:

};

void Airplane::ini(int tp) {
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

int main() {

    Airplane *a1 = new Airplane();
    Airplane *a2 = new Airplane();
    
    a1 -> ini(1);
    a2 -> ini(2);

    cout << a1 -> maxSpeed << endl;
    cout << a2 -> maxSpeed << endl;

    return 0;
}