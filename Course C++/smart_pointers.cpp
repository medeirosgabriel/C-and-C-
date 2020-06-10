#include <iostream>
#include <memory>

using namespace std;

class Car {
public:
    int speed = 0;
    int getSpeed() {
        return speed;
    }
    void setSpeed(int s) {
        this -> speed = s;
    }
};

// The smart pointers (unique_ptr,shared_ptr) are automatically deleted after use
int main() {

    int *pnum1, *pnum2 = new int();
    int num1 = 10;
    pnum1 = &num1;
    *pnum2 = 20;

    cout << *pnum1 << " - " << pnum1 << endl;
    cout << *pnum2 << " - " << pnum2 << endl;

    unique_ptr<int>pnum3(new int()); // Can't be shared
    *pnum3 = 30;
    cout << *pnum3 << " - " << &pnum3 << endl;

    shared_ptr<int>pnum4(new int()); // Can be shared
    shared_ptr<int>pnum5 = pnum4; // Can be shared
    *pnum4 =40;
    cout << *pnum4 << " - " << &pnum4 << endl;
    cout << *pnum5 << " - " << &pnum5 << endl;

    string* str1 = new string("Heyyy");
    cout << *str1 << " - Size: " << str1 -> size() << endl;

    unique_ptr<string> str2(new string("Hiii"));
    cout << *str2 << " - Size: " << str2 -> size() << endl;

    Car *c1 = new Car();
    cout << "Speed: c1" << c1 -> getSpeed() << endl;
    delete c1;

    shared_ptr<Car> c2(new Car);
    shared_ptr<Car> c3=c2;
    cout << "Speed c2: " << c2 -> getSpeed() << endl;
    cout << "Speed c3: " << c3 -> getSpeed() << endl;
    c2->setSpeed(5);
    cout << "Speed c2: " << c2 -> getSpeed() << endl;
    cout << "Speed c3: " << c3 -> getSpeed() << endl;

    return 0;
}