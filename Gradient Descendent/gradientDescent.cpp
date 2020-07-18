#include <stdlib.h> 
#include <ctime>
#include <iostream>

using namespace std;

double function(double x){
    return (x * x * x * x) - x * x * x - 20 * x;
}

double gradient(double x) {
    return (4 * x * x * x) - 3 * x * x - 20;
}

double calculateMinimum(double x, double learningRate);

int main () {

    srand(time(NULL));

    double x = rand() % 100;
    double learningRate = 0.00001;

    cout << "X = " << x << "   " << "Learning Rate = " << learningRate << endl;

    double min = calculateMinimum(x, learningRate);

    printf("The first minimum of the function is %.2f.\n", min);

    return 0;
}


double calculateMinimum(double x, double lRate) {

    double current = x;
    double last = x;
    double learningRate = lRate;

    while (function(current) <= function(last)) {
        last = current;
        current -= (learningRate * gradient(current));
    }

    return last;
}

