#include <iostream>
#include <cmath>

using namespace std;

const int ARR_SIZE = 8;

int main() {

    char a[ARR_SIZE][ARR_SIZE];

    int x, y;
    cin >> x >> y; // indexes of the queen

    for(int i = 0; i < ARR_SIZE; ++i) {
        for(int j = 0; j < ARR_SIZE; ++j) {
            if(x == i || y == j || abs(x - i) == abs(y - j)) {
                a[i][j] = '.';
            }
            else a[i][j] = '0';
        }
        cout << endl;
    }
    a[x][y] = '*';

    for(int i = 0; i < ARR_SIZE; ++i) {
        for(int j = 0; j < ARR_SIZE; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}