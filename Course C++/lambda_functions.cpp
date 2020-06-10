#include <iostream>
#include <vector>

using namespace std;

int main() {
    auto bigger1 = [](int n1, int n2) -> int{
        return (n1 > n2)? n1:n2;
    };

    cout << bigger1(8,6) << endl;

    auto bigger2 = [](vector<int> n) -> int{
        int m = 0;
        for (int x:n){
            m = (m > x) ? m:x;
        }
        return m;
    };

    cout << bigger2({8,6,10,11,8,5,3}) << endl;

    int x1 = 10, x2 = 5, x3 = 2, x4 = 12;

    auto sum1 = [x1,x2,x3,x4]() -> int{
        return x1 + x2 + x3 + x4;
    };

    cout << sum1() << endl;

    auto sum2 = [=]() -> int{ // [=] -> All scope variables
        return x1 + x2 + x3 + x4;
    };

    cout << sum2() << endl;

    return 0;
}