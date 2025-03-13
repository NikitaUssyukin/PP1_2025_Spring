#include <iostream>

using namespace std;

int main() {

    // Program that takes n
    // then takes a square n x n 2d array
    // zeroes elements on the main diagonal
    // and outputs the resulting array

    int n; // amount of both rows and columns
    cin >> n;

    int a[n][n]; // 2d array with n rows and m columns
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        a[i][i] = 0;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}