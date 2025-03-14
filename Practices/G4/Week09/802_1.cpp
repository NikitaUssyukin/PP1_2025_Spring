#include <iostream>

using namespace std;

int main() {

    int n; // amount of both rows and columns
    cin >> n;

    int a[n][n]; // 2d array with n rows and m columns
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int mx = a[0][0];
    int mx_i = 0;
    int mx_j = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(mx < a[i][j]) {
                mx = a[i][j];
                mx_i = i;
                mx_j = j;
            }
        }
    }

    cout << mx_i + 1 << ' ' << mx_j + 1 << endl;

    return 0;
}