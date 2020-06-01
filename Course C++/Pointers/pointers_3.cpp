#include <iostream>

using namespace std;

void sum_1(float var, float value);
void sum_2 (float *var, float value);
void iniVector(float *v);

int main() {
    
    float num = 0;

    sum_1(num, 5);

    cout << num << endl;

    sum_2(&num, 5);

    cout << num << endl;

    float vector[5];

    iniVector(vector);

    for (int i = 0; i < sizeof(vector)/sizeof(float); i++) {
        cout << vector[i] << " ";
    }

    return 0;

}

void sum_1 (float var, float value) {
    var += value;
}

void sum_2 (float *var, float value) {
    *var += value;
}

void iniVector(float *v) {
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
}