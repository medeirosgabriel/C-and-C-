#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);
    numbers.push(6);

    cout << "Size: " << numbers.size() << endl;

    cout << "Top Number: " << numbers.top() << endl;

    numbers.pop();
    numbers.pop();

    cout << "New Top Number: " << numbers.top() << endl;

    if (numbers.empty()) {
        cout << "The stack is empty" << endl;
    }else{
        cout << "The stack is not empty" << endl;
    }

    while (!numbers.empty()) {
        numbers.pop();
    }

    if (numbers.empty()) {
        cout << "The stack is empty" << endl;
    }else{
        cout << "The stack is not empty" << endl;
    }
}