#include <iostream>

using namespace std;

int main() {

    int n; // amount of rows
    int m; // amount of columns
    cin >> n >> m;

    // demonstration of indexes of a 2D n by m array
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << '[' << i << ';' << j << "] ";
        }
        cout << endl;
    }

    return 0;
}