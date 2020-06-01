#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> l, lt;
    int size;
    list<int>::iterator it;

    size = 10;
    for (int  i = 0; i < size; i++) {
        l.push_front(i);
    }

    size = l.size();
    cout << "Size: " << size << endl;

    it = l.begin();
    advance(it, 3);
    l.insert(it, 0);
    l.erase(--it);

    size = l.size();
    cout << "Size: " << size << endl;

    for (int i = 0; i < size; i++) {
        cout << l.front() << endl;
        l.pop_front();
    }

    l.clear();

    size = l.size();
    cout << "Size: " << size << endl;

    for (int  i = 15; i < 22; i++) {
        l.push_front(i);
    }

    for (int  i = 1; i < 7; i++) {
        lt.push_front(i);
    }

    l.merge(lt);

    size = l.size();

    for (int i = 0; i < size; i++) {
        cout << l.front() << endl;
        l.pop_front();
    }

}