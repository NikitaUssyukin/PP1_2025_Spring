#include <iostream>

using namespace std;

int main() {

    int n; // amount of rows
    int m; // amount of columns
    cin >> n >> m;

    int a[n][m]; // 2d array with n rows and m columns
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}