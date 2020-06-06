#include <iostream>
#include <vector>

using namespace std;

int sum(int n1, int n2) {
    return n1 + n2;
}

int add() {
    static auto i = 0; // Static variable. Just one position for variable i;
    cout << i << " ";
    i++;
}

int main() {

    vector<int> v {10,20,30,40,50,60,70};

    for (vector<int>::iterator it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }

    cout << endl;
    
    auto num = 10; // Automatic type definition

    auto res = sum(10, 5);

    cout << res << endl;
    
    // Register the variable in a register - Fast access

    for (register auto cont = 0; cont <= 10; cont++) {
        cout << cont << " ";
    }

    cout << endl;

    add();add();add();add();

    return 0;
}