#include <iostream>
#include <algorithm>
#include<vector>
#include<list>
#include<map>
#include<string>

using namespace std;

int main() {
    
    int array[] = {5,3,1,4,7,2,6};
    int *p;
    size_t size = sizeof(array)/sizeof(int);
    p = find(array, array + size, 16);
    if (p != array + size) {
        cout << "Element found: " << *p << endl;
    }else{
        cout << "Element not found!" << endl;
    }

    vector<int> vector1 = {5,3,1,4,7,2,6};
    auto it1 = find(vector1.begin(), vector1.end(), 16);
    if (it1 != vector1.end()) {
        cout << "Element found: " << *it1 << endl;
    }else{
        cout << "Element not found!" << endl;
    }

    list<int> list = {5,3,1,4,7,2,6};
    auto it2 = find(list.begin(), list.end(), 16);
    if (it2 != list.end()) {
        cout << "Element found: " << *it2 << endl;
    }else{
        cout << "Element not found!" << endl;
    }

    vector<int> vector2;
    vector<int>::iterator it3;
    int num, size2 = 10;

    while (size2 > 0) {
        cout << "Type a number: ";
        cin >> num;
        it3 = find(vector2.begin(), vector2.end(), num);
        if (it3!=vector2.end()) {
            cout << "Number already exists!" << endl;
        }else{
            vector2.push_back(num);
            size2--;
        }
    }

    map<char, int> map;
    map['a'] = 10;map['b'] = 20;map['c'] = 30;
    map['d'] = 40;map['e'] = 50;

    auto it = map.find('f');

    if (it != map.end()) {
        cout << "Key found " << it -> second << endl;
    }else{
        cout << "Key not found " << endl;
    }

    string text = "Gabriel Paiva Medeiros";
    size_t found = text.find("Paiva");

    if (found != string::npos) { // npos => Max Value of size_t
        cout << "Substring found: " << found << endl;
    }else{
        cout << "Substring not found " << endl;
    }
}