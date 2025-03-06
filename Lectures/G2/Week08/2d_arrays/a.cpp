#include <iostream>

using namespace std;

int main() {

    int a[3][3];
    
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    cout << a[0][0] << ' ';
    cout << a[0][1] << ' ';
    cout << a[0][2] << ' ';
    cout << endl;

    cout << a[1][0] << ' ';
    cout << a[1][1] << ' ';
    cout << a[1][2] << ' ';
    cout << endl;

    cout << a[2][0] << ' ';
    cout << a[2][1] << ' ';
    cout << a[2][2] << ' ';
    cout << endl;

    return 0;
}