#include <iostream>
#include <string.h>

using namespace std;
void counter(int n, int c = 0);
int factorial(int n);
int fibonacci(int n);

int main() {

    cout << factorial(6) << endl;

    for (int i = 0; i < 6; i++) {
        cout << fibonacci(i + 1) << " ";
    }

    cout << endl;

    counter(10);
    
    return 0;
}

void counter(int n, int c) {
    if (c < n) {
        cout << c << " ";
        counter(n, ++c);
    }
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }else {
        return fibonacci(n - 1) + fibonacci(n-2);
    }
}


int factorial(int n) {
    if (n != 0) {
        return n * factorial(n - 1);
    }else {
        return 1;
    }
}