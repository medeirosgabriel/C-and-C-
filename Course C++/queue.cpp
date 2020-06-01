#include <iostream>
#include <queue>

using namespace std;

int main () {
    queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);
    numbers.push(6);

    cout << "Size: " << numbers.size() << endl;

    while (!numbers.empty()){
        cout << "Number: " << numbers.front();
        numbers.pop();
        cout << " Size: " << numbers.size() << endl;
    }
}