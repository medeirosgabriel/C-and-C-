#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {

    cout << argv[1] << endl;
    cout << argc << endl;

    if (argc > 1) {
        if (!strcmp(argv[1], "sun")) {// if str1 == str2, the function return 0;
            cout << "I will go to the club" << endl;
        }else if (!strcmp(argv[1], "cloudy")) {
            cout << "I will go to the cinema" << endl;
        }else{
            cout << "I will stay at home" << endl;
        }
    }

    system("pause");

    return 0;
}