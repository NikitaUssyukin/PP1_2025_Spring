#include <iostream>
#include <cmath> // used for abs()

using namespace std;

int main() {

    int arr_size = 8;

    char a[arr_size][arr_size];

    // working with indexes

    // Program that takes
    // x and y 
    // puts . horizontally, vertically and diagonally to x, y
    // puts * at x, y
    // and all the rest will be 0s

    int x, y;
    cin >> x >> y;

    for(int i = 0; i < arr_size; ++i) {
        for(int j = 0; j < arr_size; ++j) {
            if(i == x || j == y || abs(x - i) == abs(y - j)) a[i][j] = '.'; 
            else a[i][j] = '0';
        }
    }

    a[x][y] = '*';

    for(int i = 0; i < arr_size; ++i) {
        for(int j = 0; j < arr_size; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}