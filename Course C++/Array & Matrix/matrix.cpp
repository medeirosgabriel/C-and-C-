#include <iostream>

using namespace std;

int main() {

    int matrix[3][4];

    /*matrix[0][0] = 0; matrix[0][1] = 0; matrix[0][2] = 0; matrix[0][3] = 0;
    matrix[1][0] = 1; matrix[1][1] = 1; matrix[1][2] = 1; matrix[1][3] = 1;
    matrix[2][0] = 2; matrix[2][1] = 2; matrix[2][2] = 2; matrix[2][3] = 2;*/

    int nl = sizeof(matrix)/sizeof(matrix[0]);
    int nc = sizeof(matrix[0])/sizeof(int);

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            matrix[i][j] = i;
        }
    }


    for (int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++) {
        for (int j = 0; j < sizeof(matrix[i])/sizeof(int); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}