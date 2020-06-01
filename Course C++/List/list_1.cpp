#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> l;
    int size;
    list<int>::iterator it;

    size = 10;
    for (int  i = 0; i < size; i++) {
        l.push_front(i);
    }
    cout << "Size: " << size << endl;

    it = l.begin(); // it is a pointer to first element of the list;
    advance(it, 5); // Advance the pointer 5 positions;
    l.insert(it, 4); // Insert 4 in position 5;

    size = l.size();
    cout << "Size: " << l.size() << endl;

    for (int i = 0; i < size; i++) {
        cout << l.front() << endl;
        l.pop_front();
    }
    size = l.size();
    cout << "Size: " << l.size() << endl;

    for (int  i = 10; i >= 0; i--) {
        l.push_front(i);
    }

    l.sort();
    //l.reverse();

    size = l.size();
    for (int i = 0; i < size; i++) {
        cout << l.front() << endl;
        l.pop_front();
    }
}