#ifndef BASES_H_INCLUDED
#define BASES_H_INCLUDED
#include <iostream>

using namespace std;

class Base1{
public:
    void showBase1();
};

void Base1::showBase1() {
    cout << "Base 1" << endl;
    cout << "------------------------" << endl;
}

class Base2{
public:
    void showBase2();
};

void Base2::showBase2() {
    cout << "Base 2" << endl;
    cout << "------------------------" << endl;
}

class CFB : public Base1, public Base2{

};

#endif // BASES_H_INCLUDED