#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> prod;

    prod[0] = "Mouse";
    prod[1] = "Keyboard";
    prod[2] = "Monitor";
    prod[3] = "Sound box";

    for (auto it = prod.begin(); it != prod.end(); it++) {
        cout << it -> first << " - " << it -> second << endl;
    }

    for (auto it:prod) {
        cout << it.first << " - " << it.second << endl;
    }

    map<int, string> prod2;
    prod2.insert(pair<int,string>(10,"Mouse"));
    prod2.insert(pair<int,string>(20,"Keyboard"));
    prod2.insert(pair<int,string>(30,"Monitor"));
    prod2.insert(pair<int,string>(40,"Sound box"));

    for (auto it:prod2) {
        cout << it.first << " - " << it.second << endl;
    }

    prod2.erase(10); // 10 == key

    for (auto it:prod2) {
        cout << it.first << " - " << it.second << endl;
    }

    prod2.clear();

    for (auto it:prod2) {
        cout << it.first << " - " << it.second << endl;
    }

    map<int, string>::iterator itmap;

    itmap = prod.find(1);
    if (itmap == prod.end()) {
        cout << "Product not found" << endl;
    }else{
        cout << "Product in stock" << endl;
        cout << "Code: " << itmap->first << " Value: " << itmap->second << endl;
    }

    prod.erase(prod.begin(), prod.find(2));

    for (auto it:prod) {
        cout << it.first << " - " << it.second << endl;
    }




}