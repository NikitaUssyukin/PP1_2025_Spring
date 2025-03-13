#include <iostream>
#include <cmath> // used for abs()

using namespace std;



int find_max_in_2D(int a[][1000], int n, int m) {
    int mx = a[0][0];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] > mx) mx = a[i][j];
        }
    }

    return mx;
}

int main() {

    int n, m;
    cin >> n >> m;

    int a[n][1000];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    cout << find_max_in_2D(a, n, m) << endl;

    return 0;
}