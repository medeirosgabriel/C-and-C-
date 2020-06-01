#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v1;
    vector<int> v2;
    int size1, size2, i;

    v1.push_back(10);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(8);

    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);

    v1.swap(v2); // Change the values

    v1.insert(v1.begin() + 1, 888);
    v1.insert(v1.end() - 1, 832);
    v1.erase(v1.end() - 1);

    size1 = v1.size();
    size2 = v2.size();

    cout << "Vector 1 size: " << size1 << endl;

    for (i = 0; i < size1; i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

    cout << "First Value of v1: " << v1.front() << endl;
    cout << "Last value of v1: " << v1.back() << endl;
    cout << "Middle value of v1: " << v1.at(size1/2) << endl;

    cout << "Vector 2 size: " << size2 << endl;

    for (i = 0; i < size2; i++) {
        cout << v2[i] << " ";
    }

    cout << endl;

    while (!v1.empty()) {
        v1.pop_back();
    }

    cout << "Vector 1 size: " << v1.size() << endl;

    return 0;
}