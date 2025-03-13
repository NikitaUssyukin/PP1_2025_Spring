#include <iostream>

using namespace std;

const int ARR_SIZE = 10;

int main() {

    char a[ARR_SIZE][ARR_SIZE];

    for(int i = 0; i < ARR_SIZE; ++i) {
        for(int j = 0; j < ARR_SIZE; ++j) {
            a[i][j] = '0';
        }
    }

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    a[x1][y1] = '*';
    a[x2][y2] = '*';

    for(int i = 0; i < ARR_SIZE; ++i) {
        for(int j = 0; j < ARR_SIZE; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}