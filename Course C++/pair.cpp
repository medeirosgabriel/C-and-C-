#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {

    pair<int, string> p1(10, "Gabriel");
    cout << p1.first << " - " << p1.second << endl;
    p1.first = 1;
    p1.second = "Tadeu";
    cout << p1.first << " - " << p1.second << endl;

    const int size = 3;
    pair<int, string> a[size];

    a[0] = make_pair(10, "Bruno");
    a[1].first = 200;a[1].second = "Gabriel";
    a[2].first = 300;a[2].second = "Ana";

    for (int i = 0; i < size; i++) {
        cout << a[i].first << " - " << a[i].second << endl;
    }

     pair<int, pair<string, double>> a2[size];

    a2[0] = make_pair(10, make_pair("mouse", 10.55));
    a2[1] = make_pair(20, make_pair("table", 200.10));
    a2[2] = make_pair(10, make_pair("monitor", 399.98));

    for (int i = 0; i < size; i++) {
        cout << a2[i].first << " - " << a2[i].second.first
        << " - " << a2[i].second.second << endl;
    }

    vector<pair<int, string>> names;

    names.push_back(make_pair(10, "Bruno"));
    names.push_back(make_pair(11, "Gabriel"));
    names.push_back(make_pair(12, "Paulo"));

    for (auto e:names) {
        cout << e.first << " - " << e.second << endl;
    }

    return 0;
}