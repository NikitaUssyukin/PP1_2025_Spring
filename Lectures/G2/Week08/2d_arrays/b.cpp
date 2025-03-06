#include <iostream>

using namespace std;

int main() {

    int a[3][3];
    
    for(int j = 0; j < 3; ++j) {
        a[0][j] = j + 1;
    }

    for(int j = 0; j < 3; ++j) {
        a[1][j] = j + 4;
    }

    for(int j = 0; j < 3; ++j) {
        a[2][j] = j + 7;
    }

    for(int j = 0; j < 3; ++j) {
        cout << a[0][j] << ' ';
    }
    cout << endl;

    for(int j = 0; j < 3; ++j) {
        cout << a[1][j] << ' ';
    }
    cout << endl;

    for(int j = 0; j < 3; ++j) {
        cout << a[2][j] << ' ';
    }
    cout << endl;

    return 0;
}